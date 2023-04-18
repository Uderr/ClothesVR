#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>,System.Boolean>
struct Func_2_tF839A7B6018DB8715AC386557AEBF8AEB7FBCB7A;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Boolean>
struct Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_tCAB68D058A797DECB10578EB28AA70E3134D43D4;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC;
// System.Func`2<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>,System.Boolean>
struct Func_2_tF028C7C145D3E150C13A8E51274D57A8AF2D632B;
// System.Func`2<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>,Unity.Networking.QoS.UcgQosServer>
struct Func_2_tAB6A23FC731FC9CA5DFAF41F7CDEDDA1F4DEBA9A;
// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_t2E63391AECBD8CA799710423D9730AA39559D75F;
// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4;
// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_tBB2DD6F6F57A7CED3F528051EAF0B1377BD88A15;
// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t21649CE740833D9FAFE6A7F8E4A5D81BAFF7BBA6;
// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A;
// System.Func`2<System.Char,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tB37CCD2A5969200F21E0BAA985B0A6BE2F9A4489;
// System.Func`2<System.Char,System.Boolean>
struct Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F;
// System.Func`2<System.Char,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t5CC82010BA9AC19A7BFAFCE3ECA7A5E9D4300307;
// System.Func`2<System.Char,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_tBEC41A4D6A909AC63A03BF9F1DAB6458A065C583;
// System.Func`2<System.Char,System.Object>
struct Func_2_t4012A4804CEF770533B75F684A4E0713C46C35CC;
// System.Func`2<QFSW.QC.Suggestors.CollapsedCommand,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_t67F9EBD004A78A6B2AF18DEAA765247430E0AD9A;
// System.Func`2<QFSW.QC.Suggestors.CollapsedCommand,System.Boolean>
struct Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281;
// System.Func`2<QFSW.QC.Suggestors.CollapsedCommand,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_tF9B98EBDC33FA9F55102AE820CCBFC512A6B436D;
// System.Func`2<QFSW.QC.Suggestors.CollapsedCommand,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_tF778CCCFD957D2696064F1BDAC7FFB1261712F60;
// System.Func`2<QFSW.QC.Suggestors.CollapsedCommand,System.Object>
struct Func_2_t82A267C157A1381632C056C84501D8D1B7378F12;
// System.Func`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t3A5CA297A4A6BFC271FA43706A5CEA12BEEDA90F;
// System.Func`2<System.Collections.DictionaryEntry,System.Boolean>
struct Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4;
// System.Func`2<System.Collections.DictionaryEntry,System.Object>
struct Func_2_t36B60C467E4EEB65DF944BD9CF29E8115D2927E4;
// System.Func`2<System.Int32Enum,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tF56DF5480E243FCDF894BF58102BE74409D47665;
// System.Func`2<System.Int32Enum,System.Boolean>
struct Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821;
// System.Func`2<System.Int32Enum,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t7E1F1930B06F2B56048C3F47E704C253B1B68E06;
// System.Func`2<System.Int32Enum,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3;
// System.Func`2<System.Int32Enum,System.Object>
struct Func_2_tF12503C33FD184E465546C31F324F4C344B8975A;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tF5C06A04B784618F64D714D3EC0369F6AAFA85EA;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Boolean>
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t6993A7E97E9AF10DFE6755887A84179BD72ABED4;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB;
// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tCE41DEFAE5E693DD08472B97A56F8EFFFF68519D;
// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Boolean>
struct Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619;
// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t23F03B13DE50EEC5D41D99720FC89017C40C6BFB;
// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22;
// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tD5E157E92F8442B3C92279D3D317BB0FC58CCBA6;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Boolean>
struct Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t8E15F832C31D9406090ADF35F35AC6BF57AEB186;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E;
// System.Func`2<System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tEE709D92F595E05CEE36C7FD0D5EE65BD0AC82B0;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_tE362AEB2864A35557BEC7D69EF7917131E19122F;
// System.Func`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t92904CE6AE729E23667675B2858ABE16106A0837;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<Unity.Services.Qos.Internal.QosResult,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_t17C0617954A0A3AEA51F701AE7ECE0595A11A085;
// System.Func`2<Unity.Services.Qos.Internal.QosResult,System.Boolean>
struct Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866;
// System.Func`2<Unity.Services.Qos.Internal.QosResult,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_tDAFB6810B3A0D7C35966B0470E35E708B9EAD22A;
// System.Func`2<Unity.Services.Qos.Internal.QosResult,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t4F77AB4B9B4859369869026B567EE7FC972833B6;
// System.Func`2<Unity.Services.Qos.Internal.QosResult,System.Object>
struct Func_2_t89D9548C15273DC61D5CB695EB12E7D8F9277392;
// System.Func`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Func_2_tBB6C0125591025972B30788782F7DEAC2312E628;
// System.Func`2<UnityEngine.SceneManagement.Scene,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_t7CB9B75CB061BD135520EDD1DCFC21BFA0CBF93B;
// System.Func`2<UnityEngine.SceneManagement.Scene,System.Boolean>
struct Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1;
// System.Func`2<UnityEngine.SceneManagement.Scene,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t7F4403E37E698421F2F7365CBC2F164A312C604C;
// System.Func`2<UnityEngine.SceneManagement.Scene,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_tC06C5BFD98A2B3C4DA8B5CB2262A41433724E9AD;
// System.Func`2<UnityEngine.SceneManagement.Scene,System.Object>
struct Func_2_t49527C6898AE3EF334B98AD44FFA909958F93E93;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tC496704D554895234B1360058C5CC2D901C24957;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t4509F8D53C500A8517837B406FECE08CC84583C1;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD;
// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281;
// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Boolean>
struct Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F;
// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t2C88A6AA929B9D941FB9E538ED62F110F3734CEF;
// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B;
// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB;
// System.Func`2<Unity.Networking.QoS.UcgQosServer,System.Boolean>
struct Func_2_t0432CBC155E7FEDE4CDFA0B76378EEF7CD7DD6A2;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t922E6C1B6F349B9F6BDBFB1EAF7D171ACC8A1A54;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerable_1_tF961F3E00EE8CF8A2420A47E491F0DC255B7F073;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.Object,System.Object>>
struct IEnumerable_1_tF87C02535F5ADDDE139D4D2EE4BD06652C1791A4;
// System.Collections.Generic.IEnumerable`1<QFSW.QC.Suggestors.CollapsedCommand>
struct IEnumerable_1_t931EFA5BA3ABD69BEC87608AE7335C7741E7AB9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEnumerable_1_t5359DEC999AA35C7E2DE775B0455A4760550ED7F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Unity.Networking.QoS.UcgQosServer>
struct IEnumerable_1_tA19606DF784E6FFC51D7585A52AC4C3D0DBBBA95;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t4CB13C9A05F08FC5070C0050B8AF1013247C8994;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t327FF232159D9644239A65F54312F684DB7BE375;
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Object,System.Object>>
struct IEnumerator_1_t526C6CBBA5290F560D4704AB11CDA3D0D499F433;
// System.Collections.Generic.IEnumerator`1<QFSW.QC.Suggestors.CollapsedCommand>
struct IEnumerator_1_t707D9D6682DCEB543403EE5C6A534D6B0764309F;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEnumerator_1_t6999C610E1C05F2C90151CD5C41E24528ACB3255;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<Unity.Networking.QoS.UcgQosServer>
struct IEnumerator_1_t874808A6EDD826BA5C9CB0F62B379E61BCD724B1;
// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Iterator_1_tC52A5965F804860E5E4108E5EAA8600E507AF7C5;
// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Iterator_1_t6F8827EED7DB0C845108D7DF969A608714128E05;
// System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>
struct Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7;
// System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>
struct Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B;
// System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
// System.Linq.Enumerable/Iterator`1<Unity.Networking.QoS.UcgQosServer>
struct Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>
struct List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F;
// System.Collections.Generic.List`1<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>>
struct List_1_tF685FD4377838FF6E7C4D59DA4484217997B917A;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Object>>
struct List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7;
// System.Collections.Generic.List`1<QFSW.QC.Suggestors.CollapsedCommand>
struct List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F;
// System.Collections.Generic.List`1<System.Collections.DictionaryEntry>
struct List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.InternedString>
struct List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Unity.Services.Qos.Internal.QosResult>
struct List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85;
// System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene>
struct List_1_tD2999566789842105DF8EF481E4494088E70E6E8;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.Substring>
struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_tAF9FDF68849733BAA84FD0013757E91378B36B56;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>,Unity.Networking.QoS.UcgQosServer>
struct WhereSelectListIterator_2_tADD6CE97894F51D6D3908FAF8E6CD149A61A689F;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tAE583ED984BDCD08131FD2580658CACE8D5D1859;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_t064DAF598D03A317F99032C8CF14A073E9ED564D;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tA15C13638825DF99DF32A5FB4B111077A64C0E16;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t3BC5C4A920418A5A13EEE8CE7669768FE6B31714;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_t3BB9CB5D44DE3D2E765F07783D6DF94947FA5C23;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t034067BF944B0FB2C59E80AF017209DD84A3E2F2;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.Object>
struct WhereSelectListIterator_2_tA571D55920CDE2B37B1CF3B6CE23E14B6E454EA1;
// System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t37321EC228B494F26F235ED0B03A38101F0C0F9A;
// System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_tF594446842E2ED4780E9EE6CCE25471B5528EF31;
// System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tA4EC555AFBA70C5AC80F5BE552A6C6879A27DC78;
// System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,System.Object>
struct WhereSelectListIterator_2_tEBD104E1FC70F3E5CF4ABA98EA10336D97076B95;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tE5953E8934A259A52F507FC131C990C75B350076;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Object>
struct WhereSelectListIterator_2_t8931D62B9741BC0631B61C889BA7EE43F179C2B6;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t1A5B574577FF00CA7DAA72E41AD6F3C3715A546B;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_t9E866A9C344FC96E83B0198B0DFFFD6904CA7009;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>
struct WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t5BEDB73F65F06237E6CBD3983597591A9FEDEDF2;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_tF680780AB7A7605EA3650FCA9A9F2D87E558DEDE;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t3855774C58EB643AD738982FA09DFB0B337F5D49;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_tC19A900598CE8B50891C2B097A515521FB897583;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t08E6CE9DD97A5345E1A29CBD9C4C2FF831955A91;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_tB8704D73928864EF7CE56994835A9033599CACD9;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t1D0D030153AD3907D2774B6B5C56F2AA852BC21D;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_t2AF6EB7730B7B73C455D627D1524775D452C979C;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t5E47BBA5B6D1697C595494CB30489BFB75D9594C;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_t98679D16543B155A550591D15E2DECB2B18C590A;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tC29224208126B68E4ACB7C306CA8B224C2A6D78E;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,System.Object>
struct WhereSelectListIterator_2_t5EA8B78B1CACED831A1FEF531DD01B9E1CFF103A;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct WhereSelectListIterator_2_t5156CC8FFE027EF789CFC5E4A5E6D84EAD74CC16;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tB8EB2971B802398D4F0AE4921BAF631E21D5AC8A;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_tBC2CCA85BCFB5B80246591E9CD4BFDB17303A054;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t60DBF7FEE26D5EA37ECC6269B16AC18EB99FA70F;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.Object>
struct WhereSelectListIterator_2_t02F3D66BA82AA09F24BB82A467101B155C6004BE;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_t229BAEABE6DE46F517730AD61CC20E302DBD3982;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_tD9C530ACE364715B6AE286578D7C6F457346BF77;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_t50415C8204DC41C3B5E41B88FA478060DED5F9F3;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F;
// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>
struct WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896;
// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Object>
struct WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723;
// Unity.Netcode.NetworkSerializableSerializer`1/WriteValueDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct WriteValueDelegate_t077E015BF37B117EF4B94AF2F702B60834C7EDF9;
// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct WriteValueDelegate_tD109061967254477F792D274A796F2D8D68485D7;
// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A;
// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072;
// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct XRSubsystem_1_tE79C39F057DC70EEF40AB0F327DDDF8CC6E3E249;
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>[]
struct KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674;
// System.Nullable`1<Unity.Networking.QoS.UcgQosServer>[]
struct Nullable_1U5BU5D_t4D26AA027DCC457C09504504BD0A524DF9E95B5C;
// System.ValueTuple`2<System.Object,System.Object>[]
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// QFSW.QC.Suggestors.CollapsedCommand[]
struct CollapsedCommandU5BU5D_tB5AF0BB3901BDD94E2C78857F591A11370A7B2DA;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// UnityEngine.InputSystem.Utilities.NameAndParameters[]
struct NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2;
// UnityEngine.InputSystem.Utilities.NamedValue[]
struct NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Unity.Services.Qos.Internal.QosResult[]
struct QosResultU5BU5D_t75C4DCC436089DFBCEEED024EAD6D3586B05C21C;
// UnityEngine.SceneManagement.Scene[]
struct SceneU5BU5D_tB245DDBED17C33D5CBBAE03B440D2B892756DF80;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
// UnityEngine.InputSystem.Utilities.Substring[]
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77;
// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue[]
struct JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// QFSW.QC.CommandData
struct CommandData_t1ABD7834A5DD05B6EE2D210BDA90324BFEB69C21;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;

IL2CPP_EXTERN_C RuntimeClass* BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* WorkStealingQueue_LocalPush_m8B1D8601B4870C599A8FF4F36500D74B9C159C0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject* ___current_2;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>
struct List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>>
struct List_1_tF685FD4377838FF6E7C4D59DA4484217997B917A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Nullable_1U5BU5D_t4D26AA027DCC457C09504504BD0A524DF9E95B5C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF685FD4377838FF6E7C4D59DA4484217997B917A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Nullable_1U5BU5D_t4D26AA027DCC457C09504504BD0A524DF9E95B5C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Object>>
struct List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<QFSW.QC.Suggestors.CollapsedCommand>
struct List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CollapsedCommandU5BU5D_tB5AF0BB3901BDD94E2C78857F591A11370A7B2DA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CollapsedCommandU5BU5D_tB5AF0BB3901BDD94E2C78857F591A11370A7B2DA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.DictionaryEntry>
struct List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.InternedString>
struct List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Services.Qos.Internal.QosResult>
struct List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	QosResultU5BU5D_t75C4DCC436089DFBCEEED024EAD6D3586B05C21C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	QosResultU5BU5D_t75C4DCC436089DFBCEEED024EAD6D3586B05C21C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene>
struct List_1_tD2999566789842105DF8EF481E4494088E70E6E8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SceneU5BU5D_tB245DDBED17C33D5CBBAE03B440D2B892756DF80* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD2999566789842105DF8EF481E4494088E70E6E8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SceneU5BU5D_tB245DDBED17C33D5CBBAE03B440D2B892756DF80* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.Substring>
struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ___s_emptyArray_5;
};

// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>
struct WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_headIndex
	int32_t ____headIndex_0;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_tailIndex
	int32_t ____tailIndex_1;
	// T[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_mask
	int32_t ____mask_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_addTakeCount
	int32_t ____addTakeCount_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_stealCount
	int32_t ____stealCount_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_currentOp
	int32_t ____currentOp_6;
	// System.Boolean System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_frozen
	bool ____frozen_7;
	// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<T> System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_nextQueue
	WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* ____nextQueue_8;
	// System.Int32 System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_ownerThreadId
	int32_t ____ownerThreadId_9;
};

// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A  : public RuntimeObject
{
	// System.Int32[] System.Xml.Linq.XHashtable`1/XHashtableState::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<TValue>[] System.Xml.Linq.XHashtable`1/XHashtableState::_entries
	EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* ____entries_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState::_numEntries
	int32_t ____numEntries_2;
	// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue> System.Xml.Linq.XHashtable`1/XHashtableState::_extractKey
	ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ____extractKey_3;
};

// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072  : public RuntimeObject
{
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::_state
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* ____state_0;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Subsystem
struct Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>
struct Entry_t6E72C722C46949F140550D563C1F41E304752583 
{
	// TValue System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Value
	RuntimeObject* ___Value_0;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::HashCode
	int32_t ___HashCode_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Next
	int32_t ___Next_2;
};

// System.Collections.Generic.List`1/Enumerator<System.Char>
struct Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Il2CppChar ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>
struct Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.Subsystem`1<System.Object>
struct Subsystem_1_t75B62C9B687446D6D9E3C8FB0A841F2CC5A174C8  : public Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7
{
};

// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// QFSW.QC.Suggestors.CollapsedCommand
struct CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B 
{
	// QFSW.QC.CommandData QFSW.QC.Suggestors.CollapsedCommand::Command
	CommandData_t1ABD7834A5DD05B6EE2D210BDA90324BFEB69C21* ___Command_0;
	// System.Int32 QFSW.QC.Suggestors.CollapsedCommand::NumOptionalParams
	int32_t ___NumOptionalParams_1;
};
// Native definition for P/Invoke marshalling of QFSW.QC.Suggestors.CollapsedCommand
struct CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B_marshaled_pinvoke
{
	CommandData_t1ABD7834A5DD05B6EE2D210BDA90324BFEB69C21* ___Command_0;
	int32_t ___NumOptionalParams_1;
};
// Native definition for COM marshalling of QFSW.QC.Suggestors.CollapsedCommand
struct CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B_marshaled_com
{
	CommandData_t1ABD7834A5DD05B6EE2D210BDA90324BFEB69C21* ___Command_0;
	int32_t ___NumOptionalParams_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC 
{
	// Unity.Netcode.FastBufferWriter/WriterHandle* Unity.Netcode.FastBufferWriter::Handle
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle_0;
};

struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticFields
{
	// System.Byte[] Unity.Netcode.FastBufferWriter::s_ByteArrayCache
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_ByteArrayCache_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// Unity.Services.Qos.Internal.QosResult
struct QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 
{
	// System.String Unity.Services.Qos.Internal.QosResult::Region
	String_t* ___Region_0;
	// System.Int32 Unity.Services.Qos.Internal.QosResult::AverageLatencyMs
	int32_t ___AverageLatencyMs_1;
	// System.Single Unity.Services.Qos.Internal.QosResult::PacketLossPercent
	float ___PacketLossPercent_2;
};
// Native definition for P/Invoke marshalling of Unity.Services.Qos.Internal.QosResult
struct QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshaled_pinvoke
{
	char* ___Region_0;
	int32_t ___AverageLatencyMs_1;
	float ___PacketLossPercent_2;
};
// Native definition for COM marshalling of Unity.Services.Qos.Internal.QosResult
struct QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshaled_com
{
	Il2CppChar* ___Region_0;
	int32_t ___AverageLatencyMs_1;
	float ___PacketLossPercent_2;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Threading.SpinWait
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 
{
	// System.Int32 System.Threading.SpinWait::_count
	int32_t ____count_1;
};

struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_StaticFields
{
	// System.Int32 System.Threading.SpinWait::SpinCountforSpinBeforeWait
	int32_t ___SpinCountforSpinBeforeWait_0;
};

// UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	// System.String UnityEngine.UIElements.StyleSelectorPart::m_Value
	String_t* ___m_Value_0;
	// UnityEngine.UIElements.StyleSelectorType UnityEngine.UIElements.StyleSelectorPart::m_Type
	int32_t ___m_Type_1;
	// System.Object UnityEngine.UIElements.StyleSelectorPart::tempData
	RuntimeObject* ___tempData_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};

// UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};

// System.Void
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

// Unity.Netcode.Components.NetworkTransform/NetworkTransformState
struct NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 
{
	// System.UInt16 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::m_Bitset
	uint16_t ___m_Bitset_11;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::PositionX
	float ___PositionX_12;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::PositionY
	float ___PositionY_13;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::PositionZ
	float ___PositionZ_14;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::RotAngleX
	float ___RotAngleX_15;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::RotAngleY
	float ___RotAngleY_16;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::RotAngleZ
	float ___RotAngleZ_17;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::ScaleX
	float ___ScaleX_18;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::ScaleY
	float ___ScaleY_19;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::ScaleZ
	float ___ScaleZ_20;
	// System.Double Unity.Netcode.Components.NetworkTransform/NetworkTransformState::SentTime
	double ___SentTime_21;
	// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::IsDirty
	bool ___IsDirty_22;
	// System.Int32 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::EndExtrapolationTick
	int32_t ___EndExtrapolationTick_23;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Components.NetworkTransform/NetworkTransformState
struct NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_marshaled_pinvoke
{
	uint16_t ___m_Bitset_11;
	float ___PositionX_12;
	float ___PositionY_13;
	float ___PositionZ_14;
	float ___RotAngleX_15;
	float ___RotAngleY_16;
	float ___RotAngleZ_17;
	float ___ScaleX_18;
	float ___ScaleY_19;
	float ___ScaleZ_20;
	double ___SentTime_21;
	int32_t ___IsDirty_22;
	int32_t ___EndExtrapolationTick_23;
};
// Native definition for COM marshalling of Unity.Netcode.Components.NetworkTransform/NetworkTransformState
struct NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_marshaled_com
{
	uint16_t ___m_Bitset_11;
	float ___PositionX_12;
	float ___PositionY_13;
	float ___PositionZ_14;
	float ___RotAngleX_15;
	float ___RotAngleY_16;
	float ___RotAngleZ_17;
	float ___ScaleX_18;
	float ___ScaleY_19;
	float ___ScaleZ_20;
	double ___SentTime_21;
	int32_t ___IsDirty_22;
	int32_t ___EndExtrapolationTick_23;
};

// System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>
struct Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<QFSW.QC.Suggestors.CollapsedCommand>
struct Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Collections.DictionaryEntry>
struct Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.InternedString>
struct Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Qos.Internal.QosResult>
struct Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.SceneManagement.Scene>
struct Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD2999566789842105DF8EF481E4494088E70E6E8* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>
struct Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>
struct Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ____current_3;
};

// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Iterator_1_tC52A5965F804860E5E4108E5EAA8600E507AF7C5  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Iterator_1_t6F8827EED7DB0C845108D7DF969A608714128E05  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>
struct Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___current_2;
};

// System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>
struct Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B ___current_2;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___current_2;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.Object>
struct WhereSelectListIterator_2_tA571D55920CDE2B37B1CF3B6CE23E14B6E454EA1  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t4012A4804CEF770533B75F684A4E0713C46C35CC* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>
struct WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct XRSubsystem_1_tE79C39F057DC70EEF40AB0F327DDDF8CC6E3E249  : public Subsystem_1_t75B62C9B687446D6D9E3C8FB0A841F2CC5A174C8
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Running
	bool ___m_Running_0;
};

// Unity.Netcode.BufferSerializerWriter
struct BufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4 
{
	// Unity.Netcode.FastBufferWriter Unity.Netcode.BufferSerializerWriter::m_Writer
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___m_Writer_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 
{
	// System.String UnityEngine.InputSystem.Utilities.NameAndParameters::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue> UnityEngine.InputSystem.Utilities.NameAndParameters::<parameters>k__BackingField
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField_1;
};

// UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED 
{
	// System.String UnityEngine.InputSystem.Utilities.NamedValue::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_1;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.NamedValue::<value>k__BackingField
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CvalueU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_1;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CvalueU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_1;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CvalueU3Ek__BackingField_2;
};

// Unity.Networking.QoS.UcgQosServer
struct UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136 
{
	// System.String Unity.Networking.QoS.UcgQosServer::regionid
	String_t* ___regionid_0;
	// System.String Unity.Networking.QoS.UcgQosServer::ipv4
	String_t* ___ipv4_1;
	// System.String Unity.Networking.QoS.UcgQosServer::ipv6
	String_t* ___ipv6_2;
	// System.UInt16 Unity.Networking.QoS.UcgQosServer::port
	uint16_t ___port_3;
	// System.DateTime Unity.Networking.QoS.UcgQosServer::BackoffUntilUtc
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___BackoffUntilUtc_4;
};
// Native definition for P/Invoke marshalling of Unity.Networking.QoS.UcgQosServer
struct UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136_marshaled_pinvoke
{
	char* ___regionid_0;
	char* ___ipv4_1;
	char* ___ipv6_2;
	uint16_t ___port_3;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___BackoffUntilUtc_4;
};
// Native definition for COM marshalling of Unity.Networking.QoS.UcgQosServer
struct UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136_marshaled_com
{
	Il2CppChar* ___regionid_0;
	Il2CppChar* ___ipv4_1;
	Il2CppChar* ___ipv6_2;
	uint16_t ___port_3;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___BackoffUntilUtc_4;
};

// UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.Utilities.JsonParser/JsonString::text
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonString::hasEscapes
	bool ___hasEscapes_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text_0;
	int32_t ___hasEscapes_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text_0;
	int32_t ___hasEscapes_1;
};

// Unity.Netcode.BufferSerializer`1<Unity.Netcode.BufferSerializerWriter>
struct BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 
{
	// TReaderWriter Unity.Netcode.BufferSerializer`1::m_Implementation
	BufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4 ___m_Implementation_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>
struct Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ____current_3;
};

// System.Linq.Enumerable/Iterator`1<Unity.Networking.QoS.UcgQosServer>
struct Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136 ___current_2;
};

