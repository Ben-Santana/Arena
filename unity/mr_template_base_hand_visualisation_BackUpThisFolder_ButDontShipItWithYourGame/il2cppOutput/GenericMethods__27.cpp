#include "pch-cpp.hpp"





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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass5_0_1_tAD7A4172BC09F03DF05ED2C61089D638464CF300;
struct U3CU3Ec__DisplayClass5_0_1_tD5EC5D3FA81B9D32D8BB7E5E2431AA97767C6EE8;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t66B514BE877E216616DEDD40416127189FE16FA3;
struct Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88;
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
struct CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98;
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07;
struct EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0;
struct EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E;
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7;
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
struct Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B;
struct Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IDictionary_2_t5A1EAD594949BC3A3DE709832FD3F0C9DE7174E2;
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
struct IEnumerable_1_tA70CEDE5B026B417CF78C3146B22E44FB6755120;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
struct IList_1_t8237764F017214FEC3BDC5BA9D72BD235EAC1402;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct IReadOnlyDictionary_2_t38BAE2A79A8C85F8795E24CF5DB231156D5A3B66;
struct IReadOnlyDictionary_2_t68EE7C2460464AFCB54752AF98D9047DE91B8005;
struct IReadOnlyDictionary_2_tAAE73DD0F1693587789EB2283CCA3AEA0DFB6839;
struct KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4;
struct LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72;
struct List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35;
struct List_1_t592DF2E59D6E244DA0041698383484A07C7E0480;
struct List_1_t3D72E539CB95E6031583970D3E5187DDB5EC674C;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
struct List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6;
struct ObjectPool_1_tC06B45D8A0C7CBBDAE418090727D1DF1F2FCB9F6;
struct PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F;
struct ReadOnlyCollectionBuilder_1_tC538D3AB8CEC6EA16BA4F10B4C2EC9F8570994B3;
struct ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B;
struct ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470;
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
struct ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505;
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8;
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
struct RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC;
struct TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D;
struct TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1;
struct TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03;
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6;
struct ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914;
struct EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92;
struct List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206;
struct List_1U5BU5D_tE510DA387DA867AC92F8274325B178A7DE9A209E;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B;
struct ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct NativeTextElementInfoU5BU5D_t4990577B63060372F4854E7FB6EFC6BD17169D41;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ButtonClickStatusU5BU5D_t9327A993382F70450196067EE5DED53834E9DB7B;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705;
struct BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86;
struct BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B;
struct BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF;
struct CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F;
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4;
struct ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31;
struct ConditionalExpression_t4A487FB09E6FEA815F25AADA33335CD658B6A913;
struct CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A;
struct DefaultExpression_t68E278AD7534F283D174570B240C596979B26533;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct EventCallbackList_tC6B518C9C5192317B413145F9B9A3678EEE5BF1E;
struct EventCallbackListPool_t258FFD0B864AC29862A6ACF4F56A0340621783B2;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct Exception_t;
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct InvocationExpression_tF4C0B5632B50926D11160CAFFD8703065C1F2B27;
struct LabelExpression_tEFEEB76D1A905275CA45F611E0ECAB5D1B2E6BFD;
struct LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5;
struct MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemberInfo_t;
struct MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB;
struct MethodInfo_t;
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
struct PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55;
struct PropertyInfo_t;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct String_t;
struct StringBuilder_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96;
struct UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XrCompositionLayerProjectionView_t1C36F183684433DC8CE8D44081F5B482942ABD96;
struct CommandBuilder_tA2E5D7A513FE45173EA395D67B25DB94E42CCA84;
struct ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470;
struct Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84;
struct Data_t43E3238277579E631EA4E8016E61966D79F5B62E;
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollectionExtensions_tD9117E96D192D9FC13B6302FE7CB978756199B1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_t2637736704939772A86A2904BCFD1B314097DD1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_t4941B5AE834AA028696C83756491CE8884F30DDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_t7D3D212E8AD9C53105AAC51DBD4FA5F700586F68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_tB8AF17419B0E6B39E32F8925FCA535F5CF5C79D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyCollectionBuilder_1_tC538D3AB8CEC6EA16BA4F10B4C2EC9F8570994B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral093872F2B91CF97AF817E102A9B984C29552DADB;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral3E612D5C4A642D3635F6EB9985DD8EF20BEEFC73;
IL2CPP_EXTERN_C String_t* _stringLiteral42960449A18FA75AF2D9A7F9CDCC744B0EF455E6;
IL2CPP_EXTERN_C String_t* _stringLiteral5311420545596C9B1638507268F520A401FE62C8;
IL2CPP_EXTERN_C String_t* _stringLiteral565E9D17735F6EA5DB96ADEA2703F52CE74FCC0D;
IL2CPP_EXTERN_C String_t* _stringLiteral5AEC4F0CCAC6A14C3FA879080C5907BEF6980462;
IL2CPP_EXTERN_C String_t* _stringLiteral64CED9ACA5100594B5AE03E19D83AAE6826BDAC0;
IL2CPP_EXTERN_C String_t* _stringLiteral67C4031EAE3C5DCD4BEFE0E373EB416000EDAAAD;
IL2CPP_EXTERN_C String_t* _stringLiteral7A0A3608A3C4012D35E5DE3B2BA646379CCF198F;
IL2CPP_EXTERN_C String_t* _stringLiteral9AEB6C175037170017B161A77CCF8F6B0E629351;
IL2CPP_EXTERN_C String_t* _stringLiteral9E8B6F20D65FFFC0BC56A6D76C920145A8DCD2F3;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDDFD5BA0EE5BD56B383E144892054DCB0A59D3ED;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralE8EC81F1AF0ADE59FE6D0E2DB97C8326CA4172F7;
IL2CPP_EXTERN_C String_t* _stringLiteralECC4BC659FB1526108BFFD6AD5E7F03E47806740;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtensions_AddFirst_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m15AF9739CD6782E3D5E7A0104026D106B7E5A974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisUnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833_m26DF826A20F7C37269D72198549354AC5E8A3C6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_1_TypeId_m08396DED606ACD1093BEEA8D939E5DA37B797C12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_1_TypeId_m1A2720F11AB0D624809678ADE4E6D8C250E43741_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_1_TypeId_m3FC722D85FBD1538CE6B96AD3364192799BF1CA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_1_TypeId_mA90FE9E21D00125CFC53652D23DB65FD2574D60D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollectionBuilder_1_Add_m7BCB17F9583DA42087CE73F337A746C839BC82C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollectionBuilder_1__ctor_mCF63024DE6DEEFCB21F2ED015E7FF1638883D913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF_0_0_0_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__DisplayClass5_0_1_tAD7A4172BC09F03DF05ED2C61089D638464CF300  : public RuntimeObject
{
	Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* ___serializeElement;
};
struct U3CU3Ec__DisplayClass5_0_1_tD5EC5D3FA81B9D32D8BB7E5E2431AA97767C6EE8  : public RuntimeObject
{
	Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* ___serializeElement;
};
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4* ____keys;
	ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914* ____values;
	RuntimeObject* ____syncRoot;
};
struct EmptyReadOnlyCollection_1_t89A294F273BB8EE92CD342ECABFE95F63B51B817  : public RuntimeObject
{
};
struct EmptyReadOnlyCollection_1_tFB5F7F75DF0B657273AC841B9124A1557D63C67A  : public RuntimeObject
{
};
struct LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72  : public RuntimeObject
{
	ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505* ___Parameters;
	LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* ___ReturnLabel;
};
struct List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6  : public RuntimeObject
{
	ButtonClickStatusU5BU5D_t9327A993382F70450196067EE5DED53834E9DB7B* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollectionBuilder_1_tC538D3AB8CEC6EA16BA4F10B4C2EC9F8570994B3  : public RuntimeObject
{
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____rules;
	RuntimeObject* ____cacheLock;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct Buffer_tF5DDA52AA39735125D710A126AC80BADEB900CD4  : public RuntimeObject
{
};
struct BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8  : public RuntimeObject
{
};
struct BurstRuntime_tA87CEB6EE77F6DA708C87C3DAEC7862E3A1B0EA1  : public RuntimeObject
{
};
struct BurstRuntime_t934D9A0D258BC96E94A4B78AD085FA38BFEFFF82  : public RuntimeObject
{
};
struct CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF  : public RuntimeObject
{
	CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* ____binder;
	bool ____match;
};
struct CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F  : public RuntimeObject
{
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___Cache;
};
struct CallSiteOps_t2976FAE7453C19AB2FE0648065538AC6B12EC04B  : public RuntimeObject
{
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31  : public RuntimeObject
{
	List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6* ___m_ClickStatus;
};
struct CollectionExtensions_t182A00BC503C9791010A3F71F412C76ABDD4D10D  : public RuntimeObject
{
};
struct CollectionExtensions_t12AA86DB09D1442F1691A1B1F4F35ADE1604514D  : public RuntimeObject
{
};
struct CollectionExtensions_t9F552E0DA1B3C5AA3C6EF09DA633314D7A535D90  : public RuntimeObject
{
};
struct CollectionExtensions_tD9117E96D192D9FC13B6302FE7CB978756199B1C  : public RuntimeObject
{
};
struct CollectionHelper_tFFE15A31BD8AE2BE545F4A412EC3C11352298482  : public RuntimeObject
{
};
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};
struct LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5  : public RuntimeObject
{
	String_t* ___U3CNameU3Ek__BackingField;
	Type_t* ___U3CTypeU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
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
struct CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98  : public CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF
{
	RuntimeObject* ___Target;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Rules;
};
struct HashCode32_1_tD2DD63035F543FDD8643588FA88CD9475D8107B9 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode32_1_t28012FF1305411D37F1FD03DE7D6E29673C84EB4__padding[1];
	};
};
struct HashCode64_1_tBE03AFEF199A91EC38E3678A953160AFBAEA044F 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t772DFCA20062D55EF275D420692E6231EFE8C99A 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tDBBA29E0FF58D0BD292B04DADFEFA25FAF30082F 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tEFE47363FE9BD2DA23EF9C44B91C8401015063BE 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t0AE3CC08D24A1BE759562DBCEEA6B459AC8507E3 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t4200429421A827A0B5F3036C1DB9D66CCB8B0445 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t19BA4FD53EFCDB3494D3E641F479A304B0A42D21 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tB6E735C2CEB2283242D5171F9F071C4076FEB378 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t088700758E948CB3167EC6E10FD03B1B11125586 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t45C902BA4A85819B6C31A686FF699BD734C810A3 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_tE592078EFC6F2A37620503BFAB99FEF70B71584A 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t843A0CF337E84638F3DEB38ADAFB4FC2204CA22F 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t0F7F318DD075E9C223756ACB1EDBF7D958229B29 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t0ACA98F4491C7F60FE0D181818A742841460CD8D 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t4E5438AF3FCF64994CE36C0242CC6580083C6276 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t6609EC1C8FD637D0704C9D40931A83EE7EBCA23D 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_tD3243DF9FA8B7B703E45F521152F4E500EAA808E 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t6494BEDFB3823C50BCCE1457CC83EBABF9FC3718 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t1E9825203BCACDE03EA9806FA3B6D9667833FDB7 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t7F36E26E9C60DAE7E6BF03E72A6B9BEB0E70508E 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t728259C125E4C28AE80A80B41491CF221EF1B9B7 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_tDA241AE7DD0993FBFA911AC316BB51A154854AC7 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t09ABD1A71EC5CE3684E6F1DA80681B54DB1691B5 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_tA3E7348CF613CEAF3CEA3485D9D30F9A483610A1 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tE107908E33390D300CA7EA607BC5492367C0E04A 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t5CFE0BB846695197039F80F1EBB2F6FDA67A3B17 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tEE921473855F84F06431FF1885DE5AA655ACA5E2 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tBC76642E2A87985829E2A60A02BB3064D76FBD76 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t6A39614B794541C46762557A44A11A8092D077BA 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tAACED5C219BCE704BB23DEE5411688A66F4FA312 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t6486E3C865F1211D498A95362EA771CDFE256DED 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t33425DAD62BA77C00555B8218BCC45319A29B991 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t9A899B4771FBF788C65EC3AAED858797329647AA 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t6D9D3CEC802B9E24CA6ABA6FA982B615B2DC8196 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t5AB59BEFEDF62F7AA82DF462D661D14F572822AB 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t51A883EA9A52EBE95F05710B50C0A662C53D201D 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t73EDE881A4A610E09E76E2E3589D30974001309C 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tB033103B595D25458BCF189B1B8FEEDC765C6DD9 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t4EEE3EED6A1F40DD523EC9B520CEDF73603F903F 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t540AB6784E401BA021A24A6FDE63F1CB91615951 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tBB94DF557F1073A1974A322A1A44C7126DA37529 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t940007CBF08B5ABD14D7423675D4910FE0B9755B 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t3A727467BDFEAFF7A4CB568E28A00E4D6B4EC69B 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tF27C6D205FED69279D60297E9A62238FADF949C1 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tD186BF1D3333DE229C5889A460A72BE2157D86ED 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tFFAEB5550C895D9E253E19192C06C5E88CB6410A 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tAC13F0ACD4FE21581D24A405FB04DC6CE62107F2 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t1E6FA524337B539C19D5D02E0DB5A26462E0B389 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t2F229ECC88B28D532EE6550312AB5B1B2294B745 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t2B83362CA7E70B86BD1A86B8D27E4F1672407417 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t30B8776A1E8404F1E19F165E08E9312037B19FCB 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tCA0BC36BEF1B0537653D2C164EBFB71E2E7FE57F 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tC86B716B0629811F38CCA2922A9A6E9128F7B487 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tEEB1F167CB1FF50533D39ECB4E2F4DB8F48095BB 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t0E540E776B4BA9631D2B21027E3D44679BBFDE7E 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t9F79C5D3EEDC24E31844F18936B7A7152BDF014E 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t6D41DDF544ECC8EE81B2FB170732F8772126D088 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t4649F2A499D1914EAA249B234F1CB3520A35611B 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t5790CE2F2438D15349F095BE3E9037ABECD3B630 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t7CFB081FDD903CC5A200D3CD6E79CA92462EC9A5 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t27DC634456476CF1B4E26CE9E1613932D5D5E1F2 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tE4E9A886FAEA128F91F4BB47288E327F2FB2A590 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t4F950A3008EC05FB0D982995E52C8556C2715A4C 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t669DED3659FCA6EC161B7722CD2AFFBD8D48353E 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tC585CEA3A7F1AB7F02BFD57720D6DEBBA4E4006E 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t38B65A784388197E4D694073DDD68712A68ECFBC 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t2DA0C9954C5BD7571AFA7E5AD4667FBB415C1C55 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t210398908075A83F779422036BFAB63FFE5F85F6 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t162E0FE2417CF2171436BC6E9A0524E8CD7A331D 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t61B99859778637445427E508875C833C26007C3F 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t12646CDC1DEFCCFAE4EC21C2691E3AD07CC3243D 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t7397C98D3A61DF788247816CFDDCFAB68F11FF31 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tF4465274EC7B7ABA123154CB3244A352EDE2086F 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tABB39B622E5219D2DA172EACDEC8B74052BB164A 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tF6AB644D2ABBE925B3A3543F20FD5FB992312461 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tA894B4C4BE3681992148A70D1492F8EEA6825E4E 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t258221577FA59C0B1D9B188C325409BB62050DAB 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tC28C1D947A4D0E70163666E4692F1B1CDCEC09A9 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t844B153ACA1ED334277B6FB6C7454250AF529FB4 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tE62B31A9B7BD017DBE50F2BC947FCDED9605A714 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t1C4700728BA9E409FB64757DAADF1A0CC5A44DE7 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tA49B79C998BF9022A0836C168EC2089C5ABCBE43 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t25B99E9F7F998CC07CCA13124E03920779BFF803 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 
{
	UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___m_ListData;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref;
};
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref;
};
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref;
};
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref;
};
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref;
};
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref;
};
struct TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D  : public ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92
{
};
struct TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1  : public ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505
{
};
struct TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03  : public ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8
{
};
struct ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA 
{
	uint8_t ___Item1;
	uint8_t ___Item2;
	uint8_t ___Item3;
	uint8_t ___Item4;
};
struct ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E 
{
	NativeTextElementInfoU5BU5D_t4990577B63060372F4854E7FB6EFC6BD17169D41* ___textElementInfos;
	int32_t ___fontAssetId;
	int32_t ___textElementCount;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* ___textElementInfoIndicesByAtlas;
	bool ___hasMultipleColors;
};
struct ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_marshaled_pinvoke
{
	NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* ___textElementInfos;
	int32_t ___fontAssetId;
	int32_t ___textElementCount;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* ___textElementInfoIndicesByAtlas;
	int32_t ___hasMultipleColors;
};
struct ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_marshaled_com
{
	NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* ___textElementInfos;
	int32_t ___fontAssetId;
	int32_t ___textElementCount;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* ___textElementInfoIndicesByAtlas;
	int32_t ___hasMultipleColors;
};
struct AttachmentIndexArray_tDC550BA2CD14AFB3B5545B02331C26903ADA90B5 
{
	int32_t ___a0;
	int32_t ___a1;
	int32_t ___a2;
	int32_t ___a3;
	int32_t ___a4;
	int32_t ___a5;
	int32_t ___a6;
	int32_t ___a7;
	int32_t ___activeAttachments;
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705* ___indirectDrawCommands;
	BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86* ___proceduralDrawCommands;
	BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50* ___proceduralIndirectDrawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	int32_t* ___drawCommandPickingInstanceIDs;
	int32_t ___drawCommandCount;
	int32_t ___indirectDrawCommandCount;
	int32_t ___proceduralDrawCommandCount;
	int32_t ___proceduralIndirectDrawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 
{
	uint32_t ___value;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C 
{
	uint32_t ___value;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 
{
	uint32_t ___value;
};
struct BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct ConditionalExpression_t4A487FB09E6FEA815F25AADA33335CD658B6A913  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CTestU3Ek__BackingField;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CIfTrueU3Ek__BackingField;
};
struct DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD 
{
	int32_t ___index;
	int32_t ___version;
};
struct DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49 
{
	int32_t ___start;
	int32_t ___end;
};
struct DefaultExpression_t68E278AD7534F283D174570B240C596979B26533  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	Type_t* ___U3CTypeU3Ek__BackingField;
};
struct DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 
{
	uint8_t ___m_WriteEnabled;
	int8_t ___m_CompareFunction;
};
struct DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 
{
	int32_t ___firstIndex;
	int32_t ___indexCount;
	int32_t ___minIndexVal;
	int32_t ___vertsReferenced;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			int32_t ___m_Data;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[4];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
#pragma pack(push, tp, 1)
struct FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint64_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint64_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint64_t ___byte0008_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4__padding[16];
	};
};
#pragma pack(pop, tp)
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	bool ___m_Focusable;
	int32_t ___m_TabIndex;
	bool ___m_DelegatesFocus;
	bool ___m_ExcludeFromFocusRing;
	bool ___U3CisEligibleToReceiveFocusFromDisabledChildU3Ek__BackingField;
};
struct FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD 
{
	double ___cpuFrameTime;
	double ___cpuMainThreadFrameTime;
	double ___cpuMainThreadPresentWaitTime;
	double ___cpuRenderThreadFrameTime;
	double ___gpuFrameTime;
	uint64_t ___frameStartTimestamp;
	uint64_t ___firstSubmitTimestamp;
	uint64_t ___cpuTimePresentCalled;
	uint64_t ___cpuTimeFrameComplete;
	float ___heightScale;
	float ___widthScale;
	uint32_t ___syncInterval;
};
struct GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 
{
	int32_t ___levelCount;
	float ___lodSlope;
	float ___lodBias;
};
struct GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38 
{
	uint32_t ___data;
};
struct GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868 
{
	uint32_t ___data;
};
struct GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB 
{
	uint64_t ___sceneCullingMask;
};
struct GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F 
{
	int32_t ___forceLod;
	float ___lodSelectionBias;
};
struct GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 
{
	float ___m_XCoordinate;
	float ___m_YCoordinate;
};
struct GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A 
{
	float ___m_Width;
	float ___m_Height;
	float ___m_HorizontalBearingX;
	float ___m_HorizontalBearingY;
	float ___m_HorizontalAdvance;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement;
	float ___m_YPlacement;
	float ___m_XAdvance;
	float ___m_YAdvance;
};
struct GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 
{
	float ___alpha;
	float ___time;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 
{
	int32_t ___m_Id;
	int32_t ___m_Version;
};
struct InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D 
{
	int16_t ___start;
	int16_t ___end;
};
struct IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02 
{
	int32_t ___drawAllocIndex;
	int32_t ___drawCount;
	int32_t ___instanceAllocIndex;
	int32_t ___instanceCount;
};
struct IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB 
{
	uint32_t ___indexCount;
	uint32_t ___firstIndex;
	uint32_t ___baseVertex;
	uint32_t ___firstInstanceGlobalIndex;
	uint32_t ___maxInstanceCountAndTopology;
};
struct IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB 
{
	int32_t ___drawOffsetAndSplitMask;
	int32_t ___instanceIndexAndCrossFade;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	uint64_t ___m_DeviceId;
	bool ___m_Initialized;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId;
	int32_t ___m_Initialized;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId;
	int32_t ___m_Initialized;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431 
{
	uint32_t ____DrawInfoAllocIndex;
	uint32_t ____DrawInfoCount;
	uint32_t ____InstanceInfoAllocIndex;
	uint32_t ____InstanceInfoCount;
	int32_t ____BoundingSphereInstanceDataAddress;
	int32_t ____DebugCounterIndex;
	int32_t ____InstanceMultiplierShift;
	int32_t ____InstanceOcclusionCullerPad0;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InvocationExpression_tF4C0B5632B50926D11160CAFFD8703065C1F2B27  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	Type_t* ___U3CTypeU3Ek__BackingField;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CExpressionU3Ek__BackingField;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time;
	float ___m_Value;
	float ___m_InTangent;
	float ___m_OutTangent;
	int32_t ___m_WeightedMode;
	float ___m_InWeight;
	float ___m_OutWeight;
};
struct LabelExpression_tEFEEB76D1A905275CA45F611E0ECAB5D1B2E6BFD  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* ___U3CTargetU3Ek__BackingField;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CDefaultValueU3Ek__BackingField;
};
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body;
};
struct LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CExpressionU3Ek__BackingField;
};
struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC 
{
	uint64_t ___m_SubId1;
	uint64_t ___m_SubId2;
};
struct MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937 
{
	int32_t ___NameID;
	uint32_t ___Value;
};
struct MethodBase_t  : public MemberInfo_t
{
};
struct MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	MethodInfo_t* ___U3CMethodU3Ek__BackingField;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354 
{
	String_t* ___name;
	int32_t ___utf8ByteCount;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354_marshaled_pinvoke
{
	char* ___name;
	int32_t ___utf8ByteCount;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___utf8ByteCount;
};
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct PropertyInfo_t  : public MemberInfo_t
{
};
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	int32_t ___id;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 
{
	int32_t ___start;
	int32_t ___length;
};
struct ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F 
{
	void* ___Buffer;
	int64_t ___Offset;
	int64_t ___Size;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 
{
	int32_t ___m_LowerBound;
	int32_t ___m_UpperBound;
};
struct RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 
{
	uint8_t ___m_WriteMask;
	uint8_t ___m_SourceColorBlendMode;
	uint8_t ___m_DestinationColorBlendMode;
	uint8_t ___m_SourceAlphaBlendMode;
	uint8_t ___m_DestinationAlphaBlendMode;
	uint8_t ___m_ColorBlendOperation;
	uint8_t ___m_AlphaBlendOperation;
	uint8_t ___m_Padding;
};
struct ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC 
{
	int32_t ___passId;
	int32_t ___inputSlot;
};
struct ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC 
{
	bool ___written;
	int32_t ___writePassId;
	int32_t ___numReaders;
};
struct ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_marshaled_pinvoke
{
	int32_t ___written;
	int32_t ___writePassId;
	int32_t ___numReaders;
};
struct ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_marshaled_com
{
	int32_t ___written;
	int32_t ___writePassId;
	int32_t ___numReaders;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage;
};
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 
{
	uint64_t ___m_GuidLow;
	uint64_t ___m_GuidHigh;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	int32_t ___m_Id;
};
struct SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 
{
	int16_t ___m_LowerBound;
	int16_t ___m_UpperBound;
};
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	float ___shr0;
	float ___shr1;
	float ___shr2;
	float ___shr3;
	float ___shr4;
	float ___shr5;
	float ___shr6;
	float ___shr7;
	float ___shr8;
	float ___shg0;
	float ___shg1;
	float ___shg2;
	float ___shg3;
	float ___shg4;
	float ___shg5;
	float ___shg6;
	float ___shg7;
	float ___shg8;
	float ___shb0;
	float ___shb1;
	float ___shb2;
	float ___shb3;
	float ___shb4;
	float ___shb5;
	float ___shb6;
	float ___shb7;
	float ___shb8;
};
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	uint8_t ___m_Enabled;
	uint8_t ___m_ReadMask;
	uint8_t ___m_WriteMask;
	uint8_t ___m_Padding;
	uint8_t ___m_CompareFunctionFront;
	uint8_t ___m_PassOperationFront;
	uint8_t ___m_FailOperationFront;
	uint8_t ___m_ZFailOperationFront;
	uint8_t ___m_CompareFunctionBack;
	uint8_t ___m_PassOperationBack;
	uint8_t ___m_FailOperationBack;
	uint8_t ___m_ZFailOperationBack;
};
struct SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026 
{
	int32_t ___cullingSplitIndex;
	int32_t ___occluderSubviewIndex;
};
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	uint64_t ___m_SubId1;
	uint64_t ___m_SubId2;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct XRFov_t51E4BB7B76304E61CF064687586D096CE585817A 
{
	float ___m_AngleLeft;
	float ___m_AngleRight;
	float ___m_AngleUp;
	float ___m_AngleDown;
};
struct XrExtent2Df_t4302AF6D9C771DE91C603A415095BC851189CE1C 
{
	float ___Width;
	float ___Height;
};
struct XrExtent2Di_tF35AA2F8F61B9DE993DAA28F351C3F0700842997 
{
	int32_t ___Width;
	int32_t ___Height;
};
struct XrFovf_t9FE0DB2A9FCFCB1036D3552BBD12BF6B3AFFF55A 
{
	float ___AngleLeft;
	float ___AngleRight;
	float ___AngleUp;
	float ___AngleDown;
};
struct XrOffset2Di_tC02BFDC1509C2D62B782705282446256FA61F359 
{
	int32_t ___X;
	int32_t ___Y;
};
struct XrQuaternionf_t1B123C02977BA0A0FF57BF0434F92C16BAC4CFD6 
{
	float ___X;
	float ___Y;
	float ___Z;
	float ___W;
};
struct XrVector2f_t347E48BCFE5F37AFA86233510BC67C246F868188 
{
	float ___X;
	float ___Y;
};
struct XrVector3f_t63DECBA2AFC7771B19C164A533925A5E20386F2A 
{
	float ___X;
	float ___Y;
	float ___Z;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA 
{
	float ___x;
	float ___y;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 
{
	float ___distance;
	float ___cosineAngleWithRay;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct StatKey_tFBC0C9E97F42144729CBEBFDEC477C9BAFC45925 
{
	uint8_t* ___m_Bytes;
};
struct U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D__padding[64];
	};
};
struct SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A 
{
	int32_t ___packetCount;
};
struct U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA 
{
	union
	{
		struct
		{
			bool ___FixedElementField;
		};
		uint8_t U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA__padding[8];
	};
};
struct U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_pinvoke
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA__padding[8];
	};
};
struct U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_com
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA__padding[8];
	};
};
struct U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415__padding[32];
	};
};
struct U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C__padding[32];
	};
};
struct U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE__padding[32];
	};
};
struct U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86__padding[32];
	};
};
struct U3C_InvViewProjMatrixU3Ee__FixedBuffer_t84BA561C0A390D42FB00B35F6BE1C962C6F74476 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_InvViewProjMatrixU3Ee__FixedBuffer_t84BA561C0A390D42FB00B35F6BE1C962C6F74476__padding[384];
	};
};
struct U3C_MipOffsetAndSizeU3Ee__FixedBuffer_t19F7DC806EA002CD5FAB22FF5C56BA6996373997 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_MipOffsetAndSizeU3Ee__FixedBuffer_t19F7DC806EA002CD5FAB22FF5C56BA6996373997__padding[80];
	};
};
struct U3C_SilhouettePlanesU3Ee__FixedBuffer_t138533E2CBC2A8352DC298BD5645D4B1DC7B0553 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_SilhouettePlanesU3Ee__FixedBuffer_t138533E2CBC2A8352DC298BD5645D4B1DC7B0553__padding[96];
	};
};
struct U3C_SrcOffsetU3Ee__FixedBuffer_tB1B1C9C345AE115D9BA814505D76E71BC515BB1E 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_SrcOffsetU3Ee__FixedBuffer_tB1B1C9C345AE115D9BA814505D76E71BC515BB1E__padding[96];
	};
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D 
{
	bool ___valid;
	int32_t ___lastUsedFrameIndex;
	int32_t ___viewInstanceID;
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_marshaled_pinvoke
{
	int32_t ___valid;
	int32_t ___lastUsedFrameIndex;
	int32_t ___viewInstanceID;
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_marshaled_com
{
	int32_t ___valid;
	int32_t ___lastUsedFrameIndex;
	int32_t ___viewInstanceID;
};
struct U3C_FacingDirWorldSpaceU3Ee__FixedBuffer_t2195F26FDAB952B9A94C6FC1F36CD4A370DE00F6 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_FacingDirWorldSpaceU3Ee__FixedBuffer_t2195F26FDAB952B9A94C6FC1F36CD4A370DE00F6__padding[96];
	};
};
struct U3C_OccluderMipBoundsU3Ee__FixedBuffer_t369A0CC0F2EADA636FAF26E88452A11643E481EF 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_OccluderMipBoundsU3Ee__FixedBuffer_t369A0CC0F2EADA636FAF26E88452A11643E481EF__padding[128];
	};
};
struct U3C_RadialDirWorldSpaceU3Ee__FixedBuffer_t4F19C8EE6486E94F0A21112400CC138E955DCFF9 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_RadialDirWorldSpaceU3Ee__FixedBuffer_t4F19C8EE6486E94F0A21112400CC138E955DCFF9__padding[96];
	};
};
struct U3C_ViewOriginWorldSpaceU3Ee__FixedBuffer_tAA15F0CD1A812C5CB25868532F7F022903331B69 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_ViewOriginWorldSpaceU3Ee__FixedBuffer_tAA15F0CD1A812C5CB25868532F7F022903331B69__padding[96];
	};
};
struct U3C_ViewProjMatrixU3Ee__FixedBuffer_t0AA43098E17D71DCD19AFE4EA8D150954292017F 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_ViewProjMatrixU3Ee__FixedBuffer_t0AA43098E17D71DCD19AFE4EA8D150954292017F__padding[384];
	};
};
struct U3C_OccluderMipBoundsU3Ee__FixedBuffer_tF1478CF3899AC0E5325B5284FBE53B0FF2454A55 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_OccluderMipBoundsU3Ee__FixedBuffer_tF1478CF3899AC0E5325B5284FBE53B0FF2454A55__padding[128];
	};
};
struct CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers;
	int32_t ___refCount;
	bool ___imported;
};
struct CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C_marshaled_pinvoke
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers;
	int32_t ___refCount;
	int32_t ___imported;
};
struct CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C_marshaled_com
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers;
	int32_t ___refCount;
	int32_t ___imported;
};
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62__padding[160];
	};
};
struct Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127 
{
	bool ___isActive;
	int32_t ___viewInstanceID;
	int32_t ___planeCount;
	int32_t ___lastUsedFrameIndex;
};
struct Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_marshaled_pinvoke
{
	int32_t ___isActive;
	int32_t ___viewInstanceID;
	int32_t ___planeCount;
	int32_t ___lastUsedFrameIndex;
};
struct Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_marshaled_com
{
	int32_t ___isActive;
	int32_t ___viewInstanceID;
	int32_t ___planeCount;
	int32_t ___lastUsedFrameIndex;
};
struct Rune_tE8DB196113D1DBF48E710C120CC50D2AD7D5915E 
{
	int32_t ___value;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};
struct FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 
{
	intptr_t ____ptr;
};
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D 
{
	uint8_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	int32_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tBB6961066733E78B8C22E5C4D4D5FF9A581981D1 
{
	Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___center;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___extents;
};
struct AccessFlags_tB7D400C853C05A1DB9C6B56DF14E43721F0B1739 
{
	int32_t ___value__;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Version;
};
struct AvailableTrackingData_t223756B90093C1B8974F04856043E3983BA37402 
{
	int32_t ___value__;
};
struct BatchCullingProjectionType_tAD14BC373E72D5F74188E0899F8670FAB51FD481 
{
	int32_t ___value__;
};
struct BatchCullingViewType_tAC2682BF9A489DF44A8960693303B47248C252CF 
{
	int32_t ___value__;
};
struct BatchDrawCommandFlags_tC502FA322382A3181F0800B1EA5A5654027FE034 
{
	int32_t ___value__;
};
struct BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState0;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState1;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState2;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState3;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState4;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState5;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState6;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState7;
	uint8_t ___m_SeparateMRTBlendStates;
	uint8_t ___m_AlphaToMask;
	int16_t ___m_Padding;
};
struct BoundingBoxClassifications_tDD23584A55BCD82E9D0E95DEA796190BF9AFAA0E 
{
	uint32_t ___value__;
};
struct BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___radius;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E 
{
	int32_t ___value__;
};
struct CallingConvention_tCACC30B83FAF3EA430B143C8D8F9A9B7D41A05C6 
{
	int32_t ___value__;
};
struct CollisionPairHeaderFlags_tBA40F470BC1564B84C3093CEA5761804FA0650C3 
{
	uint16_t ___value__;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 
{
	bool ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions;
};
struct ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___addFlags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityPage;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___textCoreSettingsPage;
	int32_t ___usesTextCoreSettings;
	float ___textureId;
	int32_t ___gradientSettingsIndexOffset;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
	int32_t ___flipIndices;
	int32_t ___forceZ;
	float ___positionZ;
	int32_t ___remapUVs;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___atlasRect;
};
struct CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
};
struct CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B 
{
	int32_t ___value__;
};
struct CullMode_t049B71889E4E981866E205A3F71DC8B856306D50 
{
	int32_t ___value__;
};
struct CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 
{
	intptr_t ___ptr;
	CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A* ___m_AllocationInfo;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
};
struct DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93 
{
	int32_t ___viewInstanceID;
	int32_t ___subviewCount;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___occluderMipLayoutSize;
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
struct DistanceMetric_t071B9815BB961E33F7CA2C553CA725F61AE09EDE 
{
	int32_t ___value__;
};
struct DrawRendererFlags_t3AD0574208BFF93F323D5E1E92012F19EAE972CD 
{
	int32_t ___value__;
};
struct EventCategory_tCFC347F164A2525B4C39DA6A9B7A9B5A541E3FFA 
{
	int32_t ___value__;
};
struct EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC 
{
	int32_t ___value__;
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
struct ExpressionType_tAA03F259DBEAA7B62E085C620D7B879FAA696B25 
{
	int32_t ___value__;
};
struct FalloffType_tE9BECCB411DA63109760103AF7476F422A01376D 
{
	uint8_t ___value__;
};
struct Feature_t4F077DF9999D98A1C051A9A8983AB9A4F9D00F6A 
{
	uint64_t ___value__;
};
struct FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F 
{
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___m_RenderQueueRange;
	int32_t ___m_LayerMask;
	uint32_t ___m_RenderingLayerMask;
	uint32_t ___m_BatchLayerMask;
	int32_t ___m_ExcludeMotionVectorObjects;
	int32_t ___m_ForceAllMotionVectorObjects;
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___m_SortingLayerRange;
};
#pragma pack(push, tp, 1)
struct FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779__padding[32];
	};
};
#pragma pack(pop, tp)
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C 
{
	uint32_t ___offsetFromWriteStart;
	uint32_t ___size;
	uintptr_t ___source;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord;
};
struct GlyphClassDefinitionType_t9C21A3848A07B17C2690F285B5FA60A2E246FBA2 
{
	int32_t ___value__;
};
struct GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	float ___time;
};
struct GraphicsFenceType_t8C3F229DC2BE62FA78724BA3D35FFCB3A64F7E0A 
{
	int32_t ___value__;
};
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	int32_t ___value__;
};
struct InstanceComponentGroup_tD2604C50227A821E92592963B831E9D9449D3FA4 
{
	uint32_t ___value__;
};
struct InstanceFlags_t65B077096B951ED0CAAB4D73656C02827C24D324 
{
	uint8_t ___value__;
};
struct InstanceOcclusionEventType_tF66ED25A6A1D3943D326795EA91E803D666ECF79 
{
	int32_t ___value__;
};
struct InstanceType_t3EB15046939F17DF216B4C181F98D064A5F78F27 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct InvokePolicy_t35E3E36A3D113CBFFEB13243E17691CBBDF1ED9B 
{
	int32_t ___value__;
};
struct LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___worldSpaceReferencePoint;
	int32_t ___lodCount;
	U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 ___sqrDistances;
	U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C ___transitionDistances;
	float ___worldSpaceSize;
	U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA ___percentageFlags;
	uint8_t ___forceLODMask;
};
struct LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_marshaled_pinvoke
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___worldSpaceReferencePoint;
	int32_t ___lodCount;
	U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 ___sqrDistances;
	U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C ___transitionDistances;
	float ___worldSpaceSize;
	U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_pinvoke ___percentageFlags;
	uint8_t ___forceLODMask;
};
struct LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_marshaled_com
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___worldSpaceReferencePoint;
	int32_t ___lodCount;
	U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 ___sqrDistances;
	U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C ___transitionDistances;
	float ___worldSpaceSize;
	U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_com ___percentageFlags;
	uint8_t ___forceLODMask;
};
struct LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241 
{
	bool ___valid;
	int32_t ___lodCount;
	int32_t ___rendererCount;
	U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 ___screenRelativeTransitionHeights;
	U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE ___fadeTransitionWidth;
};
struct LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_marshaled_pinvoke
{
	int32_t ___valid;
	int32_t ___lodCount;
	int32_t ___rendererCount;
	U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 ___screenRelativeTransitionHeights;
	U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE ___fadeTransitionWidth;
};
struct LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_marshaled_com
{
	int32_t ___valid;
	int32_t ___lodCount;
	int32_t ___rendererCount;
	U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 ___screenRelativeTransitionHeights;
	U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE ___fadeTransitionWidth;
};
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
};
struct LightMode_t058E4E7AAE5689BCFF46BB8E0259D90D227E7FF9 
{
	uint8_t ___value__;
};
struct LightType_t2D4D43054E7473EECEB54493C0055AE074780234 
{
	int32_t ___value__;
};
struct LightType_t97C5050F2F742FBF050FEB8FC5131A9A8DB50D26 
{
	uint8_t ___value__;
};
struct LoadReason_t6890871E119ACAB707211201A00DE631CA266CF9 
{
	int32_t ___value__;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint;
	uint32_t ___m_MarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment;
};
struct MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C 
{
	uint32_t ___m_BaseMarkGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseMarkGlyphAnchorPoint;
	uint32_t ___m_CombiningMarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_CombiningMarkPositionAdjustment;
};
struct MeshChangeState_t4CCBA82867A78CD1241B037198571A5365D7910C 
{
	int32_t ___value__;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A 
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField;
	uint64_t ___U3CTimestampU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField;
};
struct MethodInfo_t  : public MethodBase_t
{
};
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	intptr_t ___actor;
	intptr_t ___otherActor;
	intptr_t ___shape;
	intptr_t ___otherShape;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition;
	int32_t ___numContacts;
	intptr_t ___contacts;
};
struct MotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 
{
	intptr_t ___headSrc;
	intptr_t ___headDst;
	int32_t ___headCount;
	intptr_t ___tailSrc;
	intptr_t ___tailDst;
	int32_t ___tailCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
};
struct OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627 
{
	U3C_InvViewProjMatrixU3Ee__FixedBuffer_t84BA561C0A390D42FB00B35F6BE1C962C6F74476 ____InvViewProjMatrix;
	U3C_SilhouettePlanesU3Ee__FixedBuffer_t138533E2CBC2A8352DC298BD5645D4B1DC7B0553 ____SilhouettePlanes;
	U3C_SrcOffsetU3Ee__FixedBuffer_tB1B1C9C345AE115D9BA814505D76E71BC515BB1E ____SrcOffset;
	U3C_MipOffsetAndSizeU3Ee__FixedBuffer_t19F7DC806EA002CD5FAB22FF5C56BA6996373997 ____MipOffsetAndSize;
	uint32_t ____OccluderMipLayoutSizeX;
	uint32_t ____OccluderMipLayoutSizeY;
	uint32_t ____OccluderDepthPyramidPad0;
	uint32_t ____OccluderDepthPyramidPad1;
	uint32_t ____SrcSliceIndices;
	uint32_t ____DstSubviewIndices;
	uint32_t ____MipCount;
	uint32_t ____SilhouettePlaneCount;
};
struct OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewProjMatrix;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___viewOriginWorldSpace;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___radialDirWorldSpace;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___facingDirWorldSpace;
};
struct OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___offset;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___size;
};
struct OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7 
{
	int32_t ___subviewIndex;
	int32_t ___depthSliceIndex;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___depthOffset;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___invViewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___gpuProjMatrix;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___viewOffsetWorldSpace;
};
struct OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74 
{
	U3C_OccluderMipBoundsU3Ee__FixedBuffer_t369A0CC0F2EADA636FAF26E88452A11643E481EF ____OccluderMipBounds;
	U3C_ViewProjMatrixU3Ee__FixedBuffer_t0AA43098E17D71DCD19AFE4EA8D150954292017F ____ViewProjMatrix;
	U3C_ViewOriginWorldSpaceU3Ee__FixedBuffer_tAA15F0CD1A812C5CB25868532F7F022903331B69 ____ViewOriginWorldSpace;
	U3C_FacingDirWorldSpaceU3Ee__FixedBuffer_t2195F26FDAB952B9A94C6FC1F36CD4A370DE00F6 ____FacingDirWorldSpace;
	U3C_RadialDirWorldSpaceU3Ee__FixedBuffer_t4F19C8EE6486E94F0A21112400CC138E955DCFF9 ____RadialDirWorldSpace;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DepthSizeInOccluderPixels;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____OccluderDepthPyramidSize;
	uint32_t ____OccluderMipLayoutSizeX;
	uint32_t ____OccluderMipLayoutSizeY;
	uint32_t ____OcclusionTestDebugFlags;
	uint32_t ____OcclusionCullingCommonPad0;
	int32_t ____OcclusionTestCount;
	int32_t ____OccluderSubviewIndices;
	int32_t ____CullingSplitIndices;
	int32_t ____CullingSplitMask;
};
struct OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DepthSizeInOccluderPixels;
	U3C_OccluderMipBoundsU3Ee__FixedBuffer_tF1478CF3899AC0E5325B5284FBE53B0FF2454A55 ____OccluderMipBounds;
	uint32_t ____OccluderMipLayoutSizeX;
	uint32_t ____OccluderMipLayoutSizeY;
	uint32_t ____OcclusionCullingDebugPad0;
	uint32_t ____OcclusionCullingDebugPad1;
};
struct OcclusionTest_tFF967683F812A2788B5C8A9A220B83B43060435E 
{
	int32_t ___value__;
};
struct PassBreakReason_t57DD36F9EC4ED3DA89A4740BE8C32987018CF808 
{
	int32_t ___value__;
};
struct PassMergeState_t7815130D2990D177421E7CB405CE173EC704A117 
{
	int32_t ___value__;
};
struct PenStatus_tCAD6543115EF443E17410B52D37EC67BCC88ABB8 
{
	int32_t ___value__;
};
struct PerObjectData_t04DDCBE9ABF1113E8F9BAFCF4A7F94DD841B9CC9 
{
	int32_t ___value__;
};
struct PickingMode_t5699BF9E5F2587E0D297984D5BF5B63B768E66AC 
{
	int32_t ___value__;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct PlaneAlignment_t531EADCD75A8A621FF67C4788965BF89F076CFBC 
{
	int32_t ___value__;
};
struct PlaneClassifications_t5DBCE4263A18266041ADF725865DC7247E750AC8 
{
	uint32_t ___value__;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropagationPhase_tF3BE8BF5ED45FC52A828B7B6F078B64F01FAE6D6 
{
	int32_t ___value__;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct PseudoStates_tF4AB056E8743741BCE464A0983A060A53AAB7E4D 
{
	int32_t ___value__;
};
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	uint32_t ___m_FaceID;
	float ___m_Distance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV;
	int32_t ___m_Collider;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Distance;
	float ___m_Fraction;
	int32_t ___m_Collider;
};
struct RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 
{
	int32_t ___m_RenderTextureInstanceID;
	intptr_t ___m_BufferPtr;
};
struct RenderBufferLoadAction_t3333B2CABABAC39DA0CDC25602E5E4FD93C2CB0E 
{
	int32_t ___value__;
};
struct RenderBufferStoreAction_t87683F22C09634E24A574F21F42037C953A2C8B7 
{
	int32_t ___value__;
};
struct RenderGraphPassType_tD00EC2DAA135C660EE7E71652291A4672104EA2D 
{
	int32_t ___value__;
};
struct RenderGraphResourceType_t5F552AF06E38DEC5775B77F13C8783A895FCD086 
{
	int32_t ___value__;
};
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RenderStateMask_tC9C95BF62EADEE4D622D4E16CDE1DF94E2A9EF57 
{
	int32_t ___value__;
};
struct RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 
{
	uintptr_t ___context;
	uint32_t ___index;
	uint32_t ___frame;
	uint32_t ___type;
	uint32_t ___contextID;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ScaleMode_t16AD656758EE54C56B3DA34FE4F2033C9C2EE13D 
{
	int32_t ___value__;
};
struct ShadingRateCombiner_tF7F5DDD676DF45F67B2A7BC7F14373F4DFAD2B1C 
{
	int32_t ___value__;
};
struct ShadingRateFragmentSize_tE61BBA9B957F4537F04519746FCABE0F5FA94C9F 
{
	int32_t ___value__;
};
struct ShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D 
{
	int32_t ___value__;
};
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF 
{
	int32_t ___m_CullingPlaneCount;
	U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 ___m_CullingPlanes;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_CullingSphere;
	float ___m_ShadowCascadeBlendCullingFactor;
	float ___m_CullingNearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CullingMatrix;
};
struct SortingCriteria_t4907D221CB6E6AA4A32C1ED7B5D17103FD3E7C39 
{
	int32_t ___value__;
};
struct StoreReason_tB71F110DFEED47ED8929B7874BE46BD4AFA9D5AC 
{
	int32_t ___value__;
};
struct SubPassFlags_tB4066DF82B36110B6163EB5C3A48F49FD4DD3AE5 
{
	int32_t ___value__;
};
struct Supported_t78D339E736374B7F1336F01A352E7DB556F89106 
{
	int32_t ___value__;
};
struct TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642 
{
	int32_t ___value__;
};
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	int32_t ___value__;
};
struct TrackableType_t8B4D3C5D68805ECC40B1C8CA6C7174184BB2C110 
{
	int32_t ___value__;
};
struct TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2 
{
	int32_t ___value__;
};
struct TransformUpdateFlags_tC8BD750B1A9A2F7EBEAC0528860B0A228C2CC5C3 
{
	uint8_t ___value__;
};
struct TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___localToWorld0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___localToWorld1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___localToWorld2;
};
struct TrickleDown_t862EABE449B6C94F79F2B1D713990C35ABADDF38 
{
	int32_t ___value__;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityColorPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___settingIndex;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle;
	float ___textureId;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
{
	int32_t ___value__;
};
struct VisibleLightFlags_t337DB92EFB0014AD6A250E1E45338B1194657CD8 
{
	int32_t ___value__;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
};
struct XRHandJointTrackingState_tFAA84D8000155CA6945B5402532B00365379D6DA 
{
	int32_t ___value__;
};
struct XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 
{
	int32_t ___m_Index;
	int32_t ___m_ParentIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position;
	int32_t ___m_Tracked;
};
struct XRNode_t41F4B2F0EDD99DB33C49EC731C8C7F9DF142B5FF 
{
	int32_t ___value__;
};
struct XRTextureType_t5591061F923F907341986D46F0322DE15DCB9955 
{
	int32_t ___value__;
};
struct XrCompositionLayerFlags_t7F8E6EEF7AB352271220F445EF590FFCA57428FF 
{
	uint64_t ___value__;
};
struct XrFbStructType_t402F9927EC8724574ABAA5D81329B7A193375000 
{
	uint32_t ___value__;
};
struct XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0 
{
	XrQuaternionf_t1B123C02977BA0A0FF57BF0434F92C16BAC4CFD6 ___Orientation;
	XrVector3f_t63DECBA2AFC7771B19C164A533925A5E20386F2A ___Position;
};
struct XrRect2Di_t966BCC25A0C114ECA35869C1663259DC82023430 
{
	XrOffset2Di_tC02BFDC1509C2D62B782705282446256FA61F359 ___Offset;
	XrExtent2Di_tF35AA2F8F61B9DE993DAA28F351C3F0700842997 ___Extent;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3;
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			bool ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppChar ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value;
};
struct ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470  : public RuntimeObject
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Target;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PointerDownPosition;
	int64_t ___m_LastPointerDownTime;
	int32_t ___m_ClickCount;
};
struct Unit_tAE6456027618FB5F9E5CCB6E5C209250AC5695CC 
{
	int32_t ___value__;
};
struct EventPropagation_t024AF56F7A787C03AA21B065B624553EF52E7B83 
{
	int32_t ___value__;
};
struct LifeCycleStatus_tEE500629F5431B574B8047EB70864747D348D38C 
{
	int32_t ___value__;
};
struct PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nx;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___ny;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nz;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___d;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nxAbs;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nyAbs;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nzAbs;
};
struct BufferState_t9A744F89825C691F1F63EF47368227970F7FFE17 
{
	int32_t ___value__;
};
struct AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 
{
	int32_t ___cameraID;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___jobHandle;
};
struct NativeColorPage_tD578D4E96ABBDBB0E6A608F6CE97A0362ABD7D4B 
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___backgroundRepeatRect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv;
};
struct Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnimatedVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AxisOfRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartSize;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_StartColor;
	uint32_t ___m_RandomSeed;
	uint32_t ___m_ParentRandomSeed;
	float ___m_Lifetime;
	float ___m_StartLifetime;
	int32_t ___m_MeshIndex;
	float ___m_EmitAccumulator0;
	float ___m_EmitAccumulator1;
	uint32_t ___m_Flags;
};
struct Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position;
	int32_t ___subdivisionLevel;
};
struct SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___receiverSphereLightSpace;
	float ___cascadeBlendCullingFactor;
};
struct LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___color;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___attenuation;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___spotDirection;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___occlusionProbeChannels;
	uint32_t ___layerMask;
};
struct StatusCode_tB2BCF980A5E9E723CE4E05146B7F9CC89EB5BF4B 
{
	int32_t ___value__;
};
struct SettingsOptions_t935A71692F21EE9D959FCAC00574AA018F8BA2CB 
{
	uint16_t ___value__;
};
struct XrBlendFactorFB_tD1276313A9136FD3AD3E77C9B714685022A1744F 
{
	int32_t ___value__;
};
struct XrCompositionLayerColorScaleBiasKHR_tB2B854CDD36142A63E1EF24A3486A7B13C36A392 
{
	uint32_t ___type;
	void* ___next;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___colorScale;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___colorBias;
};
struct FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 
{
	alignas(8) FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 ___data;
};
struct NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size;
	int32_t ___m_Alignment;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	uint32_t ___m_Classifications;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455 
{
	uint8_t ___transformUpdateFlags;
	uint8_t ___instanceFlags;
};
struct ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 
{
	intptr_t ___m_Identifier;
	uint64_t ___m_Capabilities;
	int32_t ___m_Rank;
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	int32_t ___m_BodyID;
	int32_t ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity;
};
struct Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 
{
	int32_t ___unit;
	float ___value;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C  : public RuntimeObject
{
	int32_t ___U3CeventCategoriesU3Ek__BackingField;
	int64_t ___U3CtimestampU3Ek__BackingField;
	uint64_t ___U3CeventIdU3Ek__BackingField;
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField;
	int32_t ___U3CpropagationU3Ek__BackingField;
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CelementTargetU3Ek__BackingField;
	int32_t ___U3CpropagationPhaseU3Ek__BackingField;
	RuntimeObject* ___m_CurrentTarget;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ImguiEvent;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CoriginalMousePositionU3Ek__BackingField;
};
struct GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74 
{
	int32_t ___propertyID;
	int32_t ___byteSize;
	bool ___isOverriden;
	bool ___isPerInstance;
	int32_t ___instanceType;
	uint32_t ___componentGroup;
};
struct GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_marshaled_pinvoke
{
	int32_t ___propertyID;
	int32_t ___byteSize;
	int32_t ___isOverriden;
	int32_t ___isPerInstance;
	int32_t ___instanceType;
	uint32_t ___componentGroup;
};
struct GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_marshaled_com
{
	int32_t ___propertyID;
	int32_t ___byteSize;
	int32_t ___isOverriden;
	int32_t ___isPerInstance;
	int32_t ___instanceType;
	uint32_t ___componentGroup;
};
struct GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C 
{
	uint32_t ___index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___glyphRect;
	float ___scale;
	int32_t ___atlasIndex;
	int32_t ___classDefinitionType;
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord;
	int32_t ___m_FeatureLookupFlags;
};
struct GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Version;
	int32_t ___m_FenceType;
};
struct IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805 
{
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___cullingJobHandle;
	int32_t ___bufferState;
	int32_t ___occluderVersion;
	int32_t ___subviewMask;
};
struct InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173 
{
	int32_t ___viewType;
	int32_t ___viewInstanceID;
	int32_t ___splitIndex;
	int32_t ___visibleInstancesOnCPU;
	int32_t ___visibleInstancesOnGPU;
	int32_t ___visiblePrimitivesOnCPU;
	int32_t ___visiblePrimitivesOnGPU;
	int32_t ___drawCommands;
};
struct InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD 
{
	int32_t ___viewInstanceID;
	int32_t ___eventType;
	int32_t ___occluderVersion;
	int32_t ___subviewMask;
	int32_t ___occlusionTest;
	int32_t ___visibleInstances;
	int32_t ___culledInstances;
	int32_t ___visiblePrimitives;
	int32_t ___culledPrimitives;
};
struct LayoutDataStore_tE59A593CD73517DDC7C117B293E7C2C6F17DC364 
{
	int32_t ___m_Allocator;
	Data_t43E3238277579E631EA4E8016E61966D79F5B62E* ___m_Data;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	int32_t ___instanceID;
	int32_t ___cookieID;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
};
struct LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E 
{
	RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___splitRange;
	int32_t ___projectionType;
	uint16_t ___splitExclusionMask;
};
struct LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C 
{
	int32_t ___reason;
	int32_t ___passId;
};
struct MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA 
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField;
	int32_t ___U3CChangeStateU3Ek__BackingField;
	int32_t ___U3CPriorityHintU3Ek__BackingField;
};
struct MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 
{
	int32_t ___topology;
	uint32_t ___baseVertex;
	uint32_t ___firstIndex;
	uint32_t ___indexCount;
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
struct PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 
{
	int32_t ___reason;
	int32_t ___breakPass;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD 
{
	int32_t ___passId;
	int32_t ___type;
	bool ___hasFoveatedRasterization;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	bool ___asyncCompute;
	bool ___hasSideEffects;
	bool ___culled;
	bool ___beginNativeSubpass;
	bool ___fragmentInfoValid;
	bool ___fragmentInfoHasDepth;
	bool ___insertGraphicsFence;
	bool ___hasShadingRateStates;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_marshaled_pinvoke
{
	int32_t ___passId;
	int32_t ___type;
	int32_t ___hasFoveatedRasterization;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___asyncCompute;
	int32_t ___hasSideEffects;
	int32_t ___culled;
	int32_t ___beginNativeSubpass;
	int32_t ___fragmentInfoValid;
	int32_t ___fragmentInfoHasDepth;
	int32_t ___insertGraphicsFence;
	int32_t ___hasShadingRateStates;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_marshaled_com
{
	int32_t ___passId;
	int32_t ___type;
	int32_t ___hasFoveatedRasterization;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___asyncCompute;
	int32_t ___hasSideEffects;
	int32_t ___culled;
	int32_t ___beginNativeSubpass;
	int32_t ___fragmentInfoValid;
	int32_t ___fragmentInfoHasDepth;
	int32_t ___insertGraphicsFence;
	int32_t ___hasShadingRateStates;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C 
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	bool ___staticShadowCaster;
	int32_t ___rendererPriority;
	bool ___supportsIndirect;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	int32_t ___staticShadowCaster;
	int32_t ___rendererPriority;
	int32_t ___supportsIndirect;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	int32_t ___staticShadowCaster;
	int32_t ___rendererPriority;
	int32_t ___supportsIndirect;
};
struct RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 
{
	int32_t ___m_CullingMode;
	int32_t ___m_OffsetUnits;
	float ___m_OffsetFactor;
	uint8_t ___m_DepthClip;
	uint8_t ___m_Conservative;
	uint8_t ___m_Padding1;
	uint8_t ___m_Padding2;
};
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	int32_t ___m_Type;
	int32_t ___m_NameID;
	int32_t ___m_InstanceID;
	intptr_t ___m_BufferPointer;
	int32_t ___m_MipLevel;
	int32_t ___m_CubeFace;
	int32_t ___m_DepthSlice;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68 
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	bool ___isActive;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_marshaled_pinvoke
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	int32_t ___isActive;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_marshaled_com
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	int32_t ___isActive;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C 
{
	uint32_t ___m_Value;
	int32_t ___m_Version;
	int32_t ___m_Type;
};
struct ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC 
{
	bool ___isImported;
	bool ___isShared;
	int32_t ___tag;
	int32_t ___lastUsePassID;
	int32_t ___lastWritePassID;
	int32_t ___firstUsePassID;
	bool ___memoryLess;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___msaaSamples;
	int32_t ___graphicsFormat;
	int32_t ___latestVersionNumber;
	bool ___clear;
	bool ___discard;
	bool ___bindMS;
};
struct ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_marshaled_pinvoke
{
	int32_t ___isImported;
	int32_t ___isShared;
	int32_t ___tag;
	int32_t ___lastUsePassID;
	int32_t ___lastWritePassID;
	int32_t ___firstUsePassID;
	int32_t ___memoryLess;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___msaaSamples;
	int32_t ___graphicsFormat;
	int32_t ___latestVersionNumber;
	int32_t ___clear;
	int32_t ___discard;
	int32_t ___bindMS;
};
struct ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_marshaled_com
{
	int32_t ___isImported;
	int32_t ___isShared;
	int32_t ___tag;
	int32_t ___lastUsePassID;
	int32_t ___lastWritePassID;
	int32_t ___firstUsePassID;
	int32_t ___memoryLess;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___msaaSamples;
	int32_t ___graphicsFormat;
	int32_t ___latestVersionNumber;
	int32_t ___clear;
	int32_t ___discard;
	int32_t ___bindMS;
};
struct ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projectionMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___shadowTransform;
	int32_t ___offsetX;
	int32_t ___offsetY;
	int32_t ___resolution;
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___splitData;
};
struct SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldToCameraMatrix;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CustomAxis;
	int32_t ___m_Criteria;
	int32_t ___m_DistanceMetric;
};
struct StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 
{
	int32_t ___reason;
	int32_t ___passId;
	int32_t ___msaaReason;
	int32_t ___msaaPassId;
};
struct SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___U3CboundsU3Ek__BackingField;
	int32_t ___U3CtopologyU3Ek__BackingField;
	int32_t ___U3CindexStartU3Ek__BackingField;
	int32_t ___U3CindexCountU3Ek__BackingField;
	int32_t ___U3CbaseVertexU3Ek__BackingField;
	int32_t ___U3CfirstVertexU3Ek__BackingField;
	int32_t ___U3CvertexCountU3Ek__BackingField;
};
struct SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9 
{
	AttachmentIndexArray_tDC550BA2CD14AFB3B5545B02331C26903ADA90B5 ___inputs;
	AttachmentIndexArray_tDC550BA2CD14AFB3B5545B02331C26903ADA90B5 ___colorOutputs;
	int32_t ___flags;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	Type_t* ___U3CTypeU3Ek__BackingField;
	int32_t ___U3CNodeTypeU3Ek__BackingField;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3COperandU3Ek__BackingField;
	MethodInfo_t* ___U3CMethodU3Ek__BackingField;
};
struct UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	int32_t ___m_callingConvention;
};
struct UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_Handle;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField;
	int32_t ___U3CformatU3Ek__BackingField;
	int32_t ___U3CdimensionU3Ek__BackingField;
	int32_t ___U3CstreamU3Ek__BackingField;
};
struct VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 
{
	int32_t ___m_LightType;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FinalColor;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ScreenRect;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	float ___m_Range;
	float ___m_SpotAngle;
	int32_t ___m_InstanceId;
	int32_t ___m_Flags;
};
struct VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_Bounds;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_HdrData;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	float ___m_BlendDistance;
	int32_t ___m_Importance;
	int32_t ___m_BoxProjection;
	int32_t ___m_InstanceId;
	int32_t ___m_TextureId;
};
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	Guid_t ___m_SessionId;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___U3CtrackableIdU3Ek__BackingField;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CposeU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CtrackingStateU3Ek__BackingField;
	intptr_t ___U3CnativePtrU3Ek__BackingField;
	uint32_t ___U3CclassificationsU3Ek__BackingField;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___U3CparentIdU3Ek__BackingField;
};
struct XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_Resolution;
	int32_t ___m_Framerate;
	intptr_t ___m_NativeConfigurationHandle;
	int32_t ___m_DepthSensorSupported;
};
struct XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LeftEyePose;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RightEyePose;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FixationPoint;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 
{
	int32_t ___m_IdAndHandedness;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	float ___m_Radius;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LinearVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity;
	int32_t ___m_TrackingState;
};
struct XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	float ___m_EstimatedHeightScaleFactor;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 
{
	int32_t ___m_Index;
	int32_t ___m_ParentIndex;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LocalScale;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LocalPose;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnchorScale;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AnchorPose;
	int32_t ___m_Tracked;
};
struct XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A 
{
	int32_t ___m_Type;
	int32_t ___m_AvailableFields;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Acceleration;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularAcceleration;
	int32_t ___m_Tracked;
	uint64_t ___m_UniqueID;
};
struct XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	Guid_t ___m_SessionId;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	float ___m_Distance;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_HitTrackableId;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	float ___m_Distance;
	int32_t ___m_HitType;
};
struct XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 
{
	int32_t ___m_StatusCode;
	int32_t ___m_NativeStatusCode;
};
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	intptr_t ___m_NativeTexture;
	int32_t ___m_Width;
	int32_t ___m_Height;
	int32_t ___m_MipmapCount;
	int32_t ___m_Format;
	int32_t ___m_PropertyNameId;
	int32_t ___m_Depth;
	int32_t ___m_Dimension;
	int32_t ___m_TextureType;
};
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id;
	Guid_t ___m_SourceImageId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	Guid_t ___m_ReferenceObjectGuid;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XrCompositionLayerCubeKHR_t5BAEC63B4BC90A18B45724CFD3076616FE04A9B9 
{
	uint32_t ___Type;
	void* ___Next;
	uint64_t ___LayerFlags;
	uint64_t ___Space;
	uint32_t ___EyeVisibility;
	uint64_t ___Swapchain;
	uint32_t ___ImageArrayIndex;
	XrQuaternionf_t1B123C02977BA0A0FF57BF0434F92C16BAC4CFD6 ___Orientation;
};
struct XrCompositionLayerPassthroughFB_tDC0674AB51E0A2B9BB6EAD2F2C63622B39093A67 
{
	uint32_t ___type;
	void* ___next;
	uint64_t ___flags;
	uint64_t ___space;
	uint64_t ___passthroughLayerHandle;
};
struct XrCompositionLayerProjection_tBE972A41CF04DCC231148ECCE8A64610086A4DB6 
{
	uint32_t ___Type;
	void* ___Next;
	uint64_t ___LayerFlags;
	uint64_t ___Space;
	uint32_t ___ViewCount;
	XrCompositionLayerProjectionView_t1C36F183684433DC8CE8D44081F5B482942ABD96* ___Views;
};
struct XrSwapchainSubImage_tC081E2C5D062FC3AE78E5F4156641B0BA213C19B 
{
	uint64_t ___Swapchain;
	XrRect2Di_t966BCC25A0C114ECA35869C1663259DC82023430 ___ImageRect;
	uint32_t ___ImageArrayIndex;
};
struct ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___perLightShadowSliceIndex;
	uint16_t ___requestedResolution;
	uint16_t ___offsetX;
	uint16_t ___offsetY;
	uint16_t ___allocatedResolution;
	uint16_t ___m_ShadowProperties;
};
struct PerCameraInstanceDataArrays_tA74F6F16B77B98DDC6E582A261525D7ECD12C07E 
{
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D ___meshLods;
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D ___crossFades;
};
struct DynamicCallbackList_t7289C27A86DE4BA470602692C06ADD3BEC72BB6C 
{
	int32_t ___m_UseTrickleDown;
	EventCallbackList_tC6B518C9C5192317B413145F9B9A3678EEE5BF1E* ___m_Callbacks;
	EventCallbackList_tC6B518C9C5192317B413145F9B9A3678EEE5BF1E* ___m_TemporaryCallbacks;
	List_1_t3D72E539CB95E6031583970D3E5187DDB5EC674C* ___m_UnregisteredCallbacksDuringInvoke;
	int32_t ___m_IsInvoking;
};
struct DynamicCallbackList_t7289C27A86DE4BA470602692C06ADD3BEC72BB6C_marshaled_pinvoke
{
	int32_t ___m_UseTrickleDown;
	EventCallbackList_tC6B518C9C5192317B413145F9B9A3678EEE5BF1E* ___m_Callbacks;
	EventCallbackList_tC6B518C9C5192317B413145F9B9A3678EEE5BF1E* ___m_TemporaryCallbacks;
	List_1_t3D72E539CB95E6031583970D3E5187DDB5EC674C* ___m_UnregisteredCallbacksDuringInvoke;
	int32_t ___m_IsInvoking;
};
struct DynamicCallbackList_t7289C27A86DE4BA470602692C06ADD3BEC72BB6C_marshaled_com
{
	int32_t ___m_UseTrickleDown;
	EventCallbackList_tC6B518C9C5192317B413145F9B9A3678EEE5BF1E* ___m_Callbacks;
	EventCallbackList_tC6B518C9C5192317B413145F9B9A3678EEE5BF1E* ___m_TemporaryCallbacks;
	List_1_t3D72E539CB95E6031583970D3E5187DDB5EC674C* ___m_UnregisteredCallbacksDuringInvoke;
	int32_t ___m_IsInvoking;
};
struct Info_tA3039772991DEEDBC29A00439A055C5166133A27 
{
	int32_t ___viewType;
	int32_t ___viewInstanceID;
	int32_t ___splitIndex;
};
struct Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84 
{
	int32_t ___viewInstanceID;
	int32_t ___eventType;
	int32_t ___occluderVersion;
	int32_t ___subviewMask;
	int32_t ___occlusionTest;
};
struct Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187 
{
	UnsafeList_1_tBB6961066733E78B8C22E5C4D4D5FF9A581981D1 ___info;
	AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 ___readback;
};
struct NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___subRect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	int32_t ___scaleMode;
	intptr_t ___backgroundRepeatInstanceList;
	int32_t ___backgroundRepeatInstanceListStartIndex;
	int32_t ___backgroundRepeatInstanceListEndIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___backgroundRepeatRect;
	intptr_t ___texture;
	intptr_t ___sprite;
	intptr_t ___vectorImage;
	intptr_t ___spriteTexture;
	intptr_t ___spriteVertices;
	intptr_t ___spriteUVs;
	intptr_t ___spriteTriangles;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___spriteGeomRect;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___contentSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureSize;
	float ___texturePixelsPerPoint;
	int32_t ___leftSlice;
	int32_t ___topSlice;
	int32_t ___rightSlice;
	int32_t ___bottomSlice;
	float ___sliceScale;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rectInset;
	NativeColorPage_tD578D4E96ABBDBB0E6A608F6CE97A0362ABD7D4B ___colorPage;
	int32_t ___meshFlags;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___bottomColorPage;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_pinvoke
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___bottomColorPage;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_com
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___bottomColorPage;
};
struct XrCompositionLayerAlphaBlendFB_tCE9F92B7566F1D7C57AEF4056E7143294181B7E9 
{
	uint32_t ___type;
	void* ___next;
	int32_t ___srcFactorColor;
	int32_t ___dstFactorColor;
	int32_t ___srcFactorAlpha;
	int32_t ___dstFactorAlpha;
};
struct EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07  : public MulticastDelegate_t
{
};
struct EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0  : public MulticastDelegate_t
{
};
struct EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E  : public MulticastDelegate_t
{
};
struct FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 
{
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a0;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a1;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a2;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a3;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a4;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a5;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a6;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a7;
	int32_t ___activeAttachments;
};
struct FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 
{
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a0;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a1;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a2;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a3;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a4;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a5;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a6;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a7;
	int32_t ___activeAttachments;
};
struct Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B  : public MulticastDelegate_t
{
};
struct Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C  : public MulticastDelegate_t
{
};
struct Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C 
{
	bool ___hasValue;
	NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB ___value;
};
struct Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B 
{
	bool ___hasValue;
	NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 ___value;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E 
{
	int32_t ___m_LoadAction;
	int32_t ___m_StoreAction;
	int32_t ___m_Format;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_LoadStoreTarget;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_ResolveTarget;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ClearColor;
	float ___m_ClearDepth;
	uint32_t ___m_ClearStencil;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	int32_t ___activeMeshLod;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	int32_t ___transparentInstanceId;
	uint32_t ___overridenComponents;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___range;
	int32_t ___lightmapIndex;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_pinvoke
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	int32_t ___activeMeshLod;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	int32_t ___transparentInstanceId;
	uint32_t ___overridenComponents;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke ___range;
	int32_t ___lightmapIndex;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_com
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	int32_t ___activeMeshLod;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	int32_t ___transparentInstanceId;
	uint32_t ___overridenComponents;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com ___range;
	int32_t ___lightmapIndex;
};
struct DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010 
{
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___key;
	int32_t ___drawCount;
	int32_t ___drawOffset;
};
struct DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_marshaled_pinvoke
{
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke ___key;
	int32_t ___drawCount;
	int32_t ___drawOffset;
};
struct DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_marshaled_com
{
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com ___key;
	int32_t ___drawCount;
	int32_t ___drawOffset;
};
struct DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 
{
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 ___m_SortingSettings;
	U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D ___shaderPassNames;
	int32_t ___m_PerObjectData;
	int32_t ___m_Flags;
	int32_t ___m_OverrideShaderID;
	int32_t ___m_OverrideShaderPassIndex;
	int32_t ___m_OverrideMaterialInstanceId;
	int32_t ___m_OverrideMaterialPassIndex;
	int32_t ___m_fallbackMaterialInstanceId;
	int32_t ___m_MainLightIndex;
	int32_t ___m_UseSrpBatcher;
	int32_t ___m_LodCrossFadeStencilMask;
};
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85  : public RuntimeObject
{
	DynamicCallbackList_t7289C27A86DE4BA470602692C06ADD3BEC72BB6C ___m_TrickleDownCallbacks;
	DynamicCallbackList_t7289C27A86DE4BA470602692C06ADD3BEC72BB6C ___m_BubbleUpCallbacks;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA 
{
	int32_t ___m_Manager;
	LayoutDataStore_tE59A593CD73517DDC7C117B293E7C2C6F17DC364 ___m_Nodes;
	LayoutDataStore_tE59A593CD73517DDC7C117B293E7C2C6F17DC364 ___m_Configs;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	bool ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	int32_t ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	int32_t ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___accessFlags;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
};
struct PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	bool ___preserveCounterValue;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	int32_t ___preserveCounterValue;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	int32_t ___preserveCounterValue;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 
{
	BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___m_BlendState;
	RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___m_RasterState;
	DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___m_DepthState;
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___m_StencilState;
	int32_t ___m_StencilReference;
	int32_t ___m_Mask;
};
struct SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106 
{
	FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 ___m_FixedArray;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_List;
	bool ___m_IsEmbedded;
	bool ___U3CValidU3Ek__BackingField;
	int32_t ___Length;
};
struct SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106_marshaled_pinvoke
{
	FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 ___m_FixedArray;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_List;
	int32_t ___m_IsEmbedded;
	int32_t ___U3CValidU3Ek__BackingField;
	int32_t ___Length;
};
struct SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106_marshaled_com
{
	FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 ___m_FixedArray;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_List;
	int32_t ___m_IsEmbedded;
	int32_t ___U3CValidU3Ek__BackingField;
	int32_t ___Length;
};
struct URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9 
{
	NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 ___slices;
	uint32_t ___slicesValidMask;
};
struct XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Size;
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_TextureDescriptor;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E 
{
	XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 ___resultStatus;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___savedAnchorGuid;
};
struct XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 
{
	XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 ___resultStatus;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___savedAnchorGuid;
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___xrAnchor;
};
struct XRSaveAnchorResult_t30DC9C1CC8C9B5A35D3846C455096D08A6462DC8 
{
	XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 ___resultStatus;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___trackableId;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___savedAnchorGuid;
};
struct XRShareAnchorResult_t95B469D173113A88AA354217BF5D53FEF0C9D86A 
{
	XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 ___m_ResultStatus;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_AnchorId;
};
struct XrCompositionLayerCylinderKHR_t307A3A009D762E5668B5EF400FAEBE362A1A63BE 
{
	uint32_t ___Type;
	void* ___Next;
	uint64_t ___LayerFlags;
	uint64_t ___Space;
	uint32_t ___EyeVisibility;
	XrSwapchainSubImage_tC081E2C5D062FC3AE78E5F4156641B0BA213C19B ___SubImage;
	XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0 ___Pose;
	float ___Radius;
	float ___CentralAngle;
	float ___AspectRatio;
};
struct XrCompositionLayerEquirect2KHR_tAEFDCF4ECA8DD83056454FE0418C482762FDAC0B 
{
	uint32_t ___Type;
	void* ___Next;
	uint64_t ___LayerFlags;
	uint64_t ___Space;
	uint32_t ___EyeVisibility;
	XrSwapchainSubImage_tC081E2C5D062FC3AE78E5F4156641B0BA213C19B ___SubImage;
	XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0 ___Pose;
	float ___Radius;
	float ___CentralHorizontalAngle;
	float ___UpperVerticalAngle;
	float ___LowerVerticalAngle;
};
struct XrCompositionLayerEquirectKHR_tDBE1C1BD5B92821C6986C4BB2A35C94C5F20273D 
{
	uint32_t ___Type;
	void* ___Next;
	uint64_t ___LayerFlags;
	uint64_t ___Space;
	uint32_t ___EyeVisibility;
	XrSwapchainSubImage_tC081E2C5D062FC3AE78E5F4156641B0BA213C19B ___SubImage;
	XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0 ___Pose;
	float ___Radius;
	XrVector2f_t347E48BCFE5F37AFA86233510BC67C246F868188 ___Scale;
	XrVector2f_t347E48BCFE5F37AFA86233510BC67C246F868188 ___Bias;
};
struct XrCompositionLayerProjectionView_t1C36F183684433DC8CE8D44081F5B482942ABD96 
{
	uint32_t ___Type;
	void* ___Next;
	XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0 ___Pose;
	XrFovf_t9FE0DB2A9FCFCB1036D3552BBD12BF6B3AFFF55A ___Fov;
	XrSwapchainSubImage_tC081E2C5D062FC3AE78E5F4156641B0BA213C19B ___SubImage;
};
struct XrCompositionLayerQuad_tE5378EE301957F86177C5EB1AD34D55B87A871F5 
{
	uint32_t ___Type;
	void* ___Next;
	uint64_t ___LayerFlags;
	uint64_t ___Space;
	uint32_t ___EyeVisibility;
	XrSwapchainSubImage_tC081E2C5D062FC3AE78E5F4156641B0BA213C19B ___SubImage;
	XrPosef_t30CFD88924941CAA7DB413CD1AFF423530A90DD0 ___Pose;
	XrExtent2Df_t4302AF6D9C771DE91C603A415095BC851189CE1C ___Size;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 
{
	bool ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509 ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_marshaled_pinvoke
{
	int32_t ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_pinvoke ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_marshaled_com
{
	int32_t ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_com ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF 
{
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
	int32_t ___snapshotIndex;
};
struct CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948 
{
	String_t* ___name;
	int32_t ___index;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceCreateList;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceReleaseList;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	List_1U5BU5D_tE510DA387DA867AC92F8274325B178A7DE9A209E* ___debugResourceReads;
	List_1U5BU5D_tE510DA387DA867AC92F8274325B178A7DE9A209E* ___debugResourceWrites;
	int32_t ___refCount;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	bool ___enableAsyncCompute;
	bool ___allowPassCulling;
	bool ___needGraphicsFence;
	bool ___culled;
	bool ___culledByRendererList;
	bool ___hasSideEffect;
	bool ___enableFoveatedRasterization;
	bool ___hasShadingRateImage;
	bool ___hasShadingRateStates;
};
struct CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948_marshaled_pinvoke
{
	char* ___name;
	int32_t ___index;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceCreateList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReleaseList;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD** ___debugResourceReads;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD** ___debugResourceWrites;
	int32_t ___refCount;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___enableAsyncCompute;
	int32_t ___allowPassCulling;
	int32_t ___needGraphicsFence;
	int32_t ___culled;
	int32_t ___culledByRendererList;
	int32_t ___hasSideEffect;
	int32_t ___enableFoveatedRasterization;
	int32_t ___hasShadingRateImage;
	int32_t ___hasShadingRateStates;
};
struct CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___index;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceCreateList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReleaseList;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD** ___debugResourceReads;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD** ___debugResourceWrites;
	int32_t ___refCount;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___enableAsyncCompute;
	int32_t ___allowPassCulling;
	int32_t ___needGraphicsFence;
	int32_t ___culled;
	int32_t ___culledByRendererList;
	int32_t ___hasSideEffect;
	int32_t ___enableFoveatedRasterization;
	int32_t ___hasShadingRateImage;
	int32_t ___hasShadingRateStates;
};
struct FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 
{
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a0;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a1;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a2;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a3;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a4;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a5;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a6;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a7;
	int32_t ___activeAttachments;
};
struct FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C 
{
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a0;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a1;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a2;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a3;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a4;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a5;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a6;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a7;
	int32_t ___activeAttachments;
};
struct PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F  : public EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1
{
	bool ___m_AltitudeNeedsConversion;
	bool ___m_AzimuthNeedsConversion;
	float ___m_AltitudeAngle;
	float ___m_AzimuthAngle;
	bool ___m_TiltNeeded;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Tilt;
	int32_t ___U3CpointerIdU3Ek__BackingField;
	String_t* ___U3CpointerTypeU3Ek__BackingField;
	bool ___U3CisPrimaryU3Ek__BackingField;
	int32_t ___U3CbuttonU3Ek__BackingField;
	int32_t ___U3CpressedButtonsU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpositionU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3ClocalPositionU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CdeltaPositionU3Ek__BackingField;
	float ___U3CdeltaTimeU3Ek__BackingField;
	int32_t ___U3CclickCountU3Ek__BackingField;
	float ___U3CpressureU3Ek__BackingField;
	float ___U3CtangentialPressureU3Ek__BackingField;
	float ___U3CtwistU3Ek__BackingField;
	int32_t ___U3CpenStatusU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField;
	int32_t ___U3CmodifiersU3Ek__BackingField;
	RuntimeObject* ___U3CcompatibilityMouseEventU3Ek__BackingField;
	int32_t ___U3CdisplayIndexU3Ek__BackingField;
	bool ___U3CrecomputeTopElementUnderPointerU3Ek__BackingField;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E 
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_PropertyPath;
	String_t* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_PropertyPath;
	char* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_PropertyPath;
	Il2CppChar* ___m_Path;
};
struct DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF 
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___key;
	int32_t ___instanceCount;
	int32_t ___instanceOffset;
	MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 ___procInfo;
};
struct DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_marshaled_pinvoke
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_pinvoke ___key;
	int32_t ___instanceCount;
	int32_t ___instanceOffset;
	MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 ___procInfo;
};
struct DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_marshaled_com
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_com ___key;
	int32_t ___instanceCount;
	int32_t ___instanceOffset;
	MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 ___procInfo;
};
struct DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8 
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___key;
	int32_t ___instanceIndex;
};
struct DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_marshaled_pinvoke
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_pinvoke ___key;
	int32_t ___instanceIndex;
};
struct DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_marshaled_com
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_com ___key;
	int32_t ___instanceIndex;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___m_Handle;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1 
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	bool ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_pinvoke
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	int32_t ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_com
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	int32_t ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2 
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___shadingRateImageIndex;
	bool ___hasDepth;
	bool ___hasFoveatedRasterization;
	bool ___hasShadingRateStates;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_marshaled_pinvoke
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___shadingRateImageIndex;
	int32_t ___hasDepth;
	int32_t ___hasFoveatedRasterization;
	int32_t ___hasShadingRateStates;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_marshaled_com
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___shadingRateImageIndex;
	int32_t ___hasDepth;
	int32_t ___hasFoveatedRasterization;
	int32_t ___hasShadingRateStates;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214 
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1 ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_marshaled_pinvoke
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_pinvoke ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_marshaled_com
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_com ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField;
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField;
	String_t* ___m_Name;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList;
	Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35* ___m_PropertyBag;
	int32_t ___m_Flags;
	String_t* ___m_ViewDataKey;
	int32_t ___m_RenderHints;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding;
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___nestedRenderData;
	int32_t ___hierarchyDepth;
	int32_t ___insertionIndex;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache;
	int32_t ___triggerPseudoMask;
	int32_t ___dependencyPseudoMask;
	int32_t ___m_PseudoStates;
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField;
	int32_t ___m_PickingMode;
	LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE ___m_LayoutNode;
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style;
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext;
	int32_t ___inheritedStylesHash;
	uint32_t ___controlid;
	int32_t ___imguiContainerDescendantCount;
	bool ___m_EnabledSelf;
	int32_t ___m_LanguageDirection;
	int32_t ___m_LocalLanguageDirection;
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField;
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations;
	RuntimeObject* ___m_DataSource;
	PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55* ___m_DataSourcePath;
	List_1_t592DF2E59D6E244DA0041698383484A07C7E0480* ___m_Bindings;
	Type_t* ___U3CdataSourceTypeU3Ek__BackingField;
	int32_t ___m_TrickleDownHandleEventCategories;
	int32_t ___m_BubbleUpHandleEventCategories;
	int32_t ___m_BubbleUpEventCallbackCategories;
	int32_t ___m_TrickleDownEventCallbackCategories;
	int32_t ___m_EventInterestSelfCategories;
	int32_t ___m_CachedEventInterestParentCategories;
	uint32_t ___m_NextParentCachedVersion;
	uint32_t ___m_NextParentRequiredVersion;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedNextParentWithEventInterests;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField;
	bool ___U3CisRootVisualContainerU3Ek__BackingField;
	bool ___U3CcacheAsBitmapU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent;
	Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88* ___elementAdded;
	Action_1_t66B514BE877E216616DEDD40416127189FE16FA3* ___elementRemoved;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource;
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess;
	ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45* ___resolvedStyleAccess;
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList;
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData;
};
struct EmptyReadOnlyCollection_1_t89A294F273BB8EE92CD342ECABFE95F63B51B817_StaticFields
{
	ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* ___Instance;
};
struct EmptyReadOnlyCollection_1_tFB5F7F75DF0B657273AC841B9124A1557D63C67A_StaticFields
{
	ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* ___Instance;
};
struct LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72_StaticFields
{
	LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72* ___s_instance;
};
struct List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6_StaticFields
{
	ButtonClickStatusU5BU5D_t9327A993382F70450196067EE5DED53834E9DB7B* ___s_emptyArray;
};
struct BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields
{
	bool ____IsEnabled;
	BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* ___Options;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnCompileILPPMethod2;
	MethodInfo_t* ___DummyMethodInfo;
};
struct BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_ThreadStaticFields
{
	CommandBuilder_tA2E5D7A513FE45173EA395D67B25DB94E42CCA84* ____cmdBuilder;
};
struct CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F_StaticFields
{
	LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* ___U3CUpdateLabelU3Ek__BackingField;
};
struct ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31_StaticFields
{
	int32_t ___U3Cs_DoubleClickTimeU3Ek__BackingField;
};
struct CollectionExtensions_tD9117E96D192D9FC13B6302FE7CB978756199B1C_StaticFields
{
	StringBuilder_t* ___k_String;
};
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache;
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories;
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98_StaticFields
{
	RuntimeObject* ___s_cachedUpdate;
	RuntimeObject* ___s_cachedNoMatch;
};
struct HashCode32_1_tD2DD63035F543FDD8643588FA88CD9475D8107B9_StaticFields
{
	int32_t ___Value;
};
struct HashCode64_1_tBE03AFEF199A91EC38E3678A953160AFBAEA044F_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t772DFCA20062D55EF275D420692E6231EFE8C99A_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tDBBA29E0FF58D0BD292B04DADFEFA25FAF30082F_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tEFE47363FE9BD2DA23EF9C44B91C8401015063BE_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t0AE3CC08D24A1BE759562DBCEEA6B459AC8507E3_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t4200429421A827A0B5F3036C1DB9D66CCB8B0445_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t19BA4FD53EFCDB3494D3E641F479A304B0A42D21_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tB6E735C2CEB2283242D5171F9F071C4076FEB378_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t088700758E948CB3167EC6E10FD03B1B11125586_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t45C902BA4A85819B6C31A686FF699BD734C810A3_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tE592078EFC6F2A37620503BFAB99FEF70B71584A_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t843A0CF337E84638F3DEB38ADAFB4FC2204CA22F_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t0F7F318DD075E9C223756ACB1EDBF7D958229B29_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t0ACA98F4491C7F60FE0D181818A742841460CD8D_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t4E5438AF3FCF64994CE36C0242CC6580083C6276_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t6609EC1C8FD637D0704C9D40931A83EE7EBCA23D_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tD3243DF9FA8B7B703E45F521152F4E500EAA808E_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t6494BEDFB3823C50BCCE1457CC83EBABF9FC3718_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t1E9825203BCACDE03EA9806FA3B6D9667833FDB7_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t7F36E26E9C60DAE7E6BF03E72A6B9BEB0E70508E_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t728259C125E4C28AE80A80B41491CF221EF1B9B7_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tDA241AE7DD0993FBFA911AC316BB51A154854AC7_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t09ABD1A71EC5CE3684E6F1DA80681B54DB1691B5_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tA3E7348CF613CEAF3CEA3485D9D30F9A483610A1_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tE107908E33390D300CA7EA607BC5492367C0E04A_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t5CFE0BB846695197039F80F1EBB2F6FDA67A3B17_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tEE921473855F84F06431FF1885DE5AA655ACA5E2_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tBC76642E2A87985829E2A60A02BB3064D76FBD76_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t6A39614B794541C46762557A44A11A8092D077BA_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tAACED5C219BCE704BB23DEE5411688A66F4FA312_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t6486E3C865F1211D498A95362EA771CDFE256DED_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t33425DAD62BA77C00555B8218BCC45319A29B991_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t9A899B4771FBF788C65EC3AAED858797329647AA_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t6D9D3CEC802B9E24CA6ABA6FA982B615B2DC8196_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t5AB59BEFEDF62F7AA82DF462D661D14F572822AB_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t51A883EA9A52EBE95F05710B50C0A662C53D201D_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t73EDE881A4A610E09E76E2E3589D30974001309C_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tB033103B595D25458BCF189B1B8FEEDC765C6DD9_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t4EEE3EED6A1F40DD523EC9B520CEDF73603F903F_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t540AB6784E401BA021A24A6FDE63F1CB91615951_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tBB94DF557F1073A1974A322A1A44C7126DA37529_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t940007CBF08B5ABD14D7423675D4910FE0B9755B_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t3A727467BDFEAFF7A4CB568E28A00E4D6B4EC69B_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tF27C6D205FED69279D60297E9A62238FADF949C1_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tD186BF1D3333DE229C5889A460A72BE2157D86ED_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tFFAEB5550C895D9E253E19192C06C5E88CB6410A_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tAC13F0ACD4FE21581D24A405FB04DC6CE62107F2_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t1E6FA524337B539C19D5D02E0DB5A26462E0B389_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t2F229ECC88B28D532EE6550312AB5B1B2294B745_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t2B83362CA7E70B86BD1A86B8D27E4F1672407417_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t30B8776A1E8404F1E19F165E08E9312037B19FCB_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tCA0BC36BEF1B0537653D2C164EBFB71E2E7FE57F_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tC86B716B0629811F38CCA2922A9A6E9128F7B487_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tEEB1F167CB1FF50533D39ECB4E2F4DB8F48095BB_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t0E540E776B4BA9631D2B21027E3D44679BBFDE7E_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t9F79C5D3EEDC24E31844F18936B7A7152BDF014E_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t6D41DDF544ECC8EE81B2FB170732F8772126D088_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t4649F2A499D1914EAA249B234F1CB3520A35611B_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t5790CE2F2438D15349F095BE3E9037ABECD3B630_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t7CFB081FDD903CC5A200D3CD6E79CA92462EC9A5_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t27DC634456476CF1B4E26CE9E1613932D5D5E1F2_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tE4E9A886FAEA128F91F4BB47288E327F2FB2A590_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t4F950A3008EC05FB0D982995E52C8556C2715A4C_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t669DED3659FCA6EC161B7722CD2AFFBD8D48353E_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tC585CEA3A7F1AB7F02BFD57720D6DEBBA4E4006E_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t38B65A784388197E4D694073DDD68712A68ECFBC_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t2DA0C9954C5BD7571AFA7E5AD4667FBB415C1C55_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t210398908075A83F779422036BFAB63FFE5F85F6_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t162E0FE2417CF2171436BC6E9A0524E8CD7A331D_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t61B99859778637445427E508875C833C26007C3F_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t12646CDC1DEFCCFAE4EC21C2691E3AD07CC3243D_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t7397C98D3A61DF788247816CFDDCFAB68F11FF31_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tF4465274EC7B7ABA123154CB3244A352EDE2086F_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tABB39B622E5219D2DA172EACDEC8B74052BB164A_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tF6AB644D2ABBE925B3A3543F20FD5FB992312461_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tA894B4C4BE3681992148A70D1492F8EEA6825E4E_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t258221577FA59C0B1D9B188C325409BB62050DAB_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tC28C1D947A4D0E70163666E4692F1B1CDCEC09A9_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t844B153ACA1ED334277B6FB6C7454250AF529FB4_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tE62B31A9B7BD017DBE50F2BC947FCDED9605A714_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t1C4700728BA9E409FB64757DAADF1A0CC5A44DE7_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tA49B79C998BF9022A0836C168EC2089C5ABCBE43_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t25B99E9F7F998CC07CCA13124E03920779BFF803_StaticFields
{
	int64_t ___Value;
};
struct BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_StaticFields
{
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___Null;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_StaticFields
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___Null;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_StaticFields
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___Null;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_StaticFields
{
	GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___Invalid;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___s_ZeroGlyphRect;
};
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_StaticFields
{
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___s_Null;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_StaticFields
{
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___Invalid;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___k_Empty;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___none;
};
struct SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_StaticFields
{
	SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___Invalid;
};
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_StaticFields
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___zero;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity;
};
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_StaticFields
{
	int32_t ___maximumCullingPlaneCount;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_StaticFields
{
	float ___nearZ;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_StaticFields
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___identity;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___zero;
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_StaticFields
{
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___identity;
};
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_StaticFields
{
	int64_t ___s_LastTypeId;
	uint64_t ___s_NextEventId;
};
struct LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___LoadReasonMessages;
};
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_StaticFields
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___Invalid;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_StaticFields
{
	uint32_t ___s_CurrentValidBit;
	uint32_t ___s_SharedResourceValidBit;
};
struct StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___StoreReasonMessages;
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
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default;
};
struct XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_StaticFields
{
	XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___s_Default;
};
struct XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_StaticFields
{
	XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___s_Default;
};
struct XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_StaticFields
{
	XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___k_Default;
};
struct XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_StaticFields
{
	XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___s_Default;
};
struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_StaticFields
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___s_Default;
};
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default;
};
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_StaticFields
{
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___s_Default;
};
struct XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_StaticFields
{
	XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___s_Default;
};
struct EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1_StaticFields
{
	int64_t ___s_TypeId;
	ObjectPool_1_tC06B45D8A0C7CBBDAE418090727D1DF1F2FCB9F6* ___s_Pool;
	int32_t ___EventCategory;
};
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_StaticFields
{
	EventCallbackListPool_t258FFD0B864AC29862A6ACF4F56A0340621783B2* ___s_ListPool;
};
struct XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_StaticFields
{
	XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___s_Default;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	uint32_t ___s_NextId;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey;
	String_t* ___disabledUssClassName;
	int32_t ___s_FinalizerCount;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___childCountProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___contentRectProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourcePathProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___disablePlayModeTintProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledInHierarchyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledSelfProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___layoutProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___languageDirectionProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___localBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___nameProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___panelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___pickingModeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___styleSheetsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___tooltipProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___usageHintsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___userDataProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___viewDataKeyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visibleProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visualTreeAssetSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldTransformProperty;
	uint32_t ___s_NextParentVersion;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList;
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey;
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
struct DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B  : public RuntimeArray
{
	ALIGN_FIELD (8) Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 m_Items[1];