// System.Nullable`1<Unity.Networking.QoS.UcgQosServer>
struct Nullable_1_t9EAB4070BB57AF52492D59610E8652118CDA4022 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136 ___value_1;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct WhereEnumerableIterator_1_t01978BC983A000D7104B5F9ADA51E4423E2372EB  : public Iterator_1_tC52A5965F804860E5E4108E5EAA8600E507AF7C5
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tF839A7B6018DB8715AC386557AEBF8AEB7FBCB7A* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t8003EA874EC8867895405A3AB37AFFC5E2B99308  : public Iterator_1_t6F8827EED7DB0C845108D7DF969A608714128E05
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.ValueTuple`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<QFSW.QC.Suggestors.CollapsedCommand>
struct WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8  : public Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tAE583ED984BDCD08131FD2580658CACE8D5D1859  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t2E63391AECBD8CA799710423D9730AA39559D75F* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_t064DAF598D03A317F99032C8CF14A073E9ED564D  : public Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tBB2DD6F6F57A7CED3F528051EAF0B1377BD88A15* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tA15C13638825DF99DF32A5FB4B111077A64C0E16  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t21649CE740833D9FAFE6A7F8E4A5D81BAFF7BBA6* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t3BC5C4A920418A5A13EEE8CE7669768FE6B31714  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB37CCD2A5969200F21E0BAA985B0A6BE2F9A4489* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_t3BB9CB5D44DE3D2E765F07783D6DF94947FA5C23  : public Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t5CC82010BA9AC19A7BFAFCE3ECA7A5E9D4300307* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t034067BF944B0FB2C59E80AF017209DD84A3E2F2  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tBEC41A4D6A909AC63A03BF9F1DAB6458A065C583* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t37321EC228B494F26F235ED0B03A38101F0C0F9A  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t67F9EBD004A78A6B2AF18DEAA765247430E0AD9A* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_tF594446842E2ED4780E9EE6CCE25471B5528EF31  : public Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF9B98EBDC33FA9F55102AE820CCBFC512A6B436D* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tA4EC555AFBA70C5AC80F5BE552A6C6879A27DC78  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF778CCCFD957D2696064F1BDAC7FFB1261712F60* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,System.Object>
struct WhereSelectListIterator_2_tEBD104E1FC70F3E5CF4ABA98EA10336D97076B95  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t82A267C157A1381632C056C84501D8D1B7378F12* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tE5953E8934A259A52F507FC131C990C75B350076  : public Iterator_1_t6F8827EED7DB0C845108D7DF969A608714128E05
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t3A5CA297A4A6BFC271FA43706A5CEA12BEEDA90F* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Object>
struct WhereSelectListIterator_2_t8931D62B9741BC0631B61C889BA7EE43F179C2B6  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t36B60C467E4EEB65DF944BD9CF29E8115D2927E4* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t1A5B574577FF00CA7DAA72E41AD6F3C3715A546B  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF56DF5480E243FCDF894BF58102BE74409D47665* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_t9E866A9C344FC96E83B0198B0DFFFD6904CA7009  : public Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t7E1F1930B06F2B56048C3F47E704C253B1B68E06* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t5BEDB73F65F06237E6CBD3983597591A9FEDEDF2  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF5C06A04B784618F64D714D3EC0369F6AAFA85EA* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_tF680780AB7A7605EA3650FCA9A9F2D87E558DEDE  : public Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t6993A7E97E9AF10DFE6755887A84179BD72ABED4* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t1D0D030153AD3907D2774B6B5C56F2AA852BC21D  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tEE709D92F595E05CEE36C7FD0D5EE65BD0AC82B0* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_t2AF6EB7730B7B73C455D627D1524775D452C979C  : public Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tE362AEB2864A35557BEC7D69EF7917131E19122F* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t5E47BBA5B6D1697C595494CB30489BFB75D9594C  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t17C0617954A0A3AEA51F701AE7ECE0595A11A085* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_t98679D16543B155A550591D15E2DECB2B18C590A  : public Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tDAFB6810B3A0D7C35966B0470E35E708B9EAD22A* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tC29224208126B68E4ACB7C306CA8B224C2A6D78E  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t4F77AB4B9B4859369869026B567EE7FC972833B6* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,System.Object>
struct WhereSelectListIterator_2_t5EA8B78B1CACED831A1FEF531DD01B9E1CFF103A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t89D9548C15273DC61D5CB695EB12E7D8F9277392* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct WhereSelectListIterator_2_t5156CC8FFE027EF789CFC5E4A5E6D84EAD74CC16  : public Iterator_1_tC52A5965F804860E5E4108E5EAA8600E507AF7C5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD2999566789842105DF8EF481E4494088E70E6E8* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tBB6C0125591025972B30788782F7DEAC2312E628* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tB8EB2971B802398D4F0AE4921BAF631E21D5AC8A  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD2999566789842105DF8EF481E4494088E70E6E8* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t7CB9B75CB061BD135520EDD1DCFC21BFA0CBF93B* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_tBC2CCA85BCFB5B80246591E9CD4BFDB17303A054  : public Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD2999566789842105DF8EF481E4494088E70E6E8* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t7F4403E37E698421F2F7365CBC2F164A312C604C* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t60DBF7FEE26D5EA37ECC6269B16AC18EB99FA70F  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD2999566789842105DF8EF481E4494088E70E6E8* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tC06C5BFD98A2B3C4DA8B5CB2262A41433724E9AD* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.Object>
struct WhereSelectListIterator_2_t02F3D66BA82AA09F24BB82A467101B155C6004BE  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD2999566789842105DF8EF481E4494088E70E6E8* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t49527C6898AE3EF334B98AD44FFA909958F93E93* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tC496704D554895234B1360058C5CC2D901C24957* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_t229BAEABE6DE46F517730AD61CC20E302DBD3982  : public Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t4509F8D53C500A8517837B406FECE08CC84583C1* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_tD9C530ACE364715B6AE286578D7C6F457346BF77  : public Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t2C88A6AA929B9D941FB9E538ED62F110F3734CEF* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator_6;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::type
	int32_t ___type_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::boolValue
	bool ___boolValue_1;
	// System.Double UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::realValue
	double ___realValue_2;
	// System.Int64 UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::integerValue
	int64_t ___integerValue_3;
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonString UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::stringValue
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue_4;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::arrayValue
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::objectValue
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	// System.Object UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::anyValue
	RuntimeObject* ___anyValue_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue_4;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue_4;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};

// System.Collections.Generic.List`1/Enumerator<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>>
struct Enumerator_t4E220591859A1E7872A376DF29294220416596C3 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF685FD4377838FF6E7C4D59DA4484217997B917A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Nullable_1_t9EAB4070BB57AF52492D59610E8652118CDA4022 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ____current_3;
};

// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>,System.Boolean>
struct Func_2_tF839A7B6018DB8715AC386557AEBF8AEB7FBCB7A  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858  : public MulticastDelegate_t
{
};

// System.Func`2<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>,System.Boolean>
struct Func_2_tF028C7C145D3E150C13A8E51274D57A8AF2D632B  : public MulticastDelegate_t
{
};

// System.Func`2<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>,Unity.Networking.QoS.UcgQosServer>
struct Func_2_tAB6A23FC731FC9CA5DFAF41F7CDEDDA1F4DEBA9A  : public MulticastDelegate_t
{
};

// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_t2E63391AECBD8CA799710423D9730AA39559D75F  : public MulticastDelegate_t
{
};

// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4  : public MulticastDelegate_t
{
};

// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_tBB2DD6F6F57A7CED3F528051EAF0B1377BD88A15  : public MulticastDelegate_t
{
};

// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t21649CE740833D9FAFE6A7F8E4A5D81BAFF7BBA6  : public MulticastDelegate_t
{
};

// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A  : public MulticastDelegate_t
{
};

// System.Func`2<System.Char,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tB37CCD2A5969200F21E0BAA985B0A6BE2F9A4489  : public MulticastDelegate_t
{
};

// System.Func`2<System.Char,System.Boolean>
struct Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F  : public MulticastDelegate_t
{
};

// System.Func`2<System.Char,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t5CC82010BA9AC19A7BFAFCE3ECA7A5E9D4300307  : public MulticastDelegate_t
{
};

// System.Func`2<System.Char,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_tBEC41A4D6A909AC63A03BF9F1DAB6458A065C583  : public MulticastDelegate_t
{
};

// System.Func`2<System.Char,System.Object>
struct Func_2_t4012A4804CEF770533B75F684A4E0713C46C35CC  : public MulticastDelegate_t
{
};

// System.Func`2<QFSW.QC.Suggestors.CollapsedCommand,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_t67F9EBD004A78A6B2AF18DEAA765247430E0AD9A  : public MulticastDelegate_t
{
};

// System.Func`2<QFSW.QC.Suggestors.CollapsedCommand,System.Boolean>
struct Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281  : public MulticastDelegate_t
{
};

// System.Func`2<QFSW.QC.Suggestors.CollapsedCommand,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_tF9B98EBDC33FA9F55102AE820CCBFC512A6B436D  : public MulticastDelegate_t
{
};

// System.Func`2<QFSW.QC.Suggestors.CollapsedCommand,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_tF778CCCFD957D2696064F1BDAC7FFB1261712F60  : public MulticastDelegate_t
{
};

// System.Func`2<QFSW.QC.Suggestors.CollapsedCommand,System.Object>
struct Func_2_t82A267C157A1381632C056C84501D8D1B7378F12  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t3A5CA297A4A6BFC271FA43706A5CEA12BEEDA90F  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.DictionaryEntry,System.Boolean>
struct Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.DictionaryEntry,System.Object>
struct Func_2_t36B60C467E4EEB65DF944BD9CF29E8115D2927E4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32Enum,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tF56DF5480E243FCDF894BF58102BE74409D47665  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32Enum,System.Boolean>
struct Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32Enum,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t7E1F1930B06F2B56048C3F47E704C253B1B68E06  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32Enum,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32Enum,System.Object>
struct Func_2_tF12503C33FD184E465546C31F324F4C344B8975A  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tF5C06A04B784618F64D714D3EC0369F6AAFA85EA  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Boolean>
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t6993A7E97E9AF10DFE6755887A84179BD72ABED4  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tCE41DEFAE5E693DD08472B97A56F8EFFFF68519D  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Boolean>
struct Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t23F03B13DE50EEC5D41D99720FC89017C40C6BFB  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tD5E157E92F8442B3C92279D3D317BB0FC58CCBA6  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Boolean>
struct Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t8E15F832C31D9406090ADF35F35AC6BF57AEB186  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tEE709D92F595E05CEE36C7FD0D5EE65BD0AC82B0  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_tE362AEB2864A35557BEC7D69EF7917131E19122F  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t92904CE6AE729E23667675B2858ABE16106A0837  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Services.Qos.Internal.QosResult,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_t17C0617954A0A3AEA51F701AE7ECE0595A11A085  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Services.Qos.Internal.QosResult,System.Boolean>
struct Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Services.Qos.Internal.QosResult,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_tDAFB6810B3A0D7C35966B0470E35E708B9EAD22A  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Services.Qos.Internal.QosResult,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t4F77AB4B9B4859369869026B567EE7FC972833B6  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Services.Qos.Internal.QosResult,System.Object>
struct Func_2_t89D9548C15273DC61D5CB695EB12E7D8F9277392  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Func_2_tBB6C0125591025972B30788782F7DEAC2312E628  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.SceneManagement.Scene,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_t7CB9B75CB061BD135520EDD1DCFC21BFA0CBF93B  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.SceneManagement.Scene,System.Boolean>
struct Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.SceneManagement.Scene,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t7F4403E37E698421F2F7365CBC2F164A312C604C  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.SceneManagement.Scene,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_tC06C5BFD98A2B3C4DA8B5CB2262A41433724E9AD  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.SceneManagement.Scene,System.Object>
struct Func_2_t49527C6898AE3EF334B98AD44FFA909958F93E93  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tC496704D554895234B1360058C5CC2D901C24957  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t4509F8D53C500A8517837B406FECE08CC84583C1  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Boolean>
struct Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t2C88A6AA929B9D941FB9E538ED62F110F3734CEF  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Networking.QoS.UcgQosServer,System.Boolean>
struct Func_2_t0432CBC155E7FEDE4CDFA0B76378EEF7CD7DD6A2  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_t922E6C1B6F349B9F6BDBFB1EAF7D171ACC8A1A54  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0  : public MulticastDelegate_t
{
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___value_1;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Networking.QoS.UcgQosServer>
struct WhereEnumerableIterator_1_t8063F6D32091D197B46C026324FEC49C7C0FABB3  : public Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t0432CBC155E7FEDE4CDFA0B76378EEF7CD7DD6A2* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t3855774C58EB643AD738982FA09DFB0B337F5D49  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tCE41DEFAE5E693DD08472B97A56F8EFFFF68519D* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_tC19A900598CE8B50891C2B097A515521FB897583  : public Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t23F03B13DE50EEC5D41D99720FC89017C40C6BFB* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t08E6CE9DD97A5345E1A29CBD9C4C2FF831955A91  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tD5E157E92F8442B3C92279D3D317BB0FC58CCBA6* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_tB8704D73928864EF7CE56994835A9033599CACD9  : public Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t8E15F832C31D9406090ADF35F35AC6BF57AEB186* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 ___enumerator_6;
};

// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Object>
struct WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723  : public MulticastDelegate_t
{
};

// Unity.Netcode.NetworkSerializableSerializer`1/WriteValueDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct WriteValueDelegate_t077E015BF37B117EF4B94AF2F702B60834C7EDF9  : public MulticastDelegate_t
{
};

// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct WriteValueDelegate_tD109061967254477F792D274A796F2D8D68485D7  : public MulticastDelegate_t
{
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>
struct Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ____current_3;
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Boolean>
struct Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,QFSW.QC.Suggestors.CollapsedCommand>
struct Func_2_tCAB68D058A797DECB10578EB28AA70E3134D43D4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC  : public MulticastDelegate_t
{
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>,Unity.Networking.QoS.UcgQosServer>
struct WhereSelectListIterator_2_tADD6CE97894F51D6D3908FAF8E6CD149A61A689F  : public Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF685FD4377838FF6E7C4D59DA4484217997B917A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tF028C7C145D3E150C13A8E51274D57A8AF2D632B* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tAB6A23FC731FC9CA5DFAF41F7CDEDDA1F4DEBA9A* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4E220591859A1E7872A376DF29294220416596C3 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_t50415C8204DC41C3B5E41B88FA478060DED5F9F3  : public Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t922E6C1B6F349B9F6BDBFB1EAF7D171ACC8A1A54* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator_6;
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,QFSW.QC.Suggestors.CollapsedCommand>
struct WhereSelectListIterator_2_tAF9FDF68849733BAA84FD0013757E91378B36B56  : public Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tCAB68D058A797DECB10578EB28AA70E3134D43D4* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 ___enumerator_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
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
// System.Delegate[]
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t6E72C722C46949F140550D563C1F41E304752583 m_Items[1];

	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
};


// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_gshared_inline (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7_gshared (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t9EAB4070BB57AF52492D59610E8652118CDA4022 Enumerator_get_Current_mBB6D79CD6A073D8904654C3E2AF417B78C38CCF2_gshared_inline (Enumerator_t4E220591859A1E7872A376DF29294220416596C3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0747A8269E9F693280593FFAA530ED148B2118B6_gshared (Enumerator_t4E220591859A1E7872A376DF29294220416596C3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_gshared_inline (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE_gshared (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Char>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_gshared_inline (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Char>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEB23589F285449D3A1439C810FB122ECDD2FFAC2_gshared (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<QFSW.QC.Suggestors.CollapsedCommand>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B Enumerator_get_Current_m5DDB3BBC8897715D18FD13C86C8F04F7F2056C23_gshared_inline (Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7A25425BD894EDAA33E585FC96EAA0090AACC527_gshared (Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Collections.DictionaryEntry>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB Enumerator_get_Current_mBFEE48D34AA5EB20CA6C6FC33F12C8A8C9E01E1F_gshared_inline (Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.DictionaryEntry>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB57BCE535AF7E86209B83F1BBC22A95B8F7FEEAA_gshared (Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.InternedString>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_gshared_inline (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E_gshared (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_gshared_inline (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8_gshared (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_gshared_inline (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5_gshared (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.Services.Qos.Internal.QosResult>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 Enumerator_get_Current_m8D1CE84E8C3FD32018C9874883C02507A3085F31_gshared_inline (Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Services.Qos.Internal.QosResult>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9C11B8A4B57C0AE4C58B50EC3B26E95AC7BB6758_gshared (Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.SceneManagement.Scene>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 Enumerator_get_Current_mC5194B613FE30DC2AB9B25C823ABABCE9BA79723_gshared_inline (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.SceneManagement.Scene>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5471F2D6CA89CD54BB1EF253548B90B625FB7E3_gshared (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06_gshared (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF_gshared (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;

// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::get_Current()
inline KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_inline (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C (*) (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*, const RuntimeMethod*))Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::MoveNext()
inline bool Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7 (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*, const RuntimeMethod*))Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>>::get_Current()
inline Nullable_1_t9EAB4070BB57AF52492D59610E8652118CDA4022 Enumerator_get_Current_mBB6D79CD6A073D8904654C3E2AF417B78C38CCF2_inline (Enumerator_t4E220591859A1E7872A376DF29294220416596C3* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t9EAB4070BB57AF52492D59610E8652118CDA4022 (*) (Enumerator_t4E220591859A1E7872A376DF29294220416596C3*, const RuntimeMethod*))Enumerator_get_Current_mBB6D79CD6A073D8904654C3E2AF417B78C38CCF2_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>>::MoveNext()
inline bool Enumerator_MoveNext_m0747A8269E9F693280593FFAA530ED148B2118B6 (Enumerator_t4E220591859A1E7872A376DF29294220416596C3* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4E220591859A1E7872A376DF29294220416596C3*, const RuntimeMethod*))Enumerator_MoveNext_m0747A8269E9F693280593FFAA530ED148B2118B6_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::get_Current()
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_inline (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*, const RuntimeMethod*))Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*, const RuntimeMethod*))Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Char>::get_Current()
inline Il2CppChar Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_inline (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*, const RuntimeMethod*))Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Char>::MoveNext()
inline bool Enumerator_MoveNext_mEB23589F285449D3A1439C810FB122ECDD2FFAC2 (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*, const RuntimeMethod*))Enumerator_MoveNext_mEB23589F285449D3A1439C810FB122ECDD2FFAC2_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<QFSW.QC.Suggestors.CollapsedCommand>::get_Current()
inline CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B Enumerator_get_Current_m5DDB3BBC8897715D18FD13C86C8F04F7F2056C23_inline (Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603* __this, const RuntimeMethod* method)
{
	return ((  CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B (*) (Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603*, const RuntimeMethod*))Enumerator_get_Current_m5DDB3BBC8897715D18FD13C86C8F04F7F2056C23_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
inline bool Enumerator_MoveNext_m7A25425BD894EDAA33E585FC96EAA0090AACC527 (Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603*, const RuntimeMethod*))Enumerator_MoveNext_m7A25425BD894EDAA33E585FC96EAA0090AACC527_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Collections.DictionaryEntry>::get_Current()
inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB Enumerator_get_Current_mBFEE48D34AA5EB20CA6C6FC33F12C8A8C9E01E1F_inline (Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B* __this, const RuntimeMethod* method)
{
	return ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B*, const RuntimeMethod*))Enumerator_get_Current_mBFEE48D34AA5EB20CA6C6FC33F12C8A8C9E01E1F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.DictionaryEntry>::MoveNext()
inline bool Enumerator_MoveNext_mB57BCE535AF7E86209B83F1BBC22A95B8F7FEEAA (Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B*, const RuntimeMethod*))Enumerator_MoveNext_mB57BCE535AF7E86209B83F1BBC22A95B8F7FEEAA_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::get_Current()
inline int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*, const RuntimeMethod*))Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::MoveNext()
inline bool Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5 (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*, const RuntimeMethod*))Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.InternedString>::get_Current()
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_inline (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* __this, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*, const RuntimeMethod*))Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
inline bool Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*, const RuntimeMethod*))Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::get_Current()
inline NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method)
{
	return ((  NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 (*) (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*, const RuntimeMethod*))Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::MoveNext()
inline bool Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8 (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*, const RuntimeMethod*))Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::get_Current()
inline NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method)
{
	return ((  NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED (*) (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*, const RuntimeMethod*))Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::MoveNext()
inline bool Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5 (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*, const RuntimeMethod*))Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.Services.Qos.Internal.QosResult>::get_Current()
inline QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 Enumerator_get_Current_m8D1CE84E8C3FD32018C9874883C02507A3085F31_inline (Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74* __this, const RuntimeMethod* method)
{
	return ((  QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 (*) (Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74*, const RuntimeMethod*))Enumerator_get_Current_m8D1CE84E8C3FD32018C9874883C02507A3085F31_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Services.Qos.Internal.QosResult>::MoveNext()
inline bool Enumerator_MoveNext_m9C11B8A4B57C0AE4C58B50EC3B26E95AC7BB6758 (Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74*, const RuntimeMethod*))Enumerator_MoveNext_m9C11B8A4B57C0AE4C58B50EC3B26E95AC7BB6758_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.SceneManagement.Scene>::get_Current()
inline Scene_tA1DC762B79745EB5140F054C884855B922318356 Enumerator_get_Current_mC5194B613FE30DC2AB9B25C823ABABCE9BA79723_inline (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD* __this, const RuntimeMethod* method)
{
	return ((  Scene_tA1DC762B79745EB5140F054C884855B922318356 (*) (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD*, const RuntimeMethod*))Enumerator_get_Current_mC5194B613FE30DC2AB9B25C823ABABCE9BA79723_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.SceneManagement.Scene>::MoveNext()
inline bool Enumerator_MoveNext_mB5471F2D6CA89CD54BB1EF253548B90B625FB7E3 (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD*, const RuntimeMethod*))Enumerator_MoveNext_mB5471F2D6CA89CD54BB1EF253548B90B625FB7E3_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
inline bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::get_Current()
inline Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method)
{
	return ((  Substring_t2E16755269E6716C22074D6BC0A9099915E67849 (*) (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*, const RuntimeMethod*))Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::MoveNext()
inline bool Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06 (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*, const RuntimeMethod*))Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::get_Current()
inline JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method)
{
	return ((  JsonValue_t01DB320267C848E729A400EF2345979978F851D2 (*) (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*, const RuntimeMethod*))Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::MoveNext()
inline bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*, const RuntimeMethod*))Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Exchange(System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF (int32_t* ___location10, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Int64 System.Threading.Interlocked::Increment(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Interlocked_Increment_m12CD643CCD5FCDE95DBC0AB07D09AF696E26F9C0 (int64_t* ___location0, const RuntimeMethod* method) ;
// System.Void System.Threading.SpinWait::SpinOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF (SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___location0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D (const RuntimeMethod* method) ;
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D (String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,QFSW.QC.Suggestors.CollapsedCommand>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE93AC9AF7ADD7B6252E972965AAD1F02DA65598B_gshared (WhereSelectListIterator_2_tAF9FDF68849733BAA84FD0013757E91378B36B56* __this, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___source0, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___predicate1, Func_2_tCAB68D058A797DECB10578EB28AA70E3134D43D4* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tCAB68D058A797DECB10578EB28AA70E3134D43D4* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,QFSW.QC.Suggestors.CollapsedCommand>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B* WhereSelectListIterator_2_Clone_mFF8D76006A5C0B62D31AA50304D2FA246F3F67A3_gshared (WhereSelectListIterator_2_tAF9FDF68849733BAA84FD0013757E91378B36B56* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_0 = (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*)__this->___source_3;
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_1 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		Func_2_tCAB68D058A797DECB10578EB28AA70E3134D43D4* L_2 = (Func_2_tCAB68D058A797DECB10578EB28AA70E3134D43D4*)__this->___selector_5;
		WhereSelectListIterator_2_tAF9FDF68849733BAA84FD0013757E91378B36B56* L_3 = (WhereSelectListIterator_2_tAF9FDF68849733BAA84FD0013757E91378B36B56*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tAF9FDF68849733BAA84FD0013757E91378B36B56*, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*, Func_2_tCAB68D058A797DECB10578EB28AA70E3134D43D4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m34EDA0355DA204B1E3E778035E03744E9B4E6186_gshared (WhereSelectListIterator_2_tAF9FDF68849733BAA84FD0013757E91378B36B56* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_3 = (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 L_4;
		L_4 = ((  Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 (*) (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* L_5 = (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*)(&__this->___enumerator_6);
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_6;
		L_6 = Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_7 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_8 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tCAB68D058A797DECB10578EB28AA70E3134D43D4* L_11 = (Func_2_tCAB68D058A797DECB10578EB28AA70E3134D43D4*)__this->___selector_5;
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_12 = V_1;
		NullCheck(L_11);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_13;
		L_13 = ((  CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B (*) (Func_2_tCAB68D058A797DECB10578EB28AA70E3134D43D4*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2))->___Command_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* L_14 = (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>::Dispose() */, (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,QFSW.QC.Suggestors.CollapsedCommand>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE097D08C7E2DB9D9A1B0639FCD6D3E4B450BE027_gshared (WhereSelectListIterator_2_tAF9FDF68849733BAA84FD0013757E91378B36B56* __this, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8* L_1 = (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*, RuntimeObject*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m212D53AED9A8909BB029EC3F6FC00C973F051379_gshared (WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245* __this, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___source0, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___predicate1, Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m694C23A4B41ECADFC4B3DE36DC22612D1A1DAA98_gshared (WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_0 = (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*)__this->___source_3;
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_1 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA* L_2 = (Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA*)__this->___selector_5;
		WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245* L_3 = (WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245*, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*, Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m456B8B16ACC5F9621BDD8BFE7C5703C56CE2DFEB_gshared (WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_3 = (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 L_4;
		L_4 = ((  Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 (*) (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* L_5 = (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*)(&__this->___enumerator_6);
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_6;
		L_6 = Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_7 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_8 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA* L_11 = (Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA*)__this->___selector_5;
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_tD5CFEB1C14370D8442B773BCB83882EB7BB0D7FA*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* L_14 = (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mED68DEB8E7E78B34B6D78F7651E81AECA2495CED_gshared (WhereSelectListIterator_2_tAF009CBE8959FE8AAF24A5E606A4655277409245* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2396DCB7282A7B7B02DA7D1FD7AB545A793E8F21_gshared (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* __this, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___source0, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___predicate1, Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m8635A10BD8B76832003D82090DE167DD6CF91F1D_gshared (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_0 = (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*)__this->___source_3;
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_1 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* L_2 = (Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC*)__this->___selector_5;
		WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* L_3 = (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65*, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*, Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF87683433A907EC64C1163940FD77B7B240EFAD1_gshared (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_3 = (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 L_4;
		L_4 = ((  Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 (*) (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* L_5 = (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*)(&__this->___enumerator_6);
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_6;
		L_6 = Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_7 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_8 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* L_11 = (Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC*)__this->___selector_5;
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* L_14 = (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mCF386B618FAA2832977C3F95A2465C8698280DD8_gshared (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>,Unity.Networking.QoS.UcgQosServer>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m10E953A1D57BE101BE9D39A3826BDC8C7A850700_gshared (WhereSelectListIterator_2_tADD6CE97894F51D6D3908FAF8E6CD149A61A689F* __this, List_1_tF685FD4377838FF6E7C4D59DA4484217997B917A* ___source0, Func_2_tF028C7C145D3E150C13A8E51274D57A8AF2D632B* ___predicate1, Func_2_tAB6A23FC731FC9CA5DFAF41F7CDEDDA1F4DEBA9A* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF685FD4377838FF6E7C4D59DA4484217997B917A* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tF028C7C145D3E150C13A8E51274D57A8AF2D632B* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tAB6A23FC731FC9CA5DFAF41F7CDEDDA1F4DEBA9A* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>,Unity.Networking.QoS.UcgQosServer>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019* WhereSelectListIterator_2_Clone_mEC9C8AE1E54B6008748D8D961D9989F5DE5FB2B9_gshared (WhereSelectListIterator_2_tADD6CE97894F51D6D3908FAF8E6CD149A61A689F* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF685FD4377838FF6E7C4D59DA4484217997B917A* L_0 = (List_1_tF685FD4377838FF6E7C4D59DA4484217997B917A*)__this->___source_3;
		Func_2_tF028C7C145D3E150C13A8E51274D57A8AF2D632B* L_1 = (Func_2_tF028C7C145D3E150C13A8E51274D57A8AF2D632B*)__this->___predicate_4;
		Func_2_tAB6A23FC731FC9CA5DFAF41F7CDEDDA1F4DEBA9A* L_2 = (Func_2_tAB6A23FC731FC9CA5DFAF41F7CDEDDA1F4DEBA9A*)__this->___selector_5;
		WhereSelectListIterator_2_tADD6CE97894F51D6D3908FAF8E6CD149A61A689F* L_3 = (WhereSelectListIterator_2_tADD6CE97894F51D6D3908FAF8E6CD149A61A689F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tADD6CE97894F51D6D3908FAF8E6CD149A61A689F*, List_1_tF685FD4377838FF6E7C4D59DA4484217997B917A*, Func_2_tF028C7C145D3E150C13A8E51274D57A8AF2D632B*, Func_2_tAB6A23FC731FC9CA5DFAF41F7CDEDDA1F4DEBA9A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>,Unity.Networking.QoS.UcgQosServer>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m6B411372D466067769D56D61130EC667EB5D2268_gshared (WhereSelectListIterator_2_tADD6CE97894F51D6D3908FAF8E6CD149A61A689F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Nullable_1_t9EAB4070BB57AF52492D59610E8652118CDA4022 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF685FD4377838FF6E7C4D59DA4484217997B917A* L_3 = (List_1_tF685FD4377838FF6E7C4D59DA4484217997B917A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4E220591859A1E7872A376DF29294220416596C3 L_4;
		L_4 = ((  Enumerator_t4E220591859A1E7872A376DF29294220416596C3 (*) (List_1_tF685FD4377838FF6E7C4D59DA4484217997B917A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___regionid_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___ipv4_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___ipv6_2), (void*)NULL);
		#endif
		((Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4E220591859A1E7872A376DF29294220416596C3* L_5 = (Enumerator_t4E220591859A1E7872A376DF29294220416596C3*)(&__this->___enumerator_6);
		Nullable_1_t9EAB4070BB57AF52492D59610E8652118CDA4022 L_6;
		L_6 = Enumerator_get_Current_mBB6D79CD6A073D8904654C3E2AF417B78C38CCF2_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tF028C7C145D3E150C13A8E51274D57A8AF2D632B* L_7 = (Func_2_tF028C7C145D3E150C13A8E51274D57A8AF2D632B*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF028C7C145D3E150C13A8E51274D57A8AF2D632B* L_8 = (Func_2_tF028C7C145D3E150C13A8E51274D57A8AF2D632B*)__this->___predicate_4;
		Nullable_1_t9EAB4070BB57AF52492D59610E8652118CDA4022 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF028C7C145D3E150C13A8E51274D57A8AF2D632B*, Nullable_1_t9EAB4070BB57AF52492D59610E8652118CDA4022, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tAB6A23FC731FC9CA5DFAF41F7CDEDDA1F4DEBA9A* L_11 = (Func_2_tAB6A23FC731FC9CA5DFAF41F7CDEDDA1F4DEBA9A*)__this->___selector_5;
		Nullable_1_t9EAB4070BB57AF52492D59610E8652118CDA4022 L_12 = V_1;
		NullCheck(L_11);
		UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136 L_13;
		L_13 = ((  UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136 (*) (Func_2_tAB6A23FC731FC9CA5DFAF41F7CDEDDA1F4DEBA9A*, Nullable_1_t9EAB4070BB57AF52492D59610E8652118CDA4022, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019*)__this)->___current_2))->___regionid_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019*)__this)->___current_2))->___ipv4_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019*)__this)->___current_2))->___ipv6_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4E220591859A1E7872A376DF29294220416596C3* L_14 = (Enumerator_t4E220591859A1E7872A376DF29294220416596C3*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m0747A8269E9F693280593FFAA530ED148B2118B6(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.Networking.QoS.UcgQosServer>::Dispose() */, (Iterator_1_tF54D2C2E6317FF02087D52E6D69FB60627FB0019*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Nullable`1<Unity.Networking.QoS.UcgQosServer>,Unity.Networking.QoS.UcgQosServer>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m4435B1073D2647F6B614F208E19E8BEA3A004314_gshared (WhereSelectListIterator_2_tADD6CE97894F51D6D3908FAF8E6CD149A61A689F* __this, Func_2_t0432CBC155E7FEDE4CDFA0B76378EEF7CD7DD6A2* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t0432CBC155E7FEDE4CDFA0B76378EEF7CD7DD6A2* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8063F6D32091D197B46C026324FEC49C7C0FABB3* L_1 = (WhereEnumerableIterator_1_t8063F6D32091D197B46C026324FEC49C7C0FABB3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t8063F6D32091D197B46C026324FEC49C7C0FABB3*, RuntimeObject*, Func_2_t0432CBC155E7FEDE4CDFA0B76378EEF7CD7DD6A2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m21FE1E14C52377821A43BB4279243432C89D436F_gshared (WhereSelectListIterator_2_tAE583ED984BDCD08131FD2580658CACE8D5D1859* __this, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, Func_2_t2E63391AECBD8CA799710423D9730AA39559D75F* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t2E63391AECBD8CA799710423D9730AA39559D75F* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_mC6230A51298F2A9F6B04E899876224E511A5240A_gshared (WhereSelectListIterator_2_tAE583ED984BDCD08131FD2580658CACE8D5D1859* __this, const RuntimeMethod* method) 
{
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		Func_2_t2E63391AECBD8CA799710423D9730AA39559D75F* L_2 = (Func_2_t2E63391AECBD8CA799710423D9730AA39559D75F*)__this->___selector_5;
		WhereSelectListIterator_2_tAE583ED984BDCD08131FD2580658CACE8D5D1859* L_3 = (WhereSelectListIterator_2_tAE583ED984BDCD08131FD2580658CACE8D5D1859*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tAE583ED984BDCD08131FD2580658CACE8D5D1859*, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, Func_2_t2E63391AECBD8CA799710423D9730AA39559D75F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m1496577676C3E72F27B98C995A3725B317DBFB83_gshared (WhereSelectListIterator_2_tAE583ED984BDCD08131FD2580658CACE8D5D1859* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_3 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB L_4;
		L_4 = ((  Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB (*) (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item1_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item2_1), (void*)NULL);
		#endif
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_5 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6;
		L_6 = Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_7 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_8 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t2E63391AECBD8CA799710423D9730AA39559D75F* L_11 = (Func_2_t2E63391AECBD8CA799710423D9730AA39559D75F*)__this->___selector_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_t2E63391AECBD8CA799710423D9730AA39559D75F*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_14 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m07A63A386ECAFC19491D5435494E9113A34123BD_gshared (WhereSelectListIterator_2_tAE583ED984BDCD08131FD2580658CACE8D5D1859* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*, RuntimeObject*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,QFSW.QC.Suggestors.CollapsedCommand>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF15E8192A4D0703FCC8B7D90C93AF71FF923526E_gshared (WhereSelectListIterator_2_t064DAF598D03A317F99032C8CF14A073E9ED564D* __this, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, Func_2_tBB2DD6F6F57A7CED3F528051EAF0B1377BD88A15* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tBB2DD6F6F57A7CED3F528051EAF0B1377BD88A15* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,QFSW.QC.Suggestors.CollapsedCommand>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B* WhereSelectListIterator_2_Clone_m342B3A3A2CDACB3AB9039D79A41AFEDC274E8503_gshared (WhereSelectListIterator_2_t064DAF598D03A317F99032C8CF14A073E9ED564D* __this, const RuntimeMethod* method) 
{
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		Func_2_tBB2DD6F6F57A7CED3F528051EAF0B1377BD88A15* L_2 = (Func_2_tBB2DD6F6F57A7CED3F528051EAF0B1377BD88A15*)__this->___selector_5;
		WhereSelectListIterator_2_t064DAF598D03A317F99032C8CF14A073E9ED564D* L_3 = (WhereSelectListIterator_2_t064DAF598D03A317F99032C8CF14A073E9ED564D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t064DAF598D03A317F99032C8CF14A073E9ED564D*, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, Func_2_tBB2DD6F6F57A7CED3F528051EAF0B1377BD88A15*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m53A4E8A352FD40AE64E256F1AC581766D471D637_gshared (WhereSelectListIterator_2_t064DAF598D03A317F99032C8CF14A073E9ED564D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_3 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB L_4;
		L_4 = ((  Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB (*) (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item1_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item2_1), (void*)NULL);
		#endif
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_5 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6;
		L_6 = Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_7 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_8 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tBB2DD6F6F57A7CED3F528051EAF0B1377BD88A15* L_11 = (Func_2_tBB2DD6F6F57A7CED3F528051EAF0B1377BD88A15*)__this->___selector_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_12 = V_1;
		NullCheck(L_11);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_13;
		L_13 = ((  CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B (*) (Func_2_tBB2DD6F6F57A7CED3F528051EAF0B1377BD88A15*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2))->___Command_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_14 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>::Dispose() */, (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,QFSW.QC.Suggestors.CollapsedCommand>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m5B2DFC33403661202CC8880A1AF9B2CC48114A65_gshared (WhereSelectListIterator_2_t064DAF598D03A317F99032C8CF14A073E9ED564D* __this, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8* L_1 = (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*, RuntimeObject*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9977DEBC67D026D0B7089079810E339B7D8C2DB3_gshared (WhereSelectListIterator_2_tA15C13638825DF99DF32A5FB4B111077A64C0E16* __this, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, Func_2_t21649CE740833D9FAFE6A7F8E4A5D81BAFF7BBA6* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t21649CE740833D9FAFE6A7F8E4A5D81BAFF7BBA6* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_mB452B334BB77EED420D710391ECD3C333A7C44D3_gshared (WhereSelectListIterator_2_tA15C13638825DF99DF32A5FB4B111077A64C0E16* __this, const RuntimeMethod* method) 
{
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		Func_2_t21649CE740833D9FAFE6A7F8E4A5D81BAFF7BBA6* L_2 = (Func_2_t21649CE740833D9FAFE6A7F8E4A5D81BAFF7BBA6*)__this->___selector_5;
		WhereSelectListIterator_2_tA15C13638825DF99DF32A5FB4B111077A64C0E16* L_3 = (WhereSelectListIterator_2_tA15C13638825DF99DF32A5FB4B111077A64C0E16*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tA15C13638825DF99DF32A5FB4B111077A64C0E16*, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, Func_2_t21649CE740833D9FAFE6A7F8E4A5D81BAFF7BBA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4E5DF1719753077712DFF060F1CC5D400563103E_gshared (WhereSelectListIterator_2_tA15C13638825DF99DF32A5FB4B111077A64C0E16* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_3 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB L_4;
		L_4 = ((  Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB (*) (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item1_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item2_1), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_5 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6;
		L_6 = Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_7 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_8 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t21649CE740833D9FAFE6A7F8E4A5D81BAFF7BBA6* L_11 = (Func_2_t21649CE740833D9FAFE6A7F8E4A5D81BAFF7BBA6*)__this->___selector_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t21649CE740833D9FAFE6A7F8E4A5D81BAFF7BBA6*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_14 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m9116ED1006DBD612E5CC9141816076BD0731CC0A_gshared (WhereSelectListIterator_2_tA15C13638825DF99DF32A5FB4B111077A64C0E16* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0CD1247248CD4BF793D4CA3FBE5520E65503F2AF_gshared (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* __this, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF38CEDEBAF2DC443994FC29CBB9718332C4A2CD1_gshared (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_0 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_1 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* L_2 = (Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A*)__this->___selector_5;
		WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* L_3 = (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A*, List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4606FA87DF1C3AED1BAC8CF343D107345C56E76E_gshared (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF* L_3 = (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB L_4;
		L_4 = ((  Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB (*) (List_1_tFD45D9C668A7B019127FE442DDD78CF33B7DEDBF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item1_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Item2_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_5 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6;
		L_6 = Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_7 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_8 = (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*)__this->___predicate_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A* L_11 = (Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A*)__this->___selector_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t8A34ED5AC2D135095660313CD2024E3E2548CB8A*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* L_14 = (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m085DD6EB9F5379D39DC89FEB0BFFD5E5D72624EE(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m625DE330D740455A061F8867456066ECE2C885F4_gshared (WhereSelectListIterator_2_t3358B9DE94A233D93D900DEF93D37885116F102A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m3F61A364AF2BE8BEEB320AEDEC154B42D89E9344_gshared (WhereSelectListIterator_2_t3BC5C4A920418A5A13EEE8CE7669768FE6B31714* __this, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___source0, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate1, Func_2_tB37CCD2A5969200F21E0BAA985B0A6BE2F9A4489* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB37CCD2A5969200F21E0BAA985B0A6BE2F9A4489* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_m1443833513F2062283F28912433483959DB8DEA5_gshared (WhereSelectListIterator_2_t3BC5C4A920418A5A13EEE8CE7669768FE6B31714* __this, const RuntimeMethod* method) 
{
	{
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_0 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)__this->___source_3;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*)__this->___predicate_4;
		Func_2_tB37CCD2A5969200F21E0BAA985B0A6BE2F9A4489* L_2 = (Func_2_tB37CCD2A5969200F21E0BAA985B0A6BE2F9A4489*)__this->___selector_5;
		WhereSelectListIterator_2_t3BC5C4A920418A5A13EEE8CE7669768FE6B31714* L_3 = (WhereSelectListIterator_2_t3BC5C4A920418A5A13EEE8CE7669768FE6B31714*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t3BC5C4A920418A5A13EEE8CE7669768FE6B31714*, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Func_2_tB37CCD2A5969200F21E0BAA985B0A6BE2F9A4489*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m080DCCF28662BCABD5FF614617EE6AD5965E7B71_gshared (WhereSelectListIterator_2_t3BC5C4A920418A5A13EEE8CE7669768FE6B31714* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_3 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_4;
		L_4 = ((  Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* L_5 = (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*)(&__this->___enumerator_6);
		Il2CppChar L_6;
		L_6 = Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_7 = (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_8 = (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*)__this->___predicate_4;
		Il2CppChar L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB37CCD2A5969200F21E0BAA985B0A6BE2F9A4489* L_11 = (Func_2_tB37CCD2A5969200F21E0BAA985B0A6BE2F9A4489*)__this->___selector_5;
		Il2CppChar L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_tB37CCD2A5969200F21E0BAA985B0A6BE2F9A4489*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* L_14 = (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mEB23589F285449D3A1439C810FB122ECDD2FFAC2(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2CE307B5DC798E24DA1B873A663DB69759E46BCD_gshared (WhereSelectListIterator_2_t3BC5C4A920418A5A13EEE8CE7669768FE6B31714* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*, RuntimeObject*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,QFSW.QC.Suggestors.CollapsedCommand>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D1083A81EB02B3B97B9DF4683DCD930D0013612_gshared (WhereSelectListIterator_2_t3BB9CB5D44DE3D2E765F07783D6DF94947FA5C23* __this, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___source0, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate1, Func_2_t5CC82010BA9AC19A7BFAFCE3ECA7A5E9D4300307* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t5CC82010BA9AC19A7BFAFCE3ECA7A5E9D4300307* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,QFSW.QC.Suggestors.CollapsedCommand>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B* WhereSelectListIterator_2_Clone_mCCB619CD2F3D8AE4CFFA3CB15263BDB4A8FCA8D8_gshared (WhereSelectListIterator_2_t3BB9CB5D44DE3D2E765F07783D6DF94947FA5C23* __this, const RuntimeMethod* method) 
{
	{
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_0 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)__this->___source_3;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*)__this->___predicate_4;
		Func_2_t5CC82010BA9AC19A7BFAFCE3ECA7A5E9D4300307* L_2 = (Func_2_t5CC82010BA9AC19A7BFAFCE3ECA7A5E9D4300307*)__this->___selector_5;
		WhereSelectListIterator_2_t3BB9CB5D44DE3D2E765F07783D6DF94947FA5C23* L_3 = (WhereSelectListIterator_2_t3BB9CB5D44DE3D2E765F07783D6DF94947FA5C23*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t3BB9CB5D44DE3D2E765F07783D6DF94947FA5C23*, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Func_2_t5CC82010BA9AC19A7BFAFCE3ECA7A5E9D4300307*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mEFBD452D91B04B52ACCFC7E4B29F5A344BEA6964_gshared (WhereSelectListIterator_2_t3BB9CB5D44DE3D2E765F07783D6DF94947FA5C23* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_3 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_4;
		L_4 = ((  Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* L_5 = (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*)(&__this->___enumerator_6);
		Il2CppChar L_6;
		L_6 = Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_7 = (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_8 = (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*)__this->___predicate_4;
		Il2CppChar L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t5CC82010BA9AC19A7BFAFCE3ECA7A5E9D4300307* L_11 = (Func_2_t5CC82010BA9AC19A7BFAFCE3ECA7A5E9D4300307*)__this->___selector_5;
		Il2CppChar L_12 = V_1;
		NullCheck(L_11);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_13;
		L_13 = ((  CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B (*) (Func_2_t5CC82010BA9AC19A7BFAFCE3ECA7A5E9D4300307*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2))->___Command_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* L_14 = (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mEB23589F285449D3A1439C810FB122ECDD2FFAC2(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>::Dispose() */, (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,QFSW.QC.Suggestors.CollapsedCommand>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m9BAED8C0A73770A0C70366953B03A837F2A966AB_gshared (WhereSelectListIterator_2_t3BB9CB5D44DE3D2E765F07783D6DF94947FA5C23* __this, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8* L_1 = (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*, RuntimeObject*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE7102EC1889838B2139BDC327AC41CAC6D9EC018_gshared (WhereSelectListIterator_2_t034067BF944B0FB2C59E80AF017209DD84A3E2F2* __this, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___source0, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate1, Func_2_tBEC41A4D6A909AC63A03BF9F1DAB6458A065C583* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tBEC41A4D6A909AC63A03BF9F1DAB6458A065C583* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m119305DE76613208A019FD7F6BEC65F1A22357AA_gshared (WhereSelectListIterator_2_t034067BF944B0FB2C59E80AF017209DD84A3E2F2* __this, const RuntimeMethod* method) 
{
	{
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_0 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)__this->___source_3;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*)__this->___predicate_4;
		Func_2_tBEC41A4D6A909AC63A03BF9F1DAB6458A065C583* L_2 = (Func_2_tBEC41A4D6A909AC63A03BF9F1DAB6458A065C583*)__this->___selector_5;
		WhereSelectListIterator_2_t034067BF944B0FB2C59E80AF017209DD84A3E2F2* L_3 = (WhereSelectListIterator_2_t034067BF944B0FB2C59E80AF017209DD84A3E2F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t034067BF944B0FB2C59E80AF017209DD84A3E2F2*, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Func_2_tBEC41A4D6A909AC63A03BF9F1DAB6458A065C583*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mCABB401D66F75D0EC6BDDB5DEB0E888EBDB2C5B5_gshared (WhereSelectListIterator_2_t034067BF944B0FB2C59E80AF017209DD84A3E2F2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_3 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_4;
		L_4 = ((  Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* L_5 = (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*)(&__this->___enumerator_6);
		Il2CppChar L_6;
		L_6 = Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_7 = (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_8 = (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*)__this->___predicate_4;
		Il2CppChar L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tBEC41A4D6A909AC63A03BF9F1DAB6458A065C583* L_11 = (Func_2_tBEC41A4D6A909AC63A03BF9F1DAB6458A065C583*)__this->___selector_5;
		Il2CppChar L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_tBEC41A4D6A909AC63A03BF9F1DAB6458A065C583*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* L_14 = (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mEB23589F285449D3A1439C810FB122ECDD2FFAC2(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m37A78741DDD8D0A70DA296E64F912A9ABF47615F_gshared (WhereSelectListIterator_2_t034067BF944B0FB2C59E80AF017209DD84A3E2F2* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m220ED06E6761CEC95FD7F02C968092A8CD4BB0B8_gshared (WhereSelectListIterator_2_tA571D55920CDE2B37B1CF3B6CE23E14B6E454EA1* __this, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___source0, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate1, Func_2_t4012A4804CEF770533B75F684A4E0713C46C35CC* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t4012A4804CEF770533B75F684A4E0713C46C35CC* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6FF87AAA94B739A8FE57CE236048480B6FEFAA98_gshared (WhereSelectListIterator_2_tA571D55920CDE2B37B1CF3B6CE23E14B6E454EA1* __this, const RuntimeMethod* method) 
{
	{
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_0 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)__this->___source_3;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*)__this->___predicate_4;
		Func_2_t4012A4804CEF770533B75F684A4E0713C46C35CC* L_2 = (Func_2_t4012A4804CEF770533B75F684A4E0713C46C35CC*)__this->___selector_5;
		WhereSelectListIterator_2_tA571D55920CDE2B37B1CF3B6CE23E14B6E454EA1* L_3 = (WhereSelectListIterator_2_tA571D55920CDE2B37B1CF3B6CE23E14B6E454EA1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tA571D55920CDE2B37B1CF3B6CE23E14B6E454EA1*, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Func_2_t4012A4804CEF770533B75F684A4E0713C46C35CC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m22D577E376BC75C86AFC5F9E4B073D21753348BB_gshared (WhereSelectListIterator_2_tA571D55920CDE2B37B1CF3B6CE23E14B6E454EA1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_3 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_4;
		L_4 = ((  Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* L_5 = (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*)(&__this->___enumerator_6);
		Il2CppChar L_6;
		L_6 = Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_7 = (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_8 = (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*)__this->___predicate_4;
		Il2CppChar L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4012A4804CEF770533B75F684A4E0713C46C35CC* L_11 = (Func_2_t4012A4804CEF770533B75F684A4E0713C46C35CC*)__this->___selector_5;
		Il2CppChar L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t4012A4804CEF770533B75F684A4E0713C46C35CC*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* L_14 = (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mEB23589F285449D3A1439C810FB122ECDD2FFAC2(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mDF19670D078FCA6809A641286452EF0273CD5E82_gshared (WhereSelectListIterator_2_tA571D55920CDE2B37B1CF3B6CE23E14B6E454EA1* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mFEFE36BED6E9E9AB612EB619C7947B59AC8A8A79_gshared (WhereSelectListIterator_2_t37321EC228B494F26F235ED0B03A38101F0C0F9A* __this, List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* ___source0, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate1, Func_2_t67F9EBD004A78A6B2AF18DEAA765247430E0AD9A* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t67F9EBD004A78A6B2AF18DEAA765247430E0AD9A* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_m1ABAD52D0F9E7F9F32D3713FBE4540F21F23DEEB_gshared (WhereSelectListIterator_2_t37321EC228B494F26F235ED0B03A38101F0C0F9A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* L_0 = (List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*)__this->___source_3;
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_1 = (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*)__this->___predicate_4;
		Func_2_t67F9EBD004A78A6B2AF18DEAA765247430E0AD9A* L_2 = (Func_2_t67F9EBD004A78A6B2AF18DEAA765247430E0AD9A*)__this->___selector_5;
		WhereSelectListIterator_2_t37321EC228B494F26F235ED0B03A38101F0C0F9A* L_3 = (WhereSelectListIterator_2_t37321EC228B494F26F235ED0B03A38101F0C0F9A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t37321EC228B494F26F235ED0B03A38101F0C0F9A*, List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, Func_2_t67F9EBD004A78A6B2AF18DEAA765247430E0AD9A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mC2132AD1DB8C885BE387F3F4573958D0E7015373_gshared (WhereSelectListIterator_2_t37321EC228B494F26F235ED0B03A38101F0C0F9A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* L_3 = (List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603 L_4;
		L_4 = ((  Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603 (*) (List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Command_0), (void*)NULL);
		#endif
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603* L_5 = (Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603*)(&__this->___enumerator_6);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_6;
		L_6 = Enumerator_get_Current_m5DDB3BBC8897715D18FD13C86C8F04F7F2056C23_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_7 = (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_8 = (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*)__this->___predicate_4;
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t67F9EBD004A78A6B2AF18DEAA765247430E0AD9A* L_11 = (Func_2_t67F9EBD004A78A6B2AF18DEAA765247430E0AD9A*)__this->___selector_5;
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_t67F9EBD004A78A6B2AF18DEAA765247430E0AD9A*, CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603* L_14 = (Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7A25425BD894EDAA33E585FC96EAA0090AACC527(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m665296C06F16EB32E2E97D4C244C624CE91C891B_gshared (WhereSelectListIterator_2_t37321EC228B494F26F235ED0B03A38101F0C0F9A* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*, RuntimeObject*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,QFSW.QC.Suggestors.CollapsedCommand>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mC5ADFCEBC743A422D1F4E934D51153265760799D_gshared (WhereSelectListIterator_2_tF594446842E2ED4780E9EE6CCE25471B5528EF31* __this, List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* ___source0, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate1, Func_2_tF9B98EBDC33FA9F55102AE820CCBFC512A6B436D* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF9B98EBDC33FA9F55102AE820CCBFC512A6B436D* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,QFSW.QC.Suggestors.CollapsedCommand>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B* WhereSelectListIterator_2_Clone_m239C78B1B17E3A4671BC17F8F802517F0AB0F389_gshared (WhereSelectListIterator_2_tF594446842E2ED4780E9EE6CCE25471B5528EF31* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* L_0 = (List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*)__this->___source_3;
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_1 = (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*)__this->___predicate_4;
		Func_2_tF9B98EBDC33FA9F55102AE820CCBFC512A6B436D* L_2 = (Func_2_tF9B98EBDC33FA9F55102AE820CCBFC512A6B436D*)__this->___selector_5;
		WhereSelectListIterator_2_tF594446842E2ED4780E9EE6CCE25471B5528EF31* L_3 = (WhereSelectListIterator_2_tF594446842E2ED4780E9EE6CCE25471B5528EF31*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tF594446842E2ED4780E9EE6CCE25471B5528EF31*, List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, Func_2_tF9B98EBDC33FA9F55102AE820CCBFC512A6B436D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB4AB5015CEF4DA65E8EE16C2BE287950BC6227AA_gshared (WhereSelectListIterator_2_tF594446842E2ED4780E9EE6CCE25471B5528EF31* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* L_3 = (List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603 L_4;
		L_4 = ((  Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603 (*) (List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Command_0), (void*)NULL);
		#endif
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603* L_5 = (Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603*)(&__this->___enumerator_6);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_6;
		L_6 = Enumerator_get_Current_m5DDB3BBC8897715D18FD13C86C8F04F7F2056C23_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_7 = (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_8 = (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*)__this->___predicate_4;
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF9B98EBDC33FA9F55102AE820CCBFC512A6B436D* L_11 = (Func_2_tF9B98EBDC33FA9F55102AE820CCBFC512A6B436D*)__this->___selector_5;
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_12 = V_1;
		NullCheck(L_11);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_13;
		L_13 = ((  CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B (*) (Func_2_tF9B98EBDC33FA9F55102AE820CCBFC512A6B436D*, CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2))->___Command_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603* L_14 = (Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7A25425BD894EDAA33E585FC96EAA0090AACC527(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>::Dispose() */, (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,QFSW.QC.Suggestors.CollapsedCommand>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m7D3DA5A1FB05F362C64EF6DF3903A2C209F7154B_gshared (WhereSelectListIterator_2_tF594446842E2ED4780E9EE6CCE25471B5528EF31* __this, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8* L_1 = (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*, RuntimeObject*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m1877E3C8B23FD01E3EBBD6470466FFB153B4468B_gshared (WhereSelectListIterator_2_tA4EC555AFBA70C5AC80F5BE552A6C6879A27DC78* __this, List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* ___source0, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate1, Func_2_tF778CCCFD957D2696064F1BDAC7FFB1261712F60* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF778CCCFD957D2696064F1BDAC7FFB1261712F60* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m530BAF537DA788DACD9F5378444C7E4030C1F0B6_gshared (WhereSelectListIterator_2_tA4EC555AFBA70C5AC80F5BE552A6C6879A27DC78* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* L_0 = (List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*)__this->___source_3;
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_1 = (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*)__this->___predicate_4;
		Func_2_tF778CCCFD957D2696064F1BDAC7FFB1261712F60* L_2 = (Func_2_tF778CCCFD957D2696064F1BDAC7FFB1261712F60*)__this->___selector_5;
		WhereSelectListIterator_2_tA4EC555AFBA70C5AC80F5BE552A6C6879A27DC78* L_3 = (WhereSelectListIterator_2_tA4EC555AFBA70C5AC80F5BE552A6C6879A27DC78*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tA4EC555AFBA70C5AC80F5BE552A6C6879A27DC78*, List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, Func_2_tF778CCCFD957D2696064F1BDAC7FFB1261712F60*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m21FA75BC80FCED9AB5D7CD86437982B2C04C316C_gshared (WhereSelectListIterator_2_tA4EC555AFBA70C5AC80F5BE552A6C6879A27DC78* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* L_3 = (List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603 L_4;
		L_4 = ((  Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603 (*) (List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Command_0), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603* L_5 = (Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603*)(&__this->___enumerator_6);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_6;
		L_6 = Enumerator_get_Current_m5DDB3BBC8897715D18FD13C86C8F04F7F2056C23_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_7 = (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_8 = (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*)__this->___predicate_4;
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF778CCCFD957D2696064F1BDAC7FFB1261712F60* L_11 = (Func_2_tF778CCCFD957D2696064F1BDAC7FFB1261712F60*)__this->___selector_5;
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_tF778CCCFD957D2696064F1BDAC7FFB1261712F60*, CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603* L_14 = (Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7A25425BD894EDAA33E585FC96EAA0090AACC527(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m0D1D67635DF2F619CF20145B24B473D929C738B0_gshared (WhereSelectListIterator_2_tA4EC555AFBA70C5AC80F5BE552A6C6879A27DC78* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF3CAA49DEDF078C0AAC27F8B2ADD542D10EB7BA4_gshared (WhereSelectListIterator_2_tEBD104E1FC70F3E5CF4ABA98EA10336D97076B95* __this, List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* ___source0, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate1, Func_2_t82A267C157A1381632C056C84501D8D1B7378F12* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t82A267C157A1381632C056C84501D8D1B7378F12* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m07DDC836F4270228CD1C4A5AC4A9E7374B08FAD8_gshared (WhereSelectListIterator_2_tEBD104E1FC70F3E5CF4ABA98EA10336D97076B95* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* L_0 = (List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*)__this->___source_3;
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_1 = (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*)__this->___predicate_4;
		Func_2_t82A267C157A1381632C056C84501D8D1B7378F12* L_2 = (Func_2_t82A267C157A1381632C056C84501D8D1B7378F12*)__this->___selector_5;
		WhereSelectListIterator_2_tEBD104E1FC70F3E5CF4ABA98EA10336D97076B95* L_3 = (WhereSelectListIterator_2_tEBD104E1FC70F3E5CF4ABA98EA10336D97076B95*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tEBD104E1FC70F3E5CF4ABA98EA10336D97076B95*, List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, Func_2_t82A267C157A1381632C056C84501D8D1B7378F12*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB07AA91AAEEFAED5C76538CD43DC7A30AD746F27_gshared (WhereSelectListIterator_2_tEBD104E1FC70F3E5CF4ABA98EA10336D97076B95* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F* L_3 = (List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603 L_4;
		L_4 = ((  Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603 (*) (List_1_tF1133CD5CCD8BA3CC3316D3DDFE416918B95478F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Command_0), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603* L_5 = (Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603*)(&__this->___enumerator_6);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_6;
		L_6 = Enumerator_get_Current_m5DDB3BBC8897715D18FD13C86C8F04F7F2056C23_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_7 = (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_8 = (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*)__this->___predicate_4;
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t82A267C157A1381632C056C84501D8D1B7378F12* L_11 = (Func_2_t82A267C157A1381632C056C84501D8D1B7378F12*)__this->___selector_5;
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t82A267C157A1381632C056C84501D8D1B7378F12*, CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603* L_14 = (Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m7A25425BD894EDAA33E585FC96EAA0090AACC527(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<QFSW.QC.Suggestors.CollapsedCommand,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m29B51C340B076B1E988B8D8A9680E172EFB6E677_gshared (WhereSelectListIterator_2_tEBD104E1FC70F3E5CF4ABA98EA10336D97076B95* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mEF67D303FBB6FCB7FA5906B2100D5D4FC28DD5B3_gshared (WhereSelectListIterator_2_tE5953E8934A259A52F507FC131C990C75B350076* __this, List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6* ___source0, Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4* ___predicate1, Func_2_t3A5CA297A4A6BFC271FA43706A5CEA12BEEDA90F* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t6F8827EED7DB0C845108D7DF969A608714128E05*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t6F8827EED7DB0C845108D7DF969A608714128E05*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t3A5CA297A4A6BFC271FA43706A5CEA12BEEDA90F* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t6F8827EED7DB0C845108D7DF969A608714128E05* WhereSelectListIterator_2_Clone_m6965B9657845929EEE2F3716091B8D50DBCAE523_gshared (WhereSelectListIterator_2_tE5953E8934A259A52F507FC131C990C75B350076* __this, const RuntimeMethod* method) 
{
	{
		List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6* L_0 = (List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6*)__this->___source_3;
		Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4* L_1 = (Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4*)__this->___predicate_4;
		Func_2_t3A5CA297A4A6BFC271FA43706A5CEA12BEEDA90F* L_2 = (Func_2_t3A5CA297A4A6BFC271FA43706A5CEA12BEEDA90F*)__this->___selector_5;
		WhereSelectListIterator_2_tE5953E8934A259A52F507FC131C990C75B350076* L_3 = (WhereSelectListIterator_2_tE5953E8934A259A52F507FC131C990C75B350076*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tE5953E8934A259A52F507FC131C990C75B350076*, List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6*, Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4*, Func_2_t3A5CA297A4A6BFC271FA43706A5CEA12BEEDA90F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t6F8827EED7DB0C845108D7DF969A608714128E05*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB96CDAC76C083E4B9906492ABED33308EA6AC510_gshared (WhereSelectListIterator_2_tE5953E8934A259A52F507FC131C990C75B350076* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t6F8827EED7DB0C845108D7DF969A608714128E05*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6* L_3 = (List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B L_4;
		L_4 = ((  Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B (*) (List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->____key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->____value_1), (void*)NULL);
		#endif
		((Iterator_1_t6F8827EED7DB0C845108D7DF969A608714128E05*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B* L_5 = (Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B*)(&__this->___enumerator_6);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		L_6 = Enumerator_get_Current_mBFEE48D34AA5EB20CA6C6FC33F12C8A8C9E01E1F_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4* L_7 = (Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4* L_8 = (Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4*)__this->___predicate_4;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4*, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t3A5CA297A4A6BFC271FA43706A5CEA12BEEDA90F* L_11 = (Func_2_t3A5CA297A4A6BFC271FA43706A5CEA12BEEDA90F*)__this->___selector_5;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_12 = V_1;
		NullCheck(L_11);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_13;
		L_13 = ((  KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 (*) (Func_2_t3A5CA297A4A6BFC271FA43706A5CEA12BEEDA90F*, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t6F8827EED7DB0C845108D7DF969A608714128E05*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t6F8827EED7DB0C845108D7DF969A608714128E05*)__this)->___current_2))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t6F8827EED7DB0C845108D7DF969A608714128E05*)__this)->___current_2))->___value_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B* L_14 = (Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB57BCE535AF7E86209B83F1BBC22A95B8F7FEEAA(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t6F8827EED7DB0C845108D7DF969A608714128E05*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t6F8827EED7DB0C845108D7DF969A608714128E05*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF2F56FDD87090C7419372B25A025215916300ABB_gshared (WhereSelectListIterator_2_tE5953E8934A259A52F507FC131C990C75B350076* __this, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8003EA874EC8867895405A3AB37AFFC5E2B99308* L_1 = (WhereEnumerableIterator_1_t8003EA874EC8867895405A3AB37AFFC5E2B99308*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t8003EA874EC8867895405A3AB37AFFC5E2B99308*, RuntimeObject*, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m1EF4C79084A490D1FEF54F9A12809D57B76F9660_gshared (WhereSelectListIterator_2_t8931D62B9741BC0631B61C889BA7EE43F179C2B6* __this, List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6* ___source0, Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4* ___predicate1, Func_2_t36B60C467E4EEB65DF944BD9CF29E8115D2927E4* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t36B60C467E4EEB65DF944BD9CF29E8115D2927E4* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mA875B0650FE79F84F6E1BD2DF5ED1BCAC702C4A0_gshared (WhereSelectListIterator_2_t8931D62B9741BC0631B61C889BA7EE43F179C2B6* __this, const RuntimeMethod* method) 
{
	{
		List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6* L_0 = (List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6*)__this->___source_3;
		Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4* L_1 = (Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4*)__this->___predicate_4;
		Func_2_t36B60C467E4EEB65DF944BD9CF29E8115D2927E4* L_2 = (Func_2_t36B60C467E4EEB65DF944BD9CF29E8115D2927E4*)__this->___selector_5;
		WhereSelectListIterator_2_t8931D62B9741BC0631B61C889BA7EE43F179C2B6* L_3 = (WhereSelectListIterator_2_t8931D62B9741BC0631B61C889BA7EE43F179C2B6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t8931D62B9741BC0631B61C889BA7EE43F179C2B6*, List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6*, Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4*, Func_2_t36B60C467E4EEB65DF944BD9CF29E8115D2927E4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mCBD2955750D455151291F6902F6A6C680EB547F1_gshared (WhereSelectListIterator_2_t8931D62B9741BC0631B61C889BA7EE43F179C2B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6* L_3 = (List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B L_4;
		L_4 = ((  Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B (*) (List_1_t3415DFB4F423897DC8911D83A8FBAA0EDBCA5DA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->____key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->____value_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B* L_5 = (Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B*)(&__this->___enumerator_6);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		L_6 = Enumerator_get_Current_mBFEE48D34AA5EB20CA6C6FC33F12C8A8C9E01E1F_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4* L_7 = (Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4* L_8 = (Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4*)__this->___predicate_4;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tDBF8C754A8F1FC6DE54BB9904D2D81C266DFF6B4*, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t36B60C467E4EEB65DF944BD9CF29E8115D2927E4* L_11 = (Func_2_t36B60C467E4EEB65DF944BD9CF29E8115D2927E4*)__this->___selector_5;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t36B60C467E4EEB65DF944BD9CF29E8115D2927E4*, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B* L_14 = (Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB57BCE535AF7E86209B83F1BBC22A95B8F7FEEAA(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2DA805CB6472CFE16F4C07A3144D1596802B66AA_gshared (WhereSelectListIterator_2_t8931D62B9741BC0631B61C889BA7EE43F179C2B6* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6015CAFB149403EFC49A3CFE180F8287C4B1F2D3_gshared (WhereSelectListIterator_2_t1A5B574577FF00CA7DAA72E41AD6F3C3715A546B* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___source0, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___predicate1, Func_2_tF56DF5480E243FCDF894BF58102BE74409D47665* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF56DF5480E243FCDF894BF58102BE74409D47665* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_m8A3BA71E6E6B1781AC184C78B9D5092BA3B1BFC4_gshared (WhereSelectListIterator_2_t1A5B574577FF00CA7DAA72E41AD6F3C3715A546B* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		Func_2_tF56DF5480E243FCDF894BF58102BE74409D47665* L_2 = (Func_2_tF56DF5480E243FCDF894BF58102BE74409D47665*)__this->___selector_5;
		WhereSelectListIterator_2_t1A5B574577FF00CA7DAA72E41AD6F3C3715A546B* L_3 = (WhereSelectListIterator_2_t1A5B574577FF00CA7DAA72E41AD6F3C3715A546B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t1A5B574577FF00CA7DAA72E41AD6F3C3715A546B*, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, Func_2_tF56DF5480E243FCDF894BF58102BE74409D47665*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m527CC2EF79DE7C165BA7378823C3F8D1173121B2_gshared (WhereSelectListIterator_2_t1A5B574577FF00CA7DAA72E41AD6F3C3715A546B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_3 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_4;
		L_4 = ((  Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_5 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_7 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_8 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF56DF5480E243FCDF894BF58102BE74409D47665* L_11 = (Func_2_tF56DF5480E243FCDF894BF58102BE74409D47665*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_tF56DF5480E243FCDF894BF58102BE74409D47665*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_14 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mD8EEB3480FCF68C7CD75F325CD61E7162D1D2BD9_gshared (WhereSelectListIterator_2_t1A5B574577FF00CA7DAA72E41AD6F3C3715A546B* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*, RuntimeObject*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,QFSW.QC.Suggestors.CollapsedCommand>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD563612D6C2088C22C220B42D034D48CB8641B8E_gshared (WhereSelectListIterator_2_t9E866A9C344FC96E83B0198B0DFFFD6904CA7009* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___source0, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___predicate1, Func_2_t7E1F1930B06F2B56048C3F47E704C253B1B68E06* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t7E1F1930B06F2B56048C3F47E704C253B1B68E06* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,QFSW.QC.Suggestors.CollapsedCommand>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B* WhereSelectListIterator_2_Clone_m02ACCFF6F202E7AB4B2BDB7DE685F2E3776F6BDB_gshared (WhereSelectListIterator_2_t9E866A9C344FC96E83B0198B0DFFFD6904CA7009* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		Func_2_t7E1F1930B06F2B56048C3F47E704C253B1B68E06* L_2 = (Func_2_t7E1F1930B06F2B56048C3F47E704C253B1B68E06*)__this->___selector_5;
		WhereSelectListIterator_2_t9E866A9C344FC96E83B0198B0DFFFD6904CA7009* L_3 = (WhereSelectListIterator_2_t9E866A9C344FC96E83B0198B0DFFFD6904CA7009*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t9E866A9C344FC96E83B0198B0DFFFD6904CA7009*, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, Func_2_t7E1F1930B06F2B56048C3F47E704C253B1B68E06*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB9F2978F462A107FE8E1EC987C4FE71789E26018_gshared (WhereSelectListIterator_2_t9E866A9C344FC96E83B0198B0DFFFD6904CA7009* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_3 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_4;
		L_4 = ((  Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_5 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_7 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_8 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7E1F1930B06F2B56048C3F47E704C253B1B68E06* L_11 = (Func_2_t7E1F1930B06F2B56048C3F47E704C253B1B68E06*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_13;
		L_13 = ((  CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B (*) (Func_2_t7E1F1930B06F2B56048C3F47E704C253B1B68E06*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2))->___Command_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_14 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>::Dispose() */, (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,QFSW.QC.Suggestors.CollapsedCommand>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3BECB0BDFC536C9F55BC57D43996A2B96BFAB004_gshared (WhereSelectListIterator_2_t9E866A9C344FC96E83B0198B0DFFFD6904CA7009* __this, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8* L_1 = (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*, RuntimeObject*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m86FB1EF6DD06CD0028040B89DBD78B4C577F9196_gshared (WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___source0, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___predicate1, Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m02305DD4136C7D986273157CB0641C4802925481_gshared (WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3* L_2 = (Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3*)__this->___selector_5;
		WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4* L_3 = (WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4*, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m0B0DC5484A333DC7C274DF4B81E8E81108F738DA_gshared (WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_3 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_4;
		L_4 = ((  Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_5 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_7 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_8 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3* L_11 = (Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t3E7E1CE662A1687DE5A95E07D6B0EFB6FD67A4C3*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_14 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mD3B8013D29C5A394A6A490F1B58A50D7EAE81ABC_gshared (WhereSelectListIterator_2_tE1C747300584A897C38C04B253D029A28EE61FF4* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m80BB1C97A9B4B9C60648387CF6393E5D6C6B7AE7_gshared (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___source0, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___predicate1, Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mEB021C37D21C588BD23B2E31E94B78EECAC70ECC_gshared (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* L_2 = (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A*)__this->___selector_5;
		WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* L_3 = (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0*, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, Func_2_tF12503C33FD184E465546C31F324F4C344B8975A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mC4C73B9B34878E32FE1CE9D39506A38A51D3647E_gshared (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_3 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_4;
		L_4 = ((  Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_5 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_7 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_8 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* L_11 = (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_14 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m73B23853246474AB894F5475C49165E061CFE8AE_gshared (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8FCB4054236CFD5445E88EF8E6327A4BF07D62BD_gshared (WhereSelectListIterator_2_t5BEDB73F65F06237E6CBD3983597591A9FEDEDF2* __this, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___source0, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate1, Func_2_tF5C06A04B784618F64D714D3EC0369F6AAFA85EA* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF5C06A04B784618F64D714D3EC0369F6AAFA85EA* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_mE9352496096043EC2964A3F5D4A16B8BAF719A64_gshared (WhereSelectListIterator_2_t5BEDB73F65F06237E6CBD3983597591A9FEDEDF2* __this, const RuntimeMethod* method) 
{
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		Func_2_tF5C06A04B784618F64D714D3EC0369F6AAFA85EA* L_2 = (Func_2_tF5C06A04B784618F64D714D3EC0369F6AAFA85EA*)__this->___selector_5;
		WhereSelectListIterator_2_t5BEDB73F65F06237E6CBD3983597591A9FEDEDF2* L_3 = (WhereSelectListIterator_2_t5BEDB73F65F06237E6CBD3983597591A9FEDEDF2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t5BEDB73F65F06237E6CBD3983597591A9FEDEDF2*, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, Func_2_tF5C06A04B784618F64D714D3EC0369F6AAFA85EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m1B8582655865A500CEB67FB6D56AC03F887B0A51_gshared (WhereSelectListIterator_2_t5BEDB73F65F06237E6CBD3983597591A9FEDEDF2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_3 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D L_4;
		L_4 = ((  Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D (*) (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_5 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_6;
		L_6 = Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_7 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_8 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF5C06A04B784618F64D714D3EC0369F6AAFA85EA* L_11 = (Func_2_tF5C06A04B784618F64D714D3EC0369F6AAFA85EA*)__this->___selector_5;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_tF5C06A04B784618F64D714D3EC0369F6AAFA85EA*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_14 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mDE91C8D17D103A1B94840269AC4451F7EB317210_gshared (WhereSelectListIterator_2_t5BEDB73F65F06237E6CBD3983597591A9FEDEDF2* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*, RuntimeObject*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,QFSW.QC.Suggestors.CollapsedCommand>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mFB0681109E2AB2361F0CA21E1E3833BFBBDA8037_gshared (WhereSelectListIterator_2_tF680780AB7A7605EA3650FCA9A9F2D87E558DEDE* __this, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___source0, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate1, Func_2_t6993A7E97E9AF10DFE6755887A84179BD72ABED4* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t6993A7E97E9AF10DFE6755887A84179BD72ABED4* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,QFSW.QC.Suggestors.CollapsedCommand>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B* WhereSelectListIterator_2_Clone_mDE9BE357515889466FF5B1C9425270E0B115577D_gshared (WhereSelectListIterator_2_tF680780AB7A7605EA3650FCA9A9F2D87E558DEDE* __this, const RuntimeMethod* method) 
{
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		Func_2_t6993A7E97E9AF10DFE6755887A84179BD72ABED4* L_2 = (Func_2_t6993A7E97E9AF10DFE6755887A84179BD72ABED4*)__this->___selector_5;
		WhereSelectListIterator_2_tF680780AB7A7605EA3650FCA9A9F2D87E558DEDE* L_3 = (WhereSelectListIterator_2_tF680780AB7A7605EA3650FCA9A9F2D87E558DEDE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tF680780AB7A7605EA3650FCA9A9F2D87E558DEDE*, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, Func_2_t6993A7E97E9AF10DFE6755887A84179BD72ABED4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA7F5DFA34DB078B7B1BB6ECD53F50FD86A1404F1_gshared (WhereSelectListIterator_2_tF680780AB7A7605EA3650FCA9A9F2D87E558DEDE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_3 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D L_4;
		L_4 = ((  Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D (*) (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_5 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_6;
		L_6 = Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_7 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_8 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6993A7E97E9AF10DFE6755887A84179BD72ABED4* L_11 = (Func_2_t6993A7E97E9AF10DFE6755887A84179BD72ABED4*)__this->___selector_5;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_1;
		NullCheck(L_11);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_13;
		L_13 = ((  CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B (*) (Func_2_t6993A7E97E9AF10DFE6755887A84179BD72ABED4*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2))->___Command_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_14 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>::Dispose() */, (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,QFSW.QC.Suggestors.CollapsedCommand>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mFDB6D7C0D6C3399A70C08BF6F65F3F848B3CD752_gshared (WhereSelectListIterator_2_tF680780AB7A7605EA3650FCA9A9F2D87E558DEDE* __this, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8* L_1 = (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*, RuntimeObject*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF85D17BE66C1306EFCDD26409BE55B790F79EAC7_gshared (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* __this, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___source0, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate1, Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m937D5D1B7EC49BC4FAFEF932971777D72EED049F_gshared (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* __this, const RuntimeMethod* method) 
{
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* L_2 = (Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41*)__this->___selector_5;
		WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* L_3 = (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76*, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m08D934685D1F2120D36F9765312FE73F71D11A0C_gshared (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_3 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D L_4;
		L_4 = ((  Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D (*) (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_5 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_6;
		L_6 = Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_7 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_8 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* L_11 = (Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41*)__this->___selector_5;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_14 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mBD04923D351FA549D359E8DE870BC9B749151AD5_gshared (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BCE5A345461986F8A5135101B04C991E317945D_gshared (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* __this, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___source0, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate1, Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6278EB80D90415F83BFDB8B5371391F709708653_gshared (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* __this, const RuntimeMethod* method) 
{
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* L_2 = (Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB*)__this->___selector_5;
		WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* L_3 = (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA*, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m0CB70971EBB16282B0C9F4643F3FD2738E5BD75E_gshared (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_3 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D L_4;
		L_4 = ((  Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D (*) (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_5 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_6;
		L_6 = Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_7 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_8 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* L_11 = (Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB*)__this->___selector_5;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_14 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m47E63372073B7C4C5AD7436694EFC21E163DF15E_gshared (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9C3A9379AC91FF7E5B86BDF8A2CC0FA97356F8FA_gshared (WhereSelectListIterator_2_t3855774C58EB643AD738982FA09DFB0B337F5D49* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source0, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate1, Func_2_tCE41DEFAE5E693DD08472B97A56F8EFFFF68519D* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tCE41DEFAE5E693DD08472B97A56F8EFFFF68519D* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_m843914D1097636F57A1C04FD0B15AC380C895148_gshared (WhereSelectListIterator_2_t3855774C58EB643AD738982FA09DFB0B337F5D49* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		Func_2_tCE41DEFAE5E693DD08472B97A56F8EFFFF68519D* L_2 = (Func_2_tCE41DEFAE5E693DD08472B97A56F8EFFFF68519D*)__this->___selector_5;
		WhereSelectListIterator_2_t3855774C58EB643AD738982FA09DFB0B337F5D49* L_3 = (WhereSelectListIterator_2_t3855774C58EB643AD738982FA09DFB0B337F5D49*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t3855774C58EB643AD738982FA09DFB0B337F5D49*, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, Func_2_tCE41DEFAE5E693DD08472B97A56F8EFFFF68519D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mEF2BC80DFD4C3DE9AD34F6EC8B7ED0FC3859C93C_gshared (WhereSelectListIterator_2_t3855774C58EB643AD738982FA09DFB0B337F5D49* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_3 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 L_4;
		L_4 = ((  Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 (*) (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_5 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_6;
		L_6 = Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_7 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_8 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tCE41DEFAE5E693DD08472B97A56F8EFFFF68519D* L_11 = (Func_2_tCE41DEFAE5E693DD08472B97A56F8EFFFF68519D*)__this->___selector_5;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_tCE41DEFAE5E693DD08472B97A56F8EFFFF68519D*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_14 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m9A3C2A4D349558B4C6E60EFD009A6B1423ED2C07_gshared (WhereSelectListIterator_2_t3855774C58EB643AD738982FA09DFB0B337F5D49* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*, RuntimeObject*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,QFSW.QC.Suggestors.CollapsedCommand>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0B7C923C656EB43A90C7123A463F5A013544F703_gshared (WhereSelectListIterator_2_tC19A900598CE8B50891C2B097A515521FB897583* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source0, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate1, Func_2_t23F03B13DE50EEC5D41D99720FC89017C40C6BFB* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t23F03B13DE50EEC5D41D99720FC89017C40C6BFB* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,QFSW.QC.Suggestors.CollapsedCommand>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B* WhereSelectListIterator_2_Clone_m910987785DC8F7DCEFE21537D9BBB3C7CDA30357_gshared (WhereSelectListIterator_2_tC19A900598CE8B50891C2B097A515521FB897583* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		Func_2_t23F03B13DE50EEC5D41D99720FC89017C40C6BFB* L_2 = (Func_2_t23F03B13DE50EEC5D41D99720FC89017C40C6BFB*)__this->___selector_5;
		WhereSelectListIterator_2_tC19A900598CE8B50891C2B097A515521FB897583* L_3 = (WhereSelectListIterator_2_tC19A900598CE8B50891C2B097A515521FB897583*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tC19A900598CE8B50891C2B097A515521FB897583*, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, Func_2_t23F03B13DE50EEC5D41D99720FC89017C40C6BFB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m91CD16EA0192BE7BC6557E2A9FC45F58BAC3B256_gshared (WhereSelectListIterator_2_tC19A900598CE8B50891C2B097A515521FB897583* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_3 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 L_4;
		L_4 = ((  Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 (*) (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_5 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_6;
		L_6 = Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_7 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_8 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t23F03B13DE50EEC5D41D99720FC89017C40C6BFB* L_11 = (Func_2_t23F03B13DE50EEC5D41D99720FC89017C40C6BFB*)__this->___selector_5;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_12 = V_1;
		NullCheck(L_11);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_13;
		L_13 = ((  CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B (*) (Func_2_t23F03B13DE50EEC5D41D99720FC89017C40C6BFB*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2))->___Command_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_14 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>::Dispose() */, (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,QFSW.QC.Suggestors.CollapsedCommand>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m9E136028330F3FF6D02B6AC4CB5AA240B60FD39E_gshared (WhereSelectListIterator_2_tC19A900598CE8B50891C2B097A515521FB897583* __this, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8* L_1 = (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*, RuntimeObject*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD72ECEB2A0980E5F93455365BA960143A34085DB_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source0, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate1, Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m796C8279CEB66ADDC80A7EAC36AEE08605979787_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* L_2 = (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*)__this->___selector_5;
		WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* L_3 = (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81*, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mAFCE990F26EBDDF656AA01807375D36544C63124_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_3 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 L_4;
		L_4 = ((  Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 (*) (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_5 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_6;
		L_6 = Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_7 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_8 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* L_11 = (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*)__this->___selector_5;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_14 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1B9A768C2B1A26E615BCDB10078F5231CF0C4ADC_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5B76AF3B3FB2BBABD403C1A3D66C1A5835BA7561_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source0, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate1, Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF2790E5EEE1D2834008B9010A19FF3E957831704_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* L_2 = (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*)__this->___selector_5;
		WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* L_3 = (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5*, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m238375EE3AAF7B4CE3F25C85030EB4F8692B3BC9_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_3 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 L_4;
		L_4 = ((  Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 (*) (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_5 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_6;
		L_6 = Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_7 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_8 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* L_11 = (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*)__this->___selector_5;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_14 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA426094A845A1CE82FF3AD1193681948DA7603C9_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mFF191DEBA9AFA3060C2E114ACDCCA9C27D5C2568_gshared (WhereSelectListIterator_2_t08E6CE9DD97A5345E1A29CBD9C4C2FF831955A91* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_tD5E157E92F8442B3C92279D3D317BB0FC58CCBA6* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tD5E157E92F8442B3C92279D3D317BB0FC58CCBA6* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_m0EEC9E11C467A6BD227E8A770B2847F9AB6B1151_gshared (WhereSelectListIterator_2_t08E6CE9DD97A5345E1A29CBD9C4C2FF831955A91* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		Func_2_tD5E157E92F8442B3C92279D3D317BB0FC58CCBA6* L_2 = (Func_2_tD5E157E92F8442B3C92279D3D317BB0FC58CCBA6*)__this->___selector_5;
		WhereSelectListIterator_2_t08E6CE9DD97A5345E1A29CBD9C4C2FF831955A91* L_3 = (WhereSelectListIterator_2_t08E6CE9DD97A5345E1A29CBD9C4C2FF831955A91*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t08E6CE9DD97A5345E1A29CBD9C4C2FF831955A91*, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, Func_2_tD5E157E92F8442B3C92279D3D317BB0FC58CCBA6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m1FBC10311F1A7B08DF2571D704A79858FE4AA40B_gshared (WhereSelectListIterator_2_t08E6CE9DD97A5345E1A29CBD9C4C2FF831955A91* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_3 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 L_4;
		L_4 = ((  Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 (*) (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
		#endif
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_5 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_6;
		L_6 = Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_7 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_8 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD5E157E92F8442B3C92279D3D317BB0FC58CCBA6* L_11 = (Func_2_tD5E157E92F8442B3C92279D3D317BB0FC58CCBA6*)__this->___selector_5;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_tD5E157E92F8442B3C92279D3D317BB0FC58CCBA6*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_14 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA2B471D55F208AA438258C621A24B343D7B1F6F0_gshared (WhereSelectListIterator_2_t08E6CE9DD97A5345E1A29CBD9C4C2FF831955A91* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*, RuntimeObject*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,QFSW.QC.Suggestors.CollapsedCommand>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5A48DCF66DF7A2B8A81588865FA70EB72B9F1320_gshared (WhereSelectListIterator_2_tB8704D73928864EF7CE56994835A9033599CACD9* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_t8E15F832C31D9406090ADF35F35AC6BF57AEB186* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t8E15F832C31D9406090ADF35F35AC6BF57AEB186* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,QFSW.QC.Suggestors.CollapsedCommand>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B* WhereSelectListIterator_2_Clone_m3D8884F4E01D2D2E7ECF45998AB3261AF32E1F01_gshared (WhereSelectListIterator_2_tB8704D73928864EF7CE56994835A9033599CACD9* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		Func_2_t8E15F832C31D9406090ADF35F35AC6BF57AEB186* L_2 = (Func_2_t8E15F832C31D9406090ADF35F35AC6BF57AEB186*)__this->___selector_5;
		WhereSelectListIterator_2_tB8704D73928864EF7CE56994835A9033599CACD9* L_3 = (WhereSelectListIterator_2_tB8704D73928864EF7CE56994835A9033599CACD9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tB8704D73928864EF7CE56994835A9033599CACD9*, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, Func_2_t8E15F832C31D9406090ADF35F35AC6BF57AEB186*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m02FE6F6B12BB7AA3D8A04E00CFF6107D3FB1584F_gshared (WhereSelectListIterator_2_tB8704D73928864EF7CE56994835A9033599CACD9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_3 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 L_4;
		L_4 = ((  Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 (*) (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
		#endif
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_5 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_6;
		L_6 = Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_7 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_8 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t8E15F832C31D9406090ADF35F35AC6BF57AEB186* L_11 = (Func_2_t8E15F832C31D9406090ADF35F35AC6BF57AEB186*)__this->___selector_5;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_12 = V_1;
		NullCheck(L_11);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_13;
		L_13 = ((  CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B (*) (Func_2_t8E15F832C31D9406090ADF35F35AC6BF57AEB186*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2))->___Command_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_14 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>::Dispose() */, (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,QFSW.QC.Suggestors.CollapsedCommand>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mD27E1359B30B27AFF9ABD86CE877D87BA0FF0CC2_gshared (WhereSelectListIterator_2_tB8704D73928864EF7CE56994835A9033599CACD9* __this, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8* L_1 = (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*, RuntimeObject*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mACC4D7CA5223D22CBC36F756CA54BA80C06723C9_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m89C4946CF9C7CA28F2091618685B85AA11EA3E87_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* L_2 = (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*)__this->___selector_5;
		WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* L_3 = (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C*, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7DCCE086E23C0D68D4F9AEF5E70291B76432AAF1_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_3 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 L_4;
		L_4 = ((  Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 (*) (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_5 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_6;
		L_6 = Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_7 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_8 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* L_11 = (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*)__this->___selector_5;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_14 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC6AFE32AA08E2CBC27F4433BA2319CA59306DC87_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0114667628FFFB49A744DF5C3B5A35A1814E363B_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D39A066ED4134383555E981E6798ABE193987FA_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* L_2 = (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*)__this->___selector_5;
		WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* L_3 = (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562*, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA38FDC21AFF8361AF5116FA137FCCBCACEA1AD47_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_3 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 L_4;
		L_4 = ((  Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 (*) (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_5 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_6;
		L_6 = Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_7 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_8 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* L_11 = (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*)__this->___selector_5;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_14 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m760B5F9924376AD216CBF0E0478787D491BBCC1C_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4DA4E55D68D54CA13E443B2C1EF7AE6A5627787E_gshared (WhereSelectListIterator_2_t1D0D030153AD3907D2774B6B5C56F2AA852BC21D* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tEE709D92F595E05CEE36C7FD0D5EE65BD0AC82B0* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tEE709D92F595E05CEE36C7FD0D5EE65BD0AC82B0* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_m4BEBDF3B22C2E9FD3A10DF1A73D7A7AE08B57C53_gshared (WhereSelectListIterator_2_t1D0D030153AD3907D2774B6B5C56F2AA852BC21D* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tEE709D92F595E05CEE36C7FD0D5EE65BD0AC82B0* L_2 = (Func_2_tEE709D92F595E05CEE36C7FD0D5EE65BD0AC82B0*)__this->___selector_5;
		WhereSelectListIterator_2_t1D0D030153AD3907D2774B6B5C56F2AA852BC21D* L_3 = (WhereSelectListIterator_2_t1D0D030153AD3907D2774B6B5C56F2AA852BC21D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t1D0D030153AD3907D2774B6B5C56F2AA852BC21D*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tEE709D92F595E05CEE36C7FD0D5EE65BD0AC82B0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m782534AAC7F6402CABDC6025320407AA6A38AC81_gshared (WhereSelectListIterator_2_t1D0D030153AD3907D2774B6B5C56F2AA852BC21D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tEE709D92F595E05CEE36C7FD0D5EE65BD0AC82B0* L_11 = (Func_2_tEE709D92F595E05CEE36C7FD0D5EE65BD0AC82B0*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_tEE709D92F595E05CEE36C7FD0D5EE65BD0AC82B0*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m64F534C7CFE24C6001D08F9BB1BC20D440E11CF4_gshared (WhereSelectListIterator_2_t1D0D030153AD3907D2774B6B5C56F2AA852BC21D* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*, RuntimeObject*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,QFSW.QC.Suggestors.CollapsedCommand>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m03A40AB111A815D2B85E69164A398BEAE3EB057A_gshared (WhereSelectListIterator_2_t2AF6EB7730B7B73C455D627D1524775D452C979C* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tE362AEB2864A35557BEC7D69EF7917131E19122F* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tE362AEB2864A35557BEC7D69EF7917131E19122F* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,QFSW.QC.Suggestors.CollapsedCommand>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B* WhereSelectListIterator_2_Clone_mC8A328DBFDE94F4C56119138BFF0C136AE2AC40C_gshared (WhereSelectListIterator_2_t2AF6EB7730B7B73C455D627D1524775D452C979C* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tE362AEB2864A35557BEC7D69EF7917131E19122F* L_2 = (Func_2_tE362AEB2864A35557BEC7D69EF7917131E19122F*)__this->___selector_5;
		WhereSelectListIterator_2_t2AF6EB7730B7B73C455D627D1524775D452C979C* L_3 = (WhereSelectListIterator_2_t2AF6EB7730B7B73C455D627D1524775D452C979C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t2AF6EB7730B7B73C455D627D1524775D452C979C*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tE362AEB2864A35557BEC7D69EF7917131E19122F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m287CE2D0BD5ED0AC6A56E6E9EEFE163E142ACD8B_gshared (WhereSelectListIterator_2_t2AF6EB7730B7B73C455D627D1524775D452C979C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE362AEB2864A35557BEC7D69EF7917131E19122F* L_11 = (Func_2_tE362AEB2864A35557BEC7D69EF7917131E19122F*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_13;
		L_13 = ((  CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B (*) (Func_2_tE362AEB2864A35557BEC7D69EF7917131E19122F*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2))->___Command_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>::Dispose() */, (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,QFSW.QC.Suggestors.CollapsedCommand>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mB5868211303E06101CF6DDD8817A2201C52FB363_gshared (WhereSelectListIterator_2_t2AF6EB7730B7B73C455D627D1524775D452C979C* __this, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8* L_1 = (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*, RuntimeObject*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF6B7E88239427705172E9C20967757449FE7FCF5_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_mF42081341BA80585066D84F1EB99058CEAEB9529_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* L_2 = (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*)__this->___selector_5;
		WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* L_3 = (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m800FE72E92DE905CEB928E72485F8A74DDBFFEF0_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* L_11 = (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mEA53E9D37F0B4DB9D0E1D26336E8203C5080814B_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF22589DABD608C024E039C0F5DE9F457967EC3E8_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* L_3 = (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4609B745A7644E640F319C2651F1A97C2D304458_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA37F84C07852A5760237B9A50C373846A6528477_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCDF513C0EFDEA748EFB6C7BA3D9BDEFB826D4508_gshared (WhereSelectListIterator_2_t5E47BBA5B6D1697C595494CB30489BFB75D9594C* __this, List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* ___source0, Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* ___predicate1, Func_2_t17C0617954A0A3AEA51F701AE7ECE0595A11A085* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t17C0617954A0A3AEA51F701AE7ECE0595A11A085* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_m2F139F3142D12025DD847402CCA6E5E3E97B3725_gshared (WhereSelectListIterator_2_t5E47BBA5B6D1697C595494CB30489BFB75D9594C* __this, const RuntimeMethod* method) 
{
	{
		List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* L_0 = (List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*)__this->___source_3;
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_1 = (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*)__this->___predicate_4;
		Func_2_t17C0617954A0A3AEA51F701AE7ECE0595A11A085* L_2 = (Func_2_t17C0617954A0A3AEA51F701AE7ECE0595A11A085*)__this->___selector_5;
		WhereSelectListIterator_2_t5E47BBA5B6D1697C595494CB30489BFB75D9594C* L_3 = (WhereSelectListIterator_2_t5E47BBA5B6D1697C595494CB30489BFB75D9594C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t5E47BBA5B6D1697C595494CB30489BFB75D9594C*, List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*, Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*, Func_2_t17C0617954A0A3AEA51F701AE7ECE0595A11A085*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m6271EBD33EF549BC9D45C11E5FCAFF99CE0581A8_gshared (WhereSelectListIterator_2_t5E47BBA5B6D1697C595494CB30489BFB75D9594C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* L_3 = (List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74 L_4;
		L_4 = ((  Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74 (*) (List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Region_0), (void*)NULL);
		#endif
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74* L_5 = (Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74*)(&__this->___enumerator_6);
		QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 L_6;
		L_6 = Enumerator_get_Current_m8D1CE84E8C3FD32018C9874883C02507A3085F31_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_7 = (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_8 = (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*)__this->___predicate_4;
		QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*, QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t17C0617954A0A3AEA51F701AE7ECE0595A11A085* L_11 = (Func_2_t17C0617954A0A3AEA51F701AE7ECE0595A11A085*)__this->___selector_5;
		QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_t17C0617954A0A3AEA51F701AE7ECE0595A11A085*, QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74* L_14 = (Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m9C11B8A4B57C0AE4C58B50EC3B26E95AC7BB6758(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m45FACFF5EBB79EAA623BAEA4ED9636327E99D162_gshared (WhereSelectListIterator_2_t5E47BBA5B6D1697C595494CB30489BFB75D9594C* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*, RuntimeObject*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,QFSW.QC.Suggestors.CollapsedCommand>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE5A30845C69BB802D2B17F91177E2325AF45AC53_gshared (WhereSelectListIterator_2_t98679D16543B155A550591D15E2DECB2B18C590A* __this, List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* ___source0, Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* ___predicate1, Func_2_tDAFB6810B3A0D7C35966B0470E35E708B9EAD22A* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tDAFB6810B3A0D7C35966B0470E35E708B9EAD22A* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,QFSW.QC.Suggestors.CollapsedCommand>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B* WhereSelectListIterator_2_Clone_m817E5E83852DC20229F79714362EC78B69409091_gshared (WhereSelectListIterator_2_t98679D16543B155A550591D15E2DECB2B18C590A* __this, const RuntimeMethod* method) 
{
	{
		List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* L_0 = (List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*)__this->___source_3;
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_1 = (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*)__this->___predicate_4;
		Func_2_tDAFB6810B3A0D7C35966B0470E35E708B9EAD22A* L_2 = (Func_2_tDAFB6810B3A0D7C35966B0470E35E708B9EAD22A*)__this->___selector_5;
		WhereSelectListIterator_2_t98679D16543B155A550591D15E2DECB2B18C590A* L_3 = (WhereSelectListIterator_2_t98679D16543B155A550591D15E2DECB2B18C590A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t98679D16543B155A550591D15E2DECB2B18C590A*, List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*, Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*, Func_2_tDAFB6810B3A0D7C35966B0470E35E708B9EAD22A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m098B21F4E410F9B7FA04597BFDD0AB2E35DF80A1_gshared (WhereSelectListIterator_2_t98679D16543B155A550591D15E2DECB2B18C590A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* L_3 = (List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74 L_4;
		L_4 = ((  Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74 (*) (List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Region_0), (void*)NULL);
		#endif
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74* L_5 = (Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74*)(&__this->___enumerator_6);
		QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 L_6;
		L_6 = Enumerator_get_Current_m8D1CE84E8C3FD32018C9874883C02507A3085F31_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_7 = (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_8 = (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*)__this->___predicate_4;
		QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*, QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tDAFB6810B3A0D7C35966B0470E35E708B9EAD22A* L_11 = (Func_2_tDAFB6810B3A0D7C35966B0470E35E708B9EAD22A*)__this->___selector_5;
		QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 L_12 = V_1;
		NullCheck(L_11);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_13;
		L_13 = ((  CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B (*) (Func_2_tDAFB6810B3A0D7C35966B0470E35E708B9EAD22A*, QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2))->___Command_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74* L_14 = (Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m9C11B8A4B57C0AE4C58B50EC3B26E95AC7BB6758(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>::Dispose() */, (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,QFSW.QC.Suggestors.CollapsedCommand>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m5E30C376D910DC9EB37DB032108698C3576391A2_gshared (WhereSelectListIterator_2_t98679D16543B155A550591D15E2DECB2B18C590A* __this, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8* L_1 = (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*, RuntimeObject*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mBF7DEECB440DE7EBDCF4C555B7CC117DE22CC599_gshared (WhereSelectListIterator_2_tC29224208126B68E4ACB7C306CA8B224C2A6D78E* __this, List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* ___source0, Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* ___predicate1, Func_2_t4F77AB4B9B4859369869026B567EE7FC972833B6* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t4F77AB4B9B4859369869026B567EE7FC972833B6* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m3529FA1C63D2065F1ABA16B025D66747F4C4A21C_gshared (WhereSelectListIterator_2_tC29224208126B68E4ACB7C306CA8B224C2A6D78E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* L_0 = (List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*)__this->___source_3;
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_1 = (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*)__this->___predicate_4;
		Func_2_t4F77AB4B9B4859369869026B567EE7FC972833B6* L_2 = (Func_2_t4F77AB4B9B4859369869026B567EE7FC972833B6*)__this->___selector_5;
		WhereSelectListIterator_2_tC29224208126B68E4ACB7C306CA8B224C2A6D78E* L_3 = (WhereSelectListIterator_2_tC29224208126B68E4ACB7C306CA8B224C2A6D78E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tC29224208126B68E4ACB7C306CA8B224C2A6D78E*, List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*, Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*, Func_2_t4F77AB4B9B4859369869026B567EE7FC972833B6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4A3B0AB80843751C2F70FE617C31AB3B5734BB81_gshared (WhereSelectListIterator_2_tC29224208126B68E4ACB7C306CA8B224C2A6D78E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* L_3 = (List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74 L_4;
		L_4 = ((  Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74 (*) (List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Region_0), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74* L_5 = (Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74*)(&__this->___enumerator_6);
		QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 L_6;
		L_6 = Enumerator_get_Current_m8D1CE84E8C3FD32018C9874883C02507A3085F31_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_7 = (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_8 = (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*)__this->___predicate_4;
		QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*, QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4F77AB4B9B4859369869026B567EE7FC972833B6* L_11 = (Func_2_t4F77AB4B9B4859369869026B567EE7FC972833B6*)__this->___selector_5;
		QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t4F77AB4B9B4859369869026B567EE7FC972833B6*, QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74* L_14 = (Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m9C11B8A4B57C0AE4C58B50EC3B26E95AC7BB6758(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m0E1536AA0E5F9ACA29E8EAB7F5936149C0AB833C_gshared (WhereSelectListIterator_2_tC29224208126B68E4ACB7C306CA8B224C2A6D78E* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5387E518F11514C9B3562D0FD8424B52347C2971_gshared (WhereSelectListIterator_2_t5EA8B78B1CACED831A1FEF531DD01B9E1CFF103A* __this, List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* ___source0, Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* ___predicate1, Func_2_t89D9548C15273DC61D5CB695EB12E7D8F9277392* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t89D9548C15273DC61D5CB695EB12E7D8F9277392* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m40153C85B02EFAAE3D8323FE146669F18C8FEA7D_gshared (WhereSelectListIterator_2_t5EA8B78B1CACED831A1FEF531DD01B9E1CFF103A* __this, const RuntimeMethod* method) 
{
	{
		List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* L_0 = (List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*)__this->___source_3;
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_1 = (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*)__this->___predicate_4;
		Func_2_t89D9548C15273DC61D5CB695EB12E7D8F9277392* L_2 = (Func_2_t89D9548C15273DC61D5CB695EB12E7D8F9277392*)__this->___selector_5;
		WhereSelectListIterator_2_t5EA8B78B1CACED831A1FEF531DD01B9E1CFF103A* L_3 = (WhereSelectListIterator_2_t5EA8B78B1CACED831A1FEF531DD01B9E1CFF103A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t5EA8B78B1CACED831A1FEF531DD01B9E1CFF103A*, List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*, Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*, Func_2_t89D9548C15273DC61D5CB695EB12E7D8F9277392*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4B3A7C69E208A2DB091C1C8DFAD1978B2BD64763_gshared (WhereSelectListIterator_2_t5EA8B78B1CACED831A1FEF531DD01B9E1CFF103A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85* L_3 = (List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74 L_4;
		L_4 = ((  Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74 (*) (List_1_t1732F298A130BA40F8F13EC6E948A1550532AA85*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Region_0), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74* L_5 = (Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74*)(&__this->___enumerator_6);
		QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 L_6;
		L_6 = Enumerator_get_Current_m8D1CE84E8C3FD32018C9874883C02507A3085F31_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_7 = (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866* L_8 = (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*)__this->___predicate_4;
		QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF436FF410A46B9E3516F68E6218FBF3BEE137866*, QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t89D9548C15273DC61D5CB695EB12E7D8F9277392* L_11 = (Func_2_t89D9548C15273DC61D5CB695EB12E7D8F9277392*)__this->___selector_5;
		QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t89D9548C15273DC61D5CB695EB12E7D8F9277392*, QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74* L_14 = (Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m9C11B8A4B57C0AE4C58B50EC3B26E95AC7BB6758(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Services.Qos.Internal.QosResult,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m0F5FD869067E7CDB5F4307FEBE81795D15C8C8A5_gshared (WhereSelectListIterator_2_t5EA8B78B1CACED831A1FEF531DD01B9E1CFF103A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m3073AB8061B6C65D185CB7C9C56F2FE19D87E487_gshared (WhereSelectListIterator_2_t5156CC8FFE027EF789CFC5E4A5E6D84EAD74CC16* __this, List_1_tD2999566789842105DF8EF481E4494088E70E6E8* ___source0, Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* ___predicate1, Func_2_tBB6C0125591025972B30788782F7DEAC2312E628* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC52A5965F804860E5E4108E5EAA8600E507AF7C5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC52A5965F804860E5E4108E5EAA8600E507AF7C5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD2999566789842105DF8EF481E4494088E70E6E8* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tBB6C0125591025972B30788782F7DEAC2312E628* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC52A5965F804860E5E4108E5EAA8600E507AF7C5* WhereSelectListIterator_2_Clone_m08B43EF47205239F1F064CDF0581AB7872DA99CA_gshared (WhereSelectListIterator_2_t5156CC8FFE027EF789CFC5E4A5E6D84EAD74CC16* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD2999566789842105DF8EF481E4494088E70E6E8* L_0 = (List_1_tD2999566789842105DF8EF481E4494088E70E6E8*)__this->___source_3;
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_1 = (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*)__this->___predicate_4;
		Func_2_tBB6C0125591025972B30788782F7DEAC2312E628* L_2 = (Func_2_tBB6C0125591025972B30788782F7DEAC2312E628*)__this->___selector_5;
		WhereSelectListIterator_2_t5156CC8FFE027EF789CFC5E4A5E6D84EAD74CC16* L_3 = (WhereSelectListIterator_2_t5156CC8FFE027EF789CFC5E4A5E6D84EAD74CC16*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t5156CC8FFE027EF789CFC5E4A5E6D84EAD74CC16*, List_1_tD2999566789842105DF8EF481E4494088E70E6E8*, Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*, Func_2_tBB6C0125591025972B30788782F7DEAC2312E628*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC52A5965F804860E5E4108E5EAA8600E507AF7C5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m38268F5CBA943AD07EF120F9A99B03C209DBB74E_gshared (WhereSelectListIterator_2_t5156CC8FFE027EF789CFC5E4A5E6D84EAD74CC16* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC52A5965F804860E5E4108E5EAA8600E507AF7C5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD2999566789842105DF8EF481E4494088E70E6E8* L_3 = (List_1_tD2999566789842105DF8EF481E4494088E70E6E8*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD L_4;
		L_4 = ((  Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD (*) (List_1_tD2999566789842105DF8EF481E4494088E70E6E8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tC52A5965F804860E5E4108E5EAA8600E507AF7C5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD* L_5 = (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD*)(&__this->___enumerator_6);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_6;
		L_6 = Enumerator_get_Current_mC5194B613FE30DC2AB9B25C823ABABCE9BA79723_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_7 = (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_8 = (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*)__this->___predicate_4;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tBB6C0125591025972B30788782F7DEAC2312E628* L_11 = (Func_2_tBB6C0125591025972B30788782F7DEAC2312E628*)__this->___selector_5;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_12 = V_1;
		NullCheck(L_11);
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_13;
		L_13 = ((  KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 (*) (Func_2_tBB6C0125591025972B30788782F7DEAC2312E628*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC52A5965F804860E5E4108E5EAA8600E507AF7C5*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC52A5965F804860E5E4108E5EAA8600E507AF7C5*)__this)->___current_2))->___value_1), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD* L_14 = (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB5471F2D6CA89CD54BB1EF253548B90B625FB7E3(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC52A5965F804860E5E4108E5EAA8600E507AF7C5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose() */, (Iterator_1_tC52A5965F804860E5E4108E5EAA8600E507AF7C5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m149AAFC565CB1F4CBC52992A9A9D1CF5CF067752_gshared (WhereSelectListIterator_2_t5156CC8FFE027EF789CFC5E4A5E6D84EAD74CC16* __this, Func_2_tF839A7B6018DB8715AC386557AEBF8AEB7FBCB7A* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tF839A7B6018DB8715AC386557AEBF8AEB7FBCB7A* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t01978BC983A000D7104B5F9ADA51E4423E2372EB* L_1 = (WhereEnumerableIterator_1_t01978BC983A000D7104B5F9ADA51E4423E2372EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t01978BC983A000D7104B5F9ADA51E4423E2372EB*, RuntimeObject*, Func_2_tF839A7B6018DB8715AC386557AEBF8AEB7FBCB7A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD5195A2683B3E23AB382B11CBDD9215522E50850_gshared (WhereSelectListIterator_2_tB8EB2971B802398D4F0AE4921BAF631E21D5AC8A* __this, List_1_tD2999566789842105DF8EF481E4494088E70E6E8* ___source0, Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* ___predicate1, Func_2_t7CB9B75CB061BD135520EDD1DCFC21BFA0CBF93B* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD2999566789842105DF8EF481E4494088E70E6E8* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t7CB9B75CB061BD135520EDD1DCFC21BFA0CBF93B* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_m795BDB8B0C6CCB8168977C29BA069A367B8F92FD_gshared (WhereSelectListIterator_2_tB8EB2971B802398D4F0AE4921BAF631E21D5AC8A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD2999566789842105DF8EF481E4494088E70E6E8* L_0 = (List_1_tD2999566789842105DF8EF481E4494088E70E6E8*)__this->___source_3;
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_1 = (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*)__this->___predicate_4;
		Func_2_t7CB9B75CB061BD135520EDD1DCFC21BFA0CBF93B* L_2 = (Func_2_t7CB9B75CB061BD135520EDD1DCFC21BFA0CBF93B*)__this->___selector_5;
		WhereSelectListIterator_2_tB8EB2971B802398D4F0AE4921BAF631E21D5AC8A* L_3 = (WhereSelectListIterator_2_tB8EB2971B802398D4F0AE4921BAF631E21D5AC8A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tB8EB2971B802398D4F0AE4921BAF631E21D5AC8A*, List_1_tD2999566789842105DF8EF481E4494088E70E6E8*, Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*, Func_2_t7CB9B75CB061BD135520EDD1DCFC21BFA0CBF93B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mECACDB3847BB9D9001526B53878A348F3CB31C35_gshared (WhereSelectListIterator_2_tB8EB2971B802398D4F0AE4921BAF631E21D5AC8A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD2999566789842105DF8EF481E4494088E70E6E8* L_3 = (List_1_tD2999566789842105DF8EF481E4494088E70E6E8*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD L_4;
		L_4 = ((  Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD (*) (List_1_tD2999566789842105DF8EF481E4494088E70E6E8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD* L_5 = (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD*)(&__this->___enumerator_6);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_6;
		L_6 = Enumerator_get_Current_mC5194B613FE30DC2AB9B25C823ABABCE9BA79723_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_7 = (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_8 = (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*)__this->___predicate_4;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7CB9B75CB061BD135520EDD1DCFC21BFA0CBF93B* L_11 = (Func_2_t7CB9B75CB061BD135520EDD1DCFC21BFA0CBF93B*)__this->___selector_5;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_t7CB9B75CB061BD135520EDD1DCFC21BFA0CBF93B*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD* L_14 = (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB5471F2D6CA89CD54BB1EF253548B90B625FB7E3(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m6955C4AF606A4FC8C489A007561361C4B4376161_gshared (WhereSelectListIterator_2_tB8EB2971B802398D4F0AE4921BAF631E21D5AC8A* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*, RuntimeObject*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,QFSW.QC.Suggestors.CollapsedCommand>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m20E2FF0E07B69B41741266A21D9040D75ACA613C_gshared (WhereSelectListIterator_2_tBC2CCA85BCFB5B80246591E9CD4BFDB17303A054* __this, List_1_tD2999566789842105DF8EF481E4494088E70E6E8* ___source0, Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* ___predicate1, Func_2_t7F4403E37E698421F2F7365CBC2F164A312C604C* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD2999566789842105DF8EF481E4494088E70E6E8* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t7F4403E37E698421F2F7365CBC2F164A312C604C* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,QFSW.QC.Suggestors.CollapsedCommand>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B* WhereSelectListIterator_2_Clone_m65994FB544D51EEF28782215A0D9D7D7432ADF25_gshared (WhereSelectListIterator_2_tBC2CCA85BCFB5B80246591E9CD4BFDB17303A054* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD2999566789842105DF8EF481E4494088E70E6E8* L_0 = (List_1_tD2999566789842105DF8EF481E4494088E70E6E8*)__this->___source_3;
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_1 = (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*)__this->___predicate_4;
		Func_2_t7F4403E37E698421F2F7365CBC2F164A312C604C* L_2 = (Func_2_t7F4403E37E698421F2F7365CBC2F164A312C604C*)__this->___selector_5;
		WhereSelectListIterator_2_tBC2CCA85BCFB5B80246591E9CD4BFDB17303A054* L_3 = (WhereSelectListIterator_2_tBC2CCA85BCFB5B80246591E9CD4BFDB17303A054*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tBC2CCA85BCFB5B80246591E9CD4BFDB17303A054*, List_1_tD2999566789842105DF8EF481E4494088E70E6E8*, Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*, Func_2_t7F4403E37E698421F2F7365CBC2F164A312C604C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m404A044AA9F0B08E14F028EB01135EA7AFD6B09C_gshared (WhereSelectListIterator_2_tBC2CCA85BCFB5B80246591E9CD4BFDB17303A054* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD2999566789842105DF8EF481E4494088E70E6E8* L_3 = (List_1_tD2999566789842105DF8EF481E4494088E70E6E8*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD L_4;
		L_4 = ((  Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD (*) (List_1_tD2999566789842105DF8EF481E4494088E70E6E8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD* L_5 = (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD*)(&__this->___enumerator_6);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_6;
		L_6 = Enumerator_get_Current_mC5194B613FE30DC2AB9B25C823ABABCE9BA79723_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_7 = (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_8 = (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*)__this->___predicate_4;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F4403E37E698421F2F7365CBC2F164A312C604C* L_11 = (Func_2_t7F4403E37E698421F2F7365CBC2F164A312C604C*)__this->___selector_5;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_12 = V_1;
		NullCheck(L_11);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_13;
		L_13 = ((  CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B (*) (Func_2_t7F4403E37E698421F2F7365CBC2F164A312C604C*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2))->___Command_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD* L_14 = (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB5471F2D6CA89CD54BB1EF253548B90B625FB7E3(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>::Dispose() */, (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,QFSW.QC.Suggestors.CollapsedCommand>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m51DEEAD5D5F146324155D4F884A9BFA054E32EED_gshared (WhereSelectListIterator_2_tBC2CCA85BCFB5B80246591E9CD4BFDB17303A054* __this, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8* L_1 = (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*, RuntimeObject*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF15794E3F8D61C2A3D27522EA2BAB047F1D79FA6_gshared (WhereSelectListIterator_2_t60DBF7FEE26D5EA37ECC6269B16AC18EB99FA70F* __this, List_1_tD2999566789842105DF8EF481E4494088E70E6E8* ___source0, Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* ___predicate1, Func_2_tC06C5BFD98A2B3C4DA8B5CB2262A41433724E9AD* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD2999566789842105DF8EF481E4494088E70E6E8* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tC06C5BFD98A2B3C4DA8B5CB2262A41433724E9AD* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_mCA74E362D2BDA2DD2DAB247BE57D74428891DDE1_gshared (WhereSelectListIterator_2_t60DBF7FEE26D5EA37ECC6269B16AC18EB99FA70F* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD2999566789842105DF8EF481E4494088E70E6E8* L_0 = (List_1_tD2999566789842105DF8EF481E4494088E70E6E8*)__this->___source_3;
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_1 = (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*)__this->___predicate_4;
		Func_2_tC06C5BFD98A2B3C4DA8B5CB2262A41433724E9AD* L_2 = (Func_2_tC06C5BFD98A2B3C4DA8B5CB2262A41433724E9AD*)__this->___selector_5;
		WhereSelectListIterator_2_t60DBF7FEE26D5EA37ECC6269B16AC18EB99FA70F* L_3 = (WhereSelectListIterator_2_t60DBF7FEE26D5EA37ECC6269B16AC18EB99FA70F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t60DBF7FEE26D5EA37ECC6269B16AC18EB99FA70F*, List_1_tD2999566789842105DF8EF481E4494088E70E6E8*, Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*, Func_2_tC06C5BFD98A2B3C4DA8B5CB2262A41433724E9AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m1B2B80E1498EB8B16025EF6B901612943DB4B438_gshared (WhereSelectListIterator_2_t60DBF7FEE26D5EA37ECC6269B16AC18EB99FA70F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD2999566789842105DF8EF481E4494088E70E6E8* L_3 = (List_1_tD2999566789842105DF8EF481E4494088E70E6E8*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD L_4;
		L_4 = ((  Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD (*) (List_1_tD2999566789842105DF8EF481E4494088E70E6E8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD* L_5 = (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD*)(&__this->___enumerator_6);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_6;
		L_6 = Enumerator_get_Current_mC5194B613FE30DC2AB9B25C823ABABCE9BA79723_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_7 = (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_8 = (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*)__this->___predicate_4;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tC06C5BFD98A2B3C4DA8B5CB2262A41433724E9AD* L_11 = (Func_2_tC06C5BFD98A2B3C4DA8B5CB2262A41433724E9AD*)__this->___selector_5;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_tC06C5BFD98A2B3C4DA8B5CB2262A41433724E9AD*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD* L_14 = (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB5471F2D6CA89CD54BB1EF253548B90B625FB7E3(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m426733E5D655282382D9485F8E932903E8B90C05_gshared (WhereSelectListIterator_2_t60DBF7FEE26D5EA37ECC6269B16AC18EB99FA70F* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m17D660F538049B5FD1E41D75092DD3ED2F28BC32_gshared (WhereSelectListIterator_2_t02F3D66BA82AA09F24BB82A467101B155C6004BE* __this, List_1_tD2999566789842105DF8EF481E4494088E70E6E8* ___source0, Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* ___predicate1, Func_2_t49527C6898AE3EF334B98AD44FFA909958F93E93* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD2999566789842105DF8EF481E4494088E70E6E8* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t49527C6898AE3EF334B98AD44FFA909958F93E93* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m7769401F68AC106E8CA289C75C5E5FA613FC931D_gshared (WhereSelectListIterator_2_t02F3D66BA82AA09F24BB82A467101B155C6004BE* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD2999566789842105DF8EF481E4494088E70E6E8* L_0 = (List_1_tD2999566789842105DF8EF481E4494088E70E6E8*)__this->___source_3;
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_1 = (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*)__this->___predicate_4;
		Func_2_t49527C6898AE3EF334B98AD44FFA909958F93E93* L_2 = (Func_2_t49527C6898AE3EF334B98AD44FFA909958F93E93*)__this->___selector_5;
		WhereSelectListIterator_2_t02F3D66BA82AA09F24BB82A467101B155C6004BE* L_3 = (WhereSelectListIterator_2_t02F3D66BA82AA09F24BB82A467101B155C6004BE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t02F3D66BA82AA09F24BB82A467101B155C6004BE*, List_1_tD2999566789842105DF8EF481E4494088E70E6E8*, Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*, Func_2_t49527C6898AE3EF334B98AD44FFA909958F93E93*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5B94DA33B7F0338601066AE8C5629FDB9754F6F2_gshared (WhereSelectListIterator_2_t02F3D66BA82AA09F24BB82A467101B155C6004BE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD2999566789842105DF8EF481E4494088E70E6E8* L_3 = (List_1_tD2999566789842105DF8EF481E4494088E70E6E8*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD L_4;
		L_4 = ((  Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD (*) (List_1_tD2999566789842105DF8EF481E4494088E70E6E8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD* L_5 = (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD*)(&__this->___enumerator_6);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_6;
		L_6 = Enumerator_get_Current_mC5194B613FE30DC2AB9B25C823ABABCE9BA79723_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_7 = (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* L_8 = (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*)__this->___predicate_4;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t49527C6898AE3EF334B98AD44FFA909958F93E93* L_11 = (Func_2_t49527C6898AE3EF334B98AD44FFA909958F93E93*)__this->___selector_5;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t49527C6898AE3EF334B98AD44FFA909958F93E93*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD* L_14 = (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB5471F2D6CA89CD54BB1EF253548B90B625FB7E3(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.SceneManagement.Scene,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mB67CB9E0C3FC1D9024AD17DC5ACF75B8E64FE8DC_gshared (WhereSelectListIterator_2_t02F3D66BA82AA09F24BB82A467101B155C6004BE* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m1344C578099C9BF9AD59C3907C02DDC4B7952132_gshared (WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tC496704D554895234B1360058C5CC2D901C24957* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tC496704D554895234B1360058C5CC2D901C24957* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_mEA46A649565540C65C30A58988F2E737A098003F_gshared (WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_tC496704D554895234B1360058C5CC2D901C24957* L_2 = (Func_2_tC496704D554895234B1360058C5CC2D901C24957*)__this->___selector_5;
		WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC* L_3 = (WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tC496704D554895234B1360058C5CC2D901C24957*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9867D239589CB6D32C0EBFBC06A142A979CF2242_gshared (WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tC496704D554895234B1360058C5CC2D901C24957* L_11 = (Func_2_tC496704D554895234B1360058C5CC2D901C24957*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_tC496704D554895234B1360058C5CC2D901C24957*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m550AB19D1C92BD33273F8BE936FEC8FBFA975D11_gshared (WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*, RuntimeObject*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,QFSW.QC.Suggestors.CollapsedCommand>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m19E43900F9F4B981FCCC2558E5E132353A867D59_gshared (WhereSelectListIterator_2_t229BAEABE6DE46F517730AD61CC20E302DBD3982* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t4509F8D53C500A8517837B406FECE08CC84583C1* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t4509F8D53C500A8517837B406FECE08CC84583C1* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,QFSW.QC.Suggestors.CollapsedCommand>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B* WhereSelectListIterator_2_Clone_mA8953C79B7B659D826DBD92E0D34DBFDF0938F36_gshared (WhereSelectListIterator_2_t229BAEABE6DE46F517730AD61CC20E302DBD3982* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t4509F8D53C500A8517837B406FECE08CC84583C1* L_2 = (Func_2_t4509F8D53C500A8517837B406FECE08CC84583C1*)__this->___selector_5;
		WhereSelectListIterator_2_t229BAEABE6DE46F517730AD61CC20E302DBD3982* L_3 = (WhereSelectListIterator_2_t229BAEABE6DE46F517730AD61CC20E302DBD3982*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t229BAEABE6DE46F517730AD61CC20E302DBD3982*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t4509F8D53C500A8517837B406FECE08CC84583C1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB233EFB61805459E82A1BAE961B484E8AC27E5E2_gshared (WhereSelectListIterator_2_t229BAEABE6DE46F517730AD61CC20E302DBD3982* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4509F8D53C500A8517837B406FECE08CC84583C1* L_11 = (Func_2_t4509F8D53C500A8517837B406FECE08CC84583C1*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_13;
		L_13 = ((  CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B (*) (Func_2_t4509F8D53C500A8517837B406FECE08CC84583C1*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2))->___Command_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>::Dispose() */, (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,QFSW.QC.Suggestors.CollapsedCommand>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m04001FC923CC90EE7B8CB3F3D38174E150C85DD9_gshared (WhereSelectListIterator_2_t229BAEABE6DE46F517730AD61CC20E302DBD3982* __this, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8* L_1 = (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*, RuntimeObject*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9435C8BAA035BE07F3983A2F3C06D5F3F2EF97BF_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m203266656A861AB9FCE85C6265CBB81759D6EC78_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* L_2 = (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*)__this->___selector_5;
		WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* L_3 = (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m441444FFC4A56B13F1DCFA2E6C732972CC286B71_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* L_11 = (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2B9342EC90171F99141E32C1E7D1126C61888256_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D285DDC28CFAF8BDCF8C2ED06F9982D33D0342A_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* L_3 = (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9DBE2E1EDA00E9EBE1A6E90D5DA81A39E1CEBF37_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE0E3E8BE8176B317F5FF0D03313F7D4DFE68681E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m853B8DF16D982C3446645D9A8E93CD0D57634656_gshared (WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_mC6CE4E7DD39DE5C83BBEA60B8D1D83588F4DBA22_gshared (WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281* L_2 = (Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281*)__this->___selector_5;
		WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371* L_3 = (WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7BF3FD2935EBF351E1B71D16A7DCC4257C0379A8_gshared (WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = ((  Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 (*) (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_String_0), (void*)NULL);
		#endif
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281* L_11 = (Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281*)__this->___selector_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_tB8FE26A5A68C7F3FDC4B5F890B7C87C141210281*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF20DEECFCCECF8BD0001A17A5DC90C9B3C0BED08_gshared (WhereSelectListIterator_2_tFDF4A83A6E4B22812928CAA5E6FE9F279CB59371* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*, RuntimeObject*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,QFSW.QC.Suggestors.CollapsedCommand>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m22696AF312CA08842599CA8B98B0BD6AAE216109_gshared (WhereSelectListIterator_2_tD9C530ACE364715B6AE286578D7C6F457346BF77* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_t2C88A6AA929B9D941FB9E538ED62F110F3734CEF* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t2C88A6AA929B9D941FB9E538ED62F110F3734CEF* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,QFSW.QC.Suggestors.CollapsedCommand>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B* WhereSelectListIterator_2_Clone_m474A0005D125CBE78A8423E31C5DD89146006A8B_gshared (WhereSelectListIterator_2_tD9C530ACE364715B6AE286578D7C6F457346BF77* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Func_2_t2C88A6AA929B9D941FB9E538ED62F110F3734CEF* L_2 = (Func_2_t2C88A6AA929B9D941FB9E538ED62F110F3734CEF*)__this->___selector_5;
		WhereSelectListIterator_2_tD9C530ACE364715B6AE286578D7C6F457346BF77* L_3 = (WhereSelectListIterator_2_tD9C530ACE364715B6AE286578D7C6F457346BF77*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tD9C530ACE364715B6AE286578D7C6F457346BF77*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_t2C88A6AA929B9D941FB9E538ED62F110F3734CEF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m09392C4736CF8234A0B0040EF9D1CC1BFAAEB782_gshared (WhereSelectListIterator_2_tD9C530ACE364715B6AE286578D7C6F457346BF77* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = ((  Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 (*) (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_String_0), (void*)NULL);
		#endif
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t2C88A6AA929B9D941FB9E538ED62F110F3734CEF* L_11 = (Func_2_t2C88A6AA929B9D941FB9E538ED62F110F3734CEF*)__this->___selector_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_13;
		L_13 = ((  CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B (*) (Func_2_t2C88A6AA929B9D941FB9E538ED62F110F3734CEF*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2))->___Command_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>::Dispose() */, (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,QFSW.QC.Suggestors.CollapsedCommand>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m8D781790A24B50A88EB68D90BDC34CA31A60DAD0_gshared (WhereSelectListIterator_2_tD9C530ACE364715B6AE286578D7C6F457346BF77* __this, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8* L_1 = (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*, RuntimeObject*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m7514B4D4CA43073C8D6D3B10D6B33C562464A0C8_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* L_2 = (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*)__this->___selector_5;
		WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* L_3 = (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9801C3269DA1FCC381EED100CE2C710B10873FDE_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = ((  Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 (*) (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_String_0), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* L_11 = (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*)__this->___selector_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m54A65CB2977BDF55DA3004F81CF889F22E233DE9_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m7F15BA24C1AD78593E0EFF5AA8220436BDB66612_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_2 = (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*)__this->___selector_5;
		WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* L_3 = (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m56890DBD7344EE51AE2457C222E70BE9AF955C00_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = ((  Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 (*) (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_String_0), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_11 = (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*)__this->___selector_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m873C15FE36A52528B396D6A1919D572AFDCA52B6_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m3ED2985BA9849EE16BEC4031C5F108742622B392_gshared (WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_m8E6DC673A0DA959A2BB1E3545220CB23F7670E38_gshared (WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12* L_2 = (Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12*)__this->___selector_5;
		WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A* L_3 = (WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mFA49CFF6DD27503F6324D78CE0DB31ED77389959_gshared (WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = ((  Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB (*) (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator_6))->____current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12* L_11 = (Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12*)__this->___selector_5;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_t3A4AE952B8899442C27198BFBEFBEE49FAE24E12*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mD1F9C1A76FC453CE53547740FFC8DF1632466027_gshared (WhereSelectListIterator_2_t8F8F49519BD3E00B70F4E1DC5180659FB6AC3D9A* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*, RuntimeObject*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,QFSW.QC.Suggestors.CollapsedCommand>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mEDADBF85AB88F5810AF29B45F06EBC357133D38E_gshared (WhereSelectListIterator_2_t50415C8204DC41C3B5E41B88FA478060DED5F9F3* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_t922E6C1B6F349B9F6BDBFB1EAF7D171ACC8A1A54* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t922E6C1B6F349B9F6BDBFB1EAF7D171ACC8A1A54* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,QFSW.QC.Suggestors.CollapsedCommand>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B* WhereSelectListIterator_2_Clone_mC6E1D91A2081D591B9EE3ED454000EAB21402746_gshared (WhereSelectListIterator_2_t50415C8204DC41C3B5E41B88FA478060DED5F9F3* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		Func_2_t922E6C1B6F349B9F6BDBFB1EAF7D171ACC8A1A54* L_2 = (Func_2_t922E6C1B6F349B9F6BDBFB1EAF7D171ACC8A1A54*)__this->___selector_5;
		WhereSelectListIterator_2_t50415C8204DC41C3B5E41B88FA478060DED5F9F3* L_3 = (WhereSelectListIterator_2_t50415C8204DC41C3B5E41B88FA478060DED5F9F3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t50415C8204DC41C3B5E41B88FA478060DED5F9F3*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t922E6C1B6F349B9F6BDBFB1EAF7D171ACC8A1A54*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,QFSW.QC.Suggestors.CollapsedCommand>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m2003FA5FA225CD39F2E97C5ADEFBA4A46AC444AA_gshared (WhereSelectListIterator_2_t50415C8204DC41C3B5E41B88FA478060DED5F9F3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = ((  Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB (*) (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator_6))->____current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t922E6C1B6F349B9F6BDBFB1EAF7D171ACC8A1A54* L_11 = (Func_2_t922E6C1B6F349B9F6BDBFB1EAF7D171ACC8A1A54*)__this->___selector_5;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_13;
		L_13 = ((  CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B (*) (Func_2_t922E6C1B6F349B9F6BDBFB1EAF7D171ACC8A1A54*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this)->___current_2))->___Command_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<QFSW.QC.Suggestors.CollapsedCommand>::Dispose() */, (Iterator_1_tC0F716BA5643B90683BA85169D58742C76BFE69B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,QFSW.QC.Suggestors.CollapsedCommand>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE690CDD32AABF683A8899EE90F4FD026BC662DCF_gshared (WhereSelectListIterator_2_t50415C8204DC41C3B5E41B88FA478060DED5F9F3* __this, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8* L_1 = (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tE6AF3711685C9C070B3E3A658350A11620877CF8*, RuntimeObject*, Func_2_t13DA5F6361419506C6CCDBC8EED32E69EF810281*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m01258FBF3047EACEBBBE89855BDAE5197B095A79_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*)__this->___selector_5;
		WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* L_3 = (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE119EF6FA88D7E63491FC5611A5F34D3602F5D1B_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = ((  Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB (*) (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator_6))->____current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_11 = (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*)__this->___selector_5;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAEEE2C3DA2DBA62F84C02FE5EDD8894338DC5D55_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m1509E7222F78F6B89F836EA7A8742EBDFFC020F9_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_2 = (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*)__this->___selector_5;
		WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* L_3 = (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF219C7B364CA9F7692179ED01E1588FD7862A585_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = ((  Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB (*) (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator_6))->____current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_11 = (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*)__this->___selector_5;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF790B9A9E8480C2654B0FA2B916F50565B9831F1_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::.ctor(System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue__ctor_m5008A780D3A45C6DD9B8248FDD47AA3766CBD9E3_gshared (WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* __this, WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* ___nextQueue0, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)((int32_t)32));
		il2cpp_codegen_memory_barrier();
		__this->____array_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array_2), (void*)L_0);
		il2cpp_codegen_memory_barrier();
		__this->____mask_3 = ((int32_t)31);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->____ownerThreadId_9 = L_1;
		WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* L_2 = ___nextQueue0;
		__this->____nextQueue_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nextQueue_8), (void*)L_2);
		return;
	}
}
// System.Void System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::LocalPush(T,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue_LocalPush_m8B1D8601B4870C599A8FF4F36500D74B9C159C0F_gshared (WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* __this, RuntimeObject* ___item0, int64_t* ___emptyToNonEmptyListTransitionCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkStealingQueue_LocalPush_m8B1D8601B4870C599A8FF4F36500D74B9C159C0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_6 = NULL;
	int32_t V_7 = 0;
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0203:
			{// begin finally (depth: 1)
				{
					il2cpp_codegen_memory_barrier();
					__this->____currentOp_6 = 0;
					bool L_0 = V_0;
					if (!L_0)
					{
						goto IL_0215;
					}
				}
				{
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
				}

IL_0215:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				int32_t* L_1 = (int32_t*)(&__this->____currentOp_6);
				il2cpp_codegen_memory_barrier();
				int32_t L_2;
				L_2 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_1, 1, NULL);
				int32_t L_3 = (int32_t)__this->____tailIndex_1;
				il2cpp_codegen_memory_barrier();
				V_1 = L_3;
				int32_t L_4 = V_1;
				if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)2147483647LL)))))
				{
					goto IL_007d_1;
				}
			}
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp_6 = 0;
				V_3 = __this;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0072_1:
					{// begin finally (depth: 2)
						{
							bool L_5 = V_4;
							if (!L_5)
							{
								goto IL_007c_1;
							}
						}
						{
							WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* L_6 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_6, NULL);
						}

IL_007c_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* L_7 = V_3;
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_7, (&V_4), NULL);
					int32_t L_8 = (int32_t)__this->____headIndex_0;
					il2cpp_codegen_memory_barrier();
					int32_t L_9 = (int32_t)__this->____mask_3;
					il2cpp_codegen_memory_barrier();
					il2cpp_codegen_memory_barrier();
					__this->____headIndex_0 = ((int32_t)(L_8&L_9));
					int32_t L_10 = V_1;
					int32_t L_11 = (int32_t)__this->____mask_3;
					il2cpp_codegen_memory_barrier();
					int32_t L_12 = ((int32_t)(L_10&L_11));
					V_1 = L_12;
					il2cpp_codegen_memory_barrier();
					__this->____tailIndex_1 = L_12;
					int32_t* L_13 = (int32_t*)(&__this->____currentOp_6);
					il2cpp_codegen_memory_barrier();
					int32_t L_14;
					L_14 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_13, 1, NULL);
					goto IL_007d_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_007d_1:
			{
				int32_t L_15 = (int32_t)__this->____headIndex_0;
				il2cpp_codegen_memory_barrier();
				V_2 = L_15;
				bool L_16 = (bool)__this->____frozen_7;
				if (L_16)
				{
					goto IL_00cc_1;
				}
			}
			{
				int32_t L_17 = V_2;
				int32_t L_18 = V_1;
				int32_t L_19 = V_1;
				int32_t L_20 = V_2;
				int32_t L_21 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				if (!((int32_t)(((((int32_t)L_17) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, 1))))? 1 : 0)&((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21))))? 1 : 0))))
				{
					goto IL_00cc_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_23 = V_1;
				int32_t L_24 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				RuntimeObject* L_25 = ___item0;
				NullCheck(L_22);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&L_24))), (RuntimeObject*)L_25);
				int32_t L_26 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
				goto IL_01f3_1;
			}

IL_00cc_1:
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp_6 = 0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)__this, (&V_0), NULL);
				int32_t L_27 = (int32_t)__this->____headIndex_0;
				il2cpp_codegen_memory_barrier();
				V_2 = L_27;
				int32_t L_28 = V_1;
				int32_t L_29 = V_2;
				V_5 = ((int32_t)il2cpp_codegen_subtract(L_28, L_29));
				int32_t L_30 = V_5;
				int32_t L_31 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_30) < ((int32_t)L_31)))
				{
					goto IL_01ab_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_32);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_32)->max_length))<<1)));
				V_6 = L_33;
				int32_t L_34 = V_2;
				int32_t L_35 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				V_7 = ((int32_t)(L_34&L_35));
				int32_t L_36 = V_7;
				if (L_36)
				{
					goto IL_013a_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_6;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_39);
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, 0, ((int32_t)(((RuntimeArray*)L_39)->max_length)), NULL);
				goto IL_0178_1;
			}

IL_013a_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_41 = V_7;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = V_6;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_43);
				int32_t L_44 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_40, L_41, (RuntimeArray*)L_42, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_43)->max_length)), L_44)), NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_6;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_47);
				int32_t L_48 = V_7;
				int32_t L_49 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_45, 0, (RuntimeArray*)L_46, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_47)->max_length)), L_48)), L_49, NULL);
			}

IL_0178_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = V_6;
				il2cpp_codegen_memory_barrier();
				__this->____array_2 = L_50;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____array_2), (void*)L_50);
				il2cpp_codegen_memory_barrier();
				__this->____headIndex_0 = 0;
				int32_t L_51 = V_5;
				int32_t L_52 = L_51;
				V_1 = L_52;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex_1 = L_52;
				int32_t L_53 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_memory_barrier();
				__this->____mask_3 = ((int32_t)(((int32_t)(L_53<<1))|1));
			}

IL_01ab_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_55 = V_1;
				int32_t L_56 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				RuntimeObject* L_57 = ___item0;
				NullCheck(L_54);
				(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_55&L_56))), (RuntimeObject*)L_57);
				int32_t L_58 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex_1 = ((int32_t)il2cpp_codegen_add(L_58, 1));
				int32_t L_59 = V_5;
				if (L_59)
				{
					goto IL_01d9_1;
				}
			}
			{
				int64_t* L_60 = ___emptyToNonEmptyListTransitionCount1;
				int64_t L_61;
				L_61 = Interlocked_Increment_m12CD643CCD5FCDE95DBC0AB07D09AF696E26F9C0(L_60, NULL);
			}

IL_01d9_1:
			{
				int32_t L_62 = (int32_t)__this->____addTakeCount_4;
				int32_t L_63 = (int32_t)__this->____stealCount_5;
				__this->____addTakeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_62, L_63));
				__this->____stealCount_5 = 0;
			}

IL_01f3_1:
			{
				int32_t L_64 = (int32_t)__this->____addTakeCount_4;
				if (((int64_t)L_64 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_64 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WorkStealingQueue_LocalPush_m8B1D8601B4870C599A8FF4F36500D74B9C159C0F_RuntimeMethod_var);
				__this->____addTakeCount_4 = ((int32_t)il2cpp_codegen_add(L_64, 1));
				goto IL_0216;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0216:
	{
		return;
	}
}
// System.Boolean System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::TryLocalPop(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorkStealingQueue_TryLocalPop_mEE65FB52F67ED82674A4E589A22B445BEC0DC0C1_gshared (WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* __this, RuntimeObject** ___result0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		int32_t L_0 = (int32_t)__this->____tailIndex_1;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1 = (int32_t)__this->____headIndex_0;
		il2cpp_codegen_memory_barrier();
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject** L_3 = ___result0;
		il2cpp_codegen_initobj(L_3, sizeof(RuntimeObject*));
		return (bool)0;
	}

IL_001d:
	{
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0117:
			{// begin finally (depth: 1)
				{
					il2cpp_codegen_memory_barrier();
					__this->____currentOp_6 = 0;
					bool L_4 = V_1;
					if (!L_4)
					{
						goto IL_0129;
					}
				}
				{
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
				}

IL_0129:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp_6 = 2;
				int32_t* L_5 = (int32_t*)(&__this->____tailIndex_1);
				il2cpp_codegen_memory_barrier();
				int32_t L_6 = V_0;
				int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
				V_0 = L_7;
				int32_t L_8;
				L_8 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_5, L_7, NULL);
				bool L_9 = (bool)__this->____frozen_7;
				if (L_9)
				{
					goto IL_0098_1;
				}
			}
			{
				int32_t L_10 = (int32_t)__this->____headIndex_0;
				il2cpp_codegen_memory_barrier();
				int32_t L_11 = V_0;
				if ((((int32_t)L_10) >= ((int32_t)L_11)))
				{
					goto IL_0098_1;
				}
			}
			{
				int32_t L_12 = V_0;
				int32_t L_13 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				V_2 = ((int32_t)(L_12&L_13));
				RuntimeObject** L_14 = ___result0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_16 = V_2;
				NullCheck(L_15);
				int32_t L_17 = L_16;
				RuntimeObject* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
				*(RuntimeObject**)L_14 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)L_18);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_20 = V_2;
				il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
				RuntimeObject* L_21 = V_3;
				NullCheck(L_19);
				(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (RuntimeObject*)L_21);
				int32_t L_22 = (int32_t)__this->____addTakeCount_4;
				__this->____addTakeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
				V_4 = (bool)1;
				goto IL_012a;
			}

IL_0098_1:
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp_6 = 0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)__this, (&V_1), NULL);
				int32_t L_23 = (int32_t)__this->____headIndex_0;
				il2cpp_codegen_memory_barrier();
				int32_t L_24 = V_0;
				if ((((int32_t)L_23) > ((int32_t)L_24)))
				{
					goto IL_0100_1;
				}
			}
			{
				int32_t L_25 = V_0;
				int32_t L_26 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				V_5 = ((int32_t)(L_25&L_26));
				RuntimeObject** L_27 = ___result0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_29 = V_5;
				NullCheck(L_28);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
				*(RuntimeObject**)L_27 = L_31;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_27, (void*)L_31);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_33 = V_5;
				il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
				RuntimeObject* L_34 = V_3;
				NullCheck(L_32);
				(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (RuntimeObject*)L_34);
				int32_t L_35 = (int32_t)__this->____addTakeCount_4;
				__this->____addTakeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
				V_4 = (bool)1;
				goto IL_012a;
			}

IL_0100_1:
			{
				int32_t L_36 = V_0;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
				RuntimeObject** L_37 = ___result0;
				il2cpp_codegen_initobj(L_37, sizeof(RuntimeObject*));
				V_4 = (bool)0;
				goto IL_012a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012a:
	{
		bool L_38 = V_4;
		return L_38;
	}
}
// System.Boolean System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::TrySteal(T&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorkStealingQueue_TrySteal_mCB55858C75081104C556E8390D4C2E41E1FAD7D5_gshared (WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* __this, RuntimeObject** ___result0, bool ___take1, const RuntimeMethod* method) 
{
	WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	{
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ee:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_00f7;
					}
				}
				{
					WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_1, NULL);
				}

IL_00f7:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* L_2 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_2, (&V_1), NULL);
				int32_t L_3 = (int32_t)__this->____headIndex_0;
				il2cpp_codegen_memory_barrier();
				V_2 = L_3;
				bool L_4 = ___take1;
				if (!L_4)
				{
					goto IL_00bf_1;
				}
			}
			{
				int32_t L_5 = V_2;
				int32_t L_6 = (int32_t)__this->____tailIndex_1;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_5) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, 1)))))
				{
					goto IL_004d_1;
				}
			}
			{
				int32_t L_7 = (int32_t)__this->____currentOp_6;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_004d_1;
				}
			}
			{
				il2cpp_codegen_initobj((&V_3), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
			}

IL_003b_1:
			{
				SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_3), NULL);
				int32_t L_8 = (int32_t)__this->____currentOp_6;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_003b_1;
				}
			}

IL_004d_1:
			{
				int32_t* L_9 = (int32_t*)(&__this->____headIndex_0);
				il2cpp_codegen_memory_barrier();
				int32_t L_10 = V_2;
				int32_t L_11;
				L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
				int32_t L_12 = V_2;
				int32_t L_13 = (int32_t)__this->____tailIndex_1;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_12) >= ((int32_t)L_13)))
				{
					goto IL_00b4_1;
				}
			}
			{
				int32_t L_14 = V_2;
				int32_t L_15 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				V_4 = ((int32_t)(L_14&L_15));
				RuntimeObject** L_16 = ___result0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_18 = V_4;
				NullCheck(L_17);
				int32_t L_19 = L_18;
				RuntimeObject* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
				*(RuntimeObject**)L_16 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)L_20);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_22 = V_4;
				il2cpp_codegen_initobj((&V_5), sizeof(RuntimeObject*));
				RuntimeObject* L_23 = V_5;
				NullCheck(L_21);
				(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (RuntimeObject*)L_23);
				int32_t L_24 = (int32_t)__this->____stealCount_5;
				__this->____stealCount_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
				V_6 = (bool)1;
				goto IL_0101;
			}

IL_00b4_1:
			{
				int32_t L_25 = V_2;
				il2cpp_codegen_memory_barrier();
				__this->____headIndex_0 = L_25;
				goto IL_00f8;
			}

IL_00bf_1:
			{
				int32_t L_26 = V_2;
				int32_t L_27 = (int32_t)__this->____tailIndex_1;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_26) >= ((int32_t)L_27)))
				{
					goto IL_00ec_1;
				}
			}
			{
				RuntimeObject** L_28 = ___result0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_30 = V_2;
				int32_t L_31 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_29);
				int32_t L_32 = ((int32_t)(L_30&L_31));
				RuntimeObject* L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
				*(RuntimeObject**)L_28 = L_33;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_28, (void*)L_33);
				V_6 = (bool)1;
				goto IL_0101;
			}

IL_00ec_1:
			{
				goto IL_00f8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f8:
	{
		RuntimeObject** L_34 = ___result0;
		il2cpp_codegen_initobj(L_34, sizeof(RuntimeObject*));
		return (bool)0;
	}

IL_0101:
	{
		bool L_35 = V_6;
		return L_35;
	}
}
// System.Int32 System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::DangerousCopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_DangerousCopyTo_m94E502A92EB138838B97596A203E39F6E55FF508_gshared (WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (int32_t)__this->____headIndex_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		V_1 = L_1;
		int32_t L_2 = ___arrayIndex1;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1));
		goto IL_003e;
	}

IL_0018:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___array0;
		int32_t L_5 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
		il2cpp_codegen_memory_barrier();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = (int32_t)__this->____mask_3;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)(L_8&L_9));
		RuntimeObject* L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_003e:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___arrayIndex1;
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// System.Int32 System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::get_DangerousCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_get_DangerousCount_m7EA23F3971CF379A3C0A87B49FECB670CD7D738E_gshared (WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____addTakeCount_4;
		int32_t L_1 = (int32_t)__this->____stealCount_5;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
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
void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_Multicast(WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* currentDelegate = reinterpret_cast<WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject**, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_OpenInst(WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject**, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_OpenStatic(WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject**, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_OpenStaticInvoker(WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject** >::Invoke(__this->___method_ptr_0, method, NULL, ___writer0, ___value1);
}
void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_ClosedStaticInvoker(WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject** >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___writer0, ___value1);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_m1C60109154F74BB40DA6F194449FE9A891711B3F_gshared (WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_Multicast;
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Object>::Invoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_gshared (WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject**, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Object>::BeginInvoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute),System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m638CCB27A6046324AC5237DCA8AF67730BEC36D3_gshared (WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, RuntimeObject** ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___writer0);
	__d_args[1] = *___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Object>::EndInvoke(T& modreq(System.Runtime.InteropServices.InAttribute),System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m371E39B8BB74D4DC94D472B5835E8F2755ABBABB_gshared (WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, RuntimeObject** ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_mFB61433604185DFC1EEF297DF5FB3000EE5FE02D_Multicast(WriteValueDelegate_t077E015BF37B117EF4B94AF2F702B60834C7EDF9* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value0, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___serializer1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t077E015BF37B117EF4B94AF2F702B60834C7EDF9* currentDelegate = reinterpret_cast<WriteValueDelegate_t077E015BF37B117EF4B94AF2F702B60834C7EDF9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___value0, ___serializer1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteValueDelegate_Invoke_mFB61433604185DFC1EEF297DF5FB3000EE5FE02D_OpenInst(WriteValueDelegate_t077E015BF37B117EF4B94AF2F702B60834C7EDF9* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value0, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___serializer1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___value0, ___serializer1, method);
}
void WriteValueDelegate_Invoke_mFB61433604185DFC1EEF297DF5FB3000EE5FE02D_OpenStatic(WriteValueDelegate_t077E015BF37B117EF4B94AF2F702B60834C7EDF9* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value0, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___serializer1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___value0, ___serializer1, method);
}
void WriteValueDelegate_Invoke_mFB61433604185DFC1EEF297DF5FB3000EE5FE02D_OpenStaticInvoker(WriteValueDelegate_t077E015BF37B117EF4B94AF2F702B60834C7EDF9* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value0, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___serializer1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 >::Invoke(__this->___method_ptr_0, method, NULL, ___value0, ___serializer1);
}
void WriteValueDelegate_Invoke_mFB61433604185DFC1EEF297DF5FB3000EE5FE02D_ClosedStaticInvoker(WriteValueDelegate_t077E015BF37B117EF4B94AF2F702B60834C7EDF9* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value0, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___serializer1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___value0, ___serializer1);
}
// System.Void Unity.Netcode.NetworkSerializableSerializer`1/WriteValueDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_m89EE993A904B71E35FC10D5681A1551757E477E3_gshared (WriteValueDelegate_t077E015BF37B117EF4B94AF2F702B60834C7EDF9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_mFB61433604185DFC1EEF297DF5FB3000EE5FE02D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_mFB61433604185DFC1EEF297DF5FB3000EE5FE02D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_mFB61433604185DFC1EEF297DF5FB3000EE5FE02D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_mFB61433604185DFC1EEF297DF5FB3000EE5FE02D_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteValueDelegate_Invoke_mFB61433604185DFC1EEF297DF5FB3000EE5FE02D_Multicast;
}
// System.Void Unity.Netcode.NetworkSerializableSerializer`1/WriteValueDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::Invoke(T&,Unity.Netcode.BufferSerializer`1<Unity.Netcode.BufferSerializerWriter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_mFB61433604185DFC1EEF297DF5FB3000EE5FE02D_gshared (WriteValueDelegate_t077E015BF37B117EF4B94AF2F702B60834C7EDF9* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value0, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___serializer1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___value0, ___serializer1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.NetworkSerializableSerializer`1/WriteValueDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::BeginInvoke(T&,Unity.Netcode.BufferSerializer`1<Unity.Netcode.BufferSerializerWriter>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m4806A1C2133EEDF59B2B6895CC44589F5185A6A5_gshared (WriteValueDelegate_t077E015BF37B117EF4B94AF2F702B60834C7EDF9* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value0, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___serializer1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_il2cpp_TypeInfo_var, &*___value0);
	__d_args[1] = Box(BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0_il2cpp_TypeInfo_var, &___serializer1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.NetworkSerializableSerializer`1/WriteValueDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::EndInvoke(T&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m3510A89AC831E0DA764A0C7EB6741009ECEB3601_gshared (WriteValueDelegate_t077E015BF37B117EF4B94AF2F702B60834C7EDF9* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___value0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_mD50A1C295B4962D4E98D9C0CA35DB4578B7699E0_Multicast(WriteValueDelegate_tD109061967254477F792D274A796F2D8D68485D7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_tD109061967254477F792D274A796F2D8D68485D7* currentDelegate = reinterpret_cast<WriteValueDelegate_tD109061967254477F792D274A796F2D8D68485D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteValueDelegate_Invoke_mD50A1C295B4962D4E98D9C0CA35DB4578B7699E0_OpenInst(WriteValueDelegate_tD109061967254477F792D274A796F2D8D68485D7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_mD50A1C295B4962D4E98D9C0CA35DB4578B7699E0_OpenStatic(WriteValueDelegate_tD109061967254477F792D274A796F2D8D68485D7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_mD50A1C295B4962D4E98D9C0CA35DB4578B7699E0_OpenStaticInvoker(WriteValueDelegate_tD109061967254477F792D274A796F2D8D68485D7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* >::Invoke(__this->___method_ptr_0, method, NULL, ___writer0, ___value1);
}
void WriteValueDelegate_Invoke_mD50A1C295B4962D4E98D9C0CA35DB4578B7699E0_ClosedStaticInvoker(WriteValueDelegate_tD109061967254477F792D274A796F2D8D68485D7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___writer0, ___value1);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mC9C8A43862FEDF839C8F25C317DC587600D33090_gshared (WriteValueDelegate_tD109061967254477F792D274A796F2D8D68485D7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_mD50A1C295B4962D4E98D9C0CA35DB4578B7699E0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_mD50A1C295B4962D4E98D9C0CA35DB4578B7699E0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_mD50A1C295B4962D4E98D9C0CA35DB4578B7699E0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteValueDelegate_Invoke_mD50A1C295B4962D4E98D9C0CA35DB4578B7699E0_Multicast;
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::Invoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_mD50A1C295B4962D4E98D9C0CA35DB4578B7699E0_gshared (WriteValueDelegate_tD109061967254477F792D274A796F2D8D68485D7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::BeginInvoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute),System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_mC83B81485C0DFD1D9635FABEA1891715736CE488_gshared (WriteValueDelegate_tD109061967254477F792D274A796F2D8D68485D7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___writer0);
	__d_args[1] = Box(NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_il2cpp_TypeInfo_var, &*___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::EndInvoke(T& modreq(System.Runtime.InteropServices.InAttribute),System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_mD805D8F65E0118535A2F74E32F0D19920637B1B4_gshared (WriteValueDelegate_tD109061967254477F792D274A796F2D8D68485D7* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_1);
		int32_t L_2 = ___capacity1;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_3 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)(EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)L_2);
		__this->____entries_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_3);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_4 = ___extractKey0;
		__this->____extractKey_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey_3), (void*)L_4);
		return;
	}
}
// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		int32_t L_0 = (int32_t)__this->____numEntries_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (-1), 0, NULL);
		V_3 = L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_10 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_11 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		RuntimeObject* L_13 = (RuntimeObject*)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___Value_0;
		NullCheck(L_10);
		String_t* L_14;
		L_14 = ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_10, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_16 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = (int32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___Next_2;
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t* L_21 = (int32_t*)(&((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___Next_2);
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_21, (-1), 0, NULL);
		V_3 = L_22;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_23 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = (int32_t)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___Next_2;
		V_3 = L_25;
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a7:
	{
		int32_t L_28 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_30 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_31)->max_length))/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_32);
		V_0 = ((int32_t)(((RuntimeArray*)L_32)->max_length));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_33);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_33)->max_length)), 2));
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_35 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_35);
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_RuntimeMethod_var)));
	}

IL_00e2:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_36 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		int32_t L_37 = V_0;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_38 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_38);
		((  void (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_38, L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_1 = L_38;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_5 = L_42;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_43 = V_1;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_44 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_45 = V_5;
		NullCheck(L_44);
		RuntimeObject* L_46 = (RuntimeObject*)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___Value_0;
		NullCheck(L_43);
		bool L_47;
		L_47 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_43, L_46, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_48 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = (int32_t)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___Next_2;
		V_5 = L_50;
	}

IL_0130:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_013b:
	{
		int32_t L_53 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_55 = V_1;
		return L_55;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject** ___value3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___key0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___key0;
		int32_t L_6 = ___index1;
		int32_t L_7 = ___count2;
		bool L_8;
		L_8 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject** L_9 = ___value3;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_10 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_12 = (RuntimeObject*)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___Value_0;
		*(RuntimeObject**)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		RuntimeObject** L_13 = ___value3;
		il2cpp_codegen_initobj(L_13, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryAdd(TValue,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___value0, RuntimeObject** ___newValue1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeObject** L_0 = ___newValue1;
		RuntimeObject* L_1 = ___value0;
		*(RuntimeObject**)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)L_1);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_2 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		RuntimeObject* L_3 = ___value0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_6, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries_2);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_15 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_17 = ___value0;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value_0), (void*)L_17);
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_18 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = V_3;
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___HashCode_1 = L_20;
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_23 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1))))))), L_25, 0, NULL);
		V_1 = L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_27 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t* L_29 = (int32_t*)(&((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___Next_2);
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_29, L_30, 0, NULL);
		V_1 = L_31;
	}

IL_00ae:
	{
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_33 = V_1;
		return (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_34 = V_3;
		String_t* L_35 = V_2;
		String_t* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		bool L_38;
		L_38 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_34, L_35, 0, L_37, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_38)
		{
			goto IL_0071;
		}
	}
	{
		RuntimeObject** L_39 = ___newValue1;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_40 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_41 = V_1;
		NullCheck(L_40);
		RuntimeObject* L_42 = (RuntimeObject*)((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___Value_0;
		*(RuntimeObject**)L_39 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_39, (void*)L_42);
		return (bool)1;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::FindEntry(System.Int32,System.String,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___hashCode0, String_t* ___key1, int32_t ___index2, int32_t ___count3, int32_t* ___entryIndex4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___entryIndex4;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_4 = ___hashCode0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_9 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = (int32_t)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___HashCode_1;
		int32_t L_12 = ___hashCode0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_13 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_14 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___Value_0;
		NullCheck(L_13);
		String_t* L_17;
		L_17 = ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_13, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_2 = L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___Next_2;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_22 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		RuntimeObject** L_24 = (RuntimeObject**)(&((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___Value_0);
		il2cpp_codegen_initobj(L_24, sizeof(RuntimeObject*));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_25 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___Next_2;
		V_1 = L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_30 = ___hashCode0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_31);
		int32_t L_32 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_30&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1))))), (int32_t)L_32);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_33 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = V_1;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___Next_2 = L_35;
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_36 = ___count3;
		String_t* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_39 = ___key1;
		int32_t L_40 = ___index2;
		String_t* L_41 = V_2;
		int32_t L_42 = ___count3;
		int32_t L_43;
		L_43 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_39, L_40, L_41, 0, L_42, NULL);
		if (L_43)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_44 = ___entryIndex4;
		int32_t L_45 = V_1;
		*((int32_t*)L_44) = (int32_t)L_45;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_46 = V_1;
		V_0 = L_46;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_47 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___Next_2;
		V_1 = L_49;
	}

IL_00f9:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_51 = ___entryIndex4;
		int32_t L_52 = V_0;
		*((int32_t*)L_51) = (int32_t)L_52;
		return (bool)0;
	}
}
// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::ComputeHashCode(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1_gshared (String_t* ___key0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___index1;
		int32_t L_1 = ___count2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___index1;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___key0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
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
// System.Void System.Xml.Linq.XHashtable`1<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m9D005D3C7669B409F1E1B4F0863596FD91DB335C_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_0 = ___extractKey0;
		int32_t L_1 = ___capacity1;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_2 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_2);
		((  void (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____state_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_2);
		return;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_mB91947F216CD72CEE9C38FA8EF56137E42817080_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject** ___value3, const RuntimeMethod* method) 
{
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
		String_t* L_1 = ___key0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		RuntimeObject** L_4 = ___value3;
		NullCheck(L_0);
		bool L_5;
		L_5 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, String_t*, int32_t, int32_t, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_5;
	}
}
// TValue System.Xml.Linq.XHashtable`1<System.Object>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XHashtable_1_Add_m4CE3AB9A64E8EBADEC48510932751F7C6D5581A0_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_3 = NULL;

IL_0000:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_7 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
			NullCheck(L_7);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_8;
			L_8 = ((  XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_9 = V_3;
			__this->____state_0 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_9);
			goto IL_0000;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystem_1_get_running_m284E6EF0F9D39E4F91603ABE3B8FAE908256E23F_gshared (XRSubsystem_1_tE79C39F057DC70EEF40AB0F327DDDF8CC6E3E249* __this, const RuntimeMethod* method) 
{
	{
		// public sealed override bool running => m_Running;
		bool L_0 = (bool)__this->___m_Running_0;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_OnDestroy_m191F16361FFA25DEA1B40B1C80F23EF4A0DCBDC0_gshared (XRSubsystem_1_tE79C39F057DC70EEF40AB0F327DDDF8CC6E3E249* __this, const RuntimeMethod* method) 
{
	{
		// Stop();
		NullCheck((Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7*)__this);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.Subsystem::Stop() */, (Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7*)__this);
		// OnDestroyed();
		VirtualActionInvoker0::Invoke(13 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnDestroyed() */, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Start_mA3960C71702649406793A8BD120A39116692F6B4_gshared (XRSubsystem_1_tE79C39F057DC70EEF40AB0F327DDDF8CC6E3E249* __this, const RuntimeMethod* method) 
{
	{
		// if (!m_Running)
		bool L_0 = (bool)__this->___m_Running_0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStart();
		VirtualActionInvoker0::Invoke(11 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnStart() */, __this);
	}

IL_000e:
	{
		// m_Running = true;
		__this->___m_Running_0 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Stop_mC84E118BD0132E1B577E6460AF15392FE390AD0D_gshared (XRSubsystem_1_tE79C39F057DC70EEF40AB0F327DDDF8CC6E3E249* __this, const RuntimeMethod* method) 
{
	{
		// if (m_Running)
		bool L_0 = (bool)__this->___m_Running_0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStop();
		VirtualActionInvoker0::Invoke(12 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnStop() */, __this);
	}

IL_000e:
	{
		// m_Running = false;
		__this->___m_Running_0 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1__ctor_mF22713FB460E4026D6AC9974F6DD9DBED5EA08CD_gshared (XRSubsystem_1_tE79C39F057DC70EEF40AB0F327DDDF8CC6E3E249* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Subsystem_1_t75B62C9B687446D6D9E3C8FB0A841F2CC5A174C8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Subsystem_1_t75B62C9B687446D6D9E3C8FB0A841F2CC5A174C8*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_gshared_inline (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_0 = (KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t9EAB4070BB57AF52492D59610E8652118CDA4022 Enumerator_get_Current_mBB6D79CD6A073D8904654C3E2AF417B78C38CCF2_gshared_inline (Enumerator_t4E220591859A1E7872A376DF29294220416596C3* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t9EAB4070BB57AF52492D59610E8652118CDA4022 L_0 = (Nullable_1_t9EAB4070BB57AF52492D59610E8652118CDA4022)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Enumerator_get_Current_mA77AA53CCABA7EE4D5A17C1686FF33B1255ECAF6_gshared_inline (Enumerator_tC00634F69C4FDA0AB72A1D2673B713206D4B27FB* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_gshared_inline (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B Enumerator_get_Current_m5DDB3BBC8897715D18FD13C86C8F04F7F2056C23_gshared_inline (Enumerator_t7782286D6ECB285F6E3DE9DF7E852C6C6B896603* __this, const RuntimeMethod* method) 
{
	{
		CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B L_0 = (CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB Enumerator_get_Current_mBFEE48D34AA5EB20CA6C6FC33F12C8A8C9E01E1F_gshared_inline (Enumerator_t016E37AA68C70D477D68A22B1FC0083A7F89DA7B* __this, const RuntimeMethod* method) 
{
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0 = (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_gshared_inline (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* __this, const RuntimeMethod* method) 
{
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_0 = (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_gshared_inline (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method) 
{
	{
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_0 = (NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_gshared_inline (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method) 
{
	{
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_0 = (NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 Enumerator_get_Current_m8D1CE84E8C3FD32018C9874883C02507A3085F31_gshared_inline (Enumerator_tB743F5025420B3AA777CE737AE4068EAC0A8BC74* __this, const RuntimeMethod* method) 
{
	{
		QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 L_0 = (QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 Enumerator_get_Current_mC5194B613FE30DC2AB9B25C823ABABCE9BA79723_gshared_inline (Enumerator_t919BDE1BE86B045AB5F78752F0C95009261F93BD* __this, const RuntimeMethod* method) 
{
	{
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = (Scene_tA1DC762B79745EB5140F054C884855B922318356)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_0 = (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) 
{
	{
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_0 = (Substring_t2E16755269E6716C22074D6BC0A9099915E67849)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) 
{
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_0 = (JsonValue_t01DB320267C848E729A400EF2345979978F851D2)__this->____current_3;
		return L_0;
	}
}