	inline Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 value)
	{
		m_Items[index] = value;
	}
};
struct ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52  : public RuntimeArray
{
	ALIGN_FIELD (8) ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F m_Items[1];

	inline ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normalImage), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___highResolutionImage), (void*)NULL);
		#endif
	}
	inline ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normalImage), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___highResolutionImage), (void*)NULL);
		#endif
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_gshared (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared (MemberInfo_t* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72* LambdaSignature_1_get_Instance_m2FC36F77390EB6EE252F45D081FAE81D7844975C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* CallSiteBinder_Stitch_TisRuntimeObject_m65EB633CA022F223704B45E793C45A6F93A11A97_gshared (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_binding, LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72* ___1_signature, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Expression_1_Compile_mAE60BB2984F0B64C621A225AA174F670BBAE11EC_gshared (Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallSiteBinder_CacheTarget_TisRuntimeObject_mDD019200C926FE9CB1859EEFA10749E4AF1E11AB_gshared (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* CallSiteBinder_GetRuleCache_TisRuntimeObject_m9DFDD3BB4F7106859FD2D993FF6564C86A42A818_gshared (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleCache_1_AddRule_m61F47C44A6CC48E4960F272156E04D520674B58A_gshared (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* __this, RuntimeObject* ___0_newRule, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleCache_1__ctor_m14075A68C840AF130E76F8E368F13CEA3C58B955_gshared (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1__ctor_mB9E68746D0600867795BE5387E431A052EDE10FE_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Add_m129CC65EBD7CF4155F6DBC3C7BC0A7D8FB17E016_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D* CollectionExtensions_AddFirst_TisRuntimeObject_mDB387565346E042AA5D35EEE90AFDDC1CC8A05A4_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* ___0_list, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* Expression_Lambda_TisRuntimeObject_m208FF8532548F744FDC7715D12012D92B4B9CDC5_gshared (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_body, String_t* ___1_name, bool ___2_tailCall, RuntimeObject* ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallSite_1_AddRule_m4EF48DA8FDBFB7B3E8337024FF9C0FF98891FA72_gshared (CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* __this, RuntimeObject* ___0_newRule, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallSiteBinder_BindCore_TisRuntimeObject_m961EBCDD305E6F424D69473CC8CD52D1B6B954BB_gshared (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* __this, CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* ___0_site, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* CallSite_1_CreateMatchMaker_m7595A71137A6C478CA01981F495981356145FAA1_gshared (CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* RuleCache_1_GetRules_mD30628F4B83C0F791FE5430259E0A25E5A5E3EEC_gshared_inline (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleCache_1_MoveRule_mB1D0C4865929AA211A45B55C3A892E082B339268_gshared (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* __this, RuntimeObject* ___0_rule, int32_t ___1_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallSite_1_MoveRule_mBCD10679B0D5B194D17E080E93FE38B7AA5339F9_gshared (CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* __this, int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallbackRegistry_RegisterCallback_TisRuntimeObject_mB4EF7159D7E9A0E1435729B4B488CEF2DA58ACDB_gshared (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* ___0_callback, int32_t ___1_useTrickleDown, int32_t ___2_invokePolicy, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, int32_t ___0_useTrickleDown, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallbackRegistry_RegisterCallback_TisRuntimeObject_TisRuntimeObject_m2D9855863C5CB36B83A07D8006643A522C3E3919_gshared (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* ___0_callback, RuntimeObject* ___1_userArgs, int32_t ___2_useTrickleDown, int32_t ___3_invokePolicy, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_m19464A9219CFA09D521E6F6981885276025BC97A_gshared (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_TisRuntimeObject_m9E686DAEC604B7BFF8BF99DBDEC655151A08378C_gshared (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EventBase_1_TypeId_m4B18042A64FC5F54DF0B830CE4C9F0FC82C661A5_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_pressedButtons_mD44593EB9F5A5992961586234A01D44B871A1F64_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mE0F1FA5E6172950D35D6FD8F6708B433954C4168_gshared (RuntimeObject* ___0_dictionary, RuntimeObject* ___1_key, RuntimeObject* ___2_defaultValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionExtensions_GetValueOrDefault_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_TisRuntimeObject_m9547B9832FE26D7DE2AD9BFF00A9FA8C96D13E29_gshared (RuntimeObject* ___0_dictionary, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___1_key, RuntimeObject* ___2_defaultValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m2AB7AC16F5BDBFEB664040F852CC922277C872F2_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF_gshared (TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* ReadOnlyCollectionBuilder_1_ToReadOnlyCollection_m478D4B2A6065DE06384E4448545867D386050EAB_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7709305356E53F01B1363D31F4E29CF9135D8885_gshared (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisDimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8_m2C16A0E1BBA0084C06DDCA3A911F0D8CBDF3F977_gshared (DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_mE82F51C906F6925E42DA290960046FF9997F94B1_gshared (ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m879C2A54DAFE78F46D1185B50ED527EE182BFB04_gshared (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_1__ctor_mE4CCF1AA0485357329225598B80B362697F6F7E9_gshared (U3CU3Ec__DisplayClass5_0_1_tAD7A4172BC09F03DF05ED2C61089D638464CF300* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___0_source, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m94DB1A0F1293F5BAA65533ED74C41E31D71CA979_gshared (NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m40C9739B189BB2A5A4B5D375C33123A039D65C2B_gshared (NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mAEE080A594D2B54E62742BCBAC067BD86B62EE90_gshared (NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_mDB05DADCD82C0753A10F968BC12105C013F004F6_gshared (NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m5D9AB1CF4D2E70F87BE8C5DA8BB700B0DBAEC960_gshared (NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_mF03BC6853C9DD519B47323DDAB4B990501463489_gshared (NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m81CC7BB6F9FA4BD6A271BECB0E8979FAFBBFF8F2_gshared (NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m02029B2BD79047E1295F3C1F6D403DAE546C3F79_gshared (NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mACF77E80482D69D54E384207E8EF83F56714FEBF_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m13B5E98249D94532DD7700C04ADA9346B6C01646_gshared (NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisDebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93_mA22E1F5DC673C0DBE2D35C0E170FADEF9EE9BC53_gshared (NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m48B5E526D82D23460D26CC391BD64752F97ABF18_gshared (NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_mDAB772BAC6F20741B210B3AB37819FDEAC556936_gshared (NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m7CD61B8B4CCB40810552A5884C7F1EDE208688B5_gshared (NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m875FDB5805D73A9DB2D203063E5CCC07999F43A7_gshared (NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mE947909B5D5477F068B16DF1CDB86DB6A68B6994_gshared (NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mF5D608563990BDF4A932F444C5C91CD6791E7DE6_gshared (NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m7F2B3220F3366EAB71B0C62942CB678827036666_gshared (NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_mB293485A46F4CD60A26427EA159A60016470DF7A_gshared (NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB0E2CBA91B4F2EA86445DC38D139A42A1C0FAA71_gshared (NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m4954F1AE988D519072BB11B6CCAD7C500C280386_gshared (NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m6AB15133D68784F1E9BB1C5CF6AF21EE4DC4FBBF_gshared (NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_mFBA847E240CBCFD6742ACEE692097A3686EB1478_gshared (NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mD0F26C30D505CF393A50CEAD19D9BAAD3E77CB87_gshared (NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m4219EEB937F0AA2846952934259518672640C2F0_gshared (NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mAF7AEA5C34BE1F328FB3175B67928729025E5AB1_gshared (NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_m2AC2D93055F73106FDF21A17E4B628111A55A673_gshared (NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m2BE74BAAAACB2FB8C886355218332C3D71CC870D_gshared (NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m92C729A213EC9B6599360003A73F4FF36FDCFEC5_gshared (NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m2B08A55873756E21BCB6D1C2CD1D3ED18D00BCA2_gshared (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mED77F59553BE97385BAF8D6FB358529A1E959379_gshared (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mE3B7F1A32ACB2193062CBB170B4ED9A7843325C4_gshared (NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_mEEFD81D6225622D3284E00E58E9979E357EA3846_gshared (NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC59BF07E462EBB1B63D0EEBDA144231E87EC237_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m0D4D6107C1C882F6D813E0CC53744262582D6110_gshared (NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m20661CE34BF69BC0B801A3909158DEA04D621DEB_gshared (NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E_gshared (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m48A94190A440E505DCB0C725DF4FE2DBDE33CCB6_gshared (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4DB28141C684B6B39DE44C899ECFD06EE0B7C8D4_gshared (NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_mFC9CFF15D4351863CC7ED0178D46D69735188B6F_gshared (NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB4F24E1671E46B6A5A5BE881EED6B8FA573BC045_gshared (NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_mC87C5E72BEAA8A1E94A6C34A486DA2BB429E48C4_gshared (NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m18E7F9491A74B9BBAD80C7FA7871313EED3797D6_gshared (NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_mDA389B33EA02F4831D5C7EA695532A0B10AA3EEC_gshared (NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m00D8BF626DE89E941B6C7F7DE6BDB75ACDBDA821_gshared (NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_m7C87C137316B6924C29233A2E467ADA6B8A7DCA8_gshared (NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3 (uint8_t* ___0_dest, uint8_t* ___1_src, uint32_t ___2_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79 (uint8_t* ___0_dest, uint8_t* ___1_src, uint32_t ___2_len, intptr_t ___3_type_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_Compile_mC306A324A84C4FE0E531B4374D61D7F00A607061 (RuntimeObject* ___0_delegateObj, bool ___1_isFunctionPointer, bool ___2_deterministicCompilation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304 (intptr_t ___0_ptr, Type_t* ___1_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
inline void FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3 (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	((  void (*) (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2*, intptr_t, const RuntimeMethod*))FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_gshared)(__this, ___0_ptr, method);
}
inline UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* CustomAttributeExtensions_GetCustomAttribute_TisUnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833_m26DF826A20F7C37269D72198549354AC5E8A3C6C (MemberInfo_t* ___0_element, const RuntimeMethod* method)
{
	return ((  UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared)(___0_element, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnmanagedFunctionPointerAttribute_get_CallingConvention_m1F7BA425C1936CAA9F62483B4699A4DB52B887A6_inline (UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72* LambdaSignature_1_get_Instance_m2FC36F77390EB6EE252F45D081FAE81D7844975C (const RuntimeMethod* method)
{
	return ((  LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72* (*) (const RuntimeMethod*))LambdaSignature_1_get_Instance_m2FC36F77390EB6EE252F45D081FAE81D7844975C_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_NoOrInvalidRuleProduced_m8089A28C6CC44A2552C1B44545B93D7FFDECB137 (const RuntimeMethod* method) ;
inline Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* CallSiteBinder_Stitch_TisRuntimeObject_m65EB633CA022F223704B45E793C45A6F93A11A97 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_binding, LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72* ___1_signature, const RuntimeMethod* method)
{
	return ((  Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* (*) (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72*, const RuntimeMethod*))CallSiteBinder_Stitch_TisRuntimeObject_m65EB633CA022F223704B45E793C45A6F93A11A97_gshared)(___0_binding, ___1_signature, method);
}
inline RuntimeObject* Expression_1_Compile_mAE60BB2984F0B64C621A225AA174F670BBAE11EC (Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, const RuntimeMethod*))Expression_1_Compile_mAE60BB2984F0B64C621A225AA174F670BBAE11EC_gshared)(__this, method);
}
inline void CallSiteBinder_CacheTarget_TisRuntimeObject_mDD019200C926FE9CB1859EEFA10749E4AF1E11AB (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* __this, RuntimeObject* ___0_target, const RuntimeMethod* method)
{
	((  void (*) (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F*, RuntimeObject*, const RuntimeMethod*))CallSiteBinder_CacheTarget_TisRuntimeObject_mDD019200C926FE9CB1859EEFA10749E4AF1E11AB_gshared)(__this, ___0_target, method);
}
inline RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* CallSiteBinder_GetRuleCache_TisRuntimeObject_m9DFDD3BB4F7106859FD2D993FF6564C86A42A818 (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* __this, const RuntimeMethod* method)
{
	return ((  RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* (*) (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F*, const RuntimeMethod*))CallSiteBinder_GetRuleCache_TisRuntimeObject_m9DFDD3BB4F7106859FD2D993FF6564C86A42A818_gshared)(__this, method);
}
inline void RuleCache_1_AddRule_m61F47C44A6CC48E4960F272156E04D520674B58A (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* __this, RuntimeObject* ___0_newRule, const RuntimeMethod* method)
{
	((  void (*) (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC*, RuntimeObject*, const RuntimeMethod*))RuleCache_1_AddRule_m61F47C44A6CC48E4960F272156E04D520674B58A_gshared)(__this, ___0_newRule, method);
}
inline void Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, Type_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
inline void RuleCache_1__ctor_m14075A68C840AF130E76F8E368F13CEA3C58B955 (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* __this, const RuntimeMethod* method)
{
	((  void (*) (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC*, const RuntimeMethod*))RuleCache_1__ctor_m14075A68C840AF130E76F8E368F13CEA3C58B955_gshared)(__this, method);
}
inline void Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, Type_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
inline void ReadOnlyCollectionBuilder_1__ctor_mCF63024DE6DEEFCB21F2ED015E7FF1638883D913 (ReadOnlyCollectionBuilder_1_tC538D3AB8CEC6EA16BA4F10B4C2EC9F8570994B3* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollectionBuilder_1_tC538D3AB8CEC6EA16BA4F10B4C2EC9F8570994B3*, int32_t, const RuntimeMethod*))ReadOnlyCollectionBuilder_1__ctor_mB9E68746D0600867795BE5387E431A052EDE10FE_gshared)(__this, ___0_capacity, method);
}
inline void ReadOnlyCollectionBuilder_1_Add_m7BCB17F9583DA42087CE73F337A746C839BC82C9 (ReadOnlyCollectionBuilder_1_tC538D3AB8CEC6EA16BA4F10B4C2EC9F8570994B3* __this, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollectionBuilder_1_tC538D3AB8CEC6EA16BA4F10B4C2EC9F8570994B3*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_Add_m129CC65EBD7CF4155F6DBC3C7BC0A7D8FB17E016_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* Expression_Parameter_mF825EFB5FBAABE8355C9D44B286AB4EA02F8B992 (Type_t* ___0_type, String_t* ___1_name, const RuntimeMethod* method) ;
inline TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* CollectionExtensions_AddFirst_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m15AF9739CD6782E3D5E7A0104026D106B7E5A974 (ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505* ___0_list, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___1_item, const RuntimeMethod* method)
{
	return ((  TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* (*) (ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))CollectionExtensions_AddFirst_TisRuntimeObject_mDB387565346E042AA5D35EEE90AFDDC1CC8A05A4_gshared)(___0_list, ___1_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* CallSiteBinder_get_UpdateLabel_mFBA5DD59CA8778F201C1BA20B91270D17AC367FC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LabelExpression_tEFEEB76D1A905275CA45F611E0ECAB5D1B2E6BFD* Expression_Label_m6103C6071262F1D016038D1071BBD8669423C254 (LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* ___0_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* CachedReflectionInfo_get_CallSiteOps_SetNotMatched_m16AFB8F966F100062FA34B82045DD718EB4536EF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* Expression_Call_mA9F5232733685D98799ED2992DDC0F1EA57EBD53 (MethodInfo_t* ___0_method, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* LabelTarget_get_Type_mADC0685E37D8FD2990BFA36A3679AB7C5659143E_inline (LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DefaultExpression_t68E278AD7534F283D174570B240C596979B26533* Expression_Default_m2D0EE74BD93E1D7DAB169DA8F013DC8B35FBB42D (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* Expression_Convert_mD5233B60383B3FD0F5A044E4440FB32CBF9609D5 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_expression, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* Expression_Property_m5C42C2C4783D3282226E02E655FDAD82347549EC (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_expression, PropertyInfo_t* ___1_property, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvocationExpression_tF4C0B5632B50926D11160CAFFD8703065C1F2B27* Expression_Invoke_m1EFAE86A8EF6D2101ED9E6C1DFE5D1D1A7F5BC8D (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_expression, RuntimeObject* ___1_arguments, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalExpression_t4A487FB09E6FEA815F25AADA33335CD658B6A913* Expression_Condition_m9365861D30BD7EB7F0AB862FCE588CCC919DCC7D (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_test, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___1_ifTrue, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___2_ifFalse, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LabelExpression_tEFEEB76D1A905275CA45F611E0ECAB5D1B2E6BFD* Expression_Label_m3695CEC6E9B2F17C15EBB94164366DDBD7D8EA8C (LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* ___0_target, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___1_defaultValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* Expression_Block_mDDD0D270B556671364021C7BD620924EBF4C18AD (RuntimeObject* ___0_expressions, const RuntimeMethod* method) ;
inline Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* Expression_Lambda_TisRuntimeObject_m208FF8532548F744FDC7715D12012D92B4B9CDC5 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_body, String_t* ___1_name, bool ___2_tailCall, RuntimeObject* ___3_parameters, const RuntimeMethod* method)
{
	return ((  Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* (*) (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, String_t*, bool, RuntimeObject*, const RuntimeMethod*))Expression_Lambda_TisRuntimeObject_m208FF8532548F744FDC7715D12012D92B4B9CDC5_gshared)(___0_body, ___1_name, ___2_tailCall, ___3_parameters, method);
}
inline void CallSite_1_AddRule_m4EF48DA8FDBFB7B3E8337024FF9C0FF98891FA72 (CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* __this, RuntimeObject* ___0_newRule, const RuntimeMethod* method)
{
	((  void (*) (CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98*, RuntimeObject*, const RuntimeMethod*))CallSite_1_AddRule_m4EF48DA8FDBFB7B3E8337024FF9C0FF98891FA72_gshared)(__this, ___0_newRule, method);
}
inline RuntimeObject* CallSiteBinder_BindCore_TisRuntimeObject_m961EBCDD305E6F424D69473CC8CD52D1B6B954BB (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* __this, CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* ___0_site, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F*, CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))CallSiteBinder_BindCore_TisRuntimeObject_m961EBCDD305E6F424D69473CC8CD52D1B6B954BB_gshared)(__this, ___0_site, ___1_args, method);
}
inline CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* CallSite_1_CreateMatchMaker_m7595A71137A6C478CA01981F495981356145FAA1 (CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* __this, const RuntimeMethod* method)
{
	return ((  CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* (*) (CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98*, const RuntimeMethod*))CallSite_1_CreateMatchMaker_m7595A71137A6C478CA01981F495981356145FAA1_gshared)(__this, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* RuleCache_1_GetRules_mD30628F4B83C0F791FE5430259E0A25E5A5E3EEC_inline (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC*, const RuntimeMethod*))RuleCache_1_GetRules_mD30628F4B83C0F791FE5430259E0A25E5A5E3EEC_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* CallSite_get_Binder_mA7D06DD00FEE519623E5D4CAF8A4009B1899DFCD_inline (CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF* __this, const RuntimeMethod* method) ;
inline void RuleCache_1_MoveRule_mB1D0C4865929AA211A45B55C3A892E082B339268 (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* __this, RuntimeObject* ___0_rule, int32_t ___1_i, const RuntimeMethod* method)
{
	((  void (*) (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC*, RuntimeObject*, int32_t, const RuntimeMethod*))RuleCache_1_MoveRule_mB1D0C4865929AA211A45B55C3A892E082B339268_gshared)(__this, ___0_rule, ___1_i, method);
}
inline void CallSite_1_MoveRule_mBCD10679B0D5B194D17E080E93FE38B7AA5339F9 (CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* __this, int32_t ___0_i, const RuntimeMethod* method)
{
	((  void (*) (CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98*, int32_t, const RuntimeMethod*))CallSite_1_MoveRule_mBCD10679B0D5B194D17E080E93FE38B7AA5339F9_gshared)(__this, ___0_i, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_AddEventCallbackCategories_m82D772243B9402773AC11E82A73A835FE8103DF6 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_eventCategories, int32_t ___1_trickleDown, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallbackRegistry__ctor_mE8515F2569FA228418791385E09A1DAAF959591A (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, const RuntimeMethod* method) ;
inline void EventCallbackRegistry_RegisterCallback_TisRuntimeObject_mB4EF7159D7E9A0E1435729B4B488CEF2DA58ACDB (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* ___0_callback, int32_t ___1_useTrickleDown, int32_t ___2_invokePolicy, const RuntimeMethod* method)
{
	((  void (*) (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07*, int32_t, int32_t, const RuntimeMethod*))EventCallbackRegistry_RegisterCallback_TisRuntimeObject_mB4EF7159D7E9A0E1435729B4B488CEF2DA58ACDB_gshared)(__this, ___0_callback, ___1_useTrickleDown, ___2_invokePolicy, method);
}
inline void CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, int32_t ___0_useTrickleDown, const RuntimeMethod* method)
{
	((  void (*) (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*, int32_t, const RuntimeMethod*))CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE_gshared)(__this, ___0_useTrickleDown, method);
}
inline void EventCallbackRegistry_RegisterCallback_TisRuntimeObject_TisRuntimeObject_m2D9855863C5CB36B83A07D8006643A522C3E3919 (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* ___0_callback, RuntimeObject* ___1_userArgs, int32_t ___2_useTrickleDown, int32_t ___3_invokePolicy, const RuntimeMethod* method)
{
	((  void (*) (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))EventCallbackRegistry_RegisterCallback_TisRuntimeObject_TisRuntimeObject_m2D9855863C5CB36B83A07D8006643A522C3E3919_gshared)(__this, ___0_callback, ___1_userArgs, ___2_useTrickleDown, ___3_invokePolicy, method);
}
inline bool EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_m19464A9219CFA09D521E6F6981885276025BC97A (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method)
{
	return ((  bool (*) (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07*, int32_t, const RuntimeMethod*))EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_m19464A9219CFA09D521E6F6981885276025BC97A_gshared)(__this, ___0_callback, ___1_useTrickleDown, method);
}
inline bool EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_TisRuntimeObject_m9E686DAEC604B7BFF8BF99DBDEC655151A08378C (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method)
{
	return ((  bool (*) (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0*, int32_t, const RuntimeMethod*))EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_TisRuntimeObject_m9E686DAEC604B7BFF8BF99DBDEC655151A08378C_gshared)(__this, ___0_callback, ___1_useTrickleDown, method);
}
inline int64_t EventBase_1_TypeId_m08396DED606ACD1093BEEA8D939E5DA37B797C12 (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))EventBase_1_TypeId_m4B18042A64FC5F54DF0B830CE4C9F0FC82C661A5_gshared)(method);
}
inline int32_t PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F*, const RuntimeMethod*))PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickDetector_StartClickTracking_mF87B35BA2F55B42F47709D89FA651EEFCE615CE7 (ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, const RuntimeMethod* method) ;
inline int64_t EventBase_1_TypeId_m3FC722D85FBD1538CE6B96AD3364192799BF1CA6 (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))EventBase_1_TypeId_m4B18042A64FC5F54DF0B830CE4C9F0FC82C661A5_gshared)(method);
}
inline int32_t PointerEventBase_1_get_pressedButtons_mD44593EB9F5A5992961586234A01D44B871A1F64_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F*, const RuntimeMethod*))PointerEventBase_1_get_pressedButtons_mD44593EB9F5A5992961586234A01D44B871A1F64_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickDetector_SendClickEvent_m3AC03E996C28D79AAB47D49BEA01887AFF21B310 (ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, const RuntimeMethod* method) ;
inline int32_t PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F*, const RuntimeMethod*))PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_gshared_inline)(__this, method);
}
inline ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470* List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB (List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470* (*) (List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline int64_t EventBase_1_TypeId_m1A2720F11AB0D624809678ADE4E6D8C250E43741 (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))EventBase_1_TypeId_m4B18042A64FC5F54DF0B830CE4C9F0FC82C661A5_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickDetector_CancelClickTracking_m93EDACD3A68DC09BD1DB229F9D390466E25E4339 (ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, const RuntimeMethod* method) ;
inline int64_t EventBase_1_TypeId_mA90FE9E21D00125CFC53652D23DB65FD2574D60D (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))EventBase_1_TypeId_m4B18042A64FC5F54DF0B830CE4C9F0FC82C661A5_gshared)(method);
}
inline RuntimeObject* CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mE0F1FA5E6172950D35D6FD8F6708B433954C4168 (RuntimeObject* ___0_dictionary, RuntimeObject* ___1_key, RuntimeObject* ___2_defaultValue, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mE0F1FA5E6172950D35D6FD8F6708B433954C4168_gshared)(___0_dictionary, ___1_key, ___2_defaultValue, method);
}
inline RuntimeObject* CollectionExtensions_GetValueOrDefault_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_TisRuntimeObject_m9547B9832FE26D7DE2AD9BFF00A9FA8C96D13E29 (RuntimeObject* ___0_dictionary, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___1_key, RuntimeObject* ___2_defaultValue, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, RuntimeObject*, const RuntimeMethod*))CollectionExtensions_GetValueOrDefault_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_TisRuntimeObject_m9547B9832FE26D7DE2AD9BFF00A9FA8C96D13E29_gshared)(___0_dictionary, ___1_key, ___2_defaultValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline int32_t ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared)(__this, method);
}
inline void ReadOnlyCollection_1_CopyTo_m2AB7AC16F5BDBFEB664040F852CC922277C872F2 (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_CopyTo_m2AB7AC16F5BDBFEB664040F852CC922277C872F2_gshared)(__this, ___0_array, ___1_index, method);
}
inline void TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF (TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF_gshared)(__this, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* ReadOnlyCollectionBuilder_1_ToReadOnlyCollection_m478D4B2A6065DE06384E4448545867D386050EAB (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* (*) (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_ToReadOnlyCollection_m478D4B2A6065DE06384E4448545867D386050EAB_gshared)(__this, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
inline void Array_Resize_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7709305356E53F01B1363D31F4E29CF9135D8885 (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389**, int32_t, const RuntimeMethod*))Array_Resize_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7709305356E53F01B1363D31F4E29CF9135D8885_gshared)(___0_array, ___1_newSize, method);
}
inline void Array_Resize_TisDimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8_m2C16A0E1BBA0084C06DDCA3A911F0D8CBDF3F977 (DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B**, int32_t, const RuntimeMethod*))Array_Resize_TisDimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8_m2C16A0E1BBA0084C06DDCA3A911F0D8CBDF3F977_gshared)(___0_array, ___1_newSize, method);
}
inline void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared)(___0_array, ___1_newSize, method);
}
inline void Array_Resize_TisScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_mE82F51C906F6925E42DA290960046FF9997F94B1 (ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52**, int32_t, const RuntimeMethod*))Array_Resize_TisScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_mE82F51C906F6925E42DA290960046FF9997F94B1_gshared)(___0_array, ___1_newSize, method);
}
inline void Array_Resize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m879C2A54DAFE78F46D1185B50ED527EE182BFB04 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**, int32_t, const RuntimeMethod*))Array_Resize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m879C2A54DAFE78F46D1185B50ED527EE182BFB04_gshared)(___0_array, ___1_newSize, method);
}
inline void U3CU3Ec__DisplayClass5_0_1__ctor_mE4CCF1AA0485357329225598B80B362697F6F7E9 (U3CU3Ec__DisplayClass5_0_1_tAD7A4172BC09F03DF05ED2C61089D638464CF300* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass5_0_1_tAD7A4172BC09F03DF05ED2C61089D638464CF300*, const RuntimeMethod*))U3CU3Ec__DisplayClass5_0_1__ctor_mE4CCF1AA0485357329225598B80B362697F6F7E9_gshared)(__this, method);
}
inline void Func_2__ctor_mD6767DE619116219CD1567BC735C4AC96B9348CF (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisString_t_m4212A6B9DDC97D402346EC78AE3115A600469C8C (RuntimeObject* ___0_source, Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___0_source, ___1_selector, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158 (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllocatorHandle_get_IsCustomAllocator_mB40C586EBB549E9D5F46BF0CDA12966E2F1CF9A1 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m94DB1A0F1293F5BAA65533ED74C41E31D71CA979 (NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m94DB1A0F1293F5BAA65533ED74C41E31D71CA979_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m40C9739B189BB2A5A4B5D375C33123A039D65C2B (NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m40C9739B189BB2A5A4B5D375C33123A039D65C2B_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mAEE080A594D2B54E62742BCBAC067BD86B62EE90 (NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mAEE080A594D2B54E62742BCBAC067BD86B62EE90_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_mDB05DADCD82C0753A10F968BC12105C013F004F6 (NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_mDB05DADCD82C0753A10F968BC12105C013F004F6_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m5D9AB1CF4D2E70F87BE8C5DA8BB700B0DBAEC960 (NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m5D9AB1CF4D2E70F87BE8C5DA8BB700B0DBAEC960_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_mF03BC6853C9DD519B47323DDAB4B990501463489 (NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_mF03BC6853C9DD519B47323DDAB4B990501463489_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m81CC7BB6F9FA4BD6A271BECB0E8979FAFBBFF8F2 (NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m81CC7BB6F9FA4BD6A271BECB0E8979FAFBBFF8F2_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m02029B2BD79047E1295F3C1F6D403DAE546C3F79 (NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m02029B2BD79047E1295F3C1F6D403DAE546C3F79_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mACF77E80482D69D54E384207E8EF83F56714FEBF (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mACF77E80482D69D54E384207E8EF83F56714FEBF_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m13B5E98249D94532DD7700C04ADA9346B6C01646 (NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m13B5E98249D94532DD7700C04ADA9346B6C01646_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisDebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93_mA22E1F5DC673C0DBE2D35C0E170FADEF9EE9BC53 (NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisDebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93_mA22E1F5DC673C0DBE2D35C0E170FADEF9EE9BC53_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m48B5E526D82D23460D26CC391BD64752F97ABF18 (NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m48B5E526D82D23460D26CC391BD64752F97ABF18_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_mDAB772BAC6F20741B210B3AB37819FDEAC556936 (NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_mDAB772BAC6F20741B210B3AB37819FDEAC556936_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m7CD61B8B4CCB40810552A5884C7F1EDE208688B5 (NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m7CD61B8B4CCB40810552A5884C7F1EDE208688B5_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m875FDB5805D73A9DB2D203063E5CCC07999F43A7 (NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m875FDB5805D73A9DB2D203063E5CCC07999F43A7_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mE947909B5D5477F068B16DF1CDB86DB6A68B6994 (NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mE947909B5D5477F068B16DF1CDB86DB6A68B6994_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mF5D608563990BDF4A932F444C5C91CD6791E7DE6 (NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mF5D608563990BDF4A932F444C5C91CD6791E7DE6_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m7F2B3220F3366EAB71B0C62942CB678827036666 (NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m7F2B3220F3366EAB71B0C62942CB678827036666_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_mB293485A46F4CD60A26427EA159A60016470DF7A (NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_mB293485A46F4CD60A26427EA159A60016470DF7A_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mB0E2CBA91B4F2EA86445DC38D139A42A1C0FAA71 (NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB0E2CBA91B4F2EA86445DC38D139A42A1C0FAA71_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m4954F1AE988D519072BB11B6CCAD7C500C280386 (NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m4954F1AE988D519072BB11B6CCAD7C500C280386_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m6AB15133D68784F1E9BB1C5CF6AF21EE4DC4FBBF (NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m6AB15133D68784F1E9BB1C5CF6AF21EE4DC4FBBF_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_mFBA847E240CBCFD6742ACEE692097A3686EB1478 (NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_mFBA847E240CBCFD6742ACEE692097A3686EB1478_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mD0F26C30D505CF393A50CEAD19D9BAAD3E77CB87 (NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mD0F26C30D505CF393A50CEAD19D9BAAD3E77CB87_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m4219EEB937F0AA2846952934259518672640C2F0 (NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m4219EEB937F0AA2846952934259518672640C2F0_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mAF7AEA5C34BE1F328FB3175B67928729025E5AB1 (NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mAF7AEA5C34BE1F328FB3175B67928729025E5AB1_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_m2AC2D93055F73106FDF21A17E4B628111A55A673 (NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_m2AC2D93055F73106FDF21A17E4B628111A55A673_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m2BE74BAAAACB2FB8C886355218332C3D71CC870D (NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m2BE74BAAAACB2FB8C886355218332C3D71CC870D_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m92C729A213EC9B6599360003A73F4FF36FDCFEC5 (NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m92C729A213EC9B6599360003A73F4FF36FDCFEC5_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m2B08A55873756E21BCB6D1C2CD1D3ED18D00BCA2 (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m2B08A55873756E21BCB6D1C2CD1D3ED18D00BCA2_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mED77F59553BE97385BAF8D6FB358529A1E959379 (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mED77F59553BE97385BAF8D6FB358529A1E959379_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mE3B7F1A32ACB2193062CBB170B4ED9A7843325C4 (NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mE3B7F1A32ACB2193062CBB170B4ED9A7843325C4_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_mEEFD81D6225622D3284E00E58E9979E357EA3846 (NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_mEEFD81D6225622D3284E00E58E9979E357EA3846_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC59BF07E462EBB1B63D0EEBDA144231E87EC237 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC59BF07E462EBB1B63D0EEBDA144231E87EC237_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m0D4D6107C1C882F6D813E0CC53744262582D6110 (NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m0D4D6107C1C882F6D813E0CC53744262582D6110_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m20661CE34BF69BC0B801A3909158DEA04D621DEB (NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m20661CE34BF69BC0B801A3909158DEA04D621DEB_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m48A94190A440E505DCB0C725DF4FE2DBDE33CCB6 (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m48A94190A440E505DCB0C725DF4FE2DBDE33CCB6_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m4DB28141C684B6B39DE44C899ECFD06EE0B7C8D4 (NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m4DB28141C684B6B39DE44C899ECFD06EE0B7C8D4_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_mFC9CFF15D4351863CC7ED0178D46D69735188B6F (NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_mFC9CFF15D4351863CC7ED0178D46D69735188B6F_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mB4F24E1671E46B6A5A5BE881EED6B8FA573BC045 (NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB4F24E1671E46B6A5A5BE881EED6B8FA573BC045_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_mC87C5E72BEAA8A1E94A6C34A486DA2BB429E48C4 (NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_mC87C5E72BEAA8A1E94A6C34A486DA2BB429E48C4_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m18E7F9491A74B9BBAD80C7FA7871313EED3797D6 (NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m18E7F9491A74B9BBAD80C7FA7871313EED3797D6_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_mDA389B33EA02F4831D5C7EA695532A0B10AA3EEC (NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_mDA389B33EA02F4831D5C7EA695532A0B10AA3EEC_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m00D8BF626DE89E941B6C7F7DE6BDB75ACDBDA821 (NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m00D8BF626DE89E941B6C7F7DE6BDB75ACDBDA821_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_m7C87C137316B6924C29233A2E467ADA6B8A7DCA8 (NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_m7C87C137316B6924C29233A2E467ADA6B8A7DCA8_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mBCF551834A5B6D371531B7F25078FA3DFB1B5E97_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_destination, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA_mCB14434333DCB75A5FD671D9A992747A378043D9_gshared (ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA* ___0_destination, ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A_m47E56668B77DFD297A10C77037500A873C750328_gshared (AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A* ___0_destination, AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215_gshared (ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_destination, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_mE722009CF3369F14C5504F191D0EA30479F00E86_gshared (AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* ___0_destination, AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B_gshared (BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_destination, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m30599D9EEC5CBA92A026E19AFB3510603F2595EB_gshared (BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___0_destination, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m8557E6B1B48B7EB426E6CCFA83223FDCB8F16135_gshared (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___0_destination, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m9EE961D328A463A3B89EBC9E2B20D70A09D560A9_gshared (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___0_destination, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198_gshared (bool* ___0_destination, bool* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		bool* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		bool* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<bool>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m15C7EBB20DE2BA84BC926601232B3D764526BDCD_gshared (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* ___0_destination, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010_m795273AEE7A248BA5B241E561023F0456EF5DED1_gshared (BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* ___0_destination, BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647_gshared (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_destination, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint8_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint8_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint8_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455_mE0D96A3C81AD5AD346CDBF7A7B6681D0DAE2A203_gshared (CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455* ___0_destination, CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Il2CppChar* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Il2CppChar* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Il2CppChar>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6_gshared (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_destination, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68_gshared (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_destination, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_m6C2AD80E4DD3331CB6E84B35EB6A4A91B77D3900_gshared (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* ___0_destination, ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7_gshared (ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_destination, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m747B7D7DC0AA466783F69D3676EC5EE854D08D52_gshared (ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_destination, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m8A5B65BF262A2B1C988311D13733E08E197C8A03_gshared (CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___0_destination, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80_gshared (CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_destination, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93_m0B40FDD1EA9F25179F6D21CD8594AB44CE1D11B2_gshared (DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93* ___0_destination, DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD_mC49612746C663EF46D693501EF707DA1C808F672_gshared (DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* ___0_destination, DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49_mB020FE36A95248E17F02AFAD99294E33BE87EBB7_gshared (DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* ___0_destination, DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_m3AB80BE2651836BC6D6235533746976454F760B2_gshared (DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* ___0_destination, DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54_gshared (DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_destination, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m6AAEDA6D4101BC102C278A650ACE547DB784D03B_gshared (DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* ___0_destination, DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_m209C2AA6C05B334B5F3A8BCD998B7D82B299DA03_gshared (DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* ___0_destination, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_m6F2BA74A7DBF719AE1754F3527EEA972637626A0_gshared (DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* ___0_destination, DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900_gshared (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_destination, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD_m70F47463A76C3CEC5A60BF38409A206BE7D50A49_gshared (FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* ___0_destination, FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061_m02E97F34D8471A290B7463365307EA6035752182_gshared (GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___0_destination, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m7146E166797850AFFFC5C0B8AFE6FACAC714FB6B_gshared (GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* ___0_destination, GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868_m5E50631671535491F4124E183D496FE30921E8C9_gshared (GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* ___0_destination, GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB_mFE85A77CF4B3338FC9F32B0EA8E7210F35665C1B_gshared (GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* ___0_destination, GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F_m1C555DD96B1B21625A3782B5088903189B3AB29F_gshared (GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F* ___0_destination, GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_mD479C3965ADC585B6CA62A6136D07509F042E52C_gshared (GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* ___0_destination, GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m33C6006A3976CB7B6910ED7366970B135FDC814A_gshared (GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___0_destination, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m2CA00C03921B3C30B95A8129FDEA92912124ED5E_gshared (GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ___0_destination, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mD8743760DD56DCCB29E24BA5B8E1CF9985894AEC_gshared (GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___0_destination, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m83ADCB7461E31FE528831F5B88B8022C10ADE134_gshared (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_destination, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mFB25FA133B31E1050322787D41168D5F313B4AE7_gshared (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___0_destination, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0_mEA71C71CAFCA3F9ED7F25460A0A4A3FA3914F816_gshared (GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* ___0_destination, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m4AE6CAF77C6479EB90DB7B65987256C032E3D768_gshared (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___0_destination, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m68888F3441F2A44FD565D9EC942658422E97507F_gshared (HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_destination, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D_m31148BC9E64E6998B9195D19EE3DC7309F795FF4_gshared (InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* ___0_destination, InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02_m09B1854526DAF2C7071C6F820280DBEE74DF86A2_gshared (IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* ___0_destination, IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_m1752DB1596C4C4586766BA2A8E5507DA34D09731_gshared (IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* ___0_destination, IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_m05DEEBCE948053CBFFA6C094E423741164584AF3_gshared (IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* ___0_destination, IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_m2D74F1A4370C5E1065B193D91E60173CBBD0D7D9_gshared (IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* ___0_destination, IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m5FF00A83B5115A578BEE361BEC0202D81703A6BC_gshared (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___0_destination, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m3B632A22634A03CAF6057149181CAB1BD31A9740_gshared (InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* ___0_destination, InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m8C253FF157C04780CD45441FF7BD611F0F4B4F5C_gshared (InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___0_destination, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m6846F5DED6276BB72762DCFF6DEE1B40BF57BBEF_gshared (InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* ___0_destination, InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_m608B6E3A4051EA12739AA32FFDC046DDE15FC89D_gshared (InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* ___0_destination, InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31_gshared (int16_t* ___0_destination, int16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int16_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int16_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int16_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int32_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2F2ACB99CC1A9CA46487DC49524C0BB7FFD583FE_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int32_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4_gshared (int64_t* ___0_destination, int64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int64_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int64_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int64_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F_gshared (intptr_t* ___0_destination, intptr_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		intptr_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		intptr_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<intptr_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m4DF13B5C2D27E38BFD7112649345659B81B99988_gshared (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___0_destination, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05_gshared (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_destination, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_m59D4034115D09B7995687545F7C6855F1FA51788_gshared (LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* ___0_destination, LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_m433B7A1CA94D568396DF3741053FC07B09E4BAAD_gshared (LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* ___0_destination, LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mFAAF3AF84767549D3DF70C7D527FDD5E42EAF197_gshared (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ___0_destination, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E_m7F3C07C5DF89FD9E467CF118710A8F5C7660A1DB_gshared (LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* ___0_destination, LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C_mB299AD4CE049174320A1A22C157EF59CCDB3A6B2_gshared (LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* ___0_destination, LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m59E46AC18F0285D5A56C690CDD262F9ADA84663C_gshared (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_destination, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBFE5AB7E5EA648284EEC0A6201B70C58BF6D4367_gshared (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* ___0_destination, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3_gshared (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_destination, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA_m54EA539C8C0DA25305FA3186E2BC496BAA656B86_gshared (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* ___0_destination, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_m90835915CEF2F93C03EF71873CEC5592AD382C54_gshared (MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A* ___0_destination, MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_m9CC9BB5524CD97C8007D1EEBE09C53ED6D819499_gshared (MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* ___0_destination, MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m23A0A1DC27829526256D3EA18AF15897CD688CB4_gshared (ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___0_destination, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisName_t9E47EF25D1808C27515EB99D71DB90E187AC1354_m8A9793514C049D29935B8879F1ABE6C9ADB6728B_gshared (Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* ___0_destination, Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_m92D158431A5BC9D2B05C80575A0DDA8B5ED9B213_gshared (NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* ___0_destination, NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_m7877A89A8912BD549B31F67DAC4FEEE193752C28_gshared (NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* ___0_destination, NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m1344A30C8C64641C8CB6DB508EC56FE1BF15F736_gshared (NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* ___0_destination, NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRuntimeObject_mD13EEA1538F26A567D15A7615D8851A427DFD15A_gshared (RuntimeObject** ___0_destination, RuntimeObject** ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		RuntimeObject** L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		RuntimeObject** L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_m43F8A4AC2388A9F0C27AB0A185085F53623608CA_gshared (OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* ___0_destination, OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933_m5A003E688413079C66237DE790878F634A60F8EB_gshared (OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* ___0_destination, OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB_mC6AFBBAA2DFE1E74FF820515977ACF76A6F110EC_gshared (OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* ___0_destination, OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7_mED6034C6AE7A91FD3482A1B2F2F57DC6CAEC124F_gshared (OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* ___0_destination, OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_mB35746D9853EBB9E5ABDFA095D7C5B7C58C8B51F_gshared (OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* ___0_destination, OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m0E5023F31322576D419474CB9F7795E2E5D7688C_gshared (OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* ___0_destination, OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_m2C86E0E5D4E10481221216636DD7BC3BDD8A5214_gshared (PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* ___0_destination, PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C_m41BC15726CAB8F70CD000CB3674D3128237FE452_gshared (PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* ___0_destination, PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE_m1C1B67C346EEED0CD456B9E87D080590068B3082_gshared (PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* ___0_destination, PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassOutputData_t8EA364E560775D19D285839BA06710B337503E0D_m9E7E2846C3D4BCC5B682D0E2EAEABACFEEE1845E_gshared (PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* ___0_destination, PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_m39B28318F5BDEAE4BD94956E767CC9704364FEE2_gshared (PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* ___0_destination, PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF75DD2DBA33D1083E63B1A29456B4085A1CC079F_gshared (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___0_destination, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_m6EAF0B2AA8221F0707DB3D75FAAA11BFE487B1AC_gshared (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_destination, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA_gshared (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_destination, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mFFD97FF079AD2A975D7DF2A78BA8D205567AB2FD_gshared (RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* ___0_destination, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0759F2B6F8E40AFE146E9082633904BC26CBCCD7_gshared (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___0_destination, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mA76873E6FBF3E2A2C2C393A6FBA33ACF4BB2323E_gshared (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___0_destination, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F_m79B934C6299FBEAD050C8623DEECA5910C785A77_gshared (ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* ___0_destination, ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m92FE1E0AD06DBA4DEAFD8CF4FCB25C5206BE61BA_gshared (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_destination, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551_m3FD4B33EDB99E32742062A1966754DC9F1E5090B_gshared (RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* ___0_destination, RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m6894206E85F92C7E4AF252F3E44348C8831A8A95_gshared (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* ___0_destination, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_m3E9036AC6B2F145C0BD1D5BF478C68862E3D162D_gshared (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* ___0_destination, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_mCC5FE82DA6115518D0515F505693D2403D91255F_gshared (RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* ___0_destination, RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_m8C5EFDBB84C3693069DECF855A3A029189508D96_gshared (RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* ___0_destination, RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_mE56E868D1E861AD9139DDD68E2FC6520686F0235_gshared (ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* ___0_destination, ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC_m487A364CEA8D45CA1019912E652DBE060211AD52_gshared (ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* ___0_destination, ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_m7A2C6E00E5CCE631EFDFD1737985A5805815B52F_gshared (ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* ___0_destination, ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_mDEF8860657F738E1C37779358F5FC2EC8B4F795D_gshared (ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* ___0_destination, ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8921CF9FB1C61F7FA656ADE11B64F27943551250_gshared (int8_t* ___0_destination, int8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int8_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int8_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int8_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_mC7A5B6E357476E4450CDB69422F3F0ACDFC6B57B_gshared (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* ___0_destination, SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_mCCC311A9CB3BBFDF387DB99FA39A44D1D64A739F_gshared (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___0_destination, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_m44539DB4218E8B9D6803A1DB854D6A394284EC2F_gshared (ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* ___0_destination, ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_mB33B125C7A1AC219217D2366979A4B5E8EEEB129_gshared (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* ___0_destination, ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m94E6E2313F69F3768A56E42612429E5C38D5FAA2_gshared (SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* ___0_destination, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106_mC66BC9906CD26C4203D0566DC87425459D5F94EE_gshared (SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* ___0_destination, SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m7994A64D0123C15A209C4D252F012167DEEFCA46_gshared (SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* ___0_destination, SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisStoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292_mF8CA7DBA4C0513981099CE00AEC5A00DBBF590CB_gshared (StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* ___0_destination, StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934_m5673359DA14F42D418757E17AA8B63D5D9CCC337_gshared (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* ___0_destination, SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9_mF6F7C1814773F69C958C41B232379EBD4896E28F_gshared (SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* ___0_destination, SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026_m32A23337029ABE0E84B9CF615FBDADE927B6BC4F_gshared (SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* ___0_destination, SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_mCA110D5D1FC4E43E34CB559C0AA44240BACD2C45_gshared (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* ___0_destination, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_mB9203CCBA27231FC655442726FF84EF63FA9164C_gshared (TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* ___0_destination, TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint16_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint16_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint16_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD_gshared (uint32_t* ___0_destination, uint32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint32_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908_gshared (uint64_t* ___0_destination, uint64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint64_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint64_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint64_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mA5606AC3FC8189982A0ACF7B89C9843420DFB899_gshared (URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* ___0_destination, URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_destination, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m4D4024BA66A2549F3712E54CBBD60CA1C70EF840_gshared (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_destination, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_destination, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C_gshared (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_destination, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB63FF1B03BD081ACDE9355ECF72840C863C44004_gshared (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_destination, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mD33F0334F37E4CBF4BBF4008EA599ECF998329B8_gshared (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_destination, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m79148948778E3104E3C071F66CC59832555DFCAD_gshared (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* ___0_destination, VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B_m274E314A6717CAF400EF0120DB9D11F934E8BE39_gshared (VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* ___0_destination, VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m843B20011C1341E731F531B52C10D5D303EC869A_gshared (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* ___0_destination, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85_m41759CEE12426D97AC8C6ACEDDDE8CB192D9B556_gshared (XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85* ___0_destination, XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRBoundingBox_tF12DE2409AC158AA9821C5F37C76716468FA6F85>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_m6A68A20E0AEB3F0B7A056E5FD387F9DCD3700911_gshared (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63* ___0_destination, XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mE26E55C6B67DABAA95C564E9FC0AA1F8620B6701_gshared (XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9* ___0_destination, XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E_mEC3092EED569E949F7027AA55F3E3885D94FABA8_gshared (XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E* ___0_destination, XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m8B1D2DA08BC0E7DA4BBFC3DE77550AB87E095F8C_gshared (XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB* ___0_destination, XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRFov_t51E4BB7B76304E61CF064687586D096CE585817A_mC2BFB985DF74803B13E9B1CC656291F7938FE77A_gshared (XRFov_t51E4BB7B76304E61CF064687586D096CE585817A* ___0_destination, XRFov_t51E4BB7B76304E61CF064687586D096CE585817A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRFov_t51E4BB7B76304E61CF064687586D096CE585817A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRFov_t51E4BB7B76304E61CF064687586D096CE585817A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRFov_t51E4BB7B76304E61CF064687586D096CE585817A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_m01B5C9D255C96380D58A3B8C0CE3773F6CE83336_gshared (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* ___0_destination, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_mC8D7F6BC4F3255BD933ED9A9B7A606635E0F30D6_gshared (XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692* ___0_destination, XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_m9348F062068A9CC6F03364C860D9655B2E9D72DB_gshared (XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826* ___0_destination, XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m07C05C9E424674F366712AC0D99249B0D64B4F5B_gshared (XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26* ___0_destination, XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5_m42EB9636B5CAD9B12B43B4C391D80907496F9147_gshared (XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5* ___0_destination, XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_m9BBFC512D1D3429949038E5AEA1D4A79CD1DCD3B_gshared (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___0_destination, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_m4A23846D25D047160734CBB62A83BEBDC3582F0C_gshared (XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1* ___0_destination, XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mAB39431EE9FA99DED1F7A6CEAEA2404435CA5269_gshared (XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C* ___0_destination, XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m4CAD6E5B0B9420649790100329A4364AA3FA1C8E_gshared (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___0_destination, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m13CF669C6C740FECA724C23DA0657C26B433A1A5_gshared (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* ___0_destination, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRSaveAnchorResult_t30DC9C1CC8C9B5A35D3846C455096D08A6462DC8_mD7D4CE5F78A65D689EFB5E763FBDBC1F8BE3440B_gshared (XRSaveAnchorResult_t30DC9C1CC8C9B5A35D3846C455096D08A6462DC8* ___0_destination, XRSaveAnchorResult_t30DC9C1CC8C9B5A35D3846C455096D08A6462DC8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRSaveAnchorResult_t30DC9C1CC8C9B5A35D3846C455096D08A6462DC8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRSaveAnchorResult_t30DC9C1CC8C9B5A35D3846C455096D08A6462DC8* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRSaveAnchorResult_t30DC9C1CC8C9B5A35D3846C455096D08A6462DC8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRShareAnchorResult_t95B469D173113A88AA354217BF5D53FEF0C9D86A_m94DA7BE26FAAAC76A809F6FCA1EC224590BE3D18_gshared (XRShareAnchorResult_t95B469D173113A88AA354217BF5D53FEF0C9D86A* ___0_destination, XRShareAnchorResult_t95B469D173113A88AA354217BF5D53FEF0C9D86A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRShareAnchorResult_t95B469D173113A88AA354217BF5D53FEF0C9D86A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRShareAnchorResult_t95B469D173113A88AA354217BF5D53FEF0C9D86A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRShareAnchorResult_t95B469D173113A88AA354217BF5D53FEF0C9D86A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_mAB9F690A1A2864AB907B4CFB284DDA1BAD22796D_gshared (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* ___0_destination, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_mA695F7A68B0D671FA60DC477060D48FBB46FA14C_gshared (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD* ___0_destination, XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m2B0C4082C0B487E3006943B0E9EDA1D843081A2C_gshared (XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75* ___0_destination, XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrCompositionLayerCubeKHR_t5BAEC63B4BC90A18B45724CFD3076616FE04A9B9_mBB1EAAFCDDC97E75C516D99305D37BA88ED3D605_gshared (XrCompositionLayerCubeKHR_t5BAEC63B4BC90A18B45724CFD3076616FE04A9B9* ___0_destination, XrCompositionLayerCubeKHR_t5BAEC63B4BC90A18B45724CFD3076616FE04A9B9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrCompositionLayerCubeKHR_t5BAEC63B4BC90A18B45724CFD3076616FE04A9B9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XrCompositionLayerCubeKHR_t5BAEC63B4BC90A18B45724CFD3076616FE04A9B9* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XrCompositionLayerCubeKHR_t5BAEC63B4BC90A18B45724CFD3076616FE04A9B9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrCompositionLayerCylinderKHR_t307A3A009D762E5668B5EF400FAEBE362A1A63BE_mD21EE17CA7C7D65E59754E6C27429F01B90B9F96_gshared (XrCompositionLayerCylinderKHR_t307A3A009D762E5668B5EF400FAEBE362A1A63BE* ___0_destination, XrCompositionLayerCylinderKHR_t307A3A009D762E5668B5EF400FAEBE362A1A63BE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrCompositionLayerCylinderKHR_t307A3A009D762E5668B5EF400FAEBE362A1A63BE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XrCompositionLayerCylinderKHR_t307A3A009D762E5668B5EF400FAEBE362A1A63BE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XrCompositionLayerCylinderKHR_t307A3A009D762E5668B5EF400FAEBE362A1A63BE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrCompositionLayerEquirect2KHR_tAEFDCF4ECA8DD83056454FE0418C482762FDAC0B_mBFC48E7C4872BF705753565EA046064CA49C6468_gshared (XrCompositionLayerEquirect2KHR_tAEFDCF4ECA8DD83056454FE0418C482762FDAC0B* ___0_destination, XrCompositionLayerEquirect2KHR_tAEFDCF4ECA8DD83056454FE0418C482762FDAC0B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrCompositionLayerEquirect2KHR_tAEFDCF4ECA8DD83056454FE0418C482762FDAC0B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XrCompositionLayerEquirect2KHR_tAEFDCF4ECA8DD83056454FE0418C482762FDAC0B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XrCompositionLayerEquirect2KHR_tAEFDCF4ECA8DD83056454FE0418C482762FDAC0B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrCompositionLayerEquirectKHR_tDBE1C1BD5B92821C6986C4BB2A35C94C5F20273D_m64C6AC2AC0FAB2A090DEE519BC630995279D80D3_gshared (XrCompositionLayerEquirectKHR_tDBE1C1BD5B92821C6986C4BB2A35C94C5F20273D* ___0_destination, XrCompositionLayerEquirectKHR_tDBE1C1BD5B92821C6986C4BB2A35C94C5F20273D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrCompositionLayerEquirectKHR_tDBE1C1BD5B92821C6986C4BB2A35C94C5F20273D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XrCompositionLayerEquirectKHR_tDBE1C1BD5B92821C6986C4BB2A35C94C5F20273D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XrCompositionLayerEquirectKHR_tDBE1C1BD5B92821C6986C4BB2A35C94C5F20273D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrCompositionLayerPassthroughFB_tDC0674AB51E0A2B9BB6EAD2F2C63622B39093A67_m9029E7EBC3CE1E4E5B0EEC56DAF51528EF449D56_gshared (XrCompositionLayerPassthroughFB_tDC0674AB51E0A2B9BB6EAD2F2C63622B39093A67* ___0_destination, XrCompositionLayerPassthroughFB_tDC0674AB51E0A2B9BB6EAD2F2C63622B39093A67* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrCompositionLayerPassthroughFB_tDC0674AB51E0A2B9BB6EAD2F2C63622B39093A67* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XrCompositionLayerPassthroughFB_tDC0674AB51E0A2B9BB6EAD2F2C63622B39093A67* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XrCompositionLayerPassthroughFB_tDC0674AB51E0A2B9BB6EAD2F2C63622B39093A67>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrCompositionLayerProjection_tBE972A41CF04DCC231148ECCE8A64610086A4DB6_m785B5D820C255FD8DE38F916E6D865F0EC97E472_gshared (XrCompositionLayerProjection_tBE972A41CF04DCC231148ECCE8A64610086A4DB6* ___0_destination, XrCompositionLayerProjection_tBE972A41CF04DCC231148ECCE8A64610086A4DB6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrCompositionLayerProjection_tBE972A41CF04DCC231148ECCE8A64610086A4DB6* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XrCompositionLayerProjection_tBE972A41CF04DCC231148ECCE8A64610086A4DB6* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XrCompositionLayerProjection_tBE972A41CF04DCC231148ECCE8A64610086A4DB6>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrCompositionLayerProjectionView_t1C36F183684433DC8CE8D44081F5B482942ABD96_m97240385BAFAA08B7543C304E985FB7CB18AA444_gshared (XrCompositionLayerProjectionView_t1C36F183684433DC8CE8D44081F5B482942ABD96* ___0_destination, XrCompositionLayerProjectionView_t1C36F183684433DC8CE8D44081F5B482942ABD96* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrCompositionLayerProjectionView_t1C36F183684433DC8CE8D44081F5B482942ABD96* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XrCompositionLayerProjectionView_t1C36F183684433DC8CE8D44081F5B482942ABD96* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XrCompositionLayerProjectionView_t1C36F183684433DC8CE8D44081F5B482942ABD96>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrCompositionLayerQuad_tE5378EE301957F86177C5EB1AD34D55B87A871F5_m0B240D7F6CEFC740D7CB958450195E42D628354D_gshared (XrCompositionLayerQuad_tE5378EE301957F86177C5EB1AD34D55B87A871F5* ___0_destination, XrCompositionLayerQuad_tE5378EE301957F86177C5EB1AD34D55B87A871F5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrCompositionLayerQuad_tE5378EE301957F86177C5EB1AD34D55B87A871F5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XrCompositionLayerQuad_tE5378EE301957F86177C5EB1AD34D55B87A871F5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XrCompositionLayerQuad_tE5378EE301957F86177C5EB1AD34D55B87A871F5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIl2CppFullySharedGenericAny_m7051201F0F2C986AB0084FB4A24BEE4D4733C5EB_gshared (Il2CppFullySharedGenericAny* ___0_destination, Il2CppFullySharedGenericAny* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1 = ___0_destination;
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		V_1 = L_2;
		uint8_t* L_3 = V_1;
		Il2CppFullySharedGenericAny* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_6);
		uint8_t* L_7 = V_0;
		uint64_t L_8 = ___2_elementCount;
		int32_t L_9;
		L_9 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_3), L_7, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_8), L_9)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_002f:
	{
		Il2CppFullySharedGenericAny* L_10 = ___0_destination;
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		V_2 = L_11;
		uint8_t* L_12 = V_2;
		Il2CppFullySharedGenericAny* L_13 = ___1_source;
		uint8_t* L_14;
		L_14 = il2cpp_unsafe_as_ref<uint8_t>(L_13);
		V_1 = L_14;
		uint8_t* L_15 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_15);
		uint8_t* L_16 = V_3;
		uint64_t L_17 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_19);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20;
		L_20 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112, L_19);
		V_4 = L_20;
		intptr_t L_21;
		L_21 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_12), L_16, (uint32_t)((int32_t)(uint32_t)L_17), L_21, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_mE1C20BE133A63D6CC6948C9487F57339C0BC8F32_gshared (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___0_destination, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m1FE843767EBB89D4C9C6B1733207A4734A84E113_gshared (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m01F6470836C56C7320DCDD3F7E32BED921C0F96B_gshared (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___0_destination, float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float4_t89D9A294E7A79BD81BFBDD18654508532958555E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m51100B40C91645487D1AAD6E5794EC56F2A63181_gshared (float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* ___0_destination, float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D_gshared (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_destination, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisquaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_m52E1497C43DE412479D7444BCD2225259751DD64_gshared (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* ___0_destination, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_m40072B0EFF3B1DE1152D26699459AA597C9F2D80_gshared (PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4* ___0_destination, PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m374FD45DB3712CE8C4E9C2E21951BF4B61FE868D_gshared (ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* ___0_destination, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisStatKey_tFBC0C9E97F42144729CBEBFDEC477C9BAFC45925_m2E388E4BCD6587A515D7252CC71BAF62CF1370C8_gshared (StatKey_tFBC0C9E97F42144729CBEBFDEC477C9BAFC45925* ___0_destination, StatKey_tFBC0C9E97F42144729CBEBFDEC477C9BAFC45925* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		StatKey_tFBC0C9E97F42144729CBEBFDEC477C9BAFC45925* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		StatKey_tFBC0C9E97F42144729CBEBFDEC477C9BAFC45925* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<StatKey_tFBC0C9E97F42144729CBEBFDEC477C9BAFC45925>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPerCameraInstanceDataArrays_tA74F6F16B77B98DDC6E582A261525D7ECD12C07E_mC1F537B7B0AD2FB7FBDCCD877BAE7D97876D589A_gshared (PerCameraInstanceDataArrays_tA74F6F16B77B98DDC6E582A261525D7ECD12C07E* ___0_destination, PerCameraInstanceDataArrays_tA74F6F16B77B98DDC6E582A261525D7ECD12C07E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PerCameraInstanceDataArrays_tA74F6F16B77B98DDC6E582A261525D7ECD12C07E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PerCameraInstanceDataArrays_tA74F6F16B77B98DDC6E582A261525D7ECD12C07E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PerCameraInstanceDataArrays_tA74F6F16B77B98DDC6E582A261525D7ECD12C07E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B_m27C842FDDC4609D12CC008E33EE82FE9F88ABF2B_gshared (PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* ___0_destination, PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSplitInfo_t708E0734C9BC407BA5882105A9721756605C913A_mFAC4CA3124027F9D2ACDDEEAED00CC1B73CCB7C5_gshared (SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* ___0_destination, SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m813F1148740DAFFA881F611962FCA84DE45742A4_gshared (AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* ___0_destination, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInfo_tA3039772991DEEDBC29A00439A055C5166133A27_mDD4BB16024FE8319599CDD76F5E7529158D977F7_gshared (Info_tA3039772991DEEDBC29A00439A055C5166133A27* ___0_destination, Info_tA3039772991DEEDBC29A00439A055C5166133A27* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Info_tA3039772991DEEDBC29A00439A055C5166133A27* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Info_tA3039772991DEEDBC29A00439A055C5166133A27* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Info_tA3039772991DEEDBC29A00439A055C5166133A27>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInfo_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84_m4459B99AC69CF7BAD0540083B494271EC495A353_gshared (Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* ___0_destination, Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRequest_tAA55F47806E39B0E19B53273DCBFB5CF457F9187_m602BF5309F0C6B80514810B5E212FF9AE24BAF58_gshared (Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187* ___0_destination, Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mAE7A77FA8C0635FAB0E0B125C31FDF0DDAB972D0_gshared (BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* ___0_destination, BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m748375D298CF0CFDB00586CA14508B83AFF1EABE_gshared (TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* ___0_destination, TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_mCCC9E64E51DF62CEBFC029AB9042DF9EE6ED4553_gshared (OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* ___0_destination, OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m72FFBAE30B1F456A77DD43B5E122CC44C2E7EBBE_gshared (Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* ___0_destination, Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisParticle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D_mA929FEB33B3B9BCAFCA4E7A00455F81DF8D7C077_gshared (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* ___0_destination, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBrick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0_m991D7C18C9D456BE72563A3353755563F1C81E5B_gshared (Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* ___0_destination, Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_m7AF8542D5D6488FC667EDE92FC22F56CE2241189_gshared (SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* ___0_destination, SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948_m427CDFE46D4CC628C19ABDAB8DE106E667CA228D_gshared (CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948* ___0_destination, CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C_m597AEFDEA861960C01875FED55DA2DFD78E4B50C_gshared (CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C* ___0_destination, CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m47BAB4AC929DEF79404CCB3EC8AA33FF067DAC26_gshared (LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED* ___0_destination, LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSlot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_mA80B75EC509DDA1E958A97AEAF0D2B7F9E5E23D2_gshared (Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127* ___0_destination, Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRune_tE8DB196113D1DBF48E710C120CC50D2AD7D5915E_m808B9ED32CAD5D10F627D7FD60EA2705C8DD953B_gshared (Rune_tE8DB196113D1DBF48E710C120CC50D2AD7D5915E* ___0_destination, Rune_tE8DB196113D1DBF48E710C120CC50D2AD7D5915E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Rune_tE8DB196113D1DBF48E710C120CC50D2AD7D5915E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Rune_tE8DB196113D1DBF48E710C120CC50D2AD7D5915E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Rune_tE8DB196113D1DBF48E710C120CC50D2AD7D5915E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrCompositionLayerAlphaBlendFB_tCE9F92B7566F1D7C57AEF4056E7143294181B7E9_m3EB75097ED6868DFCE085264FFCB484FA38DAC37_gshared (XrCompositionLayerAlphaBlendFB_tCE9F92B7566F1D7C57AEF4056E7143294181B7E9* ___0_destination, XrCompositionLayerAlphaBlendFB_tCE9F92B7566F1D7C57AEF4056E7143294181B7E9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrCompositionLayerAlphaBlendFB_tCE9F92B7566F1D7C57AEF4056E7143294181B7E9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XrCompositionLayerAlphaBlendFB_tCE9F92B7566F1D7C57AEF4056E7143294181B7E9* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XrCompositionLayerAlphaBlendFB_tCE9F92B7566F1D7C57AEF4056E7143294181B7E9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisXrCompositionLayerColorScaleBiasKHR_tB2B854CDD36142A63E1EF24A3486A7B13C36A392_m8861F09B246454BA97D2F9C4E1C10D1A56BDB914_gshared (XrCompositionLayerColorScaleBiasKHR_tB2B854CDD36142A63E1EF24A3486A7B13C36A392* ___0_destination, XrCompositionLayerColorScaleBiasKHR_tB2B854CDD36142A63E1EF24A3486A7B13C36A392* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		XrCompositionLayerColorScaleBiasKHR_tB2B854CDD36142A63E1EF24A3486A7B13C36A392* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		XrCompositionLayerColorScaleBiasKHR_tB2B854CDD36142A63E1EF24A3486A7B13C36A392* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<XrCompositionLayerColorScaleBiasKHR_tB2B854CDD36142A63E1EF24A3486A7B13C36A392>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 88583
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BurstCompiler_CompileDelegate_TisRuntimeObject_mB4980C27A8A7811AFE1E3DD48A5EA8F4F8EFDC19_gshared (RuntimeObject* ___0_delegateMethod, bool ___1_deterministicCompilation, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	void* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstCompiler.cs:168>
		RuntimeObject* L_0 = ___0_delegateMethod;
		bool L_1 = ___1_deterministicCompilation;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_Compile_mC306A324A84C4FE0E531B4374D61D7F00A607061(L_0, (bool)0, L_1, NULL);
		V_0 = L_2;
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstCompiler.cs:169>
		void* L_3 = V_0;
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_3, NULL);
		RuntimeObject* L_5 = ___0_delegateMethod;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Delegate_t* L_7;
		L_7 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_4, L_6, NULL);
		V_1 = (RuntimeObject*)L_7;
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstCompiler.cs:170>
		RuntimeObject* L_8 = V_1;
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_002f;
	}

IL_002f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstCompiler.cs:171>
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 88591
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 BurstCompiler_CompileFunctionPointer_TisRuntimeObject_m9AB9AE50036FBC10C6765A0FAC83200CAEC21384_gshared (RuntimeObject* ___0_delegateMethod, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	void* V_0 = NULL;
	FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstCompiler.cs:323>
		RuntimeObject* L_0 = ___0_delegateMethod;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_1;
		L_1 = BurstCompiler_Compile_mC306A324A84C4FE0E531B4374D61D7F00A607061(L_0, (bool)1, (bool)0, NULL);
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstCompiler.cs:324>
		void* L_2 = V_0;
		intptr_t L_3;
		memset((&L_3), 0, sizeof(L_3));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_3), L_2, NULL);
		FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3((&L_4), L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_4;
		goto IL_001d;
	}

IL_001d:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstCompiler.cs:325>
		FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 L_5 = V_1;
		return L_5;
	}
}
// Method Definition Index: 88585
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler_VerifyDelegateHasCorrectUnmanagedFunctionPointerAttribute_TisRuntimeObject_m4B6D0A0C15F61050E88A3C96EF07E76C4EF5DC85_gshared (RuntimeObject* ___0_delegateMethod, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisUnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833_m26DF826A20F7C37269D72198549354AC5E8A3C6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5311420545596C9B1638507268F520A401FE62C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67C4031EAE3C5DCD4BEFE0E373EB416000EDAAAD);
		s_Il2CppMethodInitialized = true;
	}
	UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstCompiler.cs:186>
		RuntimeObject* L_0 = ___0_delegateMethod;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* L_2;
		L_2 = CustomAttributeExtensions_GetCustomAttribute_TisUnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833_m26DF826A20F7C37269D72198549354AC5E8A3C6C((MemberInfo_t*)L_1, CustomAttributeExtensions_GetCustomAttribute_TisUnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833_m26DF826A20F7C37269D72198549354AC5E8A3C6C_RuntimeMethod_var);
		V_0 = L_2;
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstCompiler.cs:187>
		UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = UnmanagedFunctionPointerAttribute_get_CallingConvention_m1F7BA425C1936CAA9F62483B4699A4DB52B887A6_inline(L_4, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_5) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 1;
	}

IL_0024:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstCompiler.cs:190>
		RuntimeObject* L_7 = ___0_delegateMethod;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_8);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral5311420545596C9B1638507268F520A401FE62C8, L_9, _stringLiteral67C4031EAE3C5DCD4BEFE0E373EB416000EDAAAD, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)L_10, NULL);
	}

IL_004f:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstCompiler.cs:193>
		return;
	}
}
// Method Definition Index: 88584
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler_VerifyDelegateIsNotMulticast_TisRuntimeObject_m5BEC9A691C1152B254CAE08B153BDB2E1344D5A5_gshared (RuntimeObject* ___0_delegateMethod, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstCompiler.cs:176>
		RuntimeObject* L_0 = ___0_delegateMethod;
		V_0 = ((Delegate_t*)IsInstClass((RuntimeObject*)L_0, Delegate_t_il2cpp_TypeInfo_var));
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstCompiler.cs:177>
		Delegate_t* L_1 = V_0;
		NullCheck(L_1);
		DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* L_2;
		L_2 = VirtualFuncInvoker0< DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* >::Invoke(9, L_1);
		NullCheck(L_2);
		V_1 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) > ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstCompiler.cs:179>
		RuntimeObject* L_4 = ___0_delegateMethod;
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9E8B6F20D65FFFC0BC56A6D76C920145A8DCD2F3)), L_4, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0033:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstCompiler.cs:181>
		return;
	}
}
// Method Definition Index: 88685
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstRuntime_GetHashCode32_TisIl2CppFullySharedGenericAny_m668EC99E5F95164E178998B9A0D2FAEC5D229CD3_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:25>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((HashCode32_1_tD2DD63035F543FDD8643588FA88CD9475D8107B9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:26>
		int32_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t97F62BD9B81457B3C951E4731A189682A75B0618_m452E81BDA5B4D572CBC1C0B2FA4D5609D578A502_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:46>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t45C902BA4A85819B6C31A686FF699BD734C810A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:47>
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t4B219CBD450518068824DE0C112518BC2384C721_mE16070B428834E590A710A12F880FFDB3DE9F24F_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:46>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tE592078EFC6F2A37620503BFAB99FEF70B71584A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:47>
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t2D0A24921EF91E7ECCFCEC7F881A27622B8F2A70_mB967F2697C91AB840A9202023B02D8465000F449_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:46>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t843A0CF337E84638F3DEB38ADAFB4FC2204CA22F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:47>
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_tDEDFF5AAAAB5E27B5407F785CADB44D5C49A5569_m9998B05F2190180A10643F6ED92B83742FC8B0C1_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:46>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t0F7F318DD075E9C223756ACB1EDBF7D958229B29_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:47>
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t22F6437423C8358C2B339F95765F78F5F8BD4F53_m4B2F414EE8C82B5AF5DC54337C5C551542E9357F_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:46>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t0ACA98F4491C7F60FE0D181818A742841460CD8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:47>
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t5416C130E1EB160356EDEFA984F1EFBBC000B619_mDB20CC8747BA2E67840C9176B33262FB3005A551_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:46>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t4E5438AF3FCF64994CE36C0242CC6580083C6276_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:47>
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t58F74E58E137EF1DE356A985ABA4748586462B89_mF8D2B2184797A3249B22C20E9CE3037E58760AB5_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:46>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t6609EC1C8FD637D0704C9D40931A83EE7EBCA23D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:47>
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t69439B0894C33F9B27AD85917AD7E0DAE9016112_mAF531E97828F6EA873611A4571BDDD25F990D368_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:46>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tD3243DF9FA8B7B703E45F521152F4E500EAA808E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:47>
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t655382769C4282682A84F553F5FF0B1AB97370EA_m9ACB4FE7846789D8E3F49F5DED3B35839E51B0E6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:46>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t6494BEDFB3823C50BCCE1457CC83EBABF9FC3718_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:47>
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t3E06B0B953E3304DB73E71071FC7DB2646022C2C_mAB129228331E6149CB76835022FC9F8E60D2B347_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:46>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t1E9825203BCACDE03EA9806FA3B6D9667833FDB7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:47>
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t18FA6B9845CACA8547C4FAEAC0C5FF7C6E487DAF_m5764084E845D08310A8F59782C5314965084EFE7_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:46>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t7F36E26E9C60DAE7E6BF03E72A6B9BEB0E70508E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:47>
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t1CDF7FDFE988A5218A7D870586CD04293F25682E_mB3F1D65A7AF0C35CE47E0AAD490420B640CF00C1_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:46>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t728259C125E4C28AE80A80B41491CF221EF1B9B7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:47>
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_tE8D83243564C34800FF950A808D4733A2ACB852D_mB6A684433C5061494098A9D16C1215872FC44AB3_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:46>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tDA241AE7DD0993FBFA911AC316BB51A154854AC7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:47>
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t93B90034EC7615CA68546F4CF38E2C812CB52105_m0460A39EC62EA75F5D6D35DE720B842933C70F79_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:46>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t09ABD1A71EC5CE3684E6F1DA80681B54DB1691B5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:47>
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisIl2CppFullySharedGenericAny_mDBD3D49859D60324F44B9713584BA42CD4CCB3A5_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:46>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tA49B79C998BF9022A0836C168EC2089C5ABCBE43_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.burst@1df634d836b8/Runtime/BurstRuntime.cs:47>
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_t82FE1DCC76AE9AF3DDDA1472151EEF68858CE976_mF406F4A8EEDB21069BF045968FB3647C0C412AB5_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tBE03AFEF199A91EC38E3678A953160AFBAEA044F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_t531492AAE2A0CC46F30E1151715140443DF9EBDE_m197451F45A6299E4DFC983447A2B1235A2E701F5_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t772DFCA20062D55EF275D420692E6231EFE8C99A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_tFA026EED004440AB13FB96680FBB802EC06A0637_mB27A7FF33AAB386045C7BA54F75FB7741AF795F6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tDBBA29E0FF58D0BD292B04DADFEFA25FAF30082F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_tAB70A942463BA39DC3970BA6B694CFE5D0D966DD_m786D0CBF87B2E6BFCA616B6D8D6F4132F58DB29A_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tEFE47363FE9BD2DA23EF9C44B91C8401015063BE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_t6E436619321F6CA11F646C1D0865C3B46ED2499F_m368D6F5F31DECCC50791A2FC184DE5274DA0A313_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t0AE3CC08D24A1BE759562DBCEEA6B459AC8507E3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_t0827DBBBCFCD98D0F017FC5D16C42BF77EF3C7CB_m502E3720DA119E62B3950310E875FCD9F7730638_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t4200429421A827A0B5F3036C1DB9D66CCB8B0445_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_t7D4041DF12531E7E97FBE35B3D9BEE667D648D1C_m87B66E17E92304247CFE304E03375B5ADC85B844_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t19BA4FD53EFCDB3494D3E641F479A304B0A42D21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_t071E29BF77D320738D7C5491E147758B1DF5A972_mAC32C7C3D3791BFA6903ACD4B038F7C44F2E5029_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tB6E735C2CEB2283242D5171F9F071C4076FEB378_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_tF0D5C70B0548157708D433CE2F9B065804239845_m488BD3FCCAD1B7B5720EB3BA57F1E1547EE28C17_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t088700758E948CB3167EC6E10FD03B1B11125586_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tB335BE3E222FEFFBA94D48B738E26C60BB280AD4_mCED504886A1F077D04BE6D54EA15A0C341D74230_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tA3E7348CF613CEAF3CEA3485D9D30F9A483610A1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tFEA4DAEC6ED9ECAE927762DB0E342EA58DAF490D_m475CE9B77333D88A4BDF8A4B117E7BC04E9962DC_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tE107908E33390D300CA7EA607BC5492367C0E04A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tABDFF6F2A945E4308406F08BB647B0C0F00CD52A_m22DA6D3A8B076002320B7F3475A98FEC2705E457_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t5CFE0BB846695197039F80F1EBB2F6FDA67A3B17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t272AAD0C3E4EE4C3B605F75C72B467A38D39DFF0_m079E602096D050DAEC72DD53869EAC56CDC2210D_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tEE921473855F84F06431FF1885DE5AA655ACA5E2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t7235301FC6E45A8AC3E737816183B1EF87DF5783_m437E42EF3F4678634C3BC7AC8F18A5DEE7B4595A_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tBC76642E2A87985829E2A60A02BB3064D76FBD76_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t561A0084CA62252F631E395D647CB9286E390B22_mB513167832C59FA1CE78C78AE8A320C844AE3948_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t6A39614B794541C46762557A44A11A8092D077BA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t9ED727D56D4E63907D11A47FADD26F3A1778FCA6_mC3EC3BAEEFF3DFFB8D871C1C68C50EC16D8BA669_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tAACED5C219BCE704BB23DEE5411688A66F4FA312_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t0E1EA68CC733192D5C0DC9BE19DEE329F74C074D_m988F1957834AD1F8063D2B90A11D3C99A5D9DF1B_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t6486E3C865F1211D498A95362EA771CDFE256DED_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t00917949B940AC19091B997DCFD370DFECE38FE9_m3C646029675CC25C9D06BE2B7C4B34752E8A9255_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t33425DAD62BA77C00555B8218BCC45319A29B991_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t6EB9A6D4E1ECE62B02A7E3ACBEB37B6B25B89E7F_m1327474A75AFE89176F5E070BCCFEC18E2E9E363_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t9A899B4771FBF788C65EC3AAED858797329647AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t890D9223E4EB910E7788D46FA6ABDEDE1352182A_m96514D159AD286C785D797E437C10095BE5D8E5C_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t6D9D3CEC802B9E24CA6ABA6FA982B615B2DC8196_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t9C24DB4B7EE6A1CD756F9C6708F31C9AEE702F66_m32735A0D7E89B780F844FA90D4A39893F6D1ACBD_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t5AB59BEFEDF62F7AA82DF462D661D14F572822AB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t5B7D8154095323B2AF129E93B24BC93BA2F1B833_mDDE7E31F4DA7BB727499E6D568971B4CD3415B6D_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t51A883EA9A52EBE95F05710B50C0A662C53D201D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t8B199FB4EF242DFFFAD1DCD519F636EAD8F17289_mD6AAE56D82AF54522E2E58548C6EF765B39979C6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t73EDE881A4A610E09E76E2E3589D30974001309C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t424D70E5F52FE05C9A6F5A74306B282E536A5950_m3371C825174AF1CC12C4CF523B770EA787B74D24_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tB033103B595D25458BCF189B1B8FEEDC765C6DD9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t4C0B7BF9853E55BE375E3304E31593FEFCD76E16_m452BCDE130A057AC5D39927415370370E5F354A8_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t4EEE3EED6A1F40DD523EC9B520CEDF73603F903F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tA47F731959268B5473E0B848F4BB1867DC24BA49_m0ADB08E94B58501A9EEDBBE3CCA26FA2F2F6E01C_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t540AB6784E401BA021A24A6FDE63F1CB91615951_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t8945D0C1062873D441B458483BA77CECF20CF088_m099D22518DABE349D2EBC1348091BB7AB19600A6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tBB94DF557F1073A1974A322A1A44C7126DA37529_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t0FA796943B0D2D4AF0282F204C8777E2571688D7_m1ACD092F5C667A34D4D34B762F7BE433DDB8E862_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t940007CBF08B5ABD14D7423675D4910FE0B9755B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tB0658A7306F669774009ADA5DB6E265BA665FD31_mEE5EB1CDD0123FC328BC532FD3C38DE0BA22F956_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t3A727467BDFEAFF7A4CB568E28A00E4D6B4EC69B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tCF007F6FD9F2D7FE1B2F0674ED2A883398ECD985_m41F6B8256DA51907C52548DD3610E514BC1CAC3F_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tF27C6D205FED69279D60297E9A62238FADF949C1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tCD9B3C6D38D8AF72A86B9F56734D86306FEDD5DC_m5271D5B24A20ADABAAE9DD780065EA70B2877D08_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tD186BF1D3333DE229C5889A460A72BE2157D86ED_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t4F5903869E367062B5BCB8C3CFDF5F24C54CB47D_m98022EC91DAAEE029D06C9B790F840C41FFBD48A_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tFFAEB5550C895D9E253E19192C06C5E88CB6410A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t7DA9941879B20347789683661078D0F3B528FA92_mEE7AA46A6B6D93672B53EED9FE5F5A72E6BE93D6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tAC13F0ACD4FE21581D24A405FB04DC6CE62107F2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t991D9919F0467821B9AA3F6C283A7962DD7A5746_m90F7668BA98B6909311FB180037DE1A5F682F582_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t1E6FA524337B539C19D5D02E0DB5A26462E0B389_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t4893E7C416E7915C2BE94817517EC2CAEEA9038D_mA0A18913D2D0AB9A96A68D300970949DFD57D129_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t2F229ECC88B28D532EE6550312AB5B1B2294B745_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tE9B102673F655EDBF297325B9BAC26D3EB778B06_mDF93F1372A78E3147EE964B10FDD47C11A560BAD_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t2B83362CA7E70B86BD1A86B8D27E4F1672407417_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tA8B20712F962741B4C99A90D99EA0DD77C2D18E6_m2EED024A3C8427F8288AAFC3748B623362CB492E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t30B8776A1E8404F1E19F165E08E9312037B19FCB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tB734C09BFD6922AB895D644BDDE01AC7A8510C72_m70C39B892FC51A321297F6E0BC020F011F5D5DC7_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tCA0BC36BEF1B0537653D2C164EBFB71E2E7FE57F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t26D49AAB3F1B079B680DAE4C2A28F2CAE89DDA72_m20CBFF16570F598FA2A8824BF4784C09E62FCA76_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tC86B716B0629811F38CCA2922A9A6E9128F7B487_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t7FF8E576D3C8BC4DD24F19FD6E0906888CAC2717_m48C2320147024B006FF2AB2AE1912119619621AB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tEEB1F167CB1FF50533D39ECB4E2F4DB8F48095BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t256A7C289152588D86B81F532D204650E6E00EB3_mFCA610F77730580DC1EC779587CF0AF8FFE68852_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t0E540E776B4BA9631D2B21027E3D44679BBFDE7E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t1AD15154F5FCF717FDB6B0B280C49766B4D14137_m121BAD3952F93497FCBC7390F47A4F41D95E2942_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t9F79C5D3EEDC24E31844F18936B7A7152BDF014E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_tE984E806290C7040E2250FBF1CD156D4A87ABBE3_m56DBA8A70CE0395345DB4653A6D256512E190674_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t6D41DDF544ECC8EE81B2FB170732F8772126D088_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_tB4C2158B416D17DDD248CD1F2E0DFEF8327BC4D6_m4561829ED91A55C7CFBD45460A6F4F79FCA7D82E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t4649F2A499D1914EAA249B234F1CB3520A35611B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t3A8A42DAD793B23D2241DB02123DC82D94540077_mA95EBAD9D1218F5BF3D7B68F7C5DC25E5BF9FDB2_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t5790CE2F2438D15349F095BE3E9037ABECD3B630_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t27C350DE7B8F627BFCE779F296EE44797353D1D0_m193CCE88074CAFF2BBC5CC7767436D45280E3187_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t7CFB081FDD903CC5A200D3CD6E79CA92462EC9A5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t38084700F299A46ADC6D51D6FD7EB3D0F9962EDC_m39892862746C23F37D72D90975D5AF814FAE566E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t27DC634456476CF1B4E26CE9E1613932D5D5E1F2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t2697899555706F25E6AE86F2432578842EC621D1_m81120983BCB0CC307EBDE9A9161E31149D575AD4_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tE4E9A886FAEA128F91F4BB47288E327F2FB2A590_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_tFACC866905D6567AEEC22CB2DC9ADC44CD3A3749_m1EFC5D1FD1C2C175BEFBC57C1DC692EA9CA3C32E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t4F950A3008EC05FB0D982995E52C8556C2715A4C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t7434969E913C9FF358CA6FB356F479AC1D346C8E_m6559B976CEFF9A05DC2CCB3353DC4AF41FA8BC66_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t669DED3659FCA6EC161B7722CD2AFFBD8D48353E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_tACC0AEB51A3D8EF191C11C9C8B6358DFC00DACCC_m812FE05A1D9B245688F790744CF276DB21D0AA5C_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tC585CEA3A7F1AB7F02BFD57720D6DEBBA4E4006E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t961692D3952C1F6D4F30B6BAC07E9CD186C66F31_m9B85B3F2F624D2A830B87CF38F3AF795C2DF3DF7_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t38B65A784388197E4D694073DDD68712A68ECFBC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t127DC0EC2B18DEC0C2F09455A2622D5AE87476B1_mED9AD36D67FD0A72B313BC3C39618673F86DE519_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t2DA0C9954C5BD7571AFA7E5AD4667FBB415C1C55_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t61A705186AAB380E3217A488488A2004A869C090_mD28F4271673AE75D71ED35AB7AFE5A6944F797C7_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t210398908075A83F779422036BFAB63FFE5F85F6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t9E9CB87132A33EEF9E532A3A703C0D285ADB71E2_m42A47534A1D14217F01678F9E49A69A9978FDC93_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t162E0FE2417CF2171436BC6E9A0524E8CD7A331D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t758AE7966A2E22F06595DCBFF5CDD219207B71E2_m0074981E038B03BE3BD7A3722F34BBA7B030CA70_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t61B99859778637445427E508875C833C26007C3F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t509445D2125F0871131DA13B592FA4A9657F5AA3_m76EA61813D784CD25276DF68FD2116ED3C6930D6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t12646CDC1DEFCCFAE4EC21C2691E3AD07CC3243D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t7A9FF3D868A2F2AD69ED514B7607FD35D7819143_m3BA4B2B37F1F68CAE2E1E8B297BAF68F76E25038_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t7397C98D3A61DF788247816CFDDCFAB68F11FF31_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_tE3940B0A77A7F084149FB706BF7F1382C2CC6894_m3A569E9347079D503672607881ECA776C2B198E8_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tF4465274EC7B7ABA123154CB3244A352EDE2086F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t81FACA0319AA796083C8ECE95C995DB3542D8A2E_m63FE0B207F291F915D0805D84B8EA4CC93F6388F_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tABB39B622E5219D2DA172EACDEC8B74052BB164A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t4A21E4E3B137372075645DE6FE4A22ADC4598532_m33C2BFC6B23318AB472027B0E2DFA7EDD03A3A84_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tF6AB644D2ABBE925B3A3543F20FD5FB992312461_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t9E5F4A6DEFCAEEFDA5D7D16F86D49AF6F18DFBA0_mC868D7951E7B13E58A1845BA8CDA43F54206ECD9_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tA894B4C4BE3681992148A70D1492F8EEA6825E4E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t194E9263F9E278076331CFC3296E74ABAA89D391_mF521C55221FF0D0F2200C5A5881E77D03F6F1742_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t258221577FA59C0B1D9B188C325409BB62050DAB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t7CE30E4F7E5070AEDF18707A56561EF7C715ADD9_mBA8A54E3552535D1AF17EA90471BBD5D90A1EBA1_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tC28C1D947A4D0E70163666E4692F1B1CDCEC09A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t64F389F7CF0153EAF6AB628929F2873F0FD9A0A3_m5CB40651FAD4BD498147C7FD32D719ED2FBB9593_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t844B153ACA1ED334277B6FB6C7454250AF529FB4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t5FAFA25EADD61355075A981C5FDE8B3024C58F34_m841756BC0676293AB7A0012F688C3DCE69D1693A_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tE62B31A9B7BD017DBE50F2BC947FCDED9605A714_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisTransformParallelForLoopStruct_1_tB280C75DF37D8BB52EB670F970BDBDA72C40572E_m06EC66901E593B74D8BA09605435B77C5E846EEF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t1C4700728BA9E409FB64757DAADF1A0CC5A44DE7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 62124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisIl2CppFullySharedGenericAny_m469AED5D9ACBE5277201D8FD554BBB838C1256CE_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t25B99E9F7F998CC07CCA13124E03920779BFF803_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 88017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallSiteBinder_BindCore_TisRuntimeObject_m961EBCDD305E6F424D69473CC8CD52D1B6B954BB_gshared (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* __this, CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* ___0_site, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* G_B4_0 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* G_B3_0 = NULL;
	{
		CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* L_0 = ___0_site;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker2< RuntimeObject*, CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}

IL_0013:
	{
		LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72* L_5;
		L_5 = LambdaSignature_1_get_Instance_m2FC36F77390EB6EE252F45D081FAE81D7844975C(il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72* L_7 = V_1;
		NullCheck(L_7);
		ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505* L_8 = L_7->___Parameters;
		LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72* L_9 = V_1;
		NullCheck(L_9);
		LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* L_10 = L_9->___ReturnLabel;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_11;
		L_11 = VirtualFuncInvoker3< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505*, LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* >::Invoke(4, __this, L_6, L_8, L_10);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_12 = L_11;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_0035;
		}
		G_B3_0 = L_12;
	}
	{
		Exception_t* L_13;
		L_13 = Error_NoOrInvalidRuleProduced_m8089A28C6CC44A2552C1B44545B93D7FFDECB137(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0035:
	{
		LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F_il2cpp_TypeInfo_var);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15;
		L_15 = CallSiteBinder_Stitch_TisRuntimeObject_m65EB633CA022F223704B45E793C45A6F93A11A97(G_B4_0, L_14, il2cpp_rgctx_method(method->rgctx_data, 6));
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = Expression_1_Compile_mAE60BB2984F0B64C621A225AA174F670BBAE11EC(L_15, il2cpp_rgctx_method(method->rgctx_data, 8));
		V_2 = L_16;
		RuntimeObject* L_17 = V_2;
		CallSiteBinder_CacheTarget_TisRuntimeObject_mDD019200C926FE9CB1859EEFA10749E4AF1E11AB(__this, L_17, il2cpp_rgctx_method(method->rgctx_data, 9));
		RuntimeObject* L_18 = V_2;
		return L_18;
	}
}
// Method Definition Index: 88016
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallSiteBinder_BindDelegate_TisRuntimeObject_m935CC827F96C825DE48A3C334154CD221287BA46_gshared (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* __this, CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* ___0_site, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 88018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallSiteBinder_CacheTarget_TisRuntimeObject_mDD019200C926FE9CB1859EEFA10749E4AF1E11AB_gshared (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* L_0;
		L_0 = CallSiteBinder_GetRuleCache_TisRuntimeObject_m9DFDD3BB4F7106859FD2D993FF6564C86A42A818(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_1 = ___0_target;
		NullCheck(L_0);
		RuleCache_1_AddRule_m61F47C44A6CC48E4960F272156E04D520674B58A(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}
}
// Method Definition Index: 88020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* CallSiteBinder_GetRuleCache_TisRuntimeObject_m9DFDD3BB4F7106859FD2D993FF6564C86A42A818_gshared (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* V_1 = NULL;
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* V_2 = NULL;
	bool V_3 = false;
	{
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = __this->___Cache;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5** L_1 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5**)(&__this->___Cache);
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_2 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)il2cpp_codegen_object_new(Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E(L_2, Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E_RuntimeMethod_var);
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_3;
		L_3 = InterlockedCompareExchangeImpl<Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*>(L_1, L_2, (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)NULL);
	}

IL_001a:
	{
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_4 = __this->___Cache;
		V_1 = L_4;
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_5 = V_1;
		V_2 = L_5;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{
				{
					bool L_6 = V_3;
					if (!L_6)
					{
						goto IL_0063;
					}
				}
				{
					Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_7 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_7, NULL);
				}

IL_0063:
				{
					return;
				}
			}
		});
		try
		{
			{
				Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_8 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_8, (&V_3), NULL);
				Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_9 = V_1;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_11;
				L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
				NullCheck(L_9);
				bool L_12;
				L_12 = Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128(L_9, L_11, (&V_0), Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0058_1;
				}
			}
			{
				Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_13 = V_1;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_15;
				L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
				RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* L_16 = (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
				RuleCache_1__ctor_m14075A68C840AF130E76F8E368F13CEA3C58B955(L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
				RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* L_17 = L_16;
				V_0 = (RuntimeObject*)L_17;
				NullCheck(L_13);
				Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96(L_13, L_15, (RuntimeObject*)L_17, Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
			}

IL_0058_1:
			{
				goto IL_0064;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		RuntimeObject* L_18 = V_0;
		return ((RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC*)IsInstClass((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// Method Definition Index: 88019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* CallSiteBinder_Stitch_TisRuntimeObject_m65EB633CA022F223704B45E793C45A6F93A11A97_gshared (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_binding, LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72* ___1_signature, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionExtensions_AddFirst_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m15AF9739CD6782E3D5E7A0104026D106B7E5A974_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollectionBuilder_1_Add_m7BCB17F9583DA42087CE73F337A746C839BC82C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollectionBuilder_1__ctor_mCF63024DE6DEEFCB21F2ED015E7FF1638883D913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollectionBuilder_1_tC538D3AB8CEC6EA16BA4F10B4C2EC9F8570994B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42960449A18FA75AF2D9A7F9CDCC744B0EF455E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral565E9D17735F6EA5DB96ADEA2703F52CE74FCC0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64CED9ACA5100594B5AE03E19D83AAE6826BDAC0);
		il2cpp_rgctx_method_init(method);
	}
	Type_t* V_0 = NULL;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_1 = NULL;
	TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* V_2 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_3 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		ReadOnlyCollectionBuilder_1_tC538D3AB8CEC6EA16BA4F10B4C2EC9F8570994B3* L_2 = (ReadOnlyCollectionBuilder_1_tC538D3AB8CEC6EA16BA4F10B4C2EC9F8570994B3*)il2cpp_codegen_object_new(ReadOnlyCollectionBuilder_1_tC538D3AB8CEC6EA16BA4F10B4C2EC9F8570994B3_il2cpp_TypeInfo_var);
		ReadOnlyCollectionBuilder_1__ctor_mCF63024DE6DEEFCB21F2ED015E7FF1638883D913(L_2, 3, ReadOnlyCollectionBuilder_1__ctor_mCF63024DE6DEEFCB21F2ED015E7FF1638883D913_RuntimeMethod_var);
		ReadOnlyCollectionBuilder_1_tC538D3AB8CEC6EA16BA4F10B4C2EC9F8570994B3* L_3 = L_2;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_4 = ___0_binding;
		NullCheck(L_3);
		ReadOnlyCollectionBuilder_1_Add_m7BCB17F9583DA42087CE73F337A746C839BC82C9(L_3, L_4, ReadOnlyCollectionBuilder_1_Add_m7BCB17F9583DA42087CE73F337A746C839BC82C9_RuntimeMethod_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_7;
		L_7 = Expression_Parameter_mF825EFB5FBAABE8355C9D44B286AB4EA02F8B992(L_6, _stringLiteral565E9D17735F6EA5DB96ADEA2703F52CE74FCC0D, NULL);
		V_1 = L_7;
		LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72* L_8 = ___1_signature;
		NullCheck(L_8);
		ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505* L_9 = L_8->___Parameters;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_10 = V_1;
		TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* L_11;
		L_11 = CollectionExtensions_AddFirst_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m15AF9739CD6782E3D5E7A0104026D106B7E5A974(L_9, L_10, CollectionExtensions_AddFirst_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m15AF9739CD6782E3D5E7A0104026D106B7E5A974_RuntimeMethod_var);
		V_2 = L_11;
		il2cpp_codegen_runtime_class_init_inline(CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F_il2cpp_TypeInfo_var);
		LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* L_12;
		L_12 = CallSiteBinder_get_UpdateLabel_mFBA5DD59CA8778F201C1BA20B91270D17AC367FC_inline(NULL);
		LabelExpression_tEFEEB76D1A905275CA45F611E0ECAB5D1B2E6BFD* L_13;
		L_13 = Expression_Label_m6103C6071262F1D016038D1071BBD8669423C254(L_12, NULL);
		V_3 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_13;
		ReadOnlyCollectionBuilder_1_tC538D3AB8CEC6EA16BA4F10B4C2EC9F8570994B3* L_14 = L_3;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_15 = V_3;
		NullCheck(L_14);
		ReadOnlyCollectionBuilder_1_Add_m7BCB17F9583DA42087CE73F337A746C839BC82C9(L_14, L_15, ReadOnlyCollectionBuilder_1_Add_m7BCB17F9583DA42087CE73F337A746C839BC82C9_RuntimeMethod_var);
		ReadOnlyCollectionBuilder_1_tC538D3AB8CEC6EA16BA4F10B4C2EC9F8570994B3* L_16 = L_14;
		LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72* L_17 = ___1_signature;
		NullCheck(L_17);
		LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* L_18 = L_17->___ReturnLabel;
		MethodInfo_t* L_19;
		L_19 = CachedReflectionInfo_get_CallSiteOps_SetNotMatched_m16AFB8F966F100062FA34B82045DD718EB4536EF(NULL);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_20 = V_1;
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_21;
		L_21 = Expression_Call_mA9F5232733685D98799ED2992DDC0F1EA57EBD53(L_19, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_20, NULL);
		LambdaSignature_1_t79BF83C8165B38873B98601975C73C9CDF9D2A72* L_22 = ___1_signature;
		NullCheck(L_22);
		LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* L_23 = L_22->___ReturnLabel;
		NullCheck(L_23);
		Type_t* L_24;
		L_24 = LabelTarget_get_Type_mADC0685E37D8FD2990BFA36A3679AB7C5659143E_inline(L_23, NULL);
		DefaultExpression_t68E278AD7534F283D174570B240C596979B26533* L_25;
		L_25 = Expression_Default_m2D0EE74BD93E1D7DAB169DA8F013DC8B35FBB42D(L_24, NULL);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_26 = V_1;
		Type_t* L_27 = V_0;
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_28;
		L_28 = Expression_Convert_mD5233B60383B3FD0F5A044E4440FB32CBF9609D5((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_26, L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		NullCheck(L_30);
		PropertyInfo_t* L_31;
		L_31 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_30, _stringLiteral42960449A18FA75AF2D9A7F9CDCC744B0EF455E6, NULL);
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_32;
		L_32 = Expression_Property_m5C42C2C4783D3282226E02E655FDAD82347549EC((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28, L_31, NULL);
		TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* L_33 = V_2;
		InvocationExpression_tF4C0B5632B50926D11160CAFFD8703065C1F2B27* L_34;
		L_34 = Expression_Invoke_m1EFAE86A8EF6D2101ED9E6C1DFE5D1D1A7F5BC8D((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_32, (RuntimeObject*)L_33, NULL);
		ConditionalExpression_t4A487FB09E6FEA815F25AADA33335CD658B6A913* L_35;
		L_35 = Expression_Condition_m9365861D30BD7EB7F0AB862FCE588CCC919DCC7D((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_21, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_34, NULL);
		LabelExpression_tEFEEB76D1A905275CA45F611E0ECAB5D1B2E6BFD* L_36;
		L_36 = Expression_Label_m3695CEC6E9B2F17C15EBB94164366DDBD7D8EA8C(L_18, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_35, NULL);
		NullCheck(L_16);
		ReadOnlyCollectionBuilder_1_Add_m7BCB17F9583DA42087CE73F337A746C839BC82C9(L_16, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_36, ReadOnlyCollectionBuilder_1_Add_m7BCB17F9583DA42087CE73F337A746C839BC82C9_RuntimeMethod_var);
		BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* L_37;
		L_37 = Expression_Block_mDDD0D270B556671364021C7BD620924EBF4C18AD((RuntimeObject*)L_16, NULL);
		TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* L_38 = V_2;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_39;
		L_39 = Expression_Lambda_TisRuntimeObject_m208FF8532548F744FDC7715D12012D92B4B9CDC5((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_37, _stringLiteral64CED9ACA5100594B5AE03E19D83AAE6826BDAC0, (bool)1, (RuntimeObject*)L_38, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_39;
	}
}
// Method Definition Index: 88028
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallSiteOps_AddRule_TisRuntimeObject_mAC8F577F253E5DB698ED12E60A1213E7BC5AF8F5_gshared (CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* ___0_site, RuntimeObject* ___1_rule, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* L_0 = ___0_site;
		RuntimeObject* L_1 = ___1_rule;
		NullCheck(L_0);
		CallSite_1_AddRule_m4EF48DA8FDBFB7B3E8337024FF9C0FF98891FA72(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
// Method Definition Index: 88034
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallSiteOps_Bind_TisRuntimeObject_m051798C21C3CC4BC2971E9B576355670BD4B8F03_gshared (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* ___0_binder, CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* ___1_site, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* L_0 = ___0_binder;
		CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* L_1 = ___1_site;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = CallSiteBinder_BindCore_TisRuntimeObject_m961EBCDD305E6F424D69473CC8CD52D1B6B954BB(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
// Method Definition Index: 88024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* CallSiteOps_CreateMatchmaker_TisRuntimeObject_m1D5408774AC6F1914F1D698FC80F1048E0DCF1CE_gshared (CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* ___0_site, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* L_0 = ___0_site;
		NullCheck(L_0);
		CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* L_1;
		L_1 = CallSite_1_CreateMatchMaker_m7595A71137A6C478CA01981F495981356145FAA1(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* L_2 = L_1;
		NullCheck(L_2);
		((CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF*)L_2)->____match = (bool)1;
		return L_2;
	}
}
// Method Definition Index: 88033
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* CallSiteOps_GetCachedRules_TisRuntimeObject_m17E3008973CA1C55813D7FF3B78326A210B95CCC_gshared (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* ___0_cache, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* L_0 = ___0_cache;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = RuleCache_1_GetRules_mD30628F4B83C0F791FE5430259E0A25E5A5E3EEC_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
// Method Definition Index: 88031
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* CallSiteOps_GetRuleCache_TisRuntimeObject_m719152A4291EED8E1062E191E56D6AAE60F6201A_gshared (CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* ___0_site, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* L_0 = ___0_site;
		NullCheck((CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF*)L_0);
		CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* L_1;
		L_1 = CallSite_get_Binder_mA7D06DD00FEE519623E5D4CAF8A4009B1899DFCD_inline((CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF*)L_0, NULL);
		NullCheck(L_1);
		RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* L_2;
		L_2 = CallSiteBinder_GetRuleCache_TisRuntimeObject_m9DFDD3BB4F7106859FD2D993FF6564C86A42A818(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
// Method Definition Index: 88030
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* CallSiteOps_GetRules_TisRuntimeObject_m1DFA4E6242CA2B18A58EC2836B21A609D195E017_gshared (CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* ___0_site, const RuntimeMethod* method) 
{
	{
		CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* L_0 = ___0_site;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0->___Rules;
		return L_1;
	}
}
// Method Definition Index: 88032
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallSiteOps_MoveRule_TisRuntimeObject_m06C66BC024058187159E78D6AA63A3EF67906F11_gshared (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* ___0_cache, RuntimeObject* ___1_rule, int32_t ___2_i, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___2_i;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* L_1 = ___0_cache;
		RuntimeObject* L_2 = ___1_rule;
		int32_t L_3 = ___2_i;
		NullCheck(L_1);
		RuleCache_1_MoveRule_mB1D0C4865929AA211A45B55C3A892E082B339268(L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_000c:
	{
		return;
	}
}
// Method Definition Index: 88029
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallSiteOps_UpdateRules_TisRuntimeObject_m70057F2E4F4F6D9A5E7821C1998ABB44F718B601_gshared (CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* ___0_this, int32_t ___1_matched, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_matched;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* L_1 = ___0_this;
		int32_t L_2 = ___1_matched;
		NullCheck(L_1);
		CallSite_1_MoveRule_mBCD10679B0D5B194D17E080E93FE38B7AA5339F9(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_000b:
	{
		return;
	}
}
// Method Definition Index: 15868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, int32_t ___0_useTrickleDown, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	bool V_1 = false;
	{
		V_0 = ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)IsInstClass((RuntimeObject*)__this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_3 = ((EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___EventCategory;
		int32_t L_4 = ___0_useTrickleDown;
		NullCheck(L_2);
		VisualElement_AddEventCallbackCategories_m82D772243B9402773AC11E82A73A835FE8103DF6(L_2, ((int32_t)(1<<((int32_t)((int32_t)L_3&((int32_t)31))))), L_4, NULL);
	}

IL_0024:
	{
		return;
	}
}
// Method Definition Index: 15866
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_RegisterCallback_TisRuntimeObject_m221D8BDDC2D60A7D22B11CBCC628C7990BE1C8F9_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* V_1 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B4_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B3_0 = NULL;
	{
		EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* L_0 = ___0_callback;
		V_0 = (bool)((((RuntimeObject*)(EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A0A3608A3C4012D35E5DE3B2BA646379CCF198F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_3 = __this->___m_CallbackRegistry;
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_002c;
		}
		G_B3_0 = L_4;
	}
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_5 = (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*)il2cpp_codegen_object_new(EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		EventCallbackRegistry__ctor_mE8515F2569FA228418791385E09A1DAAF959591A(L_5, NULL);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_6 = L_5;
		V_1 = L_6;
		__this->___m_CallbackRegistry = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CallbackRegistry), (void*)L_6);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_7 = V_1;
		G_B4_0 = L_7;
	}

IL_002c:
	{
		EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* L_8 = ___0_callback;
		int32_t L_9 = ___1_useTrickleDown;
		NullCheck(G_B4_0);
		EventCallbackRegistry_RegisterCallback_TisRuntimeObject_mB4EF7159D7E9A0E1435729B4B488CEF2DA58ACDB(G_B4_0, L_8, L_9, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_10 = ___1_useTrickleDown;
		CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE(__this, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
// Method Definition Index: 15870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_RegisterCallback_TisRuntimeObject_m084BF1775D11490688A8705EE6F6FFDE63E0462E_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* ___0_callback, int32_t ___1_invokePolicy, int32_t ___2_useTrickleDown, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* V_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B2_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B1_0 = NULL;
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_0 = __this->___m_CallbackRegistry;
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_2 = (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*)il2cpp_codegen_object_new(EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		EventCallbackRegistry__ctor_mE8515F2569FA228418791385E09A1DAAF959591A(L_2, NULL);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_3 = L_2;
		V_0 = L_3;
		__this->___m_CallbackRegistry = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CallbackRegistry), (void*)L_3);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0019:
	{
		EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* L_5 = ___0_callback;
		int32_t L_6 = ___2_useTrickleDown;
		int32_t L_7 = ___1_invokePolicy;
		NullCheck(G_B2_0);
		EventCallbackRegistry_RegisterCallback_TisRuntimeObject_mB4EF7159D7E9A0E1435729B4B488CEF2DA58ACDB(G_B2_0, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_useTrickleDown;
		CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE(__this, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
// Method Definition Index: 15869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_RegisterCallback_TisRuntimeObject_TisRuntimeObject_m7BEC6354DF13DBB505B3F5A1CACDDB9ED39ACD58_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* ___0_callback, RuntimeObject* ___1_userArgs, int32_t ___2_useTrickleDown, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* V_1 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B4_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B3_0 = NULL;
	{
		EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* L_0 = ___0_callback;
		V_0 = (bool)((((RuntimeObject*)(EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A0A3608A3C4012D35E5DE3B2BA646379CCF198F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_3 = __this->___m_CallbackRegistry;
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_002c;
		}
		G_B3_0 = L_4;
	}
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_5 = (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*)il2cpp_codegen_object_new(EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		EventCallbackRegistry__ctor_mE8515F2569FA228418791385E09A1DAAF959591A(L_5, NULL);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_6 = L_5;
		V_1 = L_6;
		__this->___m_CallbackRegistry = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CallbackRegistry), (void*)L_6);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_7 = V_1;
		G_B4_0 = L_7;
	}

IL_002c:
	{
		EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* L_8 = ___0_callback;
		RuntimeObject* L_9 = ___1_userArgs;
		int32_t L_10 = ___2_useTrickleDown;
		NullCheck(G_B4_0);
		EventCallbackRegistry_RegisterCallback_TisRuntimeObject_TisRuntimeObject_m2D9855863C5CB36B83A07D8006643A522C3E3919(G_B4_0, L_8, L_9, L_10, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_11 = ___2_useTrickleDown;
		CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE(__this, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}
}
// Method Definition Index: 15869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_RegisterCallback_TisRuntimeObject_TisIl2CppFullySharedGenericAny_mBF11474CD706E57F2E7A29006BFE03C233CE1A7B_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E* ___0_callback, Il2CppFullySharedGenericAny ___1_userArgs, int32_t ___2_useTrickleDown, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TUserArgsType_t6FE3524CF9F229B1DE6FDD1C5C86E6CAAB721920 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TUserArgsType_t6FE3524CF9F229B1DE6FDD1C5C86E6CAAB721920);
	bool V_0 = false;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* V_1 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B4_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B3_0 = NULL;
	{
		EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E* L_0 = ___0_callback;
		V_0 = (bool)((((RuntimeObject*)(EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A0A3608A3C4012D35E5DE3B2BA646379CCF198F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_3 = __this->___m_CallbackRegistry;
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_002c;
		}
		G_B3_0 = L_4;
	}
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_5 = (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*)il2cpp_codegen_object_new(EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		EventCallbackRegistry__ctor_mE8515F2569FA228418791385E09A1DAAF959591A(L_5, NULL);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_6 = L_5;
		V_1 = L_6;
		__this->___m_CallbackRegistry = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CallbackRegistry), (void*)L_6);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_7 = V_1;
		G_B4_0 = L_7;
	}

IL_002c:
	{
		EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E* L_8 = ___0_callback;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_userArgs : &___1_userArgs), SizeOf_TUserArgsType_t6FE3524CF9F229B1DE6FDD1C5C86E6CAAB721920);
		int32_t L_10 = ___2_useTrickleDown;
		NullCheck(G_B4_0);
		InvokerActionInvoker4< EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), G_B4_0, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_9: *(void**)L_9), L_10, (int32_t)0);
		int32_t L_11 = ___2_useTrickleDown;
		CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE(__this, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}
}
// Method Definition Index: 15867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_RegisterCallbackOnce_TisRuntimeObject_m3E99C0F5C056CF280DA59BAB1782F0A2EC146A58_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* V_1 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B4_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B3_0 = NULL;
	{
		EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* L_0 = ___0_callback;
		V_0 = (bool)((((RuntimeObject*)(EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A0A3608A3C4012D35E5DE3B2BA646379CCF198F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_3 = __this->___m_CallbackRegistry;
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_002c;
		}
		G_B3_0 = L_4;
	}
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_5 = (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*)il2cpp_codegen_object_new(EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		EventCallbackRegistry__ctor_mE8515F2569FA228418791385E09A1DAAF959591A(L_5, NULL);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_6 = L_5;
		V_1 = L_6;
		__this->___m_CallbackRegistry = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CallbackRegistry), (void*)L_6);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_7 = V_1;
		G_B4_0 = L_7;
	}

IL_002c:
	{
		EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* L_8 = ___0_callback;
		int32_t L_9 = ___1_useTrickleDown;
		NullCheck(G_B4_0);
		EventCallbackRegistry_RegisterCallback_TisRuntimeObject_mB4EF7159D7E9A0E1435729B4B488CEF2DA58ACDB(G_B4_0, L_8, L_9, (int32_t)2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_10 = ___1_useTrickleDown;
		CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE(__this, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
// Method Definition Index: 15871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_UnregisterCallback_TisRuntimeObject_m2E6CDD2C9FDA8EDB685996370F77E36063A68CD6_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B4_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B3_0 = NULL;
	{
		EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* L_0 = ___0_callback;
		V_0 = (bool)((((RuntimeObject*)(EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A0A3608A3C4012D35E5DE3B2BA646379CCF198F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_3 = __this->___m_CallbackRegistry;
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0020;
		}
		G_B3_0 = L_4;
	}
	{
		goto IL_0028;
	}

IL_0020:
	{
		EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* L_5 = ___0_callback;
		int32_t L_6 = ___1_useTrickleDown;
		NullCheck(G_B4_0);
		bool L_7;
		L_7 = EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_m19464A9219CFA09D521E6F6981885276025BC97A(G_B4_0, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0028:
	{
		return;
	}
}
// Method Definition Index: 15872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_UnregisterCallback_TisRuntimeObject_TisRuntimeObject_m6699A7B46A880B015AA865785EB4C432646D45B0_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B4_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B3_0 = NULL;
	{
		EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* L_0 = ___0_callback;
		V_0 = (bool)((((RuntimeObject*)(EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A0A3608A3C4012D35E5DE3B2BA646379CCF198F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_3 = __this->___m_CallbackRegistry;
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0020;
		}
		G_B3_0 = L_4;
	}
	{
		goto IL_0028;
	}

IL_0020:
	{
		EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* L_5 = ___0_callback;
		int32_t L_6 = ___1_useTrickleDown;
		NullCheck(G_B4_0);
		bool L_7;
		L_7 = EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_TisRuntimeObject_m9E686DAEC604B7BFF8BF99DBDEC655151A08378C(G_B4_0, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0028:
	{
		return;
	}
}
// Method Definition Index: 15872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_UnregisterCallback_TisRuntimeObject_TisIl2CppFullySharedGenericAny_mDADB76B9253BD1CD24F2359F04039C99A52F8968_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B4_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B3_0 = NULL;
	{
		EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E* L_0 = ___0_callback;
		V_0 = (bool)((((RuntimeObject*)(EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A0A3608A3C4012D35E5DE3B2BA646379CCF198F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_3 = __this->___m_CallbackRegistry;
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0020;
		}
		G_B3_0 = L_4;
	}
	{
		goto IL_0028;
	}

IL_0020:
	{
		EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E* L_5 = ___0_callback;
		int32_t L_6 = ___1_useTrickleDown;
		NullCheck(G_B4_0);
		bool L_7;
		L_7 = ((  bool (*) (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*, EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(G_B4_0, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0028:
	{
		return;
	}
}
// Method Definition Index: 13097
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickDetector_ProcessEvent_TisRuntimeObject_m5088E5F9DF807F9769E59A932191695559200880_gshared (ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31* __this, PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* ___0_evt, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_TypeId_m08396DED606ACD1093BEEA8D939E5DA37B797C12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_TypeId_m1A2720F11AB0D624809678ADE4E6D8C250E43741_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_TypeId_m3FC722D85FBD1538CE6B96AD3364192799BF1CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_TypeId_mA90FE9E21D00125CFC53652D23DB65FD2574D60D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_t2637736704939772A86A2904BCFD1B314097DD1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_t4941B5AE834AA028696C83756491CE8884F30DDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_t7D3D212E8AD9C53105AAC51DBD4FA5F700586F68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_tB8AF17419B0E6B39E32F8925FCA535F5CF5C79D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B25_0 = 0;
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_0 = ___0_evt;
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(5, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_0);
		il2cpp_codegen_runtime_class_init_inline(EventBase_1_t7D3D212E8AD9C53105AAC51DBD4FA5F700586F68_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = EventBase_1_TypeId_m08396DED606ACD1093BEEA8D939E5DA37B797C12(EventBase_1_TypeId_m08396DED606ACD1093BEEA8D939E5DA37B797C12_RuntimeMethod_var);
		if ((!(((uint64_t)L_1) == ((uint64_t)L_2))))
		{
			goto IL_0019;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_3 = ___0_evt;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_6 = ___0_evt;
		ClickDetector_StartClickTracking_mF87B35BA2F55B42F47709D89FA651EEFCE615CE7(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_6, NULL);
		goto IL_0109;
	}

IL_002d:
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_7 = ___0_evt;
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_7);
		int64_t L_8;
		L_8 = VirtualFuncInvoker0< int64_t >::Invoke(5, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_7);
		il2cpp_codegen_runtime_class_init_inline(EventBase_1_t4941B5AE834AA028696C83756491CE8884F30DDE_il2cpp_TypeInfo_var);
		int64_t L_9;
		L_9 = EventBase_1_TypeId_m3FC722D85FBD1538CE6B96AD3364192799BF1CA6(EventBase_1_TypeId_m3FC722D85FBD1538CE6B96AD3364192799BF1CA6_RuntimeMethod_var);
		V_1 = (bool)((((int64_t)L_8) == ((int64_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_00c1;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_11 = ___0_evt;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_inline(L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_12)
		{
			goto IL_0057;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_13 = ___0_evt;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = PointerEventBase_1_get_pressedButtons_mD44593EB9F5A5992961586234A01D44B871A1F64_inline(L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		G_B9_0 = ((((int32_t)((int32_t)(L_14&1))) == ((int32_t)1))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B9_0 = 0;
	}

IL_0058:
	{
		V_2 = (bool)G_B9_0;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_16 = ___0_evt;
		ClickDetector_StartClickTracking_mF87B35BA2F55B42F47709D89FA651EEFCE615CE7(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_16, NULL);
		goto IL_00be;
	}

IL_0068:
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_17 = ___0_evt;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_inline(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_18)
		{
			goto IL_007d;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_19 = ___0_evt;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = PointerEventBase_1_get_pressedButtons_mD44593EB9F5A5992961586234A01D44B871A1F64_inline(L_19, il2cpp_rgctx_method(method->rgctx_data, 2));
		G_B14_0 = ((((int32_t)((int32_t)(L_20&1))) == ((int32_t)0))? 1 : 0);
		goto IL_007e;
	}

IL_007d:
	{
		G_B14_0 = 0;
	}

IL_007e:
	{
		V_3 = (bool)G_B14_0;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_008e;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_22 = ___0_evt;
		ClickDetector_SendClickEvent_m3AC03E996C28D79AAB47D49BEA01887AFF21B310(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_22, NULL);
		goto IL_00be;
	}

IL_008e:
	{
		List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6* L_23 = __this->___m_ClickStatus;
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_24 = ___0_evt;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_inline(L_24, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_23);
		ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470* L_26;
		L_26 = List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB(L_23, L_25, List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB_RuntimeMethod_var);
		V_4 = L_26;
		ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470* L_27 = V_4;
		NullCheck(L_27);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_28 = L_27->___m_Target;
		V_5 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00bd;
		}
	}
	{
		ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470* L_30 = V_4;
		NullCheck(L_30);
		L_30->___m_LastPointerDownTime = ((int64_t)0);
	}

IL_00bd:
	{
	}

IL_00be:
	{
		goto IL_0109;
	}

IL_00c1:
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_31 = ___0_evt;
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_31);
		int64_t L_32;
		L_32 = VirtualFuncInvoker0< int64_t >::Invoke(5, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_31);
		il2cpp_codegen_runtime_class_init_inline(EventBase_1_tB8AF17419B0E6B39E32F8925FCA535F5CF5C79D2_il2cpp_TypeInfo_var);
		int64_t L_33;
		L_33 = EventBase_1_TypeId_m1A2720F11AB0D624809678ADE4E6D8C250E43741(EventBase_1_TypeId_m1A2720F11AB0D624809678ADE4E6D8C250E43741_RuntimeMethod_var);
		V_6 = (bool)((((int64_t)L_32) == ((int64_t)L_33))? 1 : 0);
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00e0;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_35 = ___0_evt;
		ClickDetector_CancelClickTracking_m93EDACD3A68DC09BD1DB229F9D390466E25E4339(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_35, NULL);
		goto IL_0109;
	}

IL_00e0:
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_36 = ___0_evt;
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_36);
		int64_t L_37;
		L_37 = VirtualFuncInvoker0< int64_t >::Invoke(5, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_36);
		il2cpp_codegen_runtime_class_init_inline(EventBase_1_t2637736704939772A86A2904BCFD1B314097DD1E_il2cpp_TypeInfo_var);
		int64_t L_38;
		L_38 = EventBase_1_TypeId_mA90FE9E21D00125CFC53652D23DB65FD2574D60D(EventBase_1_TypeId_mA90FE9E21D00125CFC53652D23DB65FD2574D60D_RuntimeMethod_var);
		if ((!(((uint64_t)L_37) == ((uint64_t)L_38))))
		{
			goto IL_00f8;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_39 = ___0_evt;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_inline(L_39, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B25_0 = ((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
		goto IL_00f9;
	}

IL_00f8:
	{
		G_B25_0 = 0;
	}

IL_00f9:
	{
		V_7 = (bool)G_B25_0;
		bool L_41 = V_7;
		if (!L_41)
		{
			goto IL_0109;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_42 = ___0_evt;
		ClickDetector_SendClickEvent_m3AC03E996C28D79AAB47D49BEA01887AFF21B310(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_42, NULL);
	}

IL_0109:
	{
		return;
	}
}
// Method Definition Index: 11466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m27201A0D92B39DBDD10227D96E3B66AF07DA924D_gshared (RuntimeObject* ___0_dictionary, RuntimeObject* ___1_key, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		RuntimeObject* L_1 = ___1_key;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mE0F1FA5E6172950D35D6FD8F6708B433954C4168(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_3;
	}
}
// Method Definition Index: 11466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionExtensions_GetValueOrDefault_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_TisRuntimeObject_m7166D8BC6AA06F315F0D310BA502E973DA9F8D1C_gshared (RuntimeObject* ___0_dictionary, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___1_key, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___1_key;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = CollectionExtensions_GetValueOrDefault_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_TisRuntimeObject_m9547B9832FE26D7DE2AD9BFF00A9FA8C96D13E29(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_3;
	}
}
// Method Definition Index: 11466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionExtensions_GetValueOrDefault_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m10948CC318B59EE0179567DC22D028973DF073FF_gshared (RuntimeObject* ___0_dictionary, Il2CppFullySharedGenericAny ___1_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_TKey_t5925DFE690058CBAB61EC7E93512AEF6D32862C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t5925DFE690058CBAB61EC7E93512AEF6D32862C1);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56);
	memset(V_0, 0, SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56);
	{
		RuntimeObject* L_0 = ___0_dictionary;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_key : &___1_key), SizeOf_TKey_t5925DFE690058CBAB61EC7E93512AEF6D32862C1);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56);
		InvokerActionInvoker4< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_2: *(void**)L_2), (Il2CppFullySharedGenericAny*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56);
		return;
	}
}
// Method Definition Index: 11467
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mE0F1FA5E6172950D35D6FD8F6708B433954C4168_gshared (RuntimeObject* ___0_dictionary, RuntimeObject* ___1_key, RuntimeObject* ___2_defaultValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_dictionary;
		RuntimeObject* L_3 = ___1_key;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject** >::Invoke(1, il2cpp_rgctx_data(method->rgctx_data, 0), L_2, L_3, (&V_0));
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_5 = ___2_defaultValue;
		return L_5;
	}

IL_001b:
	{
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 11467
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionExtensions_GetValueOrDefault_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_TisRuntimeObject_m9547B9832FE26D7DE2AD9BFF00A9FA8C96D13E29_gshared (RuntimeObject* ___0_dictionary, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___1_key, RuntimeObject* ___2_defaultValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_dictionary;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_3 = ___1_key;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, RuntimeObject** >::Invoke(1, il2cpp_rgctx_data(method->rgctx_data, 0), L_2, L_3, (&V_0));
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_5 = ___2_defaultValue;
		return L_5;
	}

IL_001b:
	{
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 11467
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionExtensions_GetValueOrDefault_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m64F62F848FC640FEA0A7176567655B4C1E6783AF_gshared (RuntimeObject* ___0_dictionary, Il2CppFullySharedGenericAny ___1_key, Il2CppFullySharedGenericAny ___2_defaultValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_TKey_tA3F6A7E1955A82041CECC138C619409DAB9C8BC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tA3F6A7E1955A82041CECC138C619409DAB9C8BC3);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F);
	const Il2CppFullySharedGenericAny L_6 = L_5;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F);
	memset(V_0, 0, SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F);
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_dictionary;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_key : &___1_key), SizeOf_TKey_tA3F6A7E1955A82041CECC138C619409DAB9C8BC3);
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(1, il2cpp_rgctx_data(method->rgctx_data, 0), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_3: *(void**)L_3), (Il2CppFullySharedGenericAny*)V_0);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_defaultValue : &___2_defaultValue), SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F);
		return;
	}

IL_001b:
	{
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F);
		return;
	}
}
// Method Definition Index: 11468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionExtensions_Remove_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_TisRuntimeObject_m887974CEC691234DDC73D860B9E098E5646D925F_gshared (RuntimeObject* ___0_dictionary, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___1_key, RuntimeObject** ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_dictionary;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_3 = ___1_key;
		RuntimeObject** L_4 = ___2_value;
		NullCheck(L_2);
		bool L_5;
		L_5 = InterfaceFuncInvoker2< bool, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, RuntimeObject** >::Invoke(7, il2cpp_rgctx_data(method->rgctx_data, 0), L_2, L_3, L_4);
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___0_dictionary;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_7 = ___1_key;
		NullCheck(L_6);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 >::Invoke(6, il2cpp_rgctx_data(method->rgctx_data, 0), L_6, L_7);
		return (bool)1;
	}

IL_0022:
	{
		RuntimeObject** L_9 = ___2_value;
		il2cpp_codegen_initobj(L_9, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 11468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionExtensions_Remove_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5CE7B5794509BC70626C1A7B904CD646B0ADF345_gshared (RuntimeObject* ___0_dictionary, Il2CppFullySharedGenericAny ___1_key, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TKey_tEE167F9FD9406895506561B9F822BDE8A9465D81 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_TValue_tC657F4591849DB2AD590413780565A57636A8BDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tEE167F9FD9406895506561B9F822BDE8A9465D81);
	const Il2CppFullySharedGenericAny L_7 = L_3;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_dictionary;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_key : &___1_key), SizeOf_TKey_tEE167F9FD9406895506561B9F822BDE8A9465D81);
		Il2CppFullySharedGenericAny* L_4 = ___2_value;
		NullCheck(L_2);
		bool L_5;
		L_5 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(7, il2cpp_rgctx_data(method->rgctx_data, 0), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_3: *(void**)L_3), L_4);
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___0_dictionary;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_key : &___1_key), SizeOf_TKey_tEE167F9FD9406895506561B9F822BDE8A9465D81);
		NullCheck(L_6);
		bool L_8;
		L_8 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(6, il2cpp_rgctx_data(method->rgctx_data, 0), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_7: *(void**)L_7));
		return (bool)1;
	}

IL_0022:
	{
		Il2CppFullySharedGenericAny* L_9 = ___2_value;
		il2cpp_codegen_initobj(L_9, SizeOf_TValue_tC657F4591849DB2AD590413780565A57636A8BDA);
		return (bool)0;
	}
}
// Method Definition Index: 88324
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D* CollectionExtensions_AddFirst_TisRuntimeObject_mDB387565346E042AA5D35EEE90AFDDC1CC8A05A4_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* ___0_list, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)((int32_t)il2cpp_codegen_add(L_1, 1)));
		V_0 = L_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		RuntimeObject* L_4 = ___1_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* L_5 = ___0_list;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		NullCheck(L_5);
		ReadOnlyCollection_1_CopyTo_m2AB7AC16F5BDBFEB664040F852CC922277C872F2(L_5, L_6, 1, il2cpp_rgctx_method(method->rgctx_data, 4));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D* L_8 = (TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF(L_8, L_7, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_8;
	}
}
// Method Definition Index: 88324
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03* CollectionExtensions_AddFirst_TisIl2CppFullySharedGenericAny_mB414110D3C45978101AB43651419B8C840AFAB99_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* ___0_list, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1408C0287D80D3AB7579B914DF89DD1DAA04E8E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t1408C0287D80D3AB7579B914DF89DD1DAA04E8E2);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)((int32_t)il2cpp_codegen_add(L_1, 1)));
		V_0 = L_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_0;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___1_item : &___1_item), SizeOf_T_t1408C0287D80D3AB7579B914DF89DD1DAA04E8E2);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)), L_4, SizeOf_T_t1408C0287D80D3AB7579B914DF89DD1DAA04E8E2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)), (void*)L_4);
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_5 = ___0_list;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		NullCheck(L_5);
		((  void (*) (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_5, L_6, 1, il2cpp_rgctx_method(method->rgctx_data, 4));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03* L_8 = (TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		((  void (*) (TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_8, L_7, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_8;
	}
}
// Method Definition Index: 88325
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* CollectionExtensions_AddLast_TisRuntimeObject_mBFD12AE35B2729A3FB4289BE443C3D557528D96B_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1)));
		V_0 = L_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___0_array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		NullCheck((RuntimeArray*)L_2);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_2, (RuntimeArray*)L_3, 0, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___0_array;
		NullCheck(L_5);
		RuntimeObject* L_6 = ___1_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(((RuntimeArray*)L_5)->max_length))), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 88325
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* CollectionExtensions_AddLast_TisIl2CppFullySharedGenericAny_mA3C5863967AEB01DE85D40B8C1B9914C55BFC68C_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t044F4E41F0F5D4504EE33071B61E1025CC323F83 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t044F4E41F0F5D4504EE33071B61E1025CC323F83);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		NullCheck(L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1)));
		V_0 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_0;
		NullCheck((RuntimeArray*)L_2);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_2, (RuntimeArray*)L_3, 0, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck(L_5);
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_item : &___1_item), SizeOf_T_t044F4E41F0F5D4504EE33071B61E1025CC323F83);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(((RuntimeArray*)L_5)->max_length)))), L_6, SizeOf_T_t044F4E41F0F5D4504EE33071B61E1025CC323F83);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(((RuntimeArray*)L_5)->max_length)))), (void*)L_6);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 88326
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* CollectionExtensions_RemoveFirst_TisRuntimeObject_m760AFDF94515B7D47D1E5E5943B86520B23BD175_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1)));
		V_0 = L_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___0_array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 1, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 88326
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* CollectionExtensions_RemoveFirst_TisIl2CppFullySharedGenericAny_mAB2055E08A4A3F55475AA5BCDAA5AD3431E0E49F_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		NullCheck(L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1)));
		V_0 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 1, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 88327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* CollectionExtensions_RemoveLast_TisRuntimeObject_mBB33D82A987899D55AEDE48819925D82DE57FFE2_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1)));
		V_0 = L_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___0_array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 88327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* CollectionExtensions_RemoveLast_TisIl2CppFullySharedGenericAny_m6B0355ABBFB2DF209193E34CEAA761337B3A1A91_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		NullCheck(L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1)));
		V_0 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 88328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* CollectionExtensions_ToReadOnly_TisRuntimeObject_mB73FA22A8302D85455BB4BFE53B42EF26ADD4F39_gshared (RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D* V_0 = NULL;
	ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* V_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_enumerable;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* L_1 = ((EmptyReadOnlyCollection_1_t89A294F273BB8EE92CD342ECABFE95F63B51B817_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___Instance;
		return L_1;
	}

IL_0009:
	{
		RuntimeObject* L_2 = ___0_enumerable;
		V_0 = ((TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D*)IsInstSealed((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 4)));
		TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D* L_4 = V_0;
		return (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92*)L_4;
	}

IL_0015:
	{
		RuntimeObject* L_5 = ___0_enumerable;
		V_1 = ((ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*)IsInstSealed((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 5)));
		ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* L_7 = V_1;
		NullCheck(L_7);
		ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* L_8;
		L_8 = ReadOnlyCollectionBuilder_1_ToReadOnlyCollection_m478D4B2A6065DE06384E4448545867D386050EAB(L_7, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_8;
	}

IL_0026:
	{
		RuntimeObject* L_9 = ___0_enumerable;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D(L_9, il2cpp_rgctx_method(method->rgctx_data, 7));
		V_2 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_2;
		NullCheck(L_11);
		if (!(((RuntimeArray*)L_11)->max_length))
		{
			goto IL_0038;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_2;
		TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D* L_13 = (TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 4));
		TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF(L_13, L_12, il2cpp_rgctx_method(method->rgctx_data, 9));
		return (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92*)L_13;
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* L_14 = ((EmptyReadOnlyCollection_1_t89A294F273BB8EE92CD342ECABFE95F63B51B817_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___Instance;
		return L_14;
	}
}
// Method Definition Index: 88328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* CollectionExtensions_ToReadOnly_TisIl2CppFullySharedGenericAny_m72730DC5F43D01A63F781AE085551AB523E2DA24_gshared (RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03* V_0 = NULL;
	ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* V_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_enumerable;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_1 = ((EmptyReadOnlyCollection_1_tFB5F7F75DF0B657273AC841B9124A1557D63C67A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___Instance;
		return L_1;
	}

IL_0009:
	{
		RuntimeObject* L_2 = ___0_enumerable;
		V_0 = ((TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03*)IsInstSealed((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 4)));
		TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03* L_4 = V_0;
		return (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*)L_4;
	}

IL_0015:
	{
		RuntimeObject* L_5 = ___0_enumerable;
		V_1 = ((ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*)IsInstSealed((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 5)));
		ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* L_7 = V_1;
		NullCheck(L_7);
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_8;
		L_8 = ((  ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* (*) (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_7, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_8;
	}

IL_0026:
	{
		RuntimeObject* L_9 = ___0_enumerable;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10;
		L_10 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_9, il2cpp_rgctx_method(method->rgctx_data, 7));
		V_2 = L_10;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_2;
		NullCheck(L_11);
		if (!(((RuntimeArray*)L_11)->max_length))
		{
			goto IL_0038;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_2;
		TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03* L_13 = (TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 4));
		((  void (*) (TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))(L_13, L_12, il2cpp_rgctx_method(method->rgctx_data, 9));
		return (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*)L_13;
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_14 = ((EmptyReadOnlyCollection_1_tFB5F7F75DF0B657273AC841B9124A1557D63C67A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___Instance;
		return L_14;
	}
}
// Method Definition Index: 62011
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionExtensions_AddToArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mD55191263ECC833BD95E5390ABC8DDA4982732EC_gshared (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389** ___0_array, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389** L_0 = ___0_array;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389** L_1 = ___0_array;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = *((ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389**)L_1);
		NullCheck(L_2);
		Array_Resize_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7709305356E53F01B1363D31F4E29CF9135D8885(L_0, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389** L_3 = ___0_array;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = *((ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389**)L_3);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5 = L_4;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___1_item;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_6);
		return;
	}
}
// Method Definition Index: 62011
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionExtensions_AddToArray_TisDimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8_mC3901AA8CD416A12DE208018ACF388B16E6BD736_gshared (DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B** ___0_array, Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 ___1_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B** L_0 = ___0_array;
		DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B** L_1 = ___0_array;
		DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B* L_2 = *((DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B**)L_1);
		NullCheck(L_2);
		Array_Resize_TisDimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8_m2C16A0E1BBA0084C06DDCA3A911F0D8CBDF3F977(L_0, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
		DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B** L_3 = ___0_array;
		DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B* L_4 = *((DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B**)L_3);
		DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B* L_5 = L_4;
		NullCheck(L_5);
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_6 = ___1_item;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))), (Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8)L_6);
		return;
	}
}
// Method Definition Index: 62011
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionExtensions_AddToArray_TisRuntimeObject_m37B87803F720D7D50ACE9CF75F063517DF1D0CD1_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_0 = ___0_array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_1 = ___0_array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = *((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)L_1);
		NullCheck(L_2);
		Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E(L_0, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_3 = ___0_array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = *((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		NullCheck(L_5);
		RuntimeObject* L_6 = ___1_item;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))), (RuntimeObject*)L_6);
		return;
	}
}
// Method Definition Index: 62011
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionExtensions_AddToArray_TisScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_m2AACF77C66A4970B466D97CA47E1DCB04F359F53_gshared (ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52** ___0_array, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F ___1_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52** L_0 = ___0_array;
		ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52** L_1 = ___0_array;
		ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52* L_2 = *((ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52**)L_1);
		NullCheck(L_2);
		Array_Resize_TisScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_mE82F51C906F6925E42DA290960046FF9997F94B1(L_0, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
		ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52** L_3 = ___0_array;
		ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52* L_4 = *((ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52**)L_3);
		ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52* L_5 = L_4;
		NullCheck(L_5);
		ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F L_6 = ___1_item;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))), (ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F)L_6);
		return;
	}
}
// Method Definition Index: 62011
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionExtensions_AddToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m00DCAF83F0E174031C18502E03C91E889CC8755A_gshared (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___0_array, float ___1_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_0 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_1 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = *((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**)L_1);
		NullCheck(L_2);
		Array_Resize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m879C2A54DAFE78F46D1185B50ED527EE182BFB04(L_0, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_3 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = *((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**)L_3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = L_4;
		NullCheck(L_5);
		float L_6 = ___1_item;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))), (float)L_6);
		return;
	}
}
// Method Definition Index: 62011
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionExtensions_AddToArray_TisIl2CppFullySharedGenericAny_mF12E142C387346A53DC32D69AE9C778B9E2C4081_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tD4E2EADC414204690F099BB51F5C155469AB24B4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tD4E2EADC414204690F099BB51F5C155469AB24B4);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_1 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_1);
		NullCheck(L_2);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_3 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_3);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = L_4;
		NullCheck(L_5);
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_item : &___1_item), SizeOf_T_tD4E2EADC414204690F099BB51F5C155469AB24B4);
		NullCheck(L_5);
		il2cpp_codegen_memcpy((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1)))), L_6, SizeOf_T_tD4E2EADC414204690F099BB51F5C155469AB24B4);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1)))), (void*)L_6);
		return;
	}
}
// Method Definition Index: 62012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CollectionExtensions_SerializedView_TisRuntimeObject_mE0E432A02B333BDBAFBAC0E961A3FCAC94B89CCB_gshared (RuntimeObject* ___0_collection, Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* ___1_serializeElement, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass5_0_1_tAD7A4172BC09F03DF05ED2C61089D638464CF300* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_1_tAD7A4172BC09F03DF05ED2C61089D638464CF300* L_0 = (U3CU3Ec__DisplayClass5_0_1_tAD7A4172BC09F03DF05ED2C61089D638464CF300*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CU3Ec__DisplayClass5_0_1__ctor_mE4CCF1AA0485357329225598B80B362697F6F7E9(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_1_tAD7A4172BC09F03DF05ED2C61089D638464CF300* L_1 = V_0;
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_2 = ___1_serializeElement;
		NullCheck(L_1);
		L_1->___serializeElement = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___serializeElement), (void*)L_2);
		RuntimeObject* L_3 = ___0_collection;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDDFD5BA0EE5BD56B383E144892054DCB0A59D3ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0021:
	{
		U3CU3Ec__DisplayClass5_0_1_tAD7A4172BC09F03DF05ED2C61089D638464CF300* L_6 = V_0;
		NullCheck(L_6);
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_7 = L_6->___serializeElement;
		V_2 = (bool)((((RuntimeObject*)(Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECC4BC659FB1526108BFFD6AD5E7F03E47806740)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0039:
	{
		RuntimeObject* L_10 = ___0_collection;
		U3CU3Ec__DisplayClass5_0_1_tAD7A4172BC09F03DF05ED2C61089D638464CF300* L_11 = V_0;
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_12 = (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		Func_2__ctor_mD6767DE619116219CD1567BC735C4AC96B9348CF(L_12, (RuntimeObject*)L_11, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 5));
		RuntimeObject* L_13;
		L_13 = Enumerable_Select_TisRuntimeObject_TisString_t_m4212A6B9DDC97D402346EC78AE3115A600469C8C(L_10, L_12, il2cpp_rgctx_method(method->rgctx_data, 6));
		String_t* L_14;
		L_14 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_14, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		V_3 = L_15;
		goto IL_0067;
	}

IL_0067:
	{
		String_t* L_16 = V_3;
		return L_16;
	}
}
// Method Definition Index: 62012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CollectionExtensions_SerializedView_TisIl2CppFullySharedGenericAny_mCE17D8BD9D3423A2464201AAA28CF0A2216727ED_gshared (RuntimeObject* ___0_collection, Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* ___1_serializeElement, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass5_0_1_tD5EC5D3FA81B9D32D8BB7E5E2431AA97767C6EE8* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_1_tD5EC5D3FA81B9D32D8BB7E5E2431AA97767C6EE8* L_0 = (U3CU3Ec__DisplayClass5_0_1_tD5EC5D3FA81B9D32D8BB7E5E2431AA97767C6EE8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass5_0_1_tD5EC5D3FA81B9D32D8BB7E5E2431AA97767C6EE8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_1_tD5EC5D3FA81B9D32D8BB7E5E2431AA97767C6EE8* L_1 = V_0;
		Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* L_2 = ___1_serializeElement;
		NullCheck(L_1);
		L_1->___serializeElement = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___serializeElement), (void*)L_2);
		RuntimeObject* L_3 = ___0_collection;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDDFD5BA0EE5BD56B383E144892054DCB0A59D3ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0021:
	{
		U3CU3Ec__DisplayClass5_0_1_tD5EC5D3FA81B9D32D8BB7E5E2431AA97767C6EE8* L_6 = V_0;
		NullCheck(L_6);
		Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* L_7 = L_6->___serializeElement;
		V_2 = (bool)((((RuntimeObject*)(Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECC4BC659FB1526108BFFD6AD5E7F03E47806740)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0039:
	{
		RuntimeObject* L_10 = ___0_collection;
		U3CU3Ec__DisplayClass5_0_1_tD5EC5D3FA81B9D32D8BB7E5E2431AA97767C6EE8* L_11 = V_0;
		Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* L_12 = (Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		((  void (*) (Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_12, (RuntimeObject*)L_11, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 5));
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_10, L_12, il2cpp_rgctx_method(method->rgctx_data, 6));
		String_t* L_14;
		L_14 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_14, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		V_3 = L_15;
		goto IL_0067;
	}

IL_0067:
	{
		String_t* L_16 = V_3;
		return L_16;
	}
}
// Method Definition Index: 104800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CollectionExtensions_Stringify_TisIl2CppFullySharedGenericAny_mFA99B876D7A13DB4FEA18216D61FA1036C44EDC3_gshared (RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionExtensions_tD9117E96D192D9FC13B6302FE7CB978756199B1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8EC81F1AF0ADE59FE6D0E2DB97C8326CA4172F7);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t32DD03B24BB35AB1F3E72814C290B3C16528774A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t32DD03B24BB35AB1F3E72814C290B3C16528774A);
	const Il2CppFullySharedGenericAny L_13 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t32DD03B24BB35AB1F3E72814C290B3C16528774A);
	memset(V_3, 0, SizeOf_T_t32DD03B24BB35AB1F3E72814C290B3C16528774A);
	String_t* V_4 = NULL;
	StringBuilder_t* G_B4_0 = NULL;
	StringBuilder_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	StringBuilder_t* G_B5_1 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.core-utils@f0450cbac8d6/Runtime/Extensions/CollectionExtensions.cs:22>
		il2cpp_codegen_runtime_class_init_inline(CollectionExtensions_tD9117E96D192D9FC13B6302FE7CB978756199B1C_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0 = ((CollectionExtensions_tD9117E96D192D9FC13B6302FE7CB978756199B1C_StaticFields*)il2cpp_codegen_static_fields_for(CollectionExtensions_tD9117E96D192D9FC13B6302FE7CB978756199B1C_il2cpp_TypeInfo_var))->___k_String;
		NullCheck(L_0);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_0, 0, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.core-utils@f0450cbac8d6/Runtime/Extensions/CollectionExtensions.cs:23>
		RuntimeObject* L_1 = ___0_collection;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_1);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		//<source_info:./Library/PackageCache/com.unity.xr.core-utils@f0450cbac8d6/Runtime/Extensions/CollectionExtensions.cs:24>
		V_1 = 0;
		//<source_info:./Library/PackageCache/com.unity.xr.core-utils@f0450cbac8d6/Runtime/Extensions/CollectionExtensions.cs:25>
		RuntimeObject* L_3 = ___0_collection;
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), (RuntimeObject*)L_3);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{
				{
					RuntimeObject* L_5 = V_2;
					if (!L_5)
					{
						goto IL_0064;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_0064:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0050_1;
			}

IL_0022_1:
			{
				//<source_info:./Library/PackageCache/com.unity.xr.core-utils@f0450cbac8d6/Runtime/Extensions/CollectionExtensions.cs:25>
				RuntimeObject* L_7 = V_2;
				NullCheck(L_7);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 4), L_7, (Il2CppFullySharedGenericAny*)L_8);
				il2cpp_codegen_memcpy(V_3, L_8, SizeOf_T_t32DD03B24BB35AB1F3E72814C290B3C16528774A);
				//<source_info:./Library/PackageCache/com.unity.xr.core-utils@f0450cbac8d6/Runtime/Extensions/CollectionExtensions.cs:27>
				il2cpp_codegen_runtime_class_init_inline(CollectionExtensions_tD9117E96D192D9FC13B6302FE7CB978756199B1C_il2cpp_TypeInfo_var);
				StringBuilder_t* L_9 = ((CollectionExtensions_tD9117E96D192D9FC13B6302FE7CB978756199B1C_StaticFields*)il2cpp_codegen_static_fields_for(CollectionExtensions_tD9117E96D192D9FC13B6302FE7CB978756199B1C_il2cpp_TypeInfo_var))->___k_String;
				int32_t L_10 = V_1;
				int32_t L_11 = L_10;
				V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
				int32_t L_12 = V_0;
				if ((((int32_t)L_11) == ((int32_t)L_12)))
				{
					G_B4_0 = L_9;
					goto IL_003e_1;
				}
				G_B3_0 = L_9;
			}
			{
				G_B5_0 = _stringLiteralE8EC81F1AF0ADE59FE6D0E2DB97C8326CA4172F7;
				G_B5_1 = G_B3_0;
				goto IL_0043_1;
			}

IL_003e_1:
			{
				G_B5_0 = _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
				G_B5_1 = G_B4_0;
			}

IL_0043_1:
			{
				il2cpp_codegen_memcpy(L_13, V_3, SizeOf_T_t32DD03B24BB35AB1F3E72814C290B3C16528774A);
				RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 6), L_13);
				NullCheck(G_B5_1);
				StringBuilder_t* L_15;
				L_15 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(G_B5_1, G_B5_0, L_14, NULL);
			}

IL_0050_1:
			{
				//<source_info:./Library/PackageCache/com.unity.xr.core-utils@f0450cbac8d6/Runtime/Extensions/CollectionExtensions.cs:25>
				RuntimeObject* L_16 = V_2;
				NullCheck((RuntimeObject*)L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				if (L_17)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_0065;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.core-utils@f0450cbac8d6/Runtime/Extensions/CollectionExtensions.cs:30>
		il2cpp_codegen_runtime_class_init_inline(CollectionExtensions_tD9117E96D192D9FC13B6302FE7CB978756199B1C_il2cpp_TypeInfo_var);
		StringBuilder_t* L_18 = ((CollectionExtensions_tD9117E96D192D9FC13B6302FE7CB978756199B1C_StaticFields*)il2cpp_codegen_static_fields_for(CollectionExtensions_tD9117E96D192D9FC13B6302FE7CB978756199B1C_il2cpp_TypeInfo_var))->___k_String;
		NullCheck((RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_18);
		V_4 = L_19;
		goto IL_0073;
	}

IL_0073:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.core-utils@f0450cbac8d6/Runtime/Extensions/CollectionExtensions.cs:31>
		String_t* L_20 = V_4;
		return L_20;
	}
}
// Method Definition Index: 81708
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionHelper_CheckConvertArguments_TisIl2CppFullySharedGenericStruct_mEE33400C53979ECF5C307B2B83F6F1BC18955CAD_gshared (int32_t ___0_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:449>
		int32_t L_0 = ___0_length;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:450>
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E612D5C4A642D3635F6EB9985DD8EF20BEEFC73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:452>
		bool L_3;
		L_3 = il2cpp_codegen_is_unmanaged(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:454>
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:455>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AEC4F0CCAC6A14C3FA879080C5907BEF6980462)), (RuntimeObject*)L_6, (RuntimeObject*)L_8, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:457>
		return;
	}
}
// Method Definition Index: 81696
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionHelper_CheckIsUnmanaged_TisIl2CppFullySharedGenericAny_m1E26EA4313AF9D7C7B99FC803C344ADC6742A0ED_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:238>
		bool L_0;
		L_0 = il2cpp_codegen_is_unmanaged(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:240>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral093872F2B91CF97AF817E102A9B984C29552DADB)), (RuntimeObject*)L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:242>
		return;
	}
}
// Method Definition Index: 81712
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionHelper_CheckReflectionDataCorrect_TisIl2CppFullySharedGenericAny_mEA45C07DC52D17AFE9878044676C6CF86E383B52_gshared (intptr_t ___0_reflectionData, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:599>
		return;
	}
}
// Method Definition Index: 81713
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionHelper_CheckReflectionDataCorrectInternal_TisIl2CppFullySharedGenericAny_m704472361907F9EEDC0769A68381E7E3087B70AD_gshared (intptr_t ___0_reflectionData, bool* ___1_burstCompiled, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:692>
		intptr_t L_0 = ___0_reflectionData;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:693>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AEB6C175037170017B161A77CCF8F6B0E629351)), (RuntimeObject*)L_4, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:694>
		bool* L_7 = ___1_burstCompiled;
		*((int8_t*)L_7) = (int8_t)0;
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:695>
		return;
	}
}
// Method Definition Index: 81709
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m53ED670E537C28B115C56EABA4C6C47BA456C5BE_gshared (void* ___0_dataPointer, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, bool ___3_setTempMemoryHandle, const RuntimeMethod* method) 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:488>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:490>
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:491>
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:492>
		bool L_2;
		L_2 = AllocatorHandle_get_IsCustomAllocator_mB40C586EBB549E9D5F46BF0CDA12966E2F1CF9A1((&___2_allocator), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:494>
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		(&V_0)->___m_AllocatorLabel = L_4;
		goto IL_0043;
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:498>
		(&V_0)->___m_AllocatorLabel = (int32_t)1;
	}

IL_0043:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:509>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_0;
		V_2 = L_5;
		goto IL_0047;
	}

IL_0047:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:510>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = V_2;
		return L_6;
	}
}
// Method Definition Index: 81710
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_ConvertExistingNativeListToNativeArray_TisIl2CppFullySharedGenericStruct_m81A04D0556A2EAC7D125830380F66E04F340724A_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___0_nativeList, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:529>
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_0 = ___0_nativeList;
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_1 = (*(NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)L_0);
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_3 = ___1_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = ___2_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5;
		L_5 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((void*)L_2, L_3, L_4, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_0 = L_5;
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:536>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = V_0;
		V_1 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:537>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 81703
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m38CA34336126E8685168D490620B3A64ED26118C_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:356>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:358>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = ___0_array;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&V_0), L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_0045;
	}

IL_0021:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:362>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:363>
		int32_t L_5;
		L_5 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 3));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&V_0), L_5, L_6, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 4));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:364>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_7 = ___0_array;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))((&V_0), L_7, il2cpp_rgctx_method(method->rgctx_data, 6));
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:366>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_8 = V_0;
		V_2 = L_8;
		goto IL_0049;
	}

IL_0049:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:367>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 81704
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m9ABDCCD844D499C118A575A2DCB65C744C9FF6DA_gshared (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:381>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:383>
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3 = ___0_array;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&V_0), L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_0041;
	}

IL_0021:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:387>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:388>
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = ___0_array;
		NullCheck(L_5);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&V_0), ((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 4));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:389>
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_7 = ___0_array;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))((&V_0), L_7, il2cpp_rgctx_method(method->rgctx_data, 6));
	}

IL_0041:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:391>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_8 = V_0;
		V_2 = L_8;
		goto IL_0045;
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:392>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 81705
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m47C0F168D576B0ED4372A8922108736E0481857F_gshared (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, Il2CppFullySharedGenericStruct* ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:408>
		Il2CppFullySharedGenericStruct* L_0 = ___1_allocator;
		bool L_2;
		L_2 = ConstrainedFuncInvoker0< bool >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (void*)L_0);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:410>
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = ___0_array;
		Il2CppFullySharedGenericStruct* L_5 = ___1_allocator;
		int32_t L_7;
		L_7 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 4), L_6, (void*)L_5);
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&V_0), L_4, L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		goto IL_004c;
	}

IL_002c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:414>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:415>
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_8 = ___0_array;
		NullCheck(L_8);
		Il2CppFullySharedGenericStruct* L_9 = ___1_allocator;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))((&V_0), ((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 8));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:416>
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_10 = ___0_array;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)))((&V_0), L_10, il2cpp_rgctx_method(method->rgctx_data, 10));
	}

IL_004c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:418>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_11 = V_0;
		V_2 = L_11;
		goto IL_0050;
	}

IL_0050:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:419>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12 = V_2;
		return L_12;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 CollectionHelper_CreateNativeArray_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m56A228C789F80C2614D2D93138DCF34B1A1D3170_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_m94DB1A0F1293F5BAA65533ED74C41E31D71CA979((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m40C9739B189BB2A5A4B5D375C33123A039D65C2B((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 CollectionHelper_CreateNativeArray_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_mAC11C2894EF66688A35EAE15A382DCE11A9AD070_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_mAEE080A594D2B54E62742BCBAC067BD86B62EE90((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_mDB05DADCD82C0753A10F968BC12105C013F004F6((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 CollectionHelper_CreateNativeArray_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m87143076B93EA12528D5E9372750D49B132918DD_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_m5D9AB1CF4D2E70F87BE8C5DA8BB700B0DBAEC960((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_mF03BC6853C9DD519B47323DDAB4B990501463489((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 CollectionHelper_CreateNativeArray_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m545446B6CCCFA78F28D0BF324AAABD721468B8EC_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_m81CC7BB6F9FA4BD6A271BECB0E8979FAFBBFF8F2((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m02029B2BD79047E1295F3C1F6D403DAE546C3F79((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF CollectionHelper_CreateNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE89A180FD53BA60F5FA7F6F059773A378080BA34_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mACF77E80482D69D54E384207E8EF83F56714FEBF((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 CollectionHelper_CreateNativeArray_TisDebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93_m90AD36F5317BB0056D3D87BC47F382ED77D236BF_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_m13B5E98249D94532DD7700C04ADA9346B6C01646((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisDebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93_mA22E1F5DC673C0DBE2D35C0E170FADEF9EE9BC53((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 CollectionHelper_CreateNativeArray_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_mDA23C29F9FA1539AC20957605446E6C9D2EB8189_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_m48B5E526D82D23460D26CC391BD64752F97ABF18((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_mDAB772BAC6F20741B210B3AB37819FDEAC556936((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 CollectionHelper_CreateNativeArray_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m6CE1FBED8940C215ABD8F8C038F94E7659E0A582_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_m7CD61B8B4CCB40810552A5884C7F1EDE208688B5((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m875FDB5805D73A9DB2D203063E5CCC07999F43A7((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 CollectionHelper_CreateNativeArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAF52A80BBB617F62596D58F8FFD9E3E6AA9DB60F_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_mE947909B5D5477F068B16DF1CDB86DB6A68B6994((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mF5D608563990BDF4A932F444C5C91CD6791E7DE6((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 CollectionHelper_CreateNativeArray_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_m8E65D32099391BFDD95F615BCA15E55F0BA72DB1_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_m7F2B3220F3366EAB71B0C62942CB678827036666((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_mB293485A46F4CD60A26427EA159A60016470DF7A((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 CollectionHelper_CreateNativeArray_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_mEFC130201F6C446B83F0975B9C413159E182BD52_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_mB0E2CBA91B4F2EA86445DC38D139A42A1C0FAA71((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m4954F1AE988D519072BB11B6CCAD7C500C280386((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 CollectionHelper_CreateNativeArray_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_m3508C172D038BE19CBFAB919B67AED29F62876DC_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_m6AB15133D68784F1E9BB1C5CF6AF21EE4DC4FBBF((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_mFBA847E240CBCFD6742ACEE692097A3686EB1478((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E CollectionHelper_CreateNativeArray_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m0D7F6CF92BCF84F265BA70040E0CAE6D56E363B6_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_mD0F26C30D505CF393A50CEAD19D9BAAD3E77CB87((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m4219EEB937F0AA2846952934259518672640C2F0((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 CollectionHelper_CreateNativeArray_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_mEA905CFAB630A2381BA5740938DB1F85FA604F89_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_mAF7AEA5C34BE1F328FB3175B67928729025E5AB1((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_m2AC2D93055F73106FDF21A17E4B628111A55A673((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E CollectionHelper_CreateNativeArray_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m094715E5969482D358E5411558B459CC06519DF2_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_m2BE74BAAAACB2FB8C886355218332C3D71CC870D((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m92C729A213EC9B6599360003A73F4FF36FDCFEC5((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C CollectionHelper_CreateNativeArray_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mEB030D0A1BF6EA5944EEA67E4B82C0D33F24D14A_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_m2B08A55873756E21BCB6D1C2CD1D3ED18D00BCA2((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mED77F59553BE97385BAF8D6FB358529A1E959379((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 CollectionHelper_CreateNativeArray_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_mCC3589A714ABB57A822E0F76BF92BBF3ECA83C39_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_mE3B7F1A32ACB2193062CBB170B4ED9A7843325C4((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_mEEFD81D6225622D3284E00E58E9979E357EA3846((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC59BF07E462EBB1B63D0EEBDA144231E87EC237((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 CollectionHelper_CreateNativeArray_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mACC40E611BE1390509B0BCE29131B67F973BFAD8_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_m0D4D6107C1C882F6D813E0CC53744262582D6110((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m20661CE34BF69BC0B801A3909158DEA04D621DEB((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 CollectionHelper_CreateNativeArray_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m87ED367DBA36450604720E68297A984787381308_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m48A94190A440E505DCB0C725DF4FE2DBDE33CCB6((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 CollectionHelper_CreateNativeArray_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_m58904C83824C8C3F6644D1DF6407214A84DE9AEA_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_m4DB28141C684B6B39DE44C899ECFD06EE0B7C8D4((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_mFC9CFF15D4351863CC7ED0178D46D69735188B6F((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF CollectionHelper_CreateNativeArray_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_m013610B611BD8210B089DEADE35074F88BE065CC_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_mB4F24E1671E46B6A5A5BE881EED6B8FA573BC045((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_mC87C5E72BEAA8A1E94A6C34A486DA2BB429E48C4((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 CollectionHelper_CreateNativeArray_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_mA6F7F37C7BFFA3C2F46F723DC3AED4259DC54E87_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_m18E7F9491A74B9BBAD80C7FA7871313EED3797D6((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_mDA389B33EA02F4831D5C7EA695532A0B10AA3EEC((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 81702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E CollectionHelper_CreateNativeArray_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_mD16946E6C24DF8AB8B71EC6A1AD692F96A632A85_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:332>
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:334>
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_5 = ___2_options;
		NativeArray_1__ctor_m00D8BF626DE89E941B6C7F7DE6BDB75ACDBDA821((&V_0), L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_0037;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E));
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:339>
		int32_t L_6 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ___1_allocator;
		int32_t L_8 = ___2_options;
		NativeArrayExtensions_Initialize_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_m7C87C137316B6924C29233A2E467ADA6B8A7DCA8((&V_0), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:341>
		NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E L_9 = V_0;
		V_2 = L_9;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@aea9d3bd5e19/Unity.Collections/CollectionHelper.cs:342>
		NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 4024
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 3923
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
// Method Definition Index: 8154
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnmanagedFunctionPointerAttribute_get_CallingConvention_m1F7BA425C1936CAA9F62483B4699A4DB52B887A6_inline (UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_callingConvention;
		return L_0;
	}
}
// Method Definition Index: 88014
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* CallSiteBinder_get_UpdateLabel_mFBA5DD59CA8778F201C1BA20B91270D17AC367FC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F_il2cpp_TypeInfo_var);
		LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* L_0 = ((CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F_StaticFields*)il2cpp_codegen_static_fields_for(CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F_il2cpp_TypeInfo_var))->___U3CUpdateLabelU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 86153
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* LabelTarget_get_Type_mADC0685E37D8FD2990BFA36A3679AB7C5659143E_inline (LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 87994
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* CallSite_get_Binder_mA7D06DD00FEE519623E5D4CAF8A4009B1899DFCD_inline (CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF* __this, const RuntimeMethod* method) 
{
	{
		CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* L_0 = __this->____binder;
		return L_0;
	}
}
// Method Definition Index: 3934
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
// Method Definition Index: 88076
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* RuleCache_1_GetRules_mD30628F4B83C0F791FE5430259E0A25E5A5E3EEC_gshared_inline (RuleCache_1_t32D9301EB5D4B88BD475030E2B01EC50589735CC* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____rules;
		return L_0;
	}
}
// Method Definition Index: 16283
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CbuttonU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 16285
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_pressedButtons_mD44593EB9F5A5992961586234A01D44B871A1F64_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CpressedButtonsU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 16277
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CpointerIdU3Ek__BackingField;
		return L_0;
	}
}
