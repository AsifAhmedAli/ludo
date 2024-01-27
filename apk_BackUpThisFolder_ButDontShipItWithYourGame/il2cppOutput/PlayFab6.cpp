#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Byte[]>
struct Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<PlayFab.PlayFabError>
struct Action_1_t795ED1F4E6C6EEAB7072001CFF691E4CC2F7DF93;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// PlayFab.Internal.PlayFabHttp/ApiProcessingEvent`1<PlayFab.Internal.ApiProcessingEventArgs>
struct ApiProcessingEvent_1_t6F4803BFD135D3D4D36DCB98032C0FE836C2D6EE;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>
struct ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.SharedGroupDataRecord>
struct Dictionary_2_t90F01328CE2DA3359FBE4ABC275E8A4A441F207E;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,System.UInt32>
struct Dictionary_2_t3530A61C502BFE07F3ED20F8D9B10D762DB0F1D3;
// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.UserDataRecord>
struct Dictionary_2_tCCB825E12B065472E3DC7F9E132CF4B37C7226E2;
// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.VirtualCurrencyRechargeTime>
struct Dictionary_2_t980250F79C95159BFB075EFB408C944A4C31F774;
// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task>
struct Func_2_t378757FF082427448349A80CC63683B50DA787D3;
// System.Collections.Generic.IEnumerable`1<PlayFab.Internal.CallRequestContainer>
struct IEnumerable_1_t332951B33F69F07E7A33E76D63AB932D54C456AC;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<PlayFab.ClientModels.AdCampaignAttributionModel>
struct List_1_t84130783142757DD09A9C5474E78F0BBC3DA5B12;
// System.Collections.Generic.List`1<PlayFab.ClientModels.AdPlacementDetails>
struct List_1_t352C6E0A448BDFB46B97AAFA229A67938AD7027B;
// System.Collections.Generic.List`1<PlayFab.ClientModels.AdRewardItemGranted>
struct List_1_t3EA147F346701B9D81817E9236BA77649BD102BE;
// System.Collections.Generic.List`1<PlayFab.Internal.CallRequestContainer>
struct List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC;
// System.Collections.Generic.List`1<PlayFab.ClientModels.CartItem>
struct List_1_t07127EA14CA4D7E27B02EC1D9D7EB878FB216E51;
// System.Collections.Generic.List`1<PlayFab.ClientModels.CatalogItem>
struct List_1_t97F26C489AE12E90E2AE13099DFAEF9DED0B8F0C;
// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterInventory>
struct List_1_t1701865550109960DFAB6F38B2B293E04AD9947E;
// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterLeaderboardEntry>
struct List_1_tF1AB119A40C4C4C0AD1C8B1D4896F87E4947DAF6;
// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterResult>
struct List_1_tA848E8C0DB46B5FEF9D14E94E9501A6EDD685748;
// System.Collections.Generic.List`1<PlayFab.ClientModels.ContactEmailInfoModel>
struct List_1_t3FE536429219911F92FD1C8652AC167ABC868CF9;
// System.Collections.Generic.List`1<PlayFab.ClientModels.Container_Dictionary_String_String>
struct List_1_t31B8385127B5B5362AD4705C15894ABDF5696D5F;
// System.Collections.Generic.List`1<PlayFab.ClientModels.FacebookInstantGamesPlayFabIdPair>
struct List_1_t4FEA290778C8BA4594A23C022E14B6F3509259D4;
// System.Collections.Generic.List`1<PlayFab.ClientModels.FacebookPlayFabIdPair>
struct List_1_t176D4CCD5CE6E641270ED2C16AC0C08031525076;
// System.Collections.Generic.List`1<PlayFab.ClientModels.FriendInfo>
struct List_1_t6D8507218FAECCB535BB0160E5FF36043439BE65;
// System.Collections.Generic.List`1<PlayFab.ClientModels.GameCenterPlayFabIdPair>
struct List_1_t90DF96744C9159EA1892F45C476475FD2924083D;
// System.Collections.Generic.List`1<PlayFab.ClientModels.GameInfo>
struct List_1_tDED8AC802CA93DC9C4EB474BF6B5237025D099FD;
// System.Collections.Generic.List`1<PlayFab.ClientModels.GenericPlayFabIdPair>
struct List_1_t43564592808D45D3E17CBDEBAF931C84D4025DBE;
// System.Collections.Generic.List`1<PlayFab.ClientModels.GenericServiceId>
struct List_1_t9B91BE7A798D29A3000012C9037C15CFC12894DD;
// System.Collections.Generic.List`1<PlayFab.ClientModels.GetSegmentResult>
struct List_1_t2006056A80F89FC3242936484F1B659BCBEC8941;
// System.Collections.Generic.List`1<PlayFab.ClientModels.GooglePlayFabIdPair>
struct List_1_t71CE1D87B88DFBCA6EC3B86687C9672E590C83C7;
// System.Collections.Generic.List`1<PlayFab.ClientModels.GooglePlayGamesPlayFabIdPair>
struct List_1_t37A1FDC26F6C0D9AA6B851E977ED5AA7B2C284F4;
// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance>
struct List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264;
// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemPurchaseRequest>
struct List_1_t5E9A608270FE195066167121D49A36F80B9E22D5;
// System.Collections.Generic.List`1<PlayFab.ClientModels.KongregatePlayFabIdPair>
struct List_1_t58E5A46A1013ABC842B46A744FB1A5B4E380256D;
// System.Collections.Generic.List`1<PlayFab.ClientModels.LinkedPlatformAccountModel>
struct List_1_tE7EF529EDDDCFD9F25DC0ED76CA7446AC80E5231;
// System.Collections.Generic.List`1<PlayFab.ClientModels.LocationModel>
struct List_1_t12CC81EA2CBCF5532AB9BEB0511D5085C5A3909E;
// System.Collections.Generic.List`1<PlayFab.ClientModels.LogStatement>
struct List_1_t4F50739BF3D022D5FBDF9B0AB4F63496335995A9;
// System.Collections.Generic.List`1<PlayFab.ClientModels.MembershipModel>
struct List_1_t4EAB2E936C3F5B2D0448CA03435BC4E92EF19E70;
// System.Collections.Generic.List`1<PlayFab.ClientModels.NintendoServiceAccountPlayFabIdPair>
struct List_1_t347ED05405C8DA7325C059BEAD5AE9EC7DF2EF66;
// System.Collections.Generic.List`1<PlayFab.ClientModels.NintendoSwitchPlayFabIdPair>
struct List_1_t2AD2009467B994C24ED420428E83761FA7746200;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<PlayFab.ClientModels.PSNAccountPlayFabIdPair>
struct List_1_tAE008C79A7DCEF28048C143C44B2C1BC73960E45;
// System.Collections.Generic.List`1<PlayFab.ClientModels.PaymentOption>
struct List_1_t75868E13E47CE7F4CD6523D1277CFCA7E6390685;
// System.Collections.Generic.List`1<PlayFab.ClientModels.PlayerLeaderboardEntry>
struct List_1_tCBCB02FC07BD251869097197A968F8730C15CC46;
// System.Collections.Generic.List`1<PlayFab.ClientModels.PlayerStatisticVersion>
struct List_1_tA1DE21C9669CF4509EC1A140CD7AA1978F9D2342;
// System.Collections.Generic.List`1<PlayFab.ClientModels.PurchaseReceiptFulfillment>
struct List_1_t50A44D8AB20157819C0C38F1E5363424ACC9C999;
// System.Collections.Generic.List`1<PlayFab.ClientModels.PushNotificationRegistrationModel>
struct List_1_t79717EC342FB9A91B12676776A0CC67F0602D5E2;
// System.Collections.Generic.List`1<PlayFab.ClientModels.RegionInfo>
struct List_1_t7C8C73015E71402E06F497AA4626259BCA04D5D5;
// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticModel>
struct List_1_t2D0759B3AF00A2641D8E5A4B894928F0F87F3C90;
// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticNameVersion>
struct List_1_tC357ECA6F83AF178994F568AC76734126E9270B4;
// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticUpdate>
struct List_1_t2BE2D151E3E6356A8F0DE6FDF222CFE019C3EE15;
// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticValue>
struct List_1_tCDDF6F4596CECA134788D4BBE4D454B680279051;
// System.Collections.Generic.List`1<PlayFab.ClientModels.SteamPlayFabIdPair>
struct List_1_t4DD7B6BF0DCD54F77005E9CB16B34AA3831649B5;
// System.Collections.Generic.List`1<PlayFab.ClientModels.StoreItem>
struct List_1_tEA5BB14D850766BB1796E0FC9B1B68D0451A2710;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<PlayFab.ClientModels.SubscriptionModel>
struct List_1_tE2B26FDEA1B16DEED1A7B1FC67EB449D05CBF115;
// System.Collections.Generic.List`1<PlayFab.ClientModels.TagModel>
struct List_1_tA5C145CD860B7F495BAF017713B038BB84303E81;
// System.Collections.Generic.List`1<PlayFab.ClientModels.TitleNewsItem>
struct List_1_tA1EA0E9437AE42314C4B00B909191D0B8ACDAE41;
// System.Collections.Generic.List`1<PlayFab.ClientModels.TradeInfo>
struct List_1_t6A0E065076890870C4685CD54FFBA38E511AF6F8;
// System.Collections.Generic.List`1<PlayFab.ClientModels.TwitchPlayFabIdPair>
struct List_1_t3E3414D8ECB90C7A51EB35E13889BD2FF0DC3D2B;
// System.Collections.Generic.List`1<PlayFab.ClientModels.UserOpenIdInfo>
struct List_1_t36DD8E0BEC48B5AC224AC1F197CE5342EE4C6D62;
// System.Collections.Generic.List`1<PlayFab.ClientModels.ValueToDateModel>
struct List_1_tA64A2C995850039E2DEA13FA8E06681F0F36E4FE;
// System.Collections.Generic.List`1<PlayFab.ClientModels.Variable>
struct List_1_t2C5D0E860CC178448C938DBE2DA7B5EB1A8B1541;
// System.Collections.Generic.List`1<PlayFab.ClientModels.XboxLiveAccountPlayFabIdPair>
struct List_1_t5714EB5D583975242F3BCD3F610D00B5CAD397D2;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA;
// System.Collections.Generic.Queue`1<System.Collections.IEnumerator>
struct Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// PlayFab.Internal.CallRequestContainer[]
struct CallRequestContainerU5BU5D_t6494DA636DD389350FC1AC53F4348565552E8C84;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Net.WebHeaderCollection/RfcChar[]
struct RfcCharU5BU5D_t8D79A380C46398F9D1F442FDEE0A27F77B7D1B4C;
// PlayFab.ClientModels.AcceptTradeRequest
struct AcceptTradeRequest_tCA8D0094280CF37CD34F7BB9152DC0D23556F376;
// PlayFab.ClientModels.AcceptTradeResponse
struct AcceptTradeResponse_t2DEB99BC611E243FCE8FC81CA3DDA8BAA2D13322;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// PlayFab.ClientModels.AdCampaignAttributionModel
struct AdCampaignAttributionModel_t324EE01E17E5CC1340F13C8951C4B2F05B4945F7;
// PlayFab.ClientModels.AdPlacementDetails
struct AdPlacementDetails_t1ACAA9338484D08748B37626C54ACAA90E7E7D71;
// PlayFab.ClientModels.AdRewardItemGranted
struct AdRewardItemGranted_t3104882ABECE75D7CF8AEEB5392C89BAC70FB623;
// PlayFab.ClientModels.AdRewardResults
struct AdRewardResults_tCD3953C86B90682A93AB255F40D1B37AC745D82D;
// PlayFab.ClientModels.AddFriendRequest
struct AddFriendRequest_tF4BA2D4892D728DD9D5FFE396EAABCF13C1A9705;
// PlayFab.ClientModels.AddFriendResult
struct AddFriendResult_t0218A16AA3A18288F291B171DFD96376DE515534;
// PlayFab.ClientModels.AddGenericIDRequest
struct AddGenericIDRequest_t208E40CF528CA8272C8823BD051D213DAD5B0EA8;
// PlayFab.ClientModels.AddGenericIDResult
struct AddGenericIDResult_t3E723F036056C29DF96F4E1053ED56304B3EC80F;
// PlayFab.ClientModels.AddOrUpdateContactEmailRequest
struct AddOrUpdateContactEmailRequest_t33A7F5F1E3CAE06D9563C4EED6BC4C6911451E7E;
// PlayFab.ClientModels.AddOrUpdateContactEmailResult
struct AddOrUpdateContactEmailResult_t631FCD1D822A3B0F46BE44BAF2E53E00E943DA70;
// PlayFab.ClientModels.AddSharedGroupMembersRequest
struct AddSharedGroupMembersRequest_t49F0477C5C94AC5E5A3A23B4DE6CEAEF27A11743;
// PlayFab.ClientModels.AddSharedGroupMembersResult
struct AddSharedGroupMembersResult_t7EE390B62E9A845FBCC7248A1AAD09C31AEF4879;
// PlayFab.ClientModels.AddUserVirtualCurrencyRequest
struct AddUserVirtualCurrencyRequest_tE481F2AF4ECA12DA7C32BFC4F7A78A005015223A;
// PlayFab.ClientModels.AddUsernamePasswordRequest
struct AddUsernamePasswordRequest_t8CBA4EF047D9418B602D6D19B59907C1E2EE5B91;
// PlayFab.ClientModels.AddUsernamePasswordResult
struct AddUsernamePasswordResult_t1A7692E815C0BA6CD252047D9E52653952F2E72B;
// PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationRequest
struct AndroidDevicePushNotificationRegistrationRequest_tD1CFE25352A150E613CE3B461BF2890422CF7DD2;
// PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationResult
struct AndroidDevicePushNotificationRegistrationResult_t0327FEE4DDC186DEA1B8752BDCF791267579210C;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// PlayFab.ClientModels.AttributeInstallRequest
struct AttributeInstallRequest_t3F0CE1807B4E4F4C8ECA5F054ADEF43040842FD4;
// PlayFab.ClientModels.AttributeInstallResult
struct AttributeInstallResult_t899E05405169CB686C872A120AF4627134A30C86;
// PlayFab.AuthenticationModels.AuthenticateCustomIdRequest
struct AuthenticateCustomIdRequest_tE91474227AC5EB717401D577941B21F995C8E5AC;
// PlayFab.AuthenticationModels.AuthenticateCustomIdResult
struct AuthenticateCustomIdResult_t4B35C3258C572E8DFCC590A16993C5BC3F934F36;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// PlayFab.Internal.CallRequestContainer
struct CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090;
// PlayFab.ClientModels.CancelTradeRequest
struct CancelTradeRequest_t71CBB4870F838FE0023A802A93945155CDF7ADFD;
// PlayFab.ClientModels.CancelTradeResponse
struct CancelTradeResponse_t9D05D5983F3DB05CE845504A19ED0ECC83576AB4;
// PlayFab.ClientModels.CartItem
struct CartItem_tAD26528DE8C365A9E31F0B3195464F6CB3FA4308;
// PlayFab.ClientModels.CatalogItem
struct CatalogItem_t9A33C8BB264459850843DCD8BA4209848E87C69D;
// PlayFab.ClientModels.CatalogItemBundleInfo
struct CatalogItemBundleInfo_tD6204212D0429B288618470A599C0BDD613DB26E;
// PlayFab.ClientModels.CatalogItemConsumableInfo
struct CatalogItemConsumableInfo_t8E031AF03A11E82E6A5955C18D3BAC8BE5287A80;
// PlayFab.ClientModels.CatalogItemContainerInfo
struct CatalogItemContainerInfo_t7BB7170B4721F488FF4DB455D9712D4CC5298ADD;
// PlayFab.ClientModels.CharacterInventory
struct CharacterInventory_t50ED70091B9834B7A45E243C93EC3A47C5EE630D;
// PlayFab.ClientModels.CharacterLeaderboardEntry
struct CharacterLeaderboardEntry_t1C7364F456AB72E7EC4BB852BA3ED903426F6B4D;
// PlayFab.ClientModels.CharacterResult
struct CharacterResult_tD0B33C717CF49F6367553BE928EEE43877EFBBBD;
// System.Net.CipherSuitesCallback
struct CipherSuitesCallback_tA274229EDCD6C1E415C0013260628DF0EF142764;
// PlayFab.ClientModels.CollectionFilter
struct CollectionFilter_t7CCEA28D3D380C695200F3E7739551F70D1611BF;
// PlayFab.ClientModels.ConfirmPurchaseRequest
struct ConfirmPurchaseRequest_t34A41693EC4B5BC40728DE31124DDAB244538561;
// PlayFab.ClientModels.ConfirmPurchaseResult
struct ConfirmPurchaseResult_tE18D51212E9CDA979D56C783A74CBD3DA19E261A;
// PlayFab.ClientModels.ConsumeItemRequest
struct ConsumeItemRequest_tF624E7A9D03B42057F78245C65E3CCF4640C02F0;
// PlayFab.ClientModels.ConsumeItemResult
struct ConsumeItemResult_t857BE736F224FAAD829AB19DEB93CBDEBCC2A5AC;
// PlayFab.ClientModels.ConsumeMicrosoftStoreEntitlementsRequest
struct ConsumeMicrosoftStoreEntitlementsRequest_tDC32D9C5D90BCC8F1C5306116BCD7ABB8F0DF4F3;
// PlayFab.ClientModels.ConsumeMicrosoftStoreEntitlementsResponse
struct ConsumeMicrosoftStoreEntitlementsResponse_t1149821801D39C822BB30732196D2A453FA7A6BD;
// PlayFab.ClientModels.ConsumePS5EntitlementsRequest
struct ConsumePS5EntitlementsRequest_t1F4D452BA5687D7AB47A5DE16F70D08781904468;
// PlayFab.ClientModels.ConsumePS5EntitlementsResult
struct ConsumePS5EntitlementsResult_t503F5F1DA853DBBE3F670D1C6BA12C356A6D409F;
// PlayFab.ClientModels.ConsumePSNEntitlementsRequest
struct ConsumePSNEntitlementsRequest_t17FBCC37A9E22D998654FCA5C98A273EAACEA864;
// PlayFab.ClientModels.ConsumePSNEntitlementsResult
struct ConsumePSNEntitlementsResult_tA6CD96C5E6284DD36E67500A1B4A14C2883B2B5F;
// PlayFab.ClientModels.ConsumeXboxEntitlementsRequest
struct ConsumeXboxEntitlementsRequest_tCB2BA68C6BDCFDEC0C45DDC56169D55CB5AC0A4F;
// PlayFab.ClientModels.ConsumeXboxEntitlementsResult
struct ConsumeXboxEntitlementsResult_tD340EB525403F8FC22939E14C0921424F4B0549F;
// PlayFab.ClientModels.ContactEmailInfoModel
struct ContactEmailInfoModel_tD30B739F3AD7363DB63A6C079C8191EC7C4ED92D;
// PlayFab.ClientModels.Container_Dictionary_String_String
struct Container_Dictionary_String_String_t960F748D379C121F44BFBA7B3396B68D61B60027;
// System.Net.CookieCollection
struct CookieCollection_tB62B610A8E70C48DC8854F3D27BA916AF21D6608;
// System.Net.CookieContainer
struct CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E;
// PlayFab.ClientModels.CreateSharedGroupRequest
struct CreateSharedGroupRequest_t307D783E4A09507D5705E293B7F409DC01D9AEBF;
// PlayFab.ClientModels.CreateSharedGroupResult
struct CreateSharedGroupResult_tD3F430E2324446A1A03DB4C66B00A50345AA0FEE;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// PlayFab.ClientModels.CurrentGamesRequest
struct CurrentGamesRequest_t9EBE4A14397B570B30163E4A6188EC02C8092FDB;
// PlayFab.ClientModels.CurrentGamesResult
struct CurrentGamesResult_tB1A2E574010B94109AEEDB952F4B9DB92CF63324;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// PlayFab.AuthenticationModels.DeleteRequest
struct DeleteRequest_t0B9D2C009B483135923187736BB065BB74B2B1DE;
// PlayFab.ClientModels.DeviceInfoRequest
struct DeviceInfoRequest_tBD53C238AFC812A302C8773CDA4CAF4DE27D8BAA;
// PlayFab.AuthenticationModels.EmptyResponse
struct EmptyResponse_t5D64DF52A735AC35F2A14FC8A62D357FFFCA7652;
// PlayFab.ClientModels.EmptyResponse
struct EmptyResponse_t0A154C95CF262586F83678BD1D0986EA244FB89A;
// PlayFab.ClientModels.EmptyResult
struct EmptyResult_t3F8DAA8CDEAE30F534D1B72977760F073C48DE64;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// PlayFab.AuthenticationModels.EntityKey
struct EntityKey_tFADF551D013525A30F2A6FB10A4FC4AF5F34278E;
// PlayFab.ClientModels.EntityKey
struct EntityKey_t3E92C74E390ABBE2C7066FD9D20C7E3DC948CC9C;
// PlayFab.AuthenticationModels.EntityLineage
struct EntityLineage_tBB3BF8ABA70636A13AE3412CE723954A429EE67E;
// PlayFab.AuthenticationModels.EntityTokenResponse
struct EntityTokenResponse_tCB7E0082B8ABD19A02403C6F9A438EF756D63E8B;
// PlayFab.ClientModels.EntityTokenResponse
struct EntityTokenResponse_tF62536B9F1B793EB4711A8394CE36934B5200D1B;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// PlayFab.ClientModels.ExecuteCloudScriptRequest
struct ExecuteCloudScriptRequest_tB66740CBA0752CC25A741260066BE6BF4E9559B3;
// PlayFab.ClientModels.ExecuteCloudScriptResult
struct ExecuteCloudScriptResult_t9FD80BA0B58357B9AE506727246D18419BCD6F69;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// PlayFab.ClientModels.FacebookInstantGamesPlayFabIdPair
struct FacebookInstantGamesPlayFabIdPair_t0D7008A2CFF5E5C0DD8D15C5E70839ABC7757CBF;
// PlayFab.ClientModels.FacebookPlayFabIdPair
struct FacebookPlayFabIdPair_tF6D810D330B041CC29B3A36DD7FAF95361455AF3;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// PlayFab.ClientModels.FriendInfo
struct FriendInfo_tD4C459996614A9E2C4BCBC4565272BD50CA30355;
// PlayFab.ClientModels.GameCenterPlayFabIdPair
struct GameCenterPlayFabIdPair_tBCF6D95E2448ED031257AF8D2F3C287A15DA1244;
// PlayFab.ClientModels.GameInfo
struct GameInfo_t33CE266C7ABB653EB0A5F87BD56F27ACF7EDF2CE;
// PlayFab.ClientModels.GameServerRegionsRequest
struct GameServerRegionsRequest_tE52E8B0933978E8BFBF9C35B02910A09FD660FA1;
// PlayFab.ClientModels.GameServerRegionsResult
struct GameServerRegionsResult_t5193C393CE87A74A84E4E22E9AEA0106931A5949;
// PlayFab.ClientModels.GenericPlayFabIdPair
struct GenericPlayFabIdPair_t1C9E09D926074E8C215C364655EDC29EC7D5AD40;
// PlayFab.ClientModels.GenericServiceId
struct GenericServiceId_t845FFCE0230F5F2AC512688C09CB390784A40DCE;
// PlayFab.ClientModels.GetAccountInfoRequest
struct GetAccountInfoRequest_tC0147A50F81DD6B6BCC3ABD921E2930F6F43EBD4;
// PlayFab.ClientModels.GetAccountInfoResult
struct GetAccountInfoResult_t3749F7FEB631D14EE484694B7953E1EEC0D4997C;
// PlayFab.ClientModels.GetAdPlacementsRequest
struct GetAdPlacementsRequest_tE5AEC539C50FBCB69CDC269CCE806B7E12735FE1;
// PlayFab.ClientModels.GetAdPlacementsResult
struct GetAdPlacementsResult_tBDBA84AFBE0E8DFAA39F68B11B6C2E0ACAF58637;
// PlayFab.ClientModels.GetCatalogItemsRequest
struct GetCatalogItemsRequest_tCB1333AAA1EAFC89DFA7E9317A5C527C9B985553;
// PlayFab.ClientModels.GetCatalogItemsResult
struct GetCatalogItemsResult_tB411483732EB649E2A5C87171A9A4A9DFB9F5B7A;
// PlayFab.ClientModels.GetCharacterDataRequest
struct GetCharacterDataRequest_t6C05771F13C702A9045DD3B899170E5445B1766B;
// PlayFab.ClientModels.GetCharacterDataResult
struct GetCharacterDataResult_tF0476467F5B9B17397185F7E4DAF671E2FE8F891;
// PlayFab.ClientModels.GetCharacterInventoryRequest
struct GetCharacterInventoryRequest_t580ACC64D36255B5C5067A28C5CEF9EB0CF58CDD;
// PlayFab.ClientModels.GetCharacterInventoryResult
struct GetCharacterInventoryResult_t3B8789B3A7CDD4FB2D5412AAF4CC984E24F4BAF6;
// PlayFab.ClientModels.GetCharacterLeaderboardRequest
struct GetCharacterLeaderboardRequest_tAFAFAB8549BCD8A8E150271072595B60F4F1F3D3;
// PlayFab.ClientModels.GetCharacterLeaderboardResult
struct GetCharacterLeaderboardResult_t751226AA8B78F4B976034B2AAC6C2D2F15FCE8EE;
// PlayFab.ClientModels.GetCharacterStatisticsRequest
struct GetCharacterStatisticsRequest_t267D464960AF2DC89F894ACF664AA6B643EA6C34;
// PlayFab.ClientModels.GetCharacterStatisticsResult
struct GetCharacterStatisticsResult_t113C2ECA7AC503ED97126C8B4AF186BBE421C865;
// PlayFab.ClientModels.GetContentDownloadUrlRequest
struct GetContentDownloadUrlRequest_t51F47803DD20DD528B153AD2661EF0D7D4029654;
// PlayFab.ClientModels.GetContentDownloadUrlResult
struct GetContentDownloadUrlResult_tAFD987CB2B47A5D205B9D6780153BAB37915903E;
// PlayFab.AuthenticationModels.GetEntityTokenRequest
struct GetEntityTokenRequest_t058F7E73EA27EED4A7E6A49B1FF0770354FF6E69;
// PlayFab.AuthenticationModels.GetEntityTokenResponse
struct GetEntityTokenResponse_tD3A2F286A2716332E695130B0DDE7F9E2E0DABAC;
// PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest
struct GetFriendLeaderboardAroundPlayerRequest_tBC527554F4EA5DC6C05BF33AB959977C4D3045B4;
// PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerResult
struct GetFriendLeaderboardAroundPlayerResult_t08E0989E5BB790AD662A7223F4C8E46218A66129;
// PlayFab.ClientModels.GetFriendLeaderboardRequest
struct GetFriendLeaderboardRequest_tC24921FC75AEB6D31EBAC1298F69419AF0F000B6;
// PlayFab.ClientModels.GetFriendsListRequest
struct GetFriendsListRequest_tD095DC6CD5427ABC61B3F315FBB7204A75739444;
// PlayFab.ClientModels.GetFriendsListResult
struct GetFriendsListResult_tD350BDB67572F168FA932E98CE7C34DB1CDC0E9A;
// PlayFab.ClientModels.GetLeaderboardAroundCharacterRequest
struct GetLeaderboardAroundCharacterRequest_tA81520118D8CC8B9D66E62B5999227D3378336B0;
// PlayFab.ClientModels.GetLeaderboardAroundCharacterResult
struct GetLeaderboardAroundCharacterResult_t3033C56D162F38E42CA2C368C46DA2921A493E41;
// PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest
struct GetLeaderboardAroundPlayerRequest_tD1C22CFB0F1F778DB0B694C76C423419A476DCFC;
// PlayFab.ClientModels.GetLeaderboardAroundPlayerResult
struct GetLeaderboardAroundPlayerResult_tEC5343CE1F5409AC4FC072C15C5E0667D5AE763A;
// PlayFab.ClientModels.GetLeaderboardForUsersCharactersRequest
struct GetLeaderboardForUsersCharactersRequest_tEF2A6C42242BD951785B3C3D4F5D169DF8A25C3C;
// PlayFab.ClientModels.GetLeaderboardForUsersCharactersResult
struct GetLeaderboardForUsersCharactersResult_tE67CF47DF6B0C0EC8124A217495687D0ADAB2E89;
// PlayFab.ClientModels.GetLeaderboardRequest
struct GetLeaderboardRequest_t6815CF68472AB22065418C21DDEB07C883A41193;
// PlayFab.ClientModels.GetLeaderboardResult
struct GetLeaderboardResult_t03D04CF6DED866003050A495D94A7D8497AD492C;
// PlayFab.ClientModels.GetPaymentTokenRequest
struct GetPaymentTokenRequest_t163B16A27CC6BE1E00893D7EC3368B2D245E00DC;
// PlayFab.ClientModels.GetPaymentTokenResult
struct GetPaymentTokenResult_t24602A341F685C823DA42D3B4ED51299A20133F3;
// PlayFab.ClientModels.GetPhotonAuthenticationTokenRequest
struct GetPhotonAuthenticationTokenRequest_t9B058BB73A238036A56AAE722094C94037DEB1C5;
// PlayFab.ClientModels.GetPhotonAuthenticationTokenResult
struct GetPhotonAuthenticationTokenResult_t6A42DA77B0947BB88E9672ED8CBE52461CA65272;
// PlayFab.ClientModels.GetPlayFabIDsFromFacebookIDsRequest
struct GetPlayFabIDsFromFacebookIDsRequest_tB275AD11157BEDC861CAE56F8B8D86AC90E0051C;
// PlayFab.ClientModels.GetPlayFabIDsFromFacebookIDsResult
struct GetPlayFabIDsFromFacebookIDsResult_tAC717CC80C6863B47645241E22AAB0B5199A8FA1;
// PlayFab.ClientModels.GetPlayFabIDsFromFacebookInstantGamesIdsRequest
struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest_tA75CEA154F216D5BF2C011E9DAE9BC3F8FD4E521;
// PlayFab.ClientModels.GetPlayFabIDsFromFacebookInstantGamesIdsResult
struct GetPlayFabIDsFromFacebookInstantGamesIdsResult_tB8681765E88FD8D1405CA301744B4EB363A1C9FB;
// PlayFab.ClientModels.GetPlayFabIDsFromGameCenterIDsRequest
struct GetPlayFabIDsFromGameCenterIDsRequest_t03B38A98E8957924A2A962D103A7E23CC68C6DD6;
// PlayFab.ClientModels.GetPlayFabIDsFromGameCenterIDsResult
struct GetPlayFabIDsFromGameCenterIDsResult_tDDDD12C3F3725D9C09FF048B818E8E7B5CADFB45;
// PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsRequest
struct GetPlayFabIDsFromGenericIDsRequest_t5A5E297DB35E0E92333069915B7156E47A89328E;
// PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsResult
struct GetPlayFabIDsFromGenericIDsResult_t4075E39127DC60513A34BD47FCD2EFD2220B5286;
// PlayFab.ClientModels.GetPlayFabIDsFromGoogleIDsRequest
struct GetPlayFabIDsFromGoogleIDsRequest_t3CAF0AB06B25DF209219981B9B370760572F0804;
// PlayFab.ClientModels.GetPlayFabIDsFromGoogleIDsResult
struct GetPlayFabIDsFromGoogleIDsResult_t2B5CA8F7E79F8E066B817055C73B99DA89A42893;
// PlayFab.ClientModels.GetPlayFabIDsFromGooglePlayGamesPlayerIDsRequest
struct GetPlayFabIDsFromGooglePlayGamesPlayerIDsRequest_t60FA7DD8AF722A7667CE69CECE1002EC1C5CAC6D;
// PlayFab.ClientModels.GetPlayFabIDsFromGooglePlayGamesPlayerIDsResult
struct GetPlayFabIDsFromGooglePlayGamesPlayerIDsResult_t0DC2980392783DF85E0900285356738EBE3D7CDE;
// PlayFab.ClientModels.GetPlayFabIDsFromKongregateIDsRequest
struct GetPlayFabIDsFromKongregateIDsRequest_t1C7F52700E5D3707F00FA27B987C6A9CDC69114D;
// PlayFab.ClientModels.GetPlayFabIDsFromKongregateIDsResult
struct GetPlayFabIDsFromKongregateIDsResult_t65A76AE8A7A25A3F7601EEA68688941873EAACF7;
// PlayFab.ClientModels.GetPlayFabIDsFromNintendoServiceAccountIdsRequest
struct GetPlayFabIDsFromNintendoServiceAccountIdsRequest_t257824B35205A9C99B0444960998E8A7E26B519A;
// PlayFab.ClientModels.GetPlayFabIDsFromNintendoServiceAccountIdsResult
struct GetPlayFabIDsFromNintendoServiceAccountIdsResult_tA4461DA79D669F1A17142350D6F021D1874497EF;
// PlayFab.ClientModels.GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_tC3BD96F79D674CE16C3ED9ECE716DF17D45FA96D;
// PlayFab.ClientModels.GetPlayFabIDsFromNintendoSwitchDeviceIdsResult
struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_tECF140F80FED44DF111B51657BFED4823A4C4145;
// PlayFab.ClientModels.GetPlayFabIDsFromPSNAccountIDsRequest
struct GetPlayFabIDsFromPSNAccountIDsRequest_t6215A503E62C27247574493608274CD9EAA56162;
// PlayFab.ClientModels.GetPlayFabIDsFromPSNAccountIDsResult
struct GetPlayFabIDsFromPSNAccountIDsResult_t24CA2B421532AC4D974235E8AB71F36C2257B35B;
// PlayFab.ClientModels.GetPlayFabIDsFromSteamIDsRequest
struct GetPlayFabIDsFromSteamIDsRequest_tC1E89AE77985DEA520133F183C582CDF312046F2;
// PlayFab.ClientModels.GetPlayFabIDsFromSteamIDsResult
struct GetPlayFabIDsFromSteamIDsResult_t688E60B8A112A704F2262F596DC78A6E5BBB98C4;
// PlayFab.ClientModels.GetPlayFabIDsFromTwitchIDsRequest
struct GetPlayFabIDsFromTwitchIDsRequest_t305BBF2368DEA56D8D8A39B2044CEB66BDE540A1;
// PlayFab.ClientModels.GetPlayFabIDsFromTwitchIDsResult
struct GetPlayFabIDsFromTwitchIDsResult_tBD52011CB3F0FF79DE2CFDA3AB748C3CCD6B011A;
// PlayFab.ClientModels.GetPlayFabIDsFromXboxLiveIDsRequest
struct GetPlayFabIDsFromXboxLiveIDsRequest_t73ACCAC2D27CFBE633FAAC6723E9CC12DDB035C9;
// PlayFab.ClientModels.GetPlayFabIDsFromXboxLiveIDsResult
struct GetPlayFabIDsFromXboxLiveIDsResult_t9D66C97D6008F3ED67EDDEE9CAC2DEE09A8DB595;
// PlayFab.ClientModels.GetPlayerCombinedInfoRequest
struct GetPlayerCombinedInfoRequest_tCF9E872A2AEAF953E4F96DCADD93C27B78D2DFE2;
// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams
struct GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370;
// PlayFab.ClientModels.GetPlayerCombinedInfoResult
struct GetPlayerCombinedInfoResult_t8FA02FB2B4EB7123C2BF5675C866BD6AA28AAB37;
// PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload
struct GetPlayerCombinedInfoResultPayload_t6323557A81B0FF04C6B66FC1F916864A4D738BCC;
// PlayFab.ClientModels.GetPlayerProfileRequest
struct GetPlayerProfileRequest_t96486783D0AF60EB25563E45CFE3605488A71B5F;
// PlayFab.ClientModels.GetPlayerProfileResult
struct GetPlayerProfileResult_tC88B24D6F67E08246A094323793DFD03E7711447;
// PlayFab.ClientModels.GetPlayerSegmentsRequest
struct GetPlayerSegmentsRequest_t369D70CC3064DDB76E33223576F4A803BF1373CF;
// PlayFab.ClientModels.GetPlayerSegmentsResult
struct GetPlayerSegmentsResult_tBADE60D468AC3889608F56640D078B51F49C0B38;
// PlayFab.ClientModels.GetPlayerStatisticVersionsRequest
struct GetPlayerStatisticVersionsRequest_tC68F5AB538E6E36CC55F357CF12AE3352F238134;
// PlayFab.ClientModels.GetPlayerStatisticVersionsResult
struct GetPlayerStatisticVersionsResult_tC31D18B33F7A932B27073E638072846BD2BCE501;
// PlayFab.ClientModels.GetPlayerStatisticsRequest
struct GetPlayerStatisticsRequest_t84EB62C2DBFFD24EE3B200F275ACA9F38E456951;
// PlayFab.ClientModels.GetPlayerStatisticsResult
struct GetPlayerStatisticsResult_tFE1BD2E17D8A1BB108E7989512B4A16D59C2789A;
// PlayFab.ClientModels.GetPlayerTagsRequest
struct GetPlayerTagsRequest_tE2D18BFAFA7A80E9BF9FFC44F9CBD97F5B68A9D5;
// PlayFab.ClientModels.GetPlayerTagsResult
struct GetPlayerTagsResult_t14840C3B1B7D1D8D5F9886AE022D41B5EA972193;
// PlayFab.ClientModels.GetPlayerTradesRequest
struct GetPlayerTradesRequest_t3935D3E0B3F425F04440E46D1C19045BB8C7F78E;
// PlayFab.ClientModels.GetPlayerTradesResponse
struct GetPlayerTradesResponse_tDB187D9030084374BA4CF7BE5DC2756D747C80EE;
// PlayFab.ClientModels.GetPublisherDataRequest
struct GetPublisherDataRequest_t6FE8DFD96382EDEB5A07C6E57847EC6DC71C7EC3;
// PlayFab.ClientModels.GetPublisherDataResult
struct GetPublisherDataResult_t09A484540E7F707BAA87D645B1950167DFF2E381;
// PlayFab.ClientModels.GetPurchaseRequest
struct GetPurchaseRequest_t8AC38239A654F572F0D3C0850F48E1C2834AE1FF;
// PlayFab.ClientModels.GetPurchaseResult
struct GetPurchaseResult_t000F08A7E707E8866A377F417EAE58C12D11C772;
// PlayFab.ClientModels.GetSegmentResult
struct GetSegmentResult_tEA5188B42B6E5B1F15926AB703BCEF9CEC9B9D81;
// PlayFab.ClientModels.GetSharedGroupDataRequest
struct GetSharedGroupDataRequest_t9D365EF3CCF61A5BEAB96F7B6475A1750370E679;
// PlayFab.ClientModels.GetSharedGroupDataResult
struct GetSharedGroupDataResult_tE10462618F98D4D72B4D2A80ED15DE51E586713F;
// PlayFab.ClientModels.GetStoreItemsRequest
struct GetStoreItemsRequest_t795B5ADF001B53C52F13BC0031B798CBDCA5273C;
// PlayFab.ClientModels.GetStoreItemsResult
struct GetStoreItemsResult_t91D6A5BE358AF54C064CE69074FB2AAF16B5975A;
// PlayFab.ClientModels.GetTimeRequest
struct GetTimeRequest_tD244E02A36A259D9D162F39EF9850561A76D58F0;
// PlayFab.ClientModels.GetTimeResult
struct GetTimeResult_tEB8D1A02D5AAC653D33C64187044F9EB2795E661;
// PlayFab.ClientModels.GetTitleDataRequest
struct GetTitleDataRequest_t48B926031ABF3196C1C105A6AD3DF62FD3EE8B50;
// PlayFab.ClientModels.GetTitleDataResult
struct GetTitleDataResult_tBA9144A60C32E90FDDC5373F749CB2D21B6F7238;
// PlayFab.ClientModels.GetTitleNewsRequest
struct GetTitleNewsRequest_tD0FFE3851DEFDE35C3762D52999D333ED47CA828;
// PlayFab.ClientModels.GetTitleNewsResult
struct GetTitleNewsResult_t16E7083D187D4161DF3A0FA73BBA9569FC099DD4;
// PlayFab.ClientModels.GetTitlePublicKeyRequest
struct GetTitlePublicKeyRequest_tD55EB65A4BE9FE8BBA552A042E4D38D280AB0E3C;
// PlayFab.ClientModels.GetTitlePublicKeyResult
struct GetTitlePublicKeyResult_tB6D105C0270A7A373FF154F17FC5770C8F824392;
// PlayFab.ClientModels.GetTradeStatusRequest
struct GetTradeStatusRequest_t835601707B901582F75653879F3219C882F40F0B;
// PlayFab.ClientModels.GetTradeStatusResponse
struct GetTradeStatusResponse_t8F2A08C0A8E34CDD08950EAFC3AB65C4DA42FDAA;
// PlayFab.ClientModels.GetUserDataRequest
struct GetUserDataRequest_tCAF1E6FC4FE7E58BE0D3BDFE78230975CC08E501;
// PlayFab.ClientModels.GetUserDataResult
struct GetUserDataResult_t68AF037F9916162542CE2C905DFF0B0C935FC48E;
// PlayFab.ClientModels.GetUserInventoryRequest
struct GetUserInventoryRequest_t66955459A9F59280CDF3A98A5124052852A05BF2;
// PlayFab.ClientModels.GetUserInventoryResult
struct GetUserInventoryResult_t28E377BC480EF10C504D613456F8A7BE1F7E4B16;
// PlayFab.ClientModels.GooglePlayFabIdPair
struct GooglePlayFabIdPair_t72F94EC86476E7F6EAFA33E558822FDC8BB09D6F;
// PlayFab.ClientModels.GooglePlayGamesPlayFabIdPair
struct GooglePlayGamesPlayFabIdPair_tF60353DDD4A5EF68B950127EDEE1C1F5BA55653A;
// PlayFab.ClientModels.GrantCharacterToUserRequest
struct GrantCharacterToUserRequest_tE6E4139743D537B38EB1AB3AD9255F8FBF795ADB;
// PlayFab.ClientModels.GrantCharacterToUserResult
struct GrantCharacterToUserResult_t995B7F5EBD2955C6EFE4CC4C94DC33615D359D07;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Net.HeaderInfoTable
struct HeaderInfoTable_tD651971044220ED52EACB30E89A49178FA32D91F;
// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t174E5B124FF75DBAC627C6E41A0802A802EAE6D9;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9;
// System.Net.HttpWebResponse
struct HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t520F2D7BB74545D086C9D6A71E98B5DE3AD9052B;
// System.Net.ICredentials
struct ICredentials_t8FDA6AF64B852DA0631D4BE66962B20E51E230F0;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// PlayFab.SharedModels.IPlayFabInstanceApi
struct IPlayFabInstanceApi_t4183438C48D3D71392C96D7458B9884D85E5BB37;
// PlayFab.Public.IPlayFabLogger
struct IPlayFabLogger_t1867CC10083CCE9594E41BADD8AD91CCD0AB2495;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// PlayFab.Public.IScreenTimeTracker
struct IScreenTimeTracker_t1DB3E9D8BD8255F250A2348C2BA967876423C520;
// PlayFab.ISerializerPlugin
struct ISerializerPlugin_tB1E1A4440F7B43AE85D8B29B95AFBE9852029C62;
// System.Net.IWebProxy
struct IWebProxy_t3ECD2C773539B48B18734D61E87B685A9C93076D;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// PlayFab.ClientModels.ItemInstance
struct ItemInstance_tC84FDC49100051713F8BA4C6359C4DB48B3D0341;
// PlayFab.ClientModels.ItemPurchaseRequest
struct ItemPurchaseRequest_t92F81220686869A5DC3826889DB6091A48354C3B;
// PlayFab.ClientModels.KongregatePlayFabIdPair
struct KongregatePlayFabIdPair_tC4BC594035C641891C2BDBFBF907F1E86DB0E75E;
// PlayFab.ClientModels.LinkAndroidDeviceIDRequest
struct LinkAndroidDeviceIDRequest_tE370B4C43A2294AB1C93DB77F646956845E25F7D;
// PlayFab.ClientModels.LinkAndroidDeviceIDResult
struct LinkAndroidDeviceIDResult_t4C5F04B8430158F23DC644214A8D337824619911;
// PlayFab.ClientModels.LinkAppleRequest
struct LinkAppleRequest_tD84E9A0D6F6A8B62D3EE0CDA0B2796D05E91F5D1;
// PlayFab.ClientModels.LinkCustomIDRequest
struct LinkCustomIDRequest_t05FE277ACC4DF9F596B9B1364C7A9495AE97C3B8;
// PlayFab.ClientModels.LinkCustomIDResult
struct LinkCustomIDResult_t39271A15418FC2562F54CEC9A5C4448BB210D866;
// PlayFab.ClientModels.LinkFacebookAccountRequest
struct LinkFacebookAccountRequest_t88C4C375D233221A98D00DB50A9EFCD1B2D5478E;
// PlayFab.ClientModels.LinkFacebookAccountResult
struct LinkFacebookAccountResult_tF6DBE4CFEA793A6203945E018381F22047971081;
// PlayFab.ClientModels.LinkFacebookInstantGamesIdRequest
struct LinkFacebookInstantGamesIdRequest_t94A3B57DBAFA66C5760F0058BC521BFE1FC6B5D0;
// PlayFab.ClientModels.LinkFacebookInstantGamesIdResult
struct LinkFacebookInstantGamesIdResult_t1AAC9421C0C5BC3891EF7EBFBE208AC625FCCA96;
// PlayFab.ClientModels.LinkGameCenterAccountRequest
struct LinkGameCenterAccountRequest_tDBED4CD7330F5409D950EBEDF8FA2C8DDC546911;
// PlayFab.ClientModels.LinkGameCenterAccountResult
struct LinkGameCenterAccountResult_t647D19A9B79502ED157221910A1614E3F1D7D3BF;
// PlayFab.ClientModels.LinkGoogleAccountRequest
struct LinkGoogleAccountRequest_tA5203EA33908B8A3D2394CE795AA88DB598574DB;
// PlayFab.ClientModels.LinkGoogleAccountResult
struct LinkGoogleAccountResult_t596A08B9745E145CEFDADFA0E56063D3D00CBC78;
// PlayFab.ClientModels.LinkGooglePlayGamesServicesAccountRequest
struct LinkGooglePlayGamesServicesAccountRequest_t4270383DFD5F35D6B2F64FD7A991FC688AE6526C;
// PlayFab.ClientModels.LinkGooglePlayGamesServicesAccountResult
struct LinkGooglePlayGamesServicesAccountResult_tC37A276A9BFCA6363605956D660B3EE9632C3388;
// PlayFab.ClientModels.LinkIOSDeviceIDRequest
struct LinkIOSDeviceIDRequest_t3AD9F66E46AEC025EC5A5BDB1498F79BBF019175;
// PlayFab.ClientModels.LinkIOSDeviceIDResult
struct LinkIOSDeviceIDResult_tE942B412D48690F2CC586B2CC855EF661C95B4FC;
// PlayFab.ClientModels.LinkKongregateAccountRequest
struct LinkKongregateAccountRequest_t7799A47E023C84C2A094468997A37F9ECB7BCEC7;
// PlayFab.ClientModels.LinkKongregateAccountResult
struct LinkKongregateAccountResult_tAFE7D9B9BCC18083B4CDB5CFA61F960DAADD6BF8;
// PlayFab.ClientModels.LinkNintendoServiceAccountRequest
struct LinkNintendoServiceAccountRequest_tABB5C3BEAA7E4BD9C66753EB8E55A5D3D684DB6E;
// PlayFab.ClientModels.LinkNintendoSwitchDeviceIdRequest
struct LinkNintendoSwitchDeviceIdRequest_t797A16D441BB21AFDE5341E54954A1D992D4AF4C;
// PlayFab.ClientModels.LinkNintendoSwitchDeviceIdResult
struct LinkNintendoSwitchDeviceIdResult_t0EB5797B85E01D6D7A5D8059F6D041D1F14E645D;
// PlayFab.ClientModels.LinkOpenIdConnectRequest
struct LinkOpenIdConnectRequest_tF040FD89F84BACC7AC3E00A111457E05F413FC7C;
// PlayFab.ClientModels.LinkPSNAccountRequest
struct LinkPSNAccountRequest_tAD86DDC09E0704F6AF0489B4EE66B335D505C2CF;
// PlayFab.ClientModels.LinkPSNAccountResult
struct LinkPSNAccountResult_tD44785276C870B20241E65BFFA14D698BEC049D7;
// PlayFab.ClientModels.LinkSteamAccountRequest
struct LinkSteamAccountRequest_tBB6665529569D87319DF664D7EB1E444CE2D89E4;
// PlayFab.ClientModels.LinkSteamAccountResult
struct LinkSteamAccountResult_tAFCB32B4FB5C004D500CA25655AE4AB3446277D5;
// PlayFab.ClientModels.LinkTwitchAccountRequest
struct LinkTwitchAccountRequest_tDAAC83284F1560A202F78A1BADF487F9FD382A17;
// PlayFab.ClientModels.LinkTwitchAccountResult
struct LinkTwitchAccountResult_tC185948589359A8546F92AA06575DA6B24661EB8;
// PlayFab.ClientModels.LinkXboxAccountRequest
struct LinkXboxAccountRequest_tFE99D5422A8736251BF9D92D53D93F3CEB3EAF8E;
// PlayFab.ClientModels.LinkXboxAccountResult
struct LinkXboxAccountResult_tD83C17194A9B9F7222DE65604C58DE3B9AA49FDF;
// PlayFab.ClientModels.LinkedPlatformAccountModel
struct LinkedPlatformAccountModel_t1DA79542E08AB1A8DD40A2001C3A2A88CD136F25;
// PlayFab.ClientModels.ListUsersCharactersRequest
struct ListUsersCharactersRequest_tCF5408D5CA5D53886FC36DB99B07C82075EDCCD5;
// PlayFab.ClientModels.ListUsersCharactersResult
struct ListUsersCharactersResult_tCD7FD4A1E18258556F000EC213622028E1DE9AA3;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// PlayFab.ClientModels.LocationModel
struct LocationModel_t1DFBA1A2A4966887BCE78D3536B90613C246595A;
// PlayFab.ClientModels.LogStatement
struct LogStatement_t1817F7333FB8B5A212EC3EE93C17A94A92FD4D1E;
// PlayFab.ClientModels.LoginResult
struct LoginResult_tA8FAC976BB9AC98F055FB1BFFE740D450A957A8C;
// PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest
struct LoginWithAndroidDeviceIDRequest_t3A4C3D2EEA546EC82D997D95542CE9B57F59023B;
// PlayFab.ClientModels.LoginWithAppleRequest
struct LoginWithAppleRequest_t432803D69AD4E022823FD67331F9E6725929F600;
// PlayFab.ClientModels.LoginWithCustomIDRequest
struct LoginWithCustomIDRequest_t9E1E078798737A8AD48B46EC9C0AA65092C8B05B;
// PlayFab.ClientModels.LoginWithEmailAddressRequest
struct LoginWithEmailAddressRequest_t0D4A01BAE6DE0702B2BF796303B84ABDF575AD49;
// PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest
struct LoginWithFacebookInstantGamesIdRequest_t61431BD47D89224A04BD0D9D83D8641A7A605703;
// PlayFab.ClientModels.LoginWithFacebookRequest
struct LoginWithFacebookRequest_t9CA5170513098AA9DF2E2EE80A70D55C156DF5A3;
// PlayFab.ClientModels.LoginWithGameCenterRequest
struct LoginWithGameCenterRequest_t47DCB198B2366A518C7480ED1BEBF1306BBAD543;
// PlayFab.ClientModels.LoginWithGoogleAccountRequest
struct LoginWithGoogleAccountRequest_tF51EDE37EB36FFA7B25883424A588876FE031120;
// PlayFab.ClientModels.LoginWithGooglePlayGamesServicesRequest
struct LoginWithGooglePlayGamesServicesRequest_t10AFE0373B76927851BE9A1025302FD2CF44E0DA;
// PlayFab.ClientModels.LoginWithIOSDeviceIDRequest
struct LoginWithIOSDeviceIDRequest_tF8F87A2ED958950DD3929AB8ECFC6E7667F29A4F;
// PlayFab.ClientModels.LoginWithKongregateRequest
struct LoginWithKongregateRequest_t4AE23CFD1182E89A0CA8E547BB38E4ADA57B0FA5;
// PlayFab.ClientModels.LoginWithNintendoServiceAccountRequest
struct LoginWithNintendoServiceAccountRequest_tFA98602742349FC8F68FA91185CCCB322668DFB5;
// PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest
struct LoginWithNintendoSwitchDeviceIdRequest_t7D332789DC3FA24808B86CCB9C41A4400FD50C17;
// PlayFab.ClientModels.LoginWithOpenIdConnectRequest
struct LoginWithOpenIdConnectRequest_tA8725EDACB83059224A03B9091ADC186E9DF2BBE;
// PlayFab.ClientModels.LoginWithPSNRequest
struct LoginWithPSNRequest_tB200DF6D65ABEF9B55227AFC0648EA145B54012C;
// PlayFab.ClientModels.LoginWithPlayFabRequest
struct LoginWithPlayFabRequest_t40758FC97BA27124A414398D558989E3ADC1BEDB;
// PlayFab.ClientModels.LoginWithSteamRequest
struct LoginWithSteamRequest_t394F4FD07286ED05DDAB471F812FB6A471BF86C2;
// PlayFab.ClientModels.LoginWithTwitchRequest
struct LoginWithTwitchRequest_t015A772F0B539E3986E1DD2B0CA61F420BF436F1;
// PlayFab.ClientModels.LoginWithXboxRequest
struct LoginWithXboxRequest_tE59BFE96922B056F69FC761526E8EEFD9588D179;
// PlayFab.ClientModels.MatchmakeRequest
struct MatchmakeRequest_t5DF656F1E5EDDFEDAFBB4F95B4E6EB09BB209681;
// PlayFab.ClientModels.MatchmakeResult
struct MatchmakeResult_t91A455F1630FADD17929926ADFF7FDF7649DF3F2;
// PlayFab.ClientModels.MembershipModel
struct MembershipModel_t3C7C2B88E0688100FF4FE3F8DAF8D90E3D2FCEF2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// PlayFab.ClientModels.MicrosoftStorePayload
struct MicrosoftStorePayload_t06065D771429807DA9B8ADEE81B6E2219795C25E;
// Mono.Net.Security.MobileTlsProvider
struct MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017;
// PlayFab.ClientModels.ModifyUserVirtualCurrencyResult
struct ModifyUserVirtualCurrencyResult_tF894EC7B9796D1FAF729AFE3B51659784FDE7EF1;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0;
// System.MulticastDelegate
struct MulticastDelegate_t;
// PlayFab.ClientModels.NameIdentifier
struct NameIdentifier_tC463953295AF9517FB179D31BED70D412C5D144C;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// PlayFab.ClientModels.NintendoServiceAccountPlayFabIdPair
struct NintendoServiceAccountPlayFabIdPair_t31B8D8B6905F156B3F4B095613ADB0F1D4BCA0A9;
// PlayFab.ClientModels.NintendoSwitchPlayFabIdPair
struct NintendoSwitchPlayFabIdPair_t687B2A5829A336F37205F96BD81A5CA589CC1526;
// PlayFab.ClientModels.OpenTradeRequest
struct OpenTradeRequest_tA7910CAAFB97AB8643D279093230157EEA5CC4EE;
// PlayFab.ClientModels.OpenTradeResponse
struct OpenTradeResponse_t2CE0A33BD5DC0C64A948DFF6D5A513FAC50C1037;
// PlayFab.ClientModels.PSNAccountPlayFabIdPair
struct PSNAccountPlayFabIdPair_t5F266A64CD3768182B54DF5D9B1D5E058DF33865;
// PlayFab.ClientModels.PayForPurchaseRequest
struct PayForPurchaseRequest_t5BFF248C9CB1FF6730145725A875A8328B4FB1A6;
// PlayFab.ClientModels.PayForPurchaseResult
struct PayForPurchaseResult_t5E1B46A891BDD3D780DC2009E8922EA88BD69FFD;
// PlayFab.ClientModels.PaymentOption
struct PaymentOption_t1D243751621312CFA26FA5E4B3D4AB9480938CDF;
// PlayFab.PlayFabApiSettings
struct PlayFabApiSettings_tA64AE28AC2930D2710835FCD401A4212558752D1;
// PlayFab.PlayFabAuthenticationContext
struct PlayFabAuthenticationContext_t221B79722A7A90BF01896A080CB0488FC0A9971A;
// PlayFab.SharedModels.PlayFabBaseModel
struct PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E;
// PlayFab.PlayFabError
struct PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23;
// PlayFab.Internal.PlayFabHttp
struct PlayFabHttp_t368B793060DC7677E3ADB9712686BAB6A596CEE2;
// PlayFab.SharedModels.PlayFabLoginResultCommon
struct PlayFabLoginResultCommon_t564463F743BE39995D6BBD360F222C16FB74AA47;
// PlayFab.SharedModels.PlayFabRequestCommon
struct PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D;
// PlayFab.SharedModels.PlayFabResultCommon
struct PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40;
// PlayFab.Internal.PlayFabWebRequest
struct PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863;
// PlayFab.ClientModels.PlayStation5Payload
struct PlayStation5Payload_tAFC96038092FCE7BE6749D798C481EBDA45A174D;
// PlayFab.ClientModels.PlayerLeaderboardEntry
struct PlayerLeaderboardEntry_tCFF8F31BA39EE8CAD577AC4938DDE619E6EE66A9;
// PlayFab.ClientModels.PlayerProfileModel
struct PlayerProfileModel_tEF2149D2652DD0B25B5250F8037A276739D1414A;
// PlayFab.ClientModels.PlayerProfileViewConstraints
struct PlayerProfileViewConstraints_t2D0216E216CDBEDAD806C569D17795B60FB7C550;
// PlayFab.ClientModels.PlayerStatisticVersion
struct PlayerStatisticVersion_tC0C529357C21A063B8C3F4FBBC5D412EAA3C7372;
// PlayFab.ClientModels.PurchaseItemRequest
struct PurchaseItemRequest_tE070606E4EAD464357558E48126C4734D2F7C506;
// PlayFab.ClientModels.PurchaseItemResult
struct PurchaseItemResult_t0F98838DD4B9DD95771031D96FD60D88597D764D;
// PlayFab.ClientModels.PurchaseReceiptFulfillment
struct PurchaseReceiptFulfillment_t186B9940CFED13815A2AEAC5253A2C9D4F9E6B50;
// PlayFab.ClientModels.PushNotificationRegistrationModel
struct PushNotificationRegistrationModel_t35ACE788D79DDE73C44F51819BBAC6214F267B26;
// PlayFab.ClientModels.RedeemCouponRequest
struct RedeemCouponRequest_t5675549F914957105DF0F1092BF4D9B9C2C8D1F2;
// PlayFab.ClientModels.RedeemCouponResult
struct RedeemCouponResult_tF194CA6CCFDD39047866D5A32510C64B4F1C45E7;
// PlayFab.ClientModels.RefreshPSNAuthTokenRequest
struct RefreshPSNAuthTokenRequest_tAF960E83D3F69FFE09A341DF66DE48E0DE3D47A9;
// PlayFab.ClientModels.RegionInfo
struct RegionInfo_t742920284384CB9F5B77AA896624869218F923F8;
// PlayFab.ClientModels.RegisterForIOSPushNotificationRequest
struct RegisterForIOSPushNotificationRequest_tAE58EB678D907A970C184A4A2FD2E9E75B3BE391;
// PlayFab.ClientModels.RegisterForIOSPushNotificationResult
struct RegisterForIOSPushNotificationResult_t3590642F3B094B5C4E1D094CBBC71D264CF28A8C;
// PlayFab.ClientModels.RegisterPlayFabUserRequest
struct RegisterPlayFabUserRequest_t9CCD4AA2142B94AA94D4F809486BB925E4EBEC4D;
// PlayFab.ClientModels.RegisterPlayFabUserResult
struct RegisterPlayFabUserResult_t9F7AF721561FB1E6C2D0F04CF3E38EB80F39300E;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955;
// PlayFab.ClientModels.RemoveContactEmailRequest
struct RemoveContactEmailRequest_tE33A6A7E8163B419221F72305702BE6A72B5D058;
// PlayFab.ClientModels.RemoveContactEmailResult
struct RemoveContactEmailResult_t47A953EF532A4E6723358B699AD09F5B209280AE;
// PlayFab.ClientModels.RemoveFriendRequest
struct RemoveFriendRequest_t65DE6114B83F043B5D00AA3EADA456C1A640ED0C;
// PlayFab.ClientModels.RemoveFriendResult
struct RemoveFriendResult_t4D4C4DC05B609FF8C9F5758656C3ED678646A4A8;
// PlayFab.ClientModels.RemoveGenericIDRequest
struct RemoveGenericIDRequest_t334BD9293954FD10CECEF754B959B6CB03873601;
// PlayFab.ClientModels.RemoveGenericIDResult
struct RemoveGenericIDResult_tEE02A4C18E83ACE22323711023D49D1EEDC93D02;
// PlayFab.ClientModels.RemoveSharedGroupMembersRequest
struct RemoveSharedGroupMembersRequest_t672B79755C84F7963F0197AC7F649DFB47BE62D4;
// PlayFab.ClientModels.RemoveSharedGroupMembersResult
struct RemoveSharedGroupMembersResult_t9F15AE0E2590B802799C461D364AEC2F41C87EF3;
// PlayFab.ClientModels.ReportAdActivityRequest
struct ReportAdActivityRequest_tF280F9F16376E09CA24C97A15524A57355362D19;
// PlayFab.ClientModels.ReportAdActivityResult
struct ReportAdActivityResult_t1C560F4635F86A0C40F5325FE39CB7FBE1DE1F9A;
// PlayFab.ClientModels.ReportPlayerClientRequest
struct ReportPlayerClientRequest_t85D945417F8AD84B449F05E00BAE283608DDBDA4;
// PlayFab.ClientModels.ReportPlayerClientResult
struct ReportPlayerClientResult_t241E6D96E47D8719B56EFC690FD0F6CB76205BF8;
// System.Net.Cache.RequestCacheBinding
struct RequestCacheBinding_t18F3F4FF8D0F77E86C2C666CEE7FD48A80C042EE;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550;
// System.Net.Cache.RequestCacheProtocol
struct RequestCacheProtocol_t43C1AC170194874A0C0B0D3B8BE9EABFB613DF85;
// PlayFab.ClientModels.RestoreIOSPurchasesRequest
struct RestoreIOSPurchasesRequest_t000097A3FD2F14C3F4F4DEBA527033F0BD3EF56E;
// PlayFab.ClientModels.RestoreIOSPurchasesResult
struct RestoreIOSPurchasesResult_tEA0A385A03BA6A9080C82D126B97BB62C9C22375;
// PlayFab.ClientModels.RewardAdActivityRequest
struct RewardAdActivityRequest_tE9341F9C11C66589454A65BB945DD2E86C078BB7;
// PlayFab.ClientModels.RewardAdActivityResult
struct RewardAdActivityResult_t94A00EAF9EE41752255A4673EF0E25B45E51117A;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// PlayFab.ClientModels.ScriptExecutionError
struct ScriptExecutionError_t15D016342B1D7DCF38FB8401037A2E748BF58785;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// PlayFab.ClientModels.SendAccountRecoveryEmailRequest
struct SendAccountRecoveryEmailRequest_t175EB9B99FA2F2D019EA567249BBAA92033021B1;
// PlayFab.ClientModels.SendAccountRecoveryEmailResult
struct SendAccountRecoveryEmailResult_tD397DE2B4C711854DDCC6CD65878726990E83350;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Net.ServerCertValidationCallback
struct ServerCertValidationCallback_tC7A568060163FC6810AF9817F26F986C78CFC27F;
// System.Net.ServicePoint
struct ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29;
// PlayFab.ClientModels.SetFriendTagsRequest
struct SetFriendTagsRequest_tB1697AECA1FFB648EF0E49EE1E32A8DFF64F1172;
// PlayFab.ClientModels.SetFriendTagsResult
struct SetFriendTagsResult_t3FB32FF008D7F79F4468EA6DA4C920327F49E13F;
// PlayFab.ClientModels.SetPlayerSecretRequest
struct SetPlayerSecretRequest_t155B28C6752FE84EE84726EECAB2789B76F80CFE;
// PlayFab.ClientModels.SetPlayerSecretResult
struct SetPlayerSecretResult_t0F0A2B0A39F5311D0B7DB58A08704B54D5E78F8C;
// PlayFab.ClientModels.SharedGroupDataRecord
struct SharedGroupDataRecord_t6EABB17CCB23C3B14A9F2A29E1C0B06308DE22EB;
// PlayFab.ClientModels.StartPurchaseRequest
struct StartPurchaseRequest_tC40028ED224835E5869E8741528AFD27A5B3B497;
// PlayFab.ClientModels.StartPurchaseResult
struct StartPurchaseResult_t5AE695449ACBCC8CA93186640E203802B1E0B70F;
// PlayFab.ClientModels.StatisticModel
struct StatisticModel_tB2ED71209F882A61E023E593485AC3CBE7354CBD;
// PlayFab.ClientModels.StatisticNameVersion
struct StatisticNameVersion_t6435F7DD4C0291DA496DE0389D2E5A4FC161BCDE;
// PlayFab.ClientModels.StatisticUpdate
struct StatisticUpdate_tFF1ABF7B0BF17840014AAC48D4470605441B5D34;
// PlayFab.ClientModels.StatisticValue
struct StatisticValue_t41732BCF004BE4378AE04A44F6410E992855FB24;
// PlayFab.ClientModels.SteamPlayFabIdPair
struct SteamPlayFabIdPair_tFECA16BBF2AA75081EC51F9BF796DB77F7522E18;
// PlayFab.ClientModels.StoreItem
struct StoreItem_tADBFD4037B803EBC8EC6E38BA1FC7229FB63E71F;
// PlayFab.ClientModels.StoreMarketingModel
struct StoreMarketingModel_t4AF761FD531E9A70AC9BF74380D0485A2F5DE95F;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// PlayFab.ClientModels.SubscriptionModel
struct SubscriptionModel_tE2460B7EA43E4F7761842C8E495DA045317FE5FF;
// PlayFab.ClientModels.SubtractUserVirtualCurrencyRequest
struct SubtractUserVirtualCurrencyRequest_t9EF5A4F8756E1C85E4DC210B659F064376422BD5;
// PlayFab.ClientModels.TagModel
struct TagModel_tA73EAC7F011DDE0C0433781A0E207DEFD3971740;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// PlayFab.ClientModels.TitleNewsItem
struct TitleNewsItem_t3FF911671D0CBBBC29FE3B156BD2CBFAA8E0E5B7;
// PlayFab.ClientModels.TradeInfo
struct TradeInfo_tBE9088C4A58089296E230210566577FD2AEEEE07;
// PlayFab.ClientModels.TreatmentAssignment
struct TreatmentAssignment_t3AAA5D796B6551BDF72B95A132BE5FE93F1FD99A;
// PlayFab.ClientModels.TwitchPlayFabIdPair
struct TwitchPlayFabIdPair_tF6965786D5E8E95243A21420C5A3CAF7A1A50320;
// PlayFab.ClientModels.UnlinkAndroidDeviceIDRequest
struct UnlinkAndroidDeviceIDRequest_tDEB5EEAC89390106CECE2C514E3B9FF6F9F72D9E;
// PlayFab.ClientModels.UnlinkAndroidDeviceIDResult
struct UnlinkAndroidDeviceIDResult_t1A883DF782BD48500607B480852AA2537F4F3327;
// PlayFab.ClientModels.UnlinkAppleRequest
struct UnlinkAppleRequest_t92C5AB52E8736CCA3D8DE4841B1BDB8F7FB83222;
// PlayFab.ClientModels.UnlinkCustomIDRequest
struct UnlinkCustomIDRequest_t46E020211057E7653AFE02D26F44F9E130D30521;
// PlayFab.ClientModels.UnlinkCustomIDResult
struct UnlinkCustomIDResult_t233F6432A9B50B2D68E3C568F574F4FA2D7BB60C;
// PlayFab.ClientModels.UnlinkFacebookAccountRequest
struct UnlinkFacebookAccountRequest_tA7E318BFED129D19D58FA04FD6FBF6B7ADF85928;
// PlayFab.ClientModels.UnlinkFacebookAccountResult
struct UnlinkFacebookAccountResult_t64890736BCF70AA84E14FBABA25758E9554324B1;
// PlayFab.ClientModels.UnlinkFacebookInstantGamesIdRequest
struct UnlinkFacebookInstantGamesIdRequest_t4B257DB75AFEEF708F6D5AC2C3BB1D09740F6C9C;
// PlayFab.ClientModels.UnlinkFacebookInstantGamesIdResult
struct UnlinkFacebookInstantGamesIdResult_tA3C0ECA8433D6677C4BB580C8589346222E32D43;
// PlayFab.ClientModels.UnlinkGameCenterAccountRequest
struct UnlinkGameCenterAccountRequest_t9596E9FC71D85C48FFF699F2AD829A3D0DEA901A;
// PlayFab.ClientModels.UnlinkGameCenterAccountResult
struct UnlinkGameCenterAccountResult_t6F0C5BCEB35453E4CA8E05A31D654A782BC5E95F;
// PlayFab.ClientModels.UnlinkGoogleAccountRequest
struct UnlinkGoogleAccountRequest_t67E73532283D56ED37F1E9F1289FDE4BE84967CC;
// PlayFab.ClientModels.UnlinkGoogleAccountResult
struct UnlinkGoogleAccountResult_t6622EFB999584E5DEC5DEB93D2935D979FBE846C;
// PlayFab.ClientModels.UnlinkGooglePlayGamesServicesAccountRequest
struct UnlinkGooglePlayGamesServicesAccountRequest_t2F717932AF82E7668AA9724038C2A9F2229F7872;
// PlayFab.ClientModels.UnlinkGooglePlayGamesServicesAccountResult
struct UnlinkGooglePlayGamesServicesAccountResult_t5C6E7A2299B43C75BA9B8680100BF966FCE31270;
// PlayFab.ClientModels.UnlinkIOSDeviceIDRequest
struct UnlinkIOSDeviceIDRequest_t1EE4B2AFE9CE7D0849D68EF258CADFB476EA53CA;
// PlayFab.ClientModels.UnlinkIOSDeviceIDResult
struct UnlinkIOSDeviceIDResult_t4596D43010D9025839A9679C5DB058CBBF794AE9;
// PlayFab.ClientModels.UnlinkKongregateAccountRequest
struct UnlinkKongregateAccountRequest_t2FEFF816F15AEF0C241926B63004694A5FC6FD87;
// PlayFab.ClientModels.UnlinkKongregateAccountResult
struct UnlinkKongregateAccountResult_tAB392A5AFFF5D1FDF901F514F11D3AD3B6021CC8;
// PlayFab.ClientModels.UnlinkNintendoServiceAccountRequest
struct UnlinkNintendoServiceAccountRequest_t06B51402344303DA405A305B5B1F9A54C9145C84;
// PlayFab.ClientModels.UnlinkNintendoSwitchDeviceIdRequest
struct UnlinkNintendoSwitchDeviceIdRequest_t35F44CBF87CFC802E5C568E898E4E203B3659A11;
// PlayFab.ClientModels.UnlinkNintendoSwitchDeviceIdResult
struct UnlinkNintendoSwitchDeviceIdResult_tC9E5AD9A628AFDDD3DC1E3A2463C9A53307DFCD8;
// PlayFab.ClientModels.UnlinkOpenIdConnectRequest
struct UnlinkOpenIdConnectRequest_t307BC82317C8730161E40EFDED957CF2A68E0799;
// PlayFab.ClientModels.UnlinkPSNAccountRequest
struct UnlinkPSNAccountRequest_t1060A17C5A70C60683D7F133E1ABBC8408A63EE3;
// PlayFab.ClientModels.UnlinkPSNAccountResult
struct UnlinkPSNAccountResult_t72E4629A6FCA43E0C5BAA9E2EE059A5E756096E7;
// PlayFab.ClientModels.UnlinkSteamAccountRequest
struct UnlinkSteamAccountRequest_t2876EA45B25D6F400BBB61DE5AC76A15EBAF02AA;
// PlayFab.ClientModels.UnlinkSteamAccountResult
struct UnlinkSteamAccountResult_t0B0222CF28C08B53406C9B62FBA815C7C3AEE74E;
// PlayFab.ClientModels.UnlinkTwitchAccountRequest
struct UnlinkTwitchAccountRequest_tE5BE128D46C7D5CCEE7B97DEEEC5CA2526CFCCE2;
// PlayFab.ClientModels.UnlinkTwitchAccountResult
struct UnlinkTwitchAccountResult_tD82751FFBDC681DE0BB88D43A2C9298CCF0D8AA4;
// PlayFab.ClientModels.UnlinkXboxAccountRequest
struct UnlinkXboxAccountRequest_t8E27CE0799DF36ECD984F4ED8DE17ED3657AE57E;
// PlayFab.ClientModels.UnlinkXboxAccountResult
struct UnlinkXboxAccountResult_tE2D65912D4AB4D5E32CA3561994FF8654DE07F7E;
// PlayFab.ClientModels.UnlockContainerInstanceRequest
struct UnlockContainerInstanceRequest_tB7E4282214EEE56EF6DDA6CC5C4C8780F8C0FC94;
// PlayFab.ClientModels.UnlockContainerItemRequest
struct UnlockContainerItemRequest_t820D81CB38D610CB71E1F56DC332E45B4B518ABC;
// PlayFab.ClientModels.UnlockContainerItemResult
struct UnlockContainerItemResult_t35CFBDF59A70BE18F28D78CCF1E3FBFC0878ECF7;
// PlayFab.ClientModels.UpdateAvatarUrlRequest
struct UpdateAvatarUrlRequest_t72A827E07538C3CD5BA65A04CDAFE440BFE37040;
// PlayFab.ClientModels.UpdateCharacterDataRequest
struct UpdateCharacterDataRequest_t1A476F394AE1FFF66454B7F95C6530097CDF706A;
// PlayFab.ClientModels.UpdateCharacterDataResult
struct UpdateCharacterDataResult_tAB9AAEEA9FE8658FC10180393C742EA1E50401BE;
// PlayFab.ClientModels.UpdateCharacterStatisticsRequest
struct UpdateCharacterStatisticsRequest_tE19059CA8705B365B5C50F31FCD9EF302D50F02F;
// PlayFab.ClientModels.UpdateCharacterStatisticsResult
struct UpdateCharacterStatisticsResult_t3F6EF334C142A8BC10FBA7320DDB57FA6BB0952A;
// PlayFab.ClientModels.UpdatePlayerStatisticsRequest
struct UpdatePlayerStatisticsRequest_t5B474D977EE17B8842BF33DF9E60B09281F2A496;
// PlayFab.ClientModels.UpdatePlayerStatisticsResult
struct UpdatePlayerStatisticsResult_tF1D48A2D96A003AFCDDE4DB38B179461B3E63E09;
// PlayFab.ClientModels.UpdateSharedGroupDataRequest
struct UpdateSharedGroupDataRequest_t770268D7040E97EEF614E28201FBA15B27F07ABC;
// PlayFab.ClientModels.UpdateSharedGroupDataResult
struct UpdateSharedGroupDataResult_tC2A0B472A61723265334227D8BA7EE580C3D7DD9;
// PlayFab.ClientModels.UpdateUserDataRequest
struct UpdateUserDataRequest_t00F2203E748C9D0B33E3CC673EAB649EB2B5662A;
// PlayFab.ClientModels.UpdateUserDataResult
struct UpdateUserDataResult_t23060B0433CB78E7CECEDFC3F7D63B91E051A74B;
// PlayFab.ClientModels.UpdateUserTitleDisplayNameRequest
struct UpdateUserTitleDisplayNameRequest_t7A00322DBF953F51971F85914E1F5B8B75CC8E1C;
// PlayFab.ClientModels.UpdateUserTitleDisplayNameResult
struct UpdateUserTitleDisplayNameResult_t624047AEE8BB730C8B15D244261478F5A65DF950;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// PlayFab.ClientModels.UserAccountInfo
struct UserAccountInfo_t1BF8B02028A765033899EE9940C15383AEF2726A;
// PlayFab.ClientModels.UserAndroidDeviceInfo
struct UserAndroidDeviceInfo_tF7DC5DEEEC9611A18C44C582A421C87EFAF143E7;
// PlayFab.ClientModels.UserAppleIdInfo
struct UserAppleIdInfo_tC957F5FCFCA8C6C4EA5ABB763DF6EAE0A83A00B5;
// PlayFab.ClientModels.UserCustomIdInfo
struct UserCustomIdInfo_tF34BF320AEE125010D3D390BE3019CF6074D15AB;
// PlayFab.ClientModels.UserDataRecord
struct UserDataRecord_tE7E165155A91F4CDC8FA7068664F554198EE0F45;
// PlayFab.ClientModels.UserFacebookInfo
struct UserFacebookInfo_t25341AA794CE37708FF857832B3D40C31005F859;
// PlayFab.ClientModels.UserFacebookInstantGamesIdInfo
struct UserFacebookInstantGamesIdInfo_t4AA586B3DB010191CA46294964526B9C6BD0DEFA;
// PlayFab.ClientModels.UserGameCenterInfo
struct UserGameCenterInfo_tF3E4DC8FCE46154B31494ABC83FF654AB1CE2C42;
// PlayFab.ClientModels.UserGoogleInfo
struct UserGoogleInfo_t375C252AF8732A3B29CC0ACA458788F57705CD16;
// PlayFab.ClientModels.UserGooglePlayGamesInfo
struct UserGooglePlayGamesInfo_tF42B79157DF36B2D327573D632CFB3CD62B0BBB8;
// PlayFab.ClientModels.UserIosDeviceInfo
struct UserIosDeviceInfo_tB0E4BB1232D6B58F35B0BD7730E967E50B25ACDD;
// PlayFab.ClientModels.UserKongregateInfo
struct UserKongregateInfo_t81FAC344B4B42B3689F7F42D355D8BE667E5B3BD;
// PlayFab.ClientModels.UserNintendoSwitchAccountIdInfo
struct UserNintendoSwitchAccountIdInfo_tBD867A24EE34BA9F1E516FC85B3D1E8BCC108F13;
// PlayFab.ClientModels.UserNintendoSwitchDeviceIdInfo
struct UserNintendoSwitchDeviceIdInfo_t53FA7FEB383F7C94C8DF61E423E3049ADF135388;
// PlayFab.ClientModels.UserOpenIdInfo
struct UserOpenIdInfo_t1243706E2AA47FF74B9FEF1FF537454B0D48FFE3;
// PlayFab.ClientModels.UserPrivateAccountInfo
struct UserPrivateAccountInfo_t91F7AE36BB4FCCB4CC40C6B6027F6BFC034D50A2;
// PlayFab.ClientModels.UserPsnInfo
struct UserPsnInfo_t8A71B58419169BBDA2512C61AB4D75B25CE15EAB;
// PlayFab.ClientModels.UserSettings
struct UserSettings_t53FD23BFE7D67CB8C0FA3FFB5F2FC733DA2D22E0;
// PlayFab.ClientModels.UserSteamInfo
struct UserSteamInfo_t9683A2E6234656912ED104E9AC9C9C6857CE23EA;
// PlayFab.ClientModels.UserTitleInfo
struct UserTitleInfo_tB92EBF892AF2FE961FBA3C279C86C5A4E6E17821;
// PlayFab.ClientModels.UserTwitchInfo
struct UserTwitchInfo_t4C6ECD3CCCCE4C62C7CB6F454D1ED64EDD3FE431;
// PlayFab.ClientModels.UserXboxInfo
struct UserXboxInfo_t43AC22B8C788C2E29748D1882F26FFFD82150C0D;
// PlayFab.ClientModels.ValidateAmazonReceiptRequest
struct ValidateAmazonReceiptRequest_t02C6A572352CCE41AE720F9A8BE4FD47A4F30243;
// PlayFab.ClientModels.ValidateAmazonReceiptResult
struct ValidateAmazonReceiptResult_tBDAAEA70544881D3EC12AB8B21812EAF164F25CF;
// PlayFab.AuthenticationModels.ValidateEntityTokenRequest
struct ValidateEntityTokenRequest_t208B61B7A774BBC7B3CD46D9296ED0BC848DEA3B;
// PlayFab.AuthenticationModels.ValidateEntityTokenResponse
struct ValidateEntityTokenResponse_t3BF0DD16B7B0A2D37AF6A38E77CE63119EFCF7AE;
// PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest
struct ValidateGooglePlayPurchaseRequest_t19A3C53B5E1DE3BB7A655D929A41D5BED28AA50C;
// PlayFab.ClientModels.ValidateGooglePlayPurchaseResult
struct ValidateGooglePlayPurchaseResult_t94C27521EBF7C2B9547D9157FE0BAACBAA9FFB6C;
// PlayFab.ClientModels.ValidateIOSReceiptRequest
struct ValidateIOSReceiptRequest_t0FF3109216309862E61A7EC51269B623E98507F4;
// PlayFab.ClientModels.ValidateIOSReceiptResult
struct ValidateIOSReceiptResult_t7B8E9C32E11CF69C0F1644A9E70227BED479112C;
// PlayFab.ClientModels.ValidateWindowsReceiptRequest
struct ValidateWindowsReceiptRequest_t1925F0B1023AD2B5E54130D6903DB577AEC6D4C7;
// PlayFab.ClientModels.ValidateWindowsReceiptResult
struct ValidateWindowsReceiptResult_t5DFEC0D218EF949D252DFBC431EB81917AA436BC;
// PlayFab.ClientModels.ValueToDateModel
struct ValueToDateModel_t98B3C39B5FDB48BC22F6DFBE4839E6DFD03BB9FE;
// PlayFab.ClientModels.Variable
struct Variable_tDCD6D1358DFF185712A375020E6EA7576EB437E7;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// PlayFab.ClientModels.VirtualCurrencyRechargeTime
struct VirtualCurrencyRechargeTime_tD4B80CB3526B0CD22262886E3372D8A023D6CAA2;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.WebCompletionSource
struct WebCompletionSource_tA2A9E04ED689218A1B2FAFCFD8F358CE4CBD30C5;
// System.Net.WebException
struct WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8;
// System.Net.WebOperation
struct WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9;
// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B;
// System.Net.WebRequestStream
struct WebRequestStream_t731AE4852452BAA73C240BDC7DCBA42ADAD2BAAB;
// System.Net.WebResponse
struct WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682;
// PlayFab.ClientModels.WriteClientCharacterEventRequest
struct WriteClientCharacterEventRequest_t4B18CB6D5C5242AFA1B48ADFF7593381C1335ED3;
// PlayFab.ClientModels.WriteClientPlayerEventRequest
struct WriteClientPlayerEventRequest_tA95320423AC8066CD76C9C400278514D14E856DA;
// PlayFab.ClientModels.WriteEventResponse
struct WriteEventResponse_tCF2011905F8F5EFF4360597D91EDAF4C4AA3F116;
// PlayFab.ClientModels.WriteTitleEventRequest
struct WriteTitleEventRequest_t8F544A3D1AC64FE08CD1E18FF967FC84FBEFE4A3;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5;
// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F;
// PlayFab.ClientModels.XboxLiveAccountPlayFabIdPair
struct XboxLiveAccountPlayFabIdPair_t409FF6972AF23BC564AA53174AAEDDECAEC9F6DE;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2;
// PlayFab.Events.PlayFabEvents/PlayFabErrorEvent
struct PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3;
// PlayFab.Internal.PlayFabHttp/ApiProcessErrorEvent
struct ApiProcessErrorEvent_tAB2563254C371E2B33F894333DBDDCA46BC2B5A6;
// PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789;
// PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD;
// PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06;
// PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92;
// PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Net.TimerThread/Queue
struct Queue_t644DC21212BC432819522EDA395EB4562BE2CC47;
// System.Net.WebRequest/DesignerWebRequestCreate
struct DesignerWebRequestCreate_t75F62E4DEBF416E21EAF6FBB62E43ADB83A0753E;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISerializerPlugin_tB1E1A4440F7B43AE85D8B29B95AFBE9852029C62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayFabHttp_t368B793060DC7677E3ADB9712686BAB6A596CEE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayFabSettings_t30A10F424DF4CB2CE2664301E025BD0C3D5B7C51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PluginManager_t808323586B608823653190D949106EF945AA1AC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebExceptionStatus_t86B29EE86F8C7D20D1825C71503F0473C43B4B92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0148158FF48219C8E8DD90DFA6A3C023A0261547;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral069F35026B6BCCA2BB8BA259FC9436261EEB0459;
IL2CPP_EXTERN_C String_t* _stringLiteral0B91D7034A4D1EC8C9039891209967DF738DB375;
IL2CPP_EXTERN_C String_t* _stringLiteral0C5C2017CE5797EC5DD58BA9DFC6CC62B33ED289;
IL2CPP_EXTERN_C String_t* _stringLiteral0E936BC84446C9F69C3F58175DC76161F7591AF7;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral1BD65742F210C0596EB07708EBD8DBCEFA36FAF3;
IL2CPP_EXTERN_C String_t* _stringLiteral245F4D61EEEFF6D0546760C8CCC6282CC669231A;
IL2CPP_EXTERN_C String_t* _stringLiteral25075B588D83D27D9411DFE8170C33D085CF2547;
IL2CPP_EXTERN_C String_t* _stringLiteral2E6FA5C849AB45DB7E04304231F76394AF579ACD;
IL2CPP_EXTERN_C String_t* _stringLiteral306672BBE62849A62311872D53806EBDA8256524;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral53B06C7610329A6CA8970A5B5CF9840CA1B35FCD;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral677D59695ED3C80ADA513405D766F44E03B73445;
IL2CPP_EXTERN_C String_t* _stringLiteral679701020D660D0FB2A6D6F31EDB552EDB4A91D8;
IL2CPP_EXTERN_C String_t* _stringLiteral6A69B335567D4DF389E8E5DE65DA9F5A8E6542F8;
IL2CPP_EXTERN_C String_t* _stringLiteral74B91476B669B38A581258CA075559C1938AB08C;
IL2CPP_EXTERN_C String_t* _stringLiteral994AD2AD3D2E81FA85CEFF3E97D2780A39BB7500;
IL2CPP_EXTERN_C String_t* _stringLiteral9A83F57C00932DA1D345C01E65E7CF0EAB0725BC;
IL2CPP_EXTERN_C String_t* _stringLiteral9AFFCDBEEE2F5078EF6E4BCC6F451A5A5E596521;
IL2CPP_EXTERN_C String_t* _stringLiteralB37F76745C8EF5ACC6C7E6770CE02526DE4D0756;
IL2CPP_EXTERN_C String_t* _stringLiteralC6C0C96F1D7ADF0E4C7FBEDC6B831F35B42FE09C;
IL2CPP_EXTERN_C String_t* _stringLiteralD31B70969B50FA442E9EF973C99F63C2559D3481;
IL2CPP_EXTERN_C String_t* _stringLiteralDA2A997DD0819AE41C382B1BC929DE1F4855C126;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF6B9737206257D24874F24E888EA1B1F661B9CA;
IL2CPP_EXTERN_C String_t* _stringLiteralED45F4AF48C69346087C97D466BF405E270AABE2;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISerializerPlugin_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m22ACF819CB7215CFCB8465E731B0FFA6B91EC6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISerializerPlugin_DeserializeObject_TisHttpResponseObject_t5E8A588B1281C0BD1F1DF73FDA1EF9867EB85271_m315B6A993EC6406591E61EC211E212F66097DE53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m1AAEB0989E2CC4BD238D01829F89E295726F8B78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4345FDA5CC3F67B61065716CCCE34400989F9A2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m9F23E733CD984628272E7E41351CA1CD9DE2DE78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mEC9F829D7539D4577A9647002A8989CC608A2577_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m82576545D74FF830428AFD8BFE2B7C3F3B0EA4BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9665CF465A295E34CC62D3F9D5B95079F135B395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1BEA5BBBD4A8D9AE83829DACC9A31896D7C2D7B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayFabWebRequest_AcceptAllCertifications_m9C71DE8BC96AB00B11061D3C8D4F38C248FED532_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayFabWebRequest_SimpleHttpsWorker_m4057D81AB38B9FD56F0558E8CCE1EC19284A6983_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayFabWebRequest_WorkerThreadMainLoop_mAF6EA60E58ED95EAC3D0FD08BD8814051CCCB171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PluginManager_GetPlugin_TisISerializerPlugin_tB1E1A4440F7B43AE85D8B29B95AFBE9852029C62_mCA8B3C31B813B966C86F7CF11569F498716E292E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_mF64267E0006F20E5E3029290482ABD8CDF9ADD5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1_get_instance_mE8325C33FB36C03CF943C3317FF54FC569508E68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CSimpleGetCallU3Eb__0_m52BAEE923AEFFA46007EBC6B112450CCF27368D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3CSimplePutCallU3Eb__0_m122A62590140D769201F9EA404FF043F1DA87FED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass23_0_U3CSimplePostCallU3Eb__0_m8B11C6F54DCCEA736C23C33C7D9B2D52CBC3B417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass30_0_U3CQueueRequestErrorU3Eb__0_m678EB9595C71DBB62634561ED5E3CAAE27652FFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3CProcessJsonResponseU3Eb__0_m8AB12C4FE5E8CA40D356CEE157ADCFE1E287D432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3CProcessJsonResponseU3Eb__1_m30C0FD0874F571A1F1C241939755916FAD9B5BAD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<PlayFab.Internal.CallRequestContainer>
struct List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CallRequestContainerU5BU5D_t6494DA636DD389350FC1AC53F4348565552E8C84* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CallRequestContainerU5BU5D_t6494DA636DD389350FC1AC53F4348565552E8C84* ___s_emptyArray_5;
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

// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// PlayFab.Internal.CallRequestContainer
struct CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090  : public RuntimeObject
{
	// PlayFab.Internal.HttpRequestState PlayFab.Internal.CallRequestContainer::HttpState
	int32_t ___HttpState_0;
	// System.Net.HttpWebRequest PlayFab.Internal.CallRequestContainer::HttpRequest
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___HttpRequest_1;
	// System.String PlayFab.Internal.CallRequestContainer::ApiEndpoint
	String_t* ___ApiEndpoint_2;
	// System.String PlayFab.Internal.CallRequestContainer::FullUrl
	String_t* ___FullUrl_3;
	// System.Byte[] PlayFab.Internal.CallRequestContainer::Payload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Payload_4;
	// System.String PlayFab.Internal.CallRequestContainer::JsonResponse
	String_t* ___JsonResponse_5;
	// PlayFab.SharedModels.PlayFabRequestCommon PlayFab.Internal.CallRequestContainer::ApiRequest
	PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___ApiRequest_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.Internal.CallRequestContainer::RequestHeaders
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___RequestHeaders_7;
	// PlayFab.SharedModels.PlayFabResultCommon PlayFab.Internal.CallRequestContainer::ApiResult
	PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40* ___ApiResult_8;
	// PlayFab.PlayFabError PlayFab.Internal.CallRequestContainer::Error
	PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___Error_9;
	// System.Action PlayFab.Internal.CallRequestContainer::DeserializeResultJson
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___DeserializeResultJson_10;
	// System.Action PlayFab.Internal.CallRequestContainer::InvokeSuccessCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InvokeSuccessCallback_11;
	// System.Action`1<PlayFab.PlayFabError> PlayFab.Internal.CallRequestContainer::ErrorCallback
	Action_1_t795ED1F4E6C6EEAB7072001CFF691E4CC2F7DF93* ___ErrorCallback_12;
	// System.Object PlayFab.Internal.CallRequestContainer::CustomData
	RuntimeObject* ___CustomData_13;
	// PlayFab.PlayFabApiSettings PlayFab.Internal.CallRequestContainer::settings
	PlayFabApiSettings_tA64AE28AC2930D2710835FCD401A4212558752D1* ___settings_14;
	// PlayFab.PlayFabAuthenticationContext PlayFab.Internal.CallRequestContainer::context
	PlayFabAuthenticationContext_t221B79722A7A90BF01896A080CB0488FC0A9971A* ___context_15;
	// PlayFab.SharedModels.IPlayFabInstanceApi PlayFab.Internal.CallRequestContainer::instanceApi
	RuntimeObject* ___instanceApi_16;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// PlayFab.SharedModels.HttpResponseObject
struct HttpResponseObject_t5E8A588B1281C0BD1F1DF73FDA1EF9867EB85271  : public RuntimeObject
{
	// System.Int32 PlayFab.SharedModels.HttpResponseObject::code
	int32_t ___code_0;
	// System.String PlayFab.SharedModels.HttpResponseObject::status
	String_t* ___status_1;
	// System.Object PlayFab.SharedModels.HttpResponseObject::data
	RuntimeObject* ___data_2;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC  : public RuntimeObject
{
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_8;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____entriesArray_9;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_10;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____entriesTable_11;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* ____nullKeyEntry_12;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::_keys
	KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* ____keys_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____serializationInfo_14;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_15;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject* ____syncRoot_16;
};

struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields
{
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___defaultComparer_17;
};

// PlayFab.PlayFabApiSettings
struct PlayFabApiSettings_tA64AE28AC2930D2710835FCD401A4212558752D1  : public RuntimeObject
{
	// System.String PlayFab.PlayFabApiSettings::_ProductionEnvironmentUrl
	String_t* ____ProductionEnvironmentUrl_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.PlayFabApiSettings::_requestGetParams
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____requestGetParams_1;
	// System.String PlayFab.PlayFabApiSettings::<TitleId>k__BackingField
	String_t* ___U3CTitleIdU3Ek__BackingField_2;
	// System.String PlayFab.PlayFabApiSettings::<VerticalName>k__BackingField
	String_t* ___U3CVerticalNameU3Ek__BackingField_3;
	// System.Boolean PlayFab.PlayFabApiSettings::<DisableDeviceInfo>k__BackingField
	bool ___U3CDisableDeviceInfoU3Ek__BackingField_4;
	// System.Boolean PlayFab.PlayFabApiSettings::<DisableFocusTimeCollection>k__BackingField
	bool ___U3CDisableFocusTimeCollectionU3Ek__BackingField_5;
};

// PlayFab.SharedModels.PlayFabBaseModel
struct PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E  : public RuntimeObject
{
};

// PlayFab.Internal.PlayFabUtil
struct PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1  : public RuntimeObject
{
};

struct PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_StaticFields
{
	// System.String PlayFab.Internal.PlayFabUtil::_localSettingsFileName
	String_t* ____localSettingsFileName_0;
	// System.String[] PlayFab.Internal.PlayFabUtil::_defaultDateTimeFormats
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____defaultDateTimeFormats_1;
	// System.Globalization.DateTimeStyles PlayFab.Internal.PlayFabUtil::DateTimeStyles
	int32_t ___DateTimeStyles_4;
};

struct PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_ThreadStaticFields
{
	// System.Text.StringBuilder PlayFab.Internal.PlayFabUtil::_sb
	StringBuilder_t* ____sb_5;
};

// System.Net.ServicePointManager
struct ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120  : public RuntimeObject
{
};

struct ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_StaticFields
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint> System.Net.ServicePointManager::servicePoints
	ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6* ___servicePoints_0;
	// System.Net.ICertificatePolicy System.Net.ServicePointManager::policy
	RuntimeObject* ___policy_1;
	// System.Int32 System.Net.ServicePointManager::defaultConnectionLimit
	int32_t ___defaultConnectionLimit_2;
	// System.Int32 System.Net.ServicePointManager::maxServicePointIdleTime
	int32_t ___maxServicePointIdleTime_3;
	// System.Int32 System.Net.ServicePointManager::maxServicePoints
	int32_t ___maxServicePoints_4;
	// System.Int32 System.Net.ServicePointManager::dnsRefreshTimeout
	int32_t ___dnsRefreshTimeout_5;
	// System.Boolean System.Net.ServicePointManager::_checkCRL
	bool ____checkCRL_6;
	// System.Net.SecurityProtocolType System.Net.ServicePointManager::_securityProtocol
	int32_t ____securityProtocol_7;
	// System.Boolean System.Net.ServicePointManager::expectContinue
	bool ___expectContinue_8;
	// System.Boolean System.Net.ServicePointManager::useNagle
	bool ___useNagle_9;
	// System.Net.ServerCertValidationCallback System.Net.ServicePointManager::server_cert_cb
	ServerCertValidationCallback_tC7A568060163FC6810AF9817F26F986C78CFC27F* ___server_cert_cb_10;
	// System.Boolean System.Net.ServicePointManager::tcp_keepalive
	bool ___tcp_keepalive_11;
	// System.Int32 System.Net.ServicePointManager::tcp_keepalive_time
	int32_t ___tcp_keepalive_time_12;
	// System.Int32 System.Net.ServicePointManager::tcp_keepalive_interval
	int32_t ___tcp_keepalive_interval_13;
	// System.Net.CipherSuitesCallback System.Net.ServicePointManager::<ClientCipherSuitesCallback>k__BackingField
	CipherSuitesCallback_tA274229EDCD6C1E415C0013260628DF0EF142764* ___U3CClientCipherSuitesCallbackU3Ek__BackingField_16;
	// System.Net.CipherSuitesCallback System.Net.ServicePointManager::<ServerCipherSuitesCallback>k__BackingField
	CipherSuitesCallback_tA274229EDCD6C1E415C0013260628DF0EF142764* ___U3CServerCipherSuitesCallbackU3Ek__BackingField_17;
};

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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::impl
	X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___impl_0;
};

// PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789  : public RuntimeObject
{
	// PlayFab.Internal.PlayFabWebRequest PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass21_0::<>4__this
	PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* ___U3CU3E4__this_0;
	// System.String PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass21_0::fullUrl
	String_t* ___fullUrl_1;
	// System.Action`1<System.Byte[]> PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass21_0::successCallback
	Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* ___successCallback_2;
	// System.Action`1<System.String> PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass21_0::errorCallback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___errorCallback_3;
};

// PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD  : public RuntimeObject
{
	// PlayFab.Internal.PlayFabWebRequest PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass22_0::<>4__this
	PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* ___U3CU3E4__this_0;
	// System.String PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass22_0::fullUrl
	String_t* ___fullUrl_1;
	// System.Byte[] PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass22_0::payload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload_2;
	// System.Action`1<System.Byte[]> PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass22_0::successCallback
	Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* ___successCallback_3;
	// System.Action`1<System.String> PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass22_0::errorCallback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___errorCallback_4;
};

// PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06  : public RuntimeObject
{
	// PlayFab.Internal.PlayFabWebRequest PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass23_0::<>4__this
	PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* ___U3CU3E4__this_0;
	// System.String PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass23_0::fullUrl
	String_t* ___fullUrl_1;
	// System.Byte[] PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass23_0::payload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload_2;
	// System.Action`1<System.Byte[]> PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass23_0::successCallback
	Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* ___successCallback_3;
	// System.Action`1<System.String> PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass23_0::errorCallback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___errorCallback_4;
};

// PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92  : public RuntimeObject
{
	// PlayFab.Internal.CallRequestContainer PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass30_0::reqContainer
	CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* ___reqContainer_0;
};

// PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF  : public RuntimeObject
{
	// PlayFab.Internal.CallRequestContainer PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass31_0::reqContainer
	CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* ___reqContainer_0;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.CloudScriptRevisionOption>
struct Nullable_1_t662A47B747392DCD56657B665EE87D89B6F99A71 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.ContinentCode>
struct Nullable_1_t3EF9CF56AFA87C3A52854AA38643E7CAF92653D7 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.CountryCode>
struct Nullable_1_t4ADB38113D162809A54E1BC38F5271E2F1625085 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.Currency>
struct Nullable_1_t2B10F2EF519FFB12D492C998C113D6191D4B45A9 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.EmailVerificationStatus>
struct Nullable_1_t8E8E31869D660DB59DD20AF2497A3F2D9A97B08B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.GameInstanceState>
struct Nullable_1_tDA5DA702EC547DD1BC03BFBA6441B9A76715D804 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.AuthenticationModels.IdentifiedDeviceType>
struct Nullable_1_t9AD8E1438E05D5BA0F423DA1263AFC5941A801B1 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.AuthenticationModels.LoginIdentityProvider>
struct Nullable_1_t77AB991F23E03305B5C1448C8B16EAF99B4397F2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.LoginIdentityProvider>
struct Nullable_1_t5B7C5B187DC2527C1C1515BC997DF756887BB15A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.MatchmakeStatus>
struct Nullable_1_tE95F98B8CD3BFF42B3F003FB77543C34A4123434 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.PushNotificationPlatform>
struct Nullable_1_tE251DA79A8D0E93D6B7DAB2E248E2683339EA695 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.Region>
struct Nullable_1_tD6B346427FD9C455F0D4135CC5DAB0274DD97359 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.SourceType>
struct Nullable_1_tC6CEDEC6D14642AE9FB5A39F7B223AF7F619001D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.SubscriptionProviderStatus>
struct Nullable_1_t1C6D81215466D9E73A526195FE2F06D6299CE58C 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.TitleActivationStatus>
struct Nullable_1_t2AB9F1C63256F190CF5CE9AB0ED2D44A4273FDB0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.TradeStatus>
struct Nullable_1_tD232C455277E63717C41233FF7F6A699FA27AC33 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.TransactionStatus>
struct Nullable_1_t9E1F0EBFE9C6E268466ED4750DFB7BFA10FD8C07 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.UInt32>
struct Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.UserDataPermission>
struct Nullable_1_t067499BB68589229FB737513FCF7C77D7952D5DB 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<PlayFab.ClientModels.UserOrigination>
struct Nullable_1_t2DC981AC3510FB5B419786ACD6FCAA9611918F93 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// PlayFab.ClientModels.AdRewardItemGranted
struct AdRewardItemGranted_t3104882ABECE75D7CF8AEEB5392C89BAC70FB623  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.AdRewardItemGranted::CatalogId
	String_t* ___CatalogId_0;
	// System.String PlayFab.ClientModels.AdRewardItemGranted::DisplayName
	String_t* ___DisplayName_1;
	// System.String PlayFab.ClientModels.AdRewardItemGranted::InstanceId
	String_t* ___InstanceId_2;
	// System.String PlayFab.ClientModels.AdRewardItemGranted::ItemId
	String_t* ___ItemId_3;
};

// PlayFab.ClientModels.AdRewardResults
struct AdRewardResults_tCD3953C86B90682A93AB255F40D1B37AC745D82D  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.AdRewardItemGranted> PlayFab.ClientModels.AdRewardResults::GrantedItems
	List_1_t3EA147F346701B9D81817E9236BA77649BD102BE* ___GrantedItems_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.AdRewardResults::GrantedVirtualCurrencies
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___GrantedVirtualCurrencies_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.AdRewardResults::IncrementedStatistics
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___IncrementedStatistics_2;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// PlayFab.ClientModels.CartItem
struct CartItem_tAD26528DE8C365A9E31F0B3195464F6CB3FA4308  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.CartItem::Description
	String_t* ___Description_0;
	// System.String PlayFab.ClientModels.CartItem::DisplayName
	String_t* ___DisplayName_1;
	// System.String PlayFab.ClientModels.CartItem::ItemClass
	String_t* ___ItemClass_2;
	// System.String PlayFab.ClientModels.CartItem::ItemId
	String_t* ___ItemId_3;
	// System.String PlayFab.ClientModels.CartItem::ItemInstanceId
	String_t* ___ItemInstanceId_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.CartItem::RealCurrencyPrices
	Dictionary_2_t3530A61C502BFE07F3ED20F8D9B10D762DB0F1D3* ___RealCurrencyPrices_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.CartItem::VCAmount
	Dictionary_2_t3530A61C502BFE07F3ED20F8D9B10D762DB0F1D3* ___VCAmount_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.CartItem::VirtualCurrencyPrices
	Dictionary_2_t3530A61C502BFE07F3ED20F8D9B10D762DB0F1D3* ___VirtualCurrencyPrices_7;
};

// PlayFab.ClientModels.CatalogItem
struct CatalogItem_t9A33C8BB264459850843DCD8BA4209848E87C69D  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// PlayFab.ClientModels.CatalogItemBundleInfo PlayFab.ClientModels.CatalogItem::Bundle
	CatalogItemBundleInfo_tD6204212D0429B288618470A599C0BDD613DB26E* ___Bundle_0;
	// System.Boolean PlayFab.ClientModels.CatalogItem::CanBecomeCharacter
	bool ___CanBecomeCharacter_1;
	// System.String PlayFab.ClientModels.CatalogItem::CatalogVersion
	String_t* ___CatalogVersion_2;
	// PlayFab.ClientModels.CatalogItemConsumableInfo PlayFab.ClientModels.CatalogItem::Consumable
	CatalogItemConsumableInfo_t8E031AF03A11E82E6A5955C18D3BAC8BE5287A80* ___Consumable_3;
	// PlayFab.ClientModels.CatalogItemContainerInfo PlayFab.ClientModels.CatalogItem::Container
	CatalogItemContainerInfo_t7BB7170B4721F488FF4DB455D9712D4CC5298ADD* ___Container_4;
	// System.String PlayFab.ClientModels.CatalogItem::CustomData
	String_t* ___CustomData_5;
	// System.String PlayFab.ClientModels.CatalogItem::Description
	String_t* ___Description_6;
	// System.String PlayFab.ClientModels.CatalogItem::DisplayName
	String_t* ___DisplayName_7;
	// System.Int32 PlayFab.ClientModels.CatalogItem::InitialLimitedEditionCount
	int32_t ___InitialLimitedEditionCount_8;
	// System.Boolean PlayFab.ClientModels.CatalogItem::IsLimitedEdition
	bool ___IsLimitedEdition_9;
	// System.Boolean PlayFab.ClientModels.CatalogItem::IsStackable
	bool ___IsStackable_10;
	// System.Boolean PlayFab.ClientModels.CatalogItem::IsTradable
	bool ___IsTradable_11;
	// System.String PlayFab.ClientModels.CatalogItem::ItemClass
	String_t* ___ItemClass_12;
	// System.String PlayFab.ClientModels.CatalogItem::ItemId
	String_t* ___ItemId_13;
	// System.String PlayFab.ClientModels.CatalogItem::ItemImageUrl
	String_t* ___ItemImageUrl_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.CatalogItem::RealCurrencyPrices
	Dictionary_2_t3530A61C502BFE07F3ED20F8D9B10D762DB0F1D3* ___RealCurrencyPrices_15;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.CatalogItem::Tags
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Tags_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.CatalogItem::VirtualCurrencyPrices
	Dictionary_2_t3530A61C502BFE07F3ED20F8D9B10D762DB0F1D3* ___VirtualCurrencyPrices_17;
};

// PlayFab.ClientModels.CatalogItemBundleInfo
struct CatalogItemBundleInfo_tD6204212D0429B288618470A599C0BDD613DB26E  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.CatalogItemBundleInfo::BundledItems
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___BundledItems_0;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.CatalogItemBundleInfo::BundledResultTables
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___BundledResultTables_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.CatalogItemBundleInfo::BundledVirtualCurrencies
	Dictionary_2_t3530A61C502BFE07F3ED20F8D9B10D762DB0F1D3* ___BundledVirtualCurrencies_2;
};

// PlayFab.ClientModels.CatalogItemContainerInfo
struct CatalogItemContainerInfo_t7BB7170B4721F488FF4DB455D9712D4CC5298ADD  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.CatalogItemContainerInfo::ItemContents
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___ItemContents_0;
	// System.String PlayFab.ClientModels.CatalogItemContainerInfo::KeyItemId
	String_t* ___KeyItemId_1;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.CatalogItemContainerInfo::ResultTableContents
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___ResultTableContents_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.CatalogItemContainerInfo::VirtualCurrencyContents
	Dictionary_2_t3530A61C502BFE07F3ED20F8D9B10D762DB0F1D3* ___VirtualCurrencyContents_3;
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

// PlayFab.ClientModels.CharacterInventory
struct CharacterInventory_t50ED70091B9834B7A45E243C93EC3A47C5EE630D  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.CharacterInventory::CharacterId
	String_t* ___CharacterId_0;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.CharacterInventory::Inventory
	List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264* ___Inventory_1;
};

// PlayFab.ClientModels.CharacterLeaderboardEntry
struct CharacterLeaderboardEntry_t1C7364F456AB72E7EC4BB852BA3ED903426F6B4D  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.CharacterLeaderboardEntry::CharacterId
	String_t* ___CharacterId_0;
	// System.String PlayFab.ClientModels.CharacterLeaderboardEntry::CharacterName
	String_t* ___CharacterName_1;
	// System.String PlayFab.ClientModels.CharacterLeaderboardEntry::CharacterType
	String_t* ___CharacterType_2;
	// System.String PlayFab.ClientModels.CharacterLeaderboardEntry::DisplayName
	String_t* ___DisplayName_3;
	// System.String PlayFab.ClientModels.CharacterLeaderboardEntry::PlayFabId
	String_t* ___PlayFabId_4;
	// System.Int32 PlayFab.ClientModels.CharacterLeaderboardEntry::Position
	int32_t ___Position_5;
	// System.Int32 PlayFab.ClientModels.CharacterLeaderboardEntry::StatValue
	int32_t ___StatValue_6;
};

// PlayFab.ClientModels.CharacterResult
struct CharacterResult_tD0B33C717CF49F6367553BE928EEE43877EFBBBD  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.CharacterResult::CharacterId
	String_t* ___CharacterId_0;
	// System.String PlayFab.ClientModels.CharacterResult::CharacterName
	String_t* ___CharacterName_1;
	// System.String PlayFab.ClientModels.CharacterResult::CharacterType
	String_t* ___CharacterType_2;
};

// PlayFab.ClientModels.CollectionFilter
struct CollectionFilter_t7CCEA28D3D380C695200F3E7739551F70D1611BF  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.Container_Dictionary_String_String> PlayFab.ClientModels.CollectionFilter::Excludes
	List_1_t31B8385127B5B5362AD4705C15894ABDF5696D5F* ___Excludes_0;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.Container_Dictionary_String_String> PlayFab.ClientModels.CollectionFilter::Includes
	List_1_t31B8385127B5B5362AD4705C15894ABDF5696D5F* ___Includes_1;
};

// PlayFab.ClientModels.Container_Dictionary_String_String
struct Container_Dictionary_String_String_t960F748D379C121F44BFBA7B3396B68D61B60027  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.Container_Dictionary_String_String::Data
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Data_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// PlayFab.AuthenticationModels.EntityKey
struct EntityKey_tFADF551D013525A30F2A6FB10A4FC4AF5F34278E  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.AuthenticationModels.EntityKey::Id
	String_t* ___Id_0;
	// System.String PlayFab.AuthenticationModels.EntityKey::Type
	String_t* ___Type_1;
};

// PlayFab.ClientModels.EntityKey
struct EntityKey_t3E92C74E390ABBE2C7066FD9D20C7E3DC948CC9C  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.EntityKey::Id
	String_t* ___Id_0;
	// System.String PlayFab.ClientModels.EntityKey::Type
	String_t* ___Type_1;
};

// PlayFab.AuthenticationModels.EntityLineage
struct EntityLineage_tBB3BF8ABA70636A13AE3412CE723954A429EE67E  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.AuthenticationModels.EntityLineage::CharacterId
	String_t* ___CharacterId_0;
	// System.String PlayFab.AuthenticationModels.EntityLineage::GroupId
	String_t* ___GroupId_1;
	// System.String PlayFab.AuthenticationModels.EntityLineage::MasterPlayerAccountId
	String_t* ___MasterPlayerAccountId_2;
	// System.String PlayFab.AuthenticationModels.EntityLineage::NamespaceId
	String_t* ___NamespaceId_3;
	// System.String PlayFab.AuthenticationModels.EntityLineage::TitleId
	String_t* ___TitleId_4;
	// System.String PlayFab.AuthenticationModels.EntityLineage::TitlePlayerAccountId
	String_t* ___TitlePlayerAccountId_5;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// PlayFab.ClientModels.FacebookInstantGamesPlayFabIdPair
struct FacebookInstantGamesPlayFabIdPair_t0D7008A2CFF5E5C0DD8D15C5E70839ABC7757CBF  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.FacebookInstantGamesPlayFabIdPair::FacebookInstantGamesId
	String_t* ___FacebookInstantGamesId_0;
	// System.String PlayFab.ClientModels.FacebookInstantGamesPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;
};

// PlayFab.ClientModels.FacebookPlayFabIdPair
struct FacebookPlayFabIdPair_tF6D810D330B041CC29B3A36DD7FAF95361455AF3  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.FacebookPlayFabIdPair::FacebookId
	String_t* ___FacebookId_0;
	// System.String PlayFab.ClientModels.FacebookPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;
};

// PlayFab.ClientModels.FriendInfo
struct FriendInfo_tD4C459996614A9E2C4BCBC4565272BD50CA30355  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// PlayFab.ClientModels.UserFacebookInfo PlayFab.ClientModels.FriendInfo::FacebookInfo
	UserFacebookInfo_t25341AA794CE37708FF857832B3D40C31005F859* ___FacebookInfo_0;
	// System.String PlayFab.ClientModels.FriendInfo::FriendPlayFabId
	String_t* ___FriendPlayFabId_1;
	// PlayFab.ClientModels.UserGameCenterInfo PlayFab.ClientModels.FriendInfo::GameCenterInfo
	UserGameCenterInfo_tF3E4DC8FCE46154B31494ABC83FF654AB1CE2C42* ___GameCenterInfo_2;
	// PlayFab.ClientModels.PlayerProfileModel PlayFab.ClientModels.FriendInfo::Profile
	PlayerProfileModel_tEF2149D2652DD0B25B5250F8037A276739D1414A* ___Profile_3;
	// PlayFab.ClientModels.UserPsnInfo PlayFab.ClientModels.FriendInfo::PSNInfo
	UserPsnInfo_t8A71B58419169BBDA2512C61AB4D75B25CE15EAB* ___PSNInfo_4;
	// PlayFab.ClientModels.UserSteamInfo PlayFab.ClientModels.FriendInfo::SteamInfo
	UserSteamInfo_t9683A2E6234656912ED104E9AC9C9C6857CE23EA* ___SteamInfo_5;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.FriendInfo::Tags
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Tags_6;
	// System.String PlayFab.ClientModels.FriendInfo::TitleDisplayName
	String_t* ___TitleDisplayName_7;
	// System.String PlayFab.ClientModels.FriendInfo::Username
	String_t* ___Username_8;
	// PlayFab.ClientModels.UserXboxInfo PlayFab.ClientModels.FriendInfo::XboxInfo
	UserXboxInfo_t43AC22B8C788C2E29748D1882F26FFFD82150C0D* ___XboxInfo_9;
};

// PlayFab.ClientModels.GameCenterPlayFabIdPair
struct GameCenterPlayFabIdPair_tBCF6D95E2448ED031257AF8D2F3C287A15DA1244  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.GameCenterPlayFabIdPair::GameCenterId
	String_t* ___GameCenterId_0;
	// System.String PlayFab.ClientModels.GameCenterPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;
};

// PlayFab.ClientModels.GenericPlayFabIdPair
struct GenericPlayFabIdPair_t1C9E09D926074E8C215C364655EDC29EC7D5AD40  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// PlayFab.ClientModels.GenericServiceId PlayFab.ClientModels.GenericPlayFabIdPair::GenericId
	GenericServiceId_t845FFCE0230F5F2AC512688C09CB390784A40DCE* ___GenericId_0;
	// System.String PlayFab.ClientModels.GenericPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;
};

// PlayFab.ClientModels.GenericServiceId
struct GenericServiceId_t845FFCE0230F5F2AC512688C09CB390784A40DCE  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.GenericServiceId::ServiceName
	String_t* ___ServiceName_0;
	// System.String PlayFab.ClientModels.GenericServiceId::UserId
	String_t* ___UserId_1;
};

// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams
struct GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetCharacterInventories
	bool ___GetCharacterInventories_0;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetCharacterList
	bool ___GetCharacterList_1;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetPlayerProfile
	bool ___GetPlayerProfile_2;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetPlayerStatistics
	bool ___GetPlayerStatistics_3;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetTitleData
	bool ___GetTitleData_4;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetUserAccountInfo
	bool ___GetUserAccountInfo_5;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetUserData
	bool ___GetUserData_6;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetUserInventory
	bool ___GetUserInventory_7;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetUserReadOnlyData
	bool ___GetUserReadOnlyData_8;
	// System.Boolean PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::GetUserVirtualCurrency
	bool ___GetUserVirtualCurrency_9;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::PlayerStatisticNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PlayerStatisticNames_10;
	// PlayFab.ClientModels.PlayerProfileViewConstraints PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::ProfileConstraints
	PlayerProfileViewConstraints_t2D0216E216CDBEDAD806C569D17795B60FB7C550* ___ProfileConstraints_11;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::TitleDataKeys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___TitleDataKeys_12;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::UserDataKeys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___UserDataKeys_13;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::UserReadOnlyDataKeys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___UserReadOnlyDataKeys_14;
};

// PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload
struct GetPlayerCombinedInfoResultPayload_t6323557A81B0FF04C6B66FC1F916864A4D738BCC  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// PlayFab.ClientModels.UserAccountInfo PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::AccountInfo
	UserAccountInfo_t1BF8B02028A765033899EE9940C15383AEF2726A* ___AccountInfo_0;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterInventory> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::CharacterInventories
	List_1_t1701865550109960DFAB6F38B2B293E04AD9947E* ___CharacterInventories_1;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterResult> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::CharacterList
	List_1_tA848E8C0DB46B5FEF9D14E94E9501A6EDD685748* ___CharacterList_2;
	// PlayFab.ClientModels.PlayerProfileModel PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::PlayerProfile
	PlayerProfileModel_tEF2149D2652DD0B25B5250F8037A276739D1414A* ___PlayerProfile_3;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticValue> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::PlayerStatistics
	List_1_tCDDF6F4596CECA134788D4BBE4D454B680279051* ___PlayerStatistics_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::TitleData
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___TitleData_5;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.UserDataRecord> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::UserData
	Dictionary_2_tCCB825E12B065472E3DC7F9E132CF4B37C7226E2* ___UserData_6;
	// System.UInt32 PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::UserDataVersion
	uint32_t ___UserDataVersion_7;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::UserInventory
	List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264* ___UserInventory_8;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.UserDataRecord> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::UserReadOnlyData
	Dictionary_2_tCCB825E12B065472E3DC7F9E132CF4B37C7226E2* ___UserReadOnlyData_9;
	// System.UInt32 PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::UserReadOnlyDataVersion
	uint32_t ___UserReadOnlyDataVersion_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::UserVirtualCurrency
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___UserVirtualCurrency_11;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.VirtualCurrencyRechargeTime> PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::UserVirtualCurrencyRechargeTimes
	Dictionary_2_t980250F79C95159BFB075EFB408C944A4C31F774* ___UserVirtualCurrencyRechargeTimes_12;
};

// PlayFab.ClientModels.GetSegmentResult
struct GetSegmentResult_tEA5188B42B6E5B1F15926AB703BCEF9CEC9B9D81  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.GetSegmentResult::ABTestParent
	String_t* ___ABTestParent_0;
	// System.String PlayFab.ClientModels.GetSegmentResult::Id
	String_t* ___Id_1;
	// System.String PlayFab.ClientModels.GetSegmentResult::Name
	String_t* ___Name_2;
};

// PlayFab.ClientModels.GooglePlayFabIdPair
struct GooglePlayFabIdPair_t72F94EC86476E7F6EAFA33E558822FDC8BB09D6F  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.GooglePlayFabIdPair::GoogleId
	String_t* ___GoogleId_0;
	// System.String PlayFab.ClientModels.GooglePlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;
};

// PlayFab.ClientModels.GooglePlayGamesPlayFabIdPair
struct GooglePlayGamesPlayFabIdPair_tF60353DDD4A5EF68B950127EDEE1C1F5BA55653A  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.GooglePlayGamesPlayFabIdPair::GooglePlayGamesPlayerId
	String_t* ___GooglePlayGamesPlayerId_0;
	// System.String PlayFab.ClientModels.GooglePlayGamesPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;
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

// PlayFab.ClientModels.ItemPurchaseRequest
struct ItemPurchaseRequest_t92F81220686869A5DC3826889DB6091A48354C3B  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.ItemPurchaseRequest::Annotation
	String_t* ___Annotation_0;
	// System.String PlayFab.ClientModels.ItemPurchaseRequest::ItemId
	String_t* ___ItemId_1;
	// System.UInt32 PlayFab.ClientModels.ItemPurchaseRequest::Quantity
	uint32_t ___Quantity_2;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.ItemPurchaseRequest::UpgradeFromItems
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___UpgradeFromItems_3;
};

// PlayFab.ClientModels.KongregatePlayFabIdPair
struct KongregatePlayFabIdPair_tC4BC594035C641891C2BDBFBF907F1E86DB0E75E  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.KongregatePlayFabIdPair::KongregateId
	String_t* ___KongregateId_0;
	// System.String PlayFab.ClientModels.KongregatePlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;
};

// PlayFab.ClientModels.LogStatement
struct LogStatement_t1817F7333FB8B5A212EC3EE93C17A94A92FD4D1E  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Object PlayFab.ClientModels.LogStatement::Data
	RuntimeObject* ___Data_0;
	// System.String PlayFab.ClientModels.LogStatement::Level
	String_t* ___Level_1;
	// System.String PlayFab.ClientModels.LogStatement::Message
	String_t* ___Message_2;
};

// PlayFab.ClientModels.MicrosoftStorePayload
struct MicrosoftStorePayload_t06065D771429807DA9B8ADEE81B6E2219795C25E  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.MicrosoftStorePayload::CollectionsMsIdKey
	String_t* ___CollectionsMsIdKey_0;
	// System.String PlayFab.ClientModels.MicrosoftStorePayload::UserId
	String_t* ___UserId_1;
	// System.String PlayFab.ClientModels.MicrosoftStorePayload::XboxToken
	String_t* ___XboxToken_2;
};

// PlayFab.ClientModels.NameIdentifier
struct NameIdentifier_tC463953295AF9517FB179D31BED70D412C5D144C  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.NameIdentifier::Id
	String_t* ___Id_0;
	// System.String PlayFab.ClientModels.NameIdentifier::Name
	String_t* ___Name_1;
};

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7  : public NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC
{
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____all_18;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____allKeys_19;
};

// PlayFab.ClientModels.NintendoServiceAccountPlayFabIdPair
struct NintendoServiceAccountPlayFabIdPair_t31B8D8B6905F156B3F4B095613ADB0F1D4BCA0A9  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.NintendoServiceAccountPlayFabIdPair::NintendoServiceAccountId
	String_t* ___NintendoServiceAccountId_0;
	// System.String PlayFab.ClientModels.NintendoServiceAccountPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;
};

// PlayFab.ClientModels.NintendoSwitchPlayFabIdPair
struct NintendoSwitchPlayFabIdPair_t687B2A5829A336F37205F96BD81A5CA589CC1526  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.NintendoSwitchPlayFabIdPair::NintendoSwitchDeviceId
	String_t* ___NintendoSwitchDeviceId_0;
	// System.String PlayFab.ClientModels.NintendoSwitchPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_1;
};

// PlayFab.ClientModels.PSNAccountPlayFabIdPair
struct PSNAccountPlayFabIdPair_t5F266A64CD3768182B54DF5D9B1D5E058DF33865  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.PSNAccountPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_0;
	// System.String PlayFab.ClientModels.PSNAccountPlayFabIdPair::PSNAccountId
	String_t* ___PSNAccountId_1;
};

// PlayFab.ClientModels.PaymentOption
struct PaymentOption_t1D243751621312CFA26FA5E4B3D4AB9480938CDF  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.PaymentOption::Currency
	String_t* ___Currency_0;
	// System.UInt32 PlayFab.ClientModels.PaymentOption::Price
	uint32_t ___Price_1;
	// System.String PlayFab.ClientModels.PaymentOption::ProviderName
	String_t* ___ProviderName_2;
	// System.UInt32 PlayFab.ClientModels.PaymentOption::StoreCredit
	uint32_t ___StoreCredit_3;
};

// PlayFab.SharedModels.PlayFabRequestCommon
struct PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// PlayFab.PlayFabAuthenticationContext PlayFab.SharedModels.PlayFabRequestCommon::AuthenticationContext
	PlayFabAuthenticationContext_t221B79722A7A90BF01896A080CB0488FC0A9971A* ___AuthenticationContext_0;
};

// PlayFab.SharedModels.PlayFabResultCommon
struct PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// PlayFab.SharedModels.PlayFabRequestCommon PlayFab.SharedModels.PlayFabResultCommon::Request
	PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___Request_0;
	// System.Object PlayFab.SharedModels.PlayFabResultCommon::CustomData
	RuntimeObject* ___CustomData_1;
};

// PlayFab.ClientModels.PlayStation5Payload
struct PlayStation5Payload_tAFC96038092FCE7BE6749D798C481EBDA45A174D  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.PlayStation5Payload::Ids
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Ids_0;
	// System.String PlayFab.ClientModels.PlayStation5Payload::ServiceLabel
	String_t* ___ServiceLabel_1;
};

// PlayFab.ClientModels.PlayerLeaderboardEntry
struct PlayerLeaderboardEntry_tCFF8F31BA39EE8CAD577AC4938DDE619E6EE66A9  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.PlayerLeaderboardEntry::DisplayName
	String_t* ___DisplayName_0;
	// System.String PlayFab.ClientModels.PlayerLeaderboardEntry::PlayFabId
	String_t* ___PlayFabId_1;
	// System.Int32 PlayFab.ClientModels.PlayerLeaderboardEntry::Position
	int32_t ___Position_2;
	// PlayFab.ClientModels.PlayerProfileModel PlayFab.ClientModels.PlayerLeaderboardEntry::Profile
	PlayerProfileModel_tEF2149D2652DD0B25B5250F8037A276739D1414A* ___Profile_3;
	// System.Int32 PlayFab.ClientModels.PlayerLeaderboardEntry::StatValue
	int32_t ___StatValue_4;
};

// PlayFab.ClientModels.PlayerProfileViewConstraints
struct PlayerProfileViewConstraints_t2D0216E216CDBEDAD806C569D17795B60FB7C550  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowAvatarUrl
	bool ___ShowAvatarUrl_0;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowBannedUntil
	bool ___ShowBannedUntil_1;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowCampaignAttributions
	bool ___ShowCampaignAttributions_2;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowContactEmailAddresses
	bool ___ShowContactEmailAddresses_3;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowCreated
	bool ___ShowCreated_4;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowDisplayName
	bool ___ShowDisplayName_5;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowExperimentVariants
	bool ___ShowExperimentVariants_6;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowLastLogin
	bool ___ShowLastLogin_7;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowLinkedAccounts
	bool ___ShowLinkedAccounts_8;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowLocations
	bool ___ShowLocations_9;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowMemberships
	bool ___ShowMemberships_10;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowOrigination
	bool ___ShowOrigination_11;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowPushNotificationRegistrations
	bool ___ShowPushNotificationRegistrations_12;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowStatistics
	bool ___ShowStatistics_13;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowTags
	bool ___ShowTags_14;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowTotalValueToDateInUsd
	bool ___ShowTotalValueToDateInUsd_15;
	// System.Boolean PlayFab.ClientModels.PlayerProfileViewConstraints::ShowValuesToDate
	bool ___ShowValuesToDate_16;
};

// PlayFab.ClientModels.ScriptExecutionError
struct ScriptExecutionError_t15D016342B1D7DCF38FB8401037A2E748BF58785  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.ScriptExecutionError::Error
	String_t* ___Error_0;
	// System.String PlayFab.ClientModels.ScriptExecutionError::Message
	String_t* ___Message_1;
	// System.String PlayFab.ClientModels.ScriptExecutionError::StackTrace
	String_t* ___StackTrace_2;
};

// PlayFab.ClientModels.StatisticModel
struct StatisticModel_tB2ED71209F882A61E023E593485AC3CBE7354CBD  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.StatisticModel::Name
	String_t* ___Name_0;
	// System.Int32 PlayFab.ClientModels.StatisticModel::Value
	int32_t ___Value_1;
	// System.Int32 PlayFab.ClientModels.StatisticModel::Version
	int32_t ___Version_2;
};

// PlayFab.ClientModels.StatisticNameVersion
struct StatisticNameVersion_t6435F7DD4C0291DA496DE0389D2E5A4FC161BCDE  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.StatisticNameVersion::StatisticName
	String_t* ___StatisticName_0;
	// System.UInt32 PlayFab.ClientModels.StatisticNameVersion::Version
	uint32_t ___Version_1;
};

// PlayFab.ClientModels.StatisticValue
struct StatisticValue_t41732BCF004BE4378AE04A44F6410E992855FB24  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.StatisticValue::StatisticName
	String_t* ___StatisticName_0;
	// System.Int32 PlayFab.ClientModels.StatisticValue::Value
	int32_t ___Value_1;
	// System.UInt32 PlayFab.ClientModels.StatisticValue::Version
	uint32_t ___Version_2;
};

// PlayFab.ClientModels.SteamPlayFabIdPair
struct SteamPlayFabIdPair_tFECA16BBF2AA75081EC51F9BF796DB77F7522E18  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.SteamPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_0;
	// System.String PlayFab.ClientModels.SteamPlayFabIdPair::SteamStringId
	String_t* ___SteamStringId_1;
};

// PlayFab.ClientModels.StoreMarketingModel
struct StoreMarketingModel_t4AF761FD531E9A70AC9BF74380D0485A2F5DE95F  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.StoreMarketingModel::Description
	String_t* ___Description_0;
	// System.String PlayFab.ClientModels.StoreMarketingModel::DisplayName
	String_t* ___DisplayName_1;
	// System.Object PlayFab.ClientModels.StoreMarketingModel::Metadata
	RuntimeObject* ___Metadata_2;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// PlayFab.ClientModels.TagModel
struct TagModel_tA73EAC7F011DDE0C0433781A0E207DEFD3971740  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.TagModel::TagValue
	String_t* ___TagValue_0;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// PlayFab.ClientModels.TreatmentAssignment
struct TreatmentAssignment_t3AAA5D796B6551BDF72B95A132BE5FE93F1FD99A  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.Variable> PlayFab.ClientModels.TreatmentAssignment::Variables
	List_1_t2C5D0E860CC178448C938DBE2DA7B5EB1A8B1541* ___Variables_0;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.TreatmentAssignment::Variants
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Variants_1;
};

// PlayFab.ClientModels.TwitchPlayFabIdPair
struct TwitchPlayFabIdPair_tF6965786D5E8E95243A21420C5A3CAF7A1A50320  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.TwitchPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_0;
	// System.String PlayFab.ClientModels.TwitchPlayFabIdPair::TwitchId
	String_t* ___TwitchId_1;
};

// PlayFab.ClientModels.UserAndroidDeviceInfo
struct UserAndroidDeviceInfo_tF7DC5DEEEC9611A18C44C582A421C87EFAF143E7  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserAndroidDeviceInfo::AndroidDeviceId
	String_t* ___AndroidDeviceId_0;
};

// PlayFab.ClientModels.UserAppleIdInfo
struct UserAppleIdInfo_tC957F5FCFCA8C6C4EA5ABB763DF6EAE0A83A00B5  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserAppleIdInfo::AppleSubjectId
	String_t* ___AppleSubjectId_0;
};

// PlayFab.ClientModels.UserCustomIdInfo
struct UserCustomIdInfo_tF34BF320AEE125010D3D390BE3019CF6074D15AB  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserCustomIdInfo::CustomId
	String_t* ___CustomId_0;
};

// PlayFab.ClientModels.UserFacebookInfo
struct UserFacebookInfo_t25341AA794CE37708FF857832B3D40C31005F859  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserFacebookInfo::FacebookId
	String_t* ___FacebookId_0;
	// System.String PlayFab.ClientModels.UserFacebookInfo::FullName
	String_t* ___FullName_1;
};

// PlayFab.ClientModels.UserFacebookInstantGamesIdInfo
struct UserFacebookInstantGamesIdInfo_t4AA586B3DB010191CA46294964526B9C6BD0DEFA  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserFacebookInstantGamesIdInfo::FacebookInstantGamesId
	String_t* ___FacebookInstantGamesId_0;
};

// PlayFab.ClientModels.UserGameCenterInfo
struct UserGameCenterInfo_tF3E4DC8FCE46154B31494ABC83FF654AB1CE2C42  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserGameCenterInfo::GameCenterId
	String_t* ___GameCenterId_0;
};

// PlayFab.ClientModels.UserGoogleInfo
struct UserGoogleInfo_t375C252AF8732A3B29CC0ACA458788F57705CD16  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserGoogleInfo::GoogleEmail
	String_t* ___GoogleEmail_0;
	// System.String PlayFab.ClientModels.UserGoogleInfo::GoogleGender
	String_t* ___GoogleGender_1;
	// System.String PlayFab.ClientModels.UserGoogleInfo::GoogleId
	String_t* ___GoogleId_2;
	// System.String PlayFab.ClientModels.UserGoogleInfo::GoogleLocale
	String_t* ___GoogleLocale_3;
	// System.String PlayFab.ClientModels.UserGoogleInfo::GoogleName
	String_t* ___GoogleName_4;
};

// PlayFab.ClientModels.UserGooglePlayGamesInfo
struct UserGooglePlayGamesInfo_tF42B79157DF36B2D327573D632CFB3CD62B0BBB8  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserGooglePlayGamesInfo::GooglePlayGamesPlayerAvatarImageUrl
	String_t* ___GooglePlayGamesPlayerAvatarImageUrl_0;
	// System.String PlayFab.ClientModels.UserGooglePlayGamesInfo::GooglePlayGamesPlayerDisplayName
	String_t* ___GooglePlayGamesPlayerDisplayName_1;
	// System.String PlayFab.ClientModels.UserGooglePlayGamesInfo::GooglePlayGamesPlayerId
	String_t* ___GooglePlayGamesPlayerId_2;
};

// PlayFab.ClientModels.UserIosDeviceInfo
struct UserIosDeviceInfo_tB0E4BB1232D6B58F35B0BD7730E967E50B25ACDD  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserIosDeviceInfo::IosDeviceId
	String_t* ___IosDeviceId_0;
};

// PlayFab.ClientModels.UserKongregateInfo
struct UserKongregateInfo_t81FAC344B4B42B3689F7F42D355D8BE667E5B3BD  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserKongregateInfo::KongregateId
	String_t* ___KongregateId_0;
	// System.String PlayFab.ClientModels.UserKongregateInfo::KongregateName
	String_t* ___KongregateName_1;
};

// PlayFab.ClientModels.UserNintendoSwitchAccountIdInfo
struct UserNintendoSwitchAccountIdInfo_tBD867A24EE34BA9F1E516FC85B3D1E8BCC108F13  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserNintendoSwitchAccountIdInfo::NintendoSwitchAccountSubjectId
	String_t* ___NintendoSwitchAccountSubjectId_0;
};

// PlayFab.ClientModels.UserNintendoSwitchDeviceIdInfo
struct UserNintendoSwitchDeviceIdInfo_t53FA7FEB383F7C94C8DF61E423E3049ADF135388  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserNintendoSwitchDeviceIdInfo::NintendoSwitchDeviceId
	String_t* ___NintendoSwitchDeviceId_0;
};

// PlayFab.ClientModels.UserOpenIdInfo
struct UserOpenIdInfo_t1243706E2AA47FF74B9FEF1FF537454B0D48FFE3  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserOpenIdInfo::ConnectionId
	String_t* ___ConnectionId_0;
	// System.String PlayFab.ClientModels.UserOpenIdInfo::Issuer
	String_t* ___Issuer_1;
	// System.String PlayFab.ClientModels.UserOpenIdInfo::Subject
	String_t* ___Subject_2;
};

// PlayFab.ClientModels.UserPrivateAccountInfo
struct UserPrivateAccountInfo_t91F7AE36BB4FCCB4CC40C6B6027F6BFC034D50A2  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserPrivateAccountInfo::Email
	String_t* ___Email_0;
};

// PlayFab.ClientModels.UserPsnInfo
struct UserPsnInfo_t8A71B58419169BBDA2512C61AB4D75B25CE15EAB  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserPsnInfo::PsnAccountId
	String_t* ___PsnAccountId_0;
	// System.String PlayFab.ClientModels.UserPsnInfo::PsnOnlineId
	String_t* ___PsnOnlineId_1;
};

// PlayFab.ClientModels.UserSettings
struct UserSettings_t53FD23BFE7D67CB8C0FA3FFB5F2FC733DA2D22E0  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Boolean PlayFab.ClientModels.UserSettings::GatherDeviceInfo
	bool ___GatherDeviceInfo_0;
	// System.Boolean PlayFab.ClientModels.UserSettings::GatherFocusInfo
	bool ___GatherFocusInfo_1;
	// System.Boolean PlayFab.ClientModels.UserSettings::NeedsAttribution
	bool ___NeedsAttribution_2;
};

// PlayFab.ClientModels.UserTwitchInfo
struct UserTwitchInfo_t4C6ECD3CCCCE4C62C7CB6F454D1ED64EDD3FE431  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserTwitchInfo::TwitchId
	String_t* ___TwitchId_0;
	// System.String PlayFab.ClientModels.UserTwitchInfo::TwitchUserName
	String_t* ___TwitchUserName_1;
};

// PlayFab.ClientModels.UserXboxInfo
struct UserXboxInfo_t43AC22B8C788C2E29748D1882F26FFFD82150C0D  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserXboxInfo::XboxUserId
	String_t* ___XboxUserId_0;
	// System.String PlayFab.ClientModels.UserXboxInfo::XboxUserSandbox
	String_t* ___XboxUserSandbox_1;
};

// PlayFab.ClientModels.ValueToDateModel
struct ValueToDateModel_t98B3C39B5FDB48BC22F6DFBE4839E6DFD03BB9FE  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.ValueToDateModel::Currency
	String_t* ___Currency_0;
	// System.UInt32 PlayFab.ClientModels.ValueToDateModel::TotalValue
	uint32_t ___TotalValue_1;
	// System.String PlayFab.ClientModels.ValueToDateModel::TotalValueAsDecimal
	String_t* ___TotalValueAsDecimal_2;
};

// PlayFab.ClientModels.Variable
struct Variable_tDCD6D1358DFF185712A375020E6EA7576EB437E7  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.Variable::Name
	String_t* ___Name_0;
	// System.String PlayFab.ClientModels.Variable::Value
	String_t* ___Value_1;
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

// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::m_AuthenticationLevel
	int32_t ___m_AuthenticationLevel_5;
	// System.Security.Principal.TokenImpersonationLevel System.Net.WebRequest::m_ImpersonationLevel
	int32_t ___m_ImpersonationLevel_6;
	// System.Net.Cache.RequestCachePolicy System.Net.WebRequest::m_CachePolicy
	RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550* ___m_CachePolicy_7;
	// System.Net.Cache.RequestCacheProtocol System.Net.WebRequest::m_CacheProtocol
	RequestCacheProtocol_t43C1AC170194874A0C0B0D3B8BE9EABFB613DF85* ___m_CacheProtocol_8;
	// System.Net.Cache.RequestCacheBinding System.Net.WebRequest::m_CacheBinding
	RequestCacheBinding_t18F3F4FF8D0F77E86C2C666CEE7FD48A80C042EE* ___m_CacheBinding_9;
};

struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_StaticFields
{
	// System.Collections.ArrayList modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_PrefixList
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___s_PrefixList_2;
	// System.Object System.Net.WebRequest::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_3;
	// System.Net.TimerThread/Queue System.Net.WebRequest::s_DefaultTimerQueue
	Queue_t644DC21212BC432819522EDA395EB4562BE2CC47* ___s_DefaultTimerQueue_4;
	// System.Net.WebRequest/DesignerWebRequestCreate System.Net.WebRequest::webRequestCreate
	DesignerWebRequestCreate_t75F62E4DEBF416E21EAF6FBB62E43ADB83A0753E* ___webRequestCreate_10;
	// System.Net.IWebProxy modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxy
	RuntimeObject* ___s_DefaultWebProxy_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxyInitialized
	bool ___s_DefaultWebProxyInitialized_12;
};

// System.Net.WebResponse
struct WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Boolean System.Net.WebResponse::m_IsCacheFresh
	bool ___m_IsCacheFresh_1;
	// System.Boolean System.Net.WebResponse::m_IsFromCache
	bool ___m_IsFromCache_2;
};

// PlayFab.ClientModels.XboxLiveAccountPlayFabIdPair
struct XboxLiveAccountPlayFabIdPair_t409FF6972AF23BC564AA53174AAEDDECAEC9F6DE  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.XboxLiveAccountPlayFabIdPair::PlayFabId
	String_t* ___PlayFabId_0;
	// System.String PlayFab.ClientModels.XboxLiveAccountPlayFabIdPair::XboxLiveAccountId
	String_t* ___XboxLiveAccountId_1;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D14_t9D86BCC3B9CF0C77C4379DDB6FFCD77CE5672D09 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t9D86BCC3B9CF0C77C4379DDB6FFCD77CE5672D09__padding[14];
	};
};
#pragma pack(pop, tp)

// System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 
{
	// System.Net.HttpWebRequest System.Net.HttpWebRequest/AuthorizationState::request
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request_0;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isProxy
	bool ___isProxy_1;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isCompleted
	bool ___isCompleted_2;
	// System.Net.HttpWebRequest/NtlmAuthState System.Net.HttpWebRequest/AuthorizationState::ntlm_auth_state
	int32_t ___ntlm_auth_state_3;
};
// Native definition for P/Invoke marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshaled_pinvoke
{
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};
// Native definition for COM marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshaled_com
{
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Nullable`1<System.DateTime>
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t35799B8F9E549902A8DD862EADDCF7DD7887890D_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::F69AE5FA1B0683C4BF3EFAA06507D1A30F94E8AE3F1E87D87982A7BF7AF2CA9D
	__StaticArrayInitTypeSizeU3D14_t9D86BCC3B9CF0C77C4379DDB6FFCD77CE5672D09 ___F69AE5FA1B0683C4BF3EFAA06507D1A30F94E8AE3F1E87D87982A7BF7AF2CA9D_0;
};

// PlayFab.ClientModels.AcceptTradeRequest
struct AcceptTradeRequest_tCA8D0094280CF37CD34F7BB9152DC0D23556F376  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.AcceptTradeRequest::AcceptedInventoryInstanceIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___AcceptedInventoryInstanceIds_1;
	// System.String PlayFab.ClientModels.AcceptTradeRequest::OfferingPlayerId
	String_t* ___OfferingPlayerId_2;
	// System.String PlayFab.ClientModels.AcceptTradeRequest::TradeId
	String_t* ___TradeId_3;
};

// PlayFab.ClientModels.AcceptTradeResponse
struct AcceptTradeResponse_t2DEB99BC611E243FCE8FC81CA3DDA8BAA2D13322  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// PlayFab.ClientModels.TradeInfo PlayFab.ClientModels.AcceptTradeResponse::Trade
	TradeInfo_tBE9088C4A58089296E230210566577FD2AEEEE07* ___Trade_2;
};

// PlayFab.ClientModels.AdCampaignAttributionModel
struct AdCampaignAttributionModel_t324EE01E17E5CC1340F13C8951C4B2F05B4945F7  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.DateTime PlayFab.ClientModels.AdCampaignAttributionModel::AttributedAt
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___AttributedAt_0;
	// System.String PlayFab.ClientModels.AdCampaignAttributionModel::CampaignId
	String_t* ___CampaignId_1;
	// System.String PlayFab.ClientModels.AdCampaignAttributionModel::Platform
	String_t* ___Platform_2;
};

// PlayFab.ClientModels.AdPlacementDetails
struct AdPlacementDetails_t1ACAA9338484D08748B37626C54ACAA90E7E7D71  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.AdPlacementDetails::PlacementId
	String_t* ___PlacementId_0;
	// System.String PlayFab.ClientModels.AdPlacementDetails::PlacementName
	String_t* ___PlacementName_1;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.AdPlacementDetails::PlacementViewsRemaining
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___PlacementViewsRemaining_2;
	// System.Nullable`1<System.Double> PlayFab.ClientModels.AdPlacementDetails::PlacementViewsResetMinutes
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___PlacementViewsResetMinutes_3;
	// System.String PlayFab.ClientModels.AdPlacementDetails::RewardAssetUrl
	String_t* ___RewardAssetUrl_4;
	// System.String PlayFab.ClientModels.AdPlacementDetails::RewardDescription
	String_t* ___RewardDescription_5;
	// System.String PlayFab.ClientModels.AdPlacementDetails::RewardId
	String_t* ___RewardId_6;
	// System.String PlayFab.ClientModels.AdPlacementDetails::RewardName
	String_t* ___RewardName_7;
};

// PlayFab.ClientModels.AddFriendRequest
struct AddFriendRequest_tF4BA2D4892D728DD9D5FFE396EAABCF13C1A9705  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.AddFriendRequest::FriendEmail
	String_t* ___FriendEmail_1;
	// System.String PlayFab.ClientModels.AddFriendRequest::FriendPlayFabId
	String_t* ___FriendPlayFabId_2;
	// System.String PlayFab.ClientModels.AddFriendRequest::FriendTitleDisplayName
	String_t* ___FriendTitleDisplayName_3;
	// System.String PlayFab.ClientModels.AddFriendRequest::FriendUsername
	String_t* ___FriendUsername_4;
};

// PlayFab.ClientModels.AddFriendResult
struct AddFriendResult_t0218A16AA3A18288F291B171DFD96376DE515534  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Boolean PlayFab.ClientModels.AddFriendResult::Created
	bool ___Created_2;
};

// PlayFab.ClientModels.AddGenericIDRequest
struct AddGenericIDRequest_t208E40CF528CA8272C8823BD051D213DAD5B0EA8  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// PlayFab.ClientModels.GenericServiceId PlayFab.ClientModels.AddGenericIDRequest::GenericId
	GenericServiceId_t845FFCE0230F5F2AC512688C09CB390784A40DCE* ___GenericId_1;
};

// PlayFab.ClientModels.AddGenericIDResult
struct AddGenericIDResult_t3E723F036056C29DF96F4E1053ED56304B3EC80F  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.AddOrUpdateContactEmailRequest
struct AddOrUpdateContactEmailRequest_t33A7F5F1E3CAE06D9563C4EED6BC4C6911451E7E  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.AddOrUpdateContactEmailRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.AddOrUpdateContactEmailRequest::EmailAddress
	String_t* ___EmailAddress_2;
};

// PlayFab.ClientModels.AddOrUpdateContactEmailResult
struct AddOrUpdateContactEmailResult_t631FCD1D822A3B0F46BE44BAF2E53E00E943DA70  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.AddSharedGroupMembersRequest
struct AddSharedGroupMembersRequest_t49F0477C5C94AC5E5A3A23B4DE6CEAEF27A11743  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.AddSharedGroupMembersRequest::PlayFabIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PlayFabIds_1;
	// System.String PlayFab.ClientModels.AddSharedGroupMembersRequest::SharedGroupId
	String_t* ___SharedGroupId_2;
};

// PlayFab.ClientModels.AddSharedGroupMembersResult
struct AddSharedGroupMembersResult_t7EE390B62E9A845FBCC7248A1AAD09C31AEF4879  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.AddUserVirtualCurrencyRequest
struct AddUserVirtualCurrencyRequest_tE481F2AF4ECA12DA7C32BFC4F7A78A005015223A  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Int32 PlayFab.ClientModels.AddUserVirtualCurrencyRequest::Amount
	int32_t ___Amount_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.AddUserVirtualCurrencyRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.AddUserVirtualCurrencyRequest::VirtualCurrency
	String_t* ___VirtualCurrency_3;
};

// PlayFab.ClientModels.AddUsernamePasswordRequest
struct AddUsernamePasswordRequest_t8CBA4EF047D9418B602D6D19B59907C1E2EE5B91  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.AddUsernamePasswordRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.AddUsernamePasswordRequest::Email
	String_t* ___Email_2;
	// System.String PlayFab.ClientModels.AddUsernamePasswordRequest::Password
	String_t* ___Password_3;
	// System.String PlayFab.ClientModels.AddUsernamePasswordRequest::Username
	String_t* ___Username_4;
};

// PlayFab.ClientModels.AddUsernamePasswordResult
struct AddUsernamePasswordResult_t1A7692E815C0BA6CD252047D9E52653952F2E72B  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.AddUsernamePasswordResult::Username
	String_t* ___Username_2;
};

// PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationRequest
struct AndroidDevicePushNotificationRegistrationRequest_tD1CFE25352A150E613CE3B461BF2890422CF7DD2  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationRequest::ConfirmationMessage
	String_t* ___ConfirmationMessage_1;
	// System.String PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationRequest::DeviceToken
	String_t* ___DeviceToken_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationRequest::SendPushNotificationConfirmation
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___SendPushNotificationConfirmation_3;
};

// PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationResult
struct AndroidDevicePushNotificationRegistrationResult_t0327FEE4DDC186DEA1B8752BDCF791267579210C  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.AttributeInstallRequest
struct AttributeInstallRequest_t3F0CE1807B4E4F4C8ECA5F054ADEF43040842FD4  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.AttributeInstallRequest::Adid
	String_t* ___Adid_1;
	// System.String PlayFab.ClientModels.AttributeInstallRequest::Idfa
	String_t* ___Idfa_2;
};

// PlayFab.ClientModels.AttributeInstallResult
struct AttributeInstallResult_t899E05405169CB686C872A120AF4627134A30C86  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.AuthenticationModels.AuthenticateCustomIdRequest
struct AuthenticateCustomIdRequest_tE91474227AC5EB717401D577941B21F995C8E5AC  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.AuthenticationModels.AuthenticateCustomIdRequest::CustomId
	String_t* ___CustomId_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.AuthenticationModels.AuthenticateCustomIdRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
};

// PlayFab.AuthenticationModels.AuthenticateCustomIdResult
struct AuthenticateCustomIdResult_t4B35C3258C572E8DFCC590A16993C5BC3F934F36  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// PlayFab.AuthenticationModels.EntityTokenResponse PlayFab.AuthenticationModels.AuthenticateCustomIdResult::EntityToken
	EntityTokenResponse_tCB7E0082B8ABD19A02403C6F9A438EF756D63E8B* ___EntityToken_2;
	// System.Boolean PlayFab.AuthenticationModels.AuthenticateCustomIdResult::NewlyCreated
	bool ___NewlyCreated_3;
};

// PlayFab.ClientModels.CancelTradeRequest
struct CancelTradeRequest_t71CBB4870F838FE0023A802A93945155CDF7ADFD  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.CancelTradeRequest::TradeId
	String_t* ___TradeId_1;
};

// PlayFab.ClientModels.CancelTradeResponse
struct CancelTradeResponse_t9D05D5983F3DB05CE845504A19ED0ECC83576AB4  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// PlayFab.ClientModels.TradeInfo PlayFab.ClientModels.CancelTradeResponse::Trade
	TradeInfo_tBE9088C4A58089296E230210566577FD2AEEEE07* ___Trade_2;
};

// PlayFab.ClientModels.CatalogItemConsumableInfo
struct CatalogItemConsumableInfo_t8E031AF03A11E82E6A5955C18D3BAC8BE5287A80  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.CatalogItemConsumableInfo::UsageCount
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___UsageCount_0;
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.CatalogItemConsumableInfo::UsagePeriod
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___UsagePeriod_1;
	// System.String PlayFab.ClientModels.CatalogItemConsumableInfo::UsagePeriodGroup
	String_t* ___UsagePeriodGroup_2;
};

// PlayFab.ClientModels.ConfirmPurchaseRequest
struct ConfirmPurchaseRequest_t34A41693EC4B5BC40728DE31124DDAB244538561  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ConfirmPurchaseRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.ConfirmPurchaseRequest::OrderId
	String_t* ___OrderId_2;
};

// PlayFab.ClientModels.ConfirmPurchaseResult
struct ConfirmPurchaseResult_tE18D51212E9CDA979D56C783A74CBD3DA19E261A  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.ConfirmPurchaseResult::Items
	List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264* ___Items_2;
	// System.String PlayFab.ClientModels.ConfirmPurchaseResult::OrderId
	String_t* ___OrderId_3;
	// System.DateTime PlayFab.ClientModels.ConfirmPurchaseResult::PurchaseDate
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___PurchaseDate_4;
};

// PlayFab.ClientModels.ConsumeItemRequest
struct ConsumeItemRequest_tF624E7A9D03B42057F78245C65E3CCF4640C02F0  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.ConsumeItemRequest::CharacterId
	String_t* ___CharacterId_1;
	// System.Int32 PlayFab.ClientModels.ConsumeItemRequest::ConsumeCount
	int32_t ___ConsumeCount_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ConsumeItemRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.String PlayFab.ClientModels.ConsumeItemRequest::ItemInstanceId
	String_t* ___ItemInstanceId_4;
};

// PlayFab.ClientModels.ConsumeItemResult
struct ConsumeItemResult_t857BE736F224FAAD829AB19DEB93CBDEBCC2A5AC  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.ConsumeItemResult::ItemInstanceId
	String_t* ___ItemInstanceId_2;
	// System.Int32 PlayFab.ClientModels.ConsumeItemResult::RemainingUses
	int32_t ___RemainingUses_3;
};

// PlayFab.ClientModels.ConsumeMicrosoftStoreEntitlementsRequest
struct ConsumeMicrosoftStoreEntitlementsRequest_tDC32D9C5D90BCC8F1C5306116BCD7ABB8F0DF4F3  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.ConsumeMicrosoftStoreEntitlementsRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ConsumeMicrosoftStoreEntitlementsRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// PlayFab.ClientModels.MicrosoftStorePayload PlayFab.ClientModels.ConsumeMicrosoftStoreEntitlementsRequest::MarketplaceSpecificData
	MicrosoftStorePayload_t06065D771429807DA9B8ADEE81B6E2219795C25E* ___MarketplaceSpecificData_3;
};

// PlayFab.ClientModels.ConsumeMicrosoftStoreEntitlementsResponse
struct ConsumeMicrosoftStoreEntitlementsResponse_t1149821801D39C822BB30732196D2A453FA7A6BD  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.ConsumeMicrosoftStoreEntitlementsResponse::Items
	List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264* ___Items_2;
};

// PlayFab.ClientModels.ConsumePS5EntitlementsRequest
struct ConsumePS5EntitlementsRequest_t1F4D452BA5687D7AB47A5DE16F70D08781904468  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.ConsumePS5EntitlementsRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ConsumePS5EntitlementsRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// PlayFab.ClientModels.PlayStation5Payload PlayFab.ClientModels.ConsumePS5EntitlementsRequest::MarketplaceSpecificData
	PlayStation5Payload_tAFC96038092FCE7BE6749D798C481EBDA45A174D* ___MarketplaceSpecificData_3;
};

// PlayFab.ClientModels.ConsumePS5EntitlementsResult
struct ConsumePS5EntitlementsResult_t503F5F1DA853DBBE3F670D1C6BA12C356A6D409F  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.ConsumePS5EntitlementsResult::Items
	List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264* ___Items_2;
};

// PlayFab.ClientModels.ConsumePSNEntitlementsRequest
struct ConsumePSNEntitlementsRequest_t17FBCC37A9E22D998654FCA5C98A273EAACEA864  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.ConsumePSNEntitlementsRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ConsumePSNEntitlementsRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.Int32 PlayFab.ClientModels.ConsumePSNEntitlementsRequest::ServiceLabel
	int32_t ___ServiceLabel_3;
};

// PlayFab.ClientModels.ConsumePSNEntitlementsResult
struct ConsumePSNEntitlementsResult_tA6CD96C5E6284DD36E67500A1B4A14C2883B2B5F  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.ConsumePSNEntitlementsResult::ItemsGranted
	List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264* ___ItemsGranted_2;
};

// PlayFab.ClientModels.ConsumeXboxEntitlementsRequest
struct ConsumeXboxEntitlementsRequest_tCB2BA68C6BDCFDEC0C45DDC56169D55CB5AC0A4F  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.ConsumeXboxEntitlementsRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ConsumeXboxEntitlementsRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.ConsumeXboxEntitlementsRequest::XboxToken
	String_t* ___XboxToken_3;
};

// PlayFab.ClientModels.ConsumeXboxEntitlementsResult
struct ConsumeXboxEntitlementsResult_tD340EB525403F8FC22939E14C0921424F4B0549F  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.ConsumeXboxEntitlementsResult::Items
	List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264* ___Items_2;
};

// PlayFab.ClientModels.ContactEmailInfoModel
struct ContactEmailInfoModel_tD30B739F3AD7363DB63A6C079C8191EC7C4ED92D  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.ContactEmailInfoModel::EmailAddress
	String_t* ___EmailAddress_0;
	// System.String PlayFab.ClientModels.ContactEmailInfoModel::Name
	String_t* ___Name_1;
	// System.Nullable`1<PlayFab.ClientModels.EmailVerificationStatus> PlayFab.ClientModels.ContactEmailInfoModel::VerificationStatus
	Nullable_1_t8E8E31869D660DB59DD20AF2497A3F2D9A97B08B ___VerificationStatus_2;
};

// PlayFab.ClientModels.CreateSharedGroupRequest
struct CreateSharedGroupRequest_t307D783E4A09507D5705E293B7F409DC01D9AEBF  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.CreateSharedGroupRequest::SharedGroupId
	String_t* ___SharedGroupId_1;
};

// PlayFab.ClientModels.CreateSharedGroupResult
struct CreateSharedGroupResult_tD3F430E2324446A1A03DB4C66B00A50345AA0FEE  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.CreateSharedGroupResult::SharedGroupId
	String_t* ___SharedGroupId_2;
};

// PlayFab.ClientModels.CurrentGamesRequest
struct CurrentGamesRequest_t9EBE4A14397B570B30163E4A6188EC02C8092FDB  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.CurrentGamesRequest::BuildVersion
	String_t* ___BuildVersion_1;
	// System.String PlayFab.ClientModels.CurrentGamesRequest::GameMode
	String_t* ___GameMode_2;
	// System.Nullable`1<PlayFab.ClientModels.Region> PlayFab.ClientModels.CurrentGamesRequest::Region
	Nullable_1_tD6B346427FD9C455F0D4135CC5DAB0274DD97359 ___Region_3;
	// System.String PlayFab.ClientModels.CurrentGamesRequest::StatisticName
	String_t* ___StatisticName_4;
	// PlayFab.ClientModels.CollectionFilter PlayFab.ClientModels.CurrentGamesRequest::TagFilter
	CollectionFilter_t7CCEA28D3D380C695200F3E7739551F70D1611BF* ___TagFilter_5;
};

// PlayFab.ClientModels.CurrentGamesResult
struct CurrentGamesResult_tB1A2E574010B94109AEEDB952F4B9DB92CF63324  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Int32 PlayFab.ClientModels.CurrentGamesResult::GameCount
	int32_t ___GameCount_2;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.GameInfo> PlayFab.ClientModels.CurrentGamesResult::Games
	List_1_tDED8AC802CA93DC9C4EB474BF6B5237025D099FD* ___Games_3;
	// System.Int32 PlayFab.ClientModels.CurrentGamesResult::PlayerCount
	int32_t ___PlayerCount_4;
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

// PlayFab.AuthenticationModels.DeleteRequest
struct DeleteRequest_t0B9D2C009B483135923187736BB065BB74B2B1DE  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.AuthenticationModels.DeleteRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// PlayFab.AuthenticationModels.EntityKey PlayFab.AuthenticationModels.DeleteRequest::Entity
	EntityKey_tFADF551D013525A30F2A6FB10A4FC4AF5F34278E* ___Entity_2;
};

// PlayFab.ClientModels.DeviceInfoRequest
struct DeviceInfoRequest_tBD53C238AFC812A302C8773CDA4CAF4DE27D8BAA  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> PlayFab.ClientModels.DeviceInfoRequest::Info
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___Info_1;
};

// PlayFab.AuthenticationModels.EmptyResponse
struct EmptyResponse_t5D64DF52A735AC35F2A14FC8A62D357FFFCA7652  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.EmptyResponse
struct EmptyResponse_t0A154C95CF262586F83678BD1D0986EA244FB89A  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.EmptyResult
struct EmptyResult_t3F8DAA8CDEAE30F534D1B72977760F073C48DE64  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
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

// PlayFab.ClientModels.ExecuteCloudScriptRequest
struct ExecuteCloudScriptRequest_tB66740CBA0752CC25A741260066BE6BF4E9559B3  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ExecuteCloudScriptRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.ExecuteCloudScriptRequest::FunctionName
	String_t* ___FunctionName_2;
	// System.Object PlayFab.ClientModels.ExecuteCloudScriptRequest::FunctionParameter
	RuntimeObject* ___FunctionParameter_3;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.ExecuteCloudScriptRequest::GeneratePlayStreamEvent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___GeneratePlayStreamEvent_4;
	// System.Nullable`1<PlayFab.ClientModels.CloudScriptRevisionOption> PlayFab.ClientModels.ExecuteCloudScriptRequest::RevisionSelection
	Nullable_1_t662A47B747392DCD56657B665EE87D89B6F99A71 ___RevisionSelection_5;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.ExecuteCloudScriptRequest::SpecificRevision
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___SpecificRevision_6;
};

// PlayFab.ClientModels.ExecuteCloudScriptResult
struct ExecuteCloudScriptResult_t9FD80BA0B58357B9AE506727246D18419BCD6F69  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Int32 PlayFab.ClientModels.ExecuteCloudScriptResult::APIRequestsIssued
	int32_t ___APIRequestsIssued_2;
	// PlayFab.ClientModels.ScriptExecutionError PlayFab.ClientModels.ExecuteCloudScriptResult::Error
	ScriptExecutionError_t15D016342B1D7DCF38FB8401037A2E748BF58785* ___Error_3;
	// System.Double PlayFab.ClientModels.ExecuteCloudScriptResult::ExecutionTimeSeconds
	double ___ExecutionTimeSeconds_4;
	// System.String PlayFab.ClientModels.ExecuteCloudScriptResult::FunctionName
	String_t* ___FunctionName_5;
	// System.Object PlayFab.ClientModels.ExecuteCloudScriptResult::FunctionResult
	RuntimeObject* ___FunctionResult_6;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.ExecuteCloudScriptResult::FunctionResultTooLarge
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___FunctionResultTooLarge_7;
	// System.Int32 PlayFab.ClientModels.ExecuteCloudScriptResult::HttpRequestsIssued
	int32_t ___HttpRequestsIssued_8;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.LogStatement> PlayFab.ClientModels.ExecuteCloudScriptResult::Logs
	List_1_t4F50739BF3D022D5FBDF9B0AB4F63496335995A9* ___Logs_9;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.ExecuteCloudScriptResult::LogsTooLarge
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___LogsTooLarge_10;
	// System.UInt32 PlayFab.ClientModels.ExecuteCloudScriptResult::MemoryConsumedBytes
	uint32_t ___MemoryConsumedBytes_11;
	// System.Double PlayFab.ClientModels.ExecuteCloudScriptResult::ProcessorTimeSeconds
	double ___ProcessorTimeSeconds_12;
	// System.Int32 PlayFab.ClientModels.ExecuteCloudScriptResult::Revision
	int32_t ___Revision_13;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_6;
};

// PlayFab.ClientModels.GameServerRegionsRequest
struct GameServerRegionsRequest_tE52E8B0933978E8BFBF9C35B02910A09FD660FA1  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GameServerRegionsRequest::BuildVersion
	String_t* ___BuildVersion_1;
	// System.String PlayFab.ClientModels.GameServerRegionsRequest::TitleId
	String_t* ___TitleId_2;
};

// PlayFab.ClientModels.GameServerRegionsResult
struct GameServerRegionsResult_t5193C393CE87A74A84E4E22E9AEA0106931A5949  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.RegionInfo> PlayFab.ClientModels.GameServerRegionsResult::Regions
	List_1_t7C8C73015E71402E06F497AA4626259BCA04D5D5* ___Regions_2;
};

// PlayFab.ClientModels.GetAccountInfoRequest
struct GetAccountInfoRequest_tC0147A50F81DD6B6BCC3ABD921E2930F6F43EBD4  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetAccountInfoRequest::Email
	String_t* ___Email_1;
	// System.String PlayFab.ClientModels.GetAccountInfoRequest::PlayFabId
	String_t* ___PlayFabId_2;
	// System.String PlayFab.ClientModels.GetAccountInfoRequest::TitleDisplayName
	String_t* ___TitleDisplayName_3;
	// System.String PlayFab.ClientModels.GetAccountInfoRequest::Username
	String_t* ___Username_4;
};

// PlayFab.ClientModels.GetAccountInfoResult
struct GetAccountInfoResult_t3749F7FEB631D14EE484694B7953E1EEC0D4997C  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// PlayFab.ClientModels.UserAccountInfo PlayFab.ClientModels.GetAccountInfoResult::AccountInfo
	UserAccountInfo_t1BF8B02028A765033899EE9940C15383AEF2726A* ___AccountInfo_2;
};

// PlayFab.ClientModels.GetAdPlacementsRequest
struct GetAdPlacementsRequest_tE5AEC539C50FBCB69CDC269CCE806B7E12735FE1  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetAdPlacementsRequest::AppId
	String_t* ___AppId_1;
	// PlayFab.ClientModels.NameIdentifier PlayFab.ClientModels.GetAdPlacementsRequest::Identifier
	NameIdentifier_tC463953295AF9517FB179D31BED70D412C5D144C* ___Identifier_2;
};

// PlayFab.ClientModels.GetAdPlacementsResult
struct GetAdPlacementsResult_tBDBA84AFBE0E8DFAA39F68B11B6C2E0ACAF58637  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.AdPlacementDetails> PlayFab.ClientModels.GetAdPlacementsResult::AdPlacements
	List_1_t352C6E0A448BDFB46B97AAFA229A67938AD7027B* ___AdPlacements_2;
};

// PlayFab.ClientModels.GetCatalogItemsRequest
struct GetCatalogItemsRequest_tCB1333AAA1EAFC89DFA7E9317A5C527C9B985553  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetCatalogItemsRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
};

// PlayFab.ClientModels.GetCatalogItemsResult
struct GetCatalogItemsResult_tB411483732EB649E2A5C87171A9A4A9DFB9F5B7A  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CatalogItem> PlayFab.ClientModels.GetCatalogItemsResult::Catalog
	List_1_t97F26C489AE12E90E2AE13099DFAEF9DED0B8F0C* ___Catalog_2;
};

// PlayFab.ClientModels.GetCharacterDataRequest
struct GetCharacterDataRequest_t6C05771F13C702A9045DD3B899170E5445B1766B  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetCharacterDataRequest::CharacterId
	String_t* ___CharacterId_1;
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.GetCharacterDataRequest::IfChangedFromDataVersion
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___IfChangedFromDataVersion_2;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetCharacterDataRequest::Keys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Keys_3;
	// System.String PlayFab.ClientModels.GetCharacterDataRequest::PlayFabId
	String_t* ___PlayFabId_4;
};

// PlayFab.ClientModels.GetCharacterDataResult
struct GetCharacterDataResult_tF0476467F5B9B17397185F7E4DAF671E2FE8F891  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.GetCharacterDataResult::CharacterId
	String_t* ___CharacterId_2;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.UserDataRecord> PlayFab.ClientModels.GetCharacterDataResult::Data
	Dictionary_2_tCCB825E12B065472E3DC7F9E132CF4B37C7226E2* ___Data_3;
	// System.UInt32 PlayFab.ClientModels.GetCharacterDataResult::DataVersion
	uint32_t ___DataVersion_4;
};

// PlayFab.ClientModels.GetCharacterInventoryRequest
struct GetCharacterInventoryRequest_t580ACC64D36255B5C5067A28C5CEF9EB0CF58CDD  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetCharacterInventoryRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.GetCharacterInventoryRequest::CharacterId
	String_t* ___CharacterId_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetCharacterInventoryRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
};

// PlayFab.ClientModels.GetCharacterInventoryResult
struct GetCharacterInventoryResult_t3B8789B3A7CDD4FB2D5412AAF4CC984E24F4BAF6  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.GetCharacterInventoryResult::CharacterId
	String_t* ___CharacterId_2;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.GetCharacterInventoryResult::Inventory
	List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264* ___Inventory_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.GetCharacterInventoryResult::VirtualCurrency
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___VirtualCurrency_4;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.VirtualCurrencyRechargeTime> PlayFab.ClientModels.GetCharacterInventoryResult::VirtualCurrencyRechargeTimes
	Dictionary_2_t980250F79C95159BFB075EFB408C944A4C31F774* ___VirtualCurrencyRechargeTimes_5;
};

// PlayFab.ClientModels.GetCharacterLeaderboardRequest
struct GetCharacterLeaderboardRequest_tAFAFAB8549BCD8A8E150271072595B60F4F1F3D3  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetCharacterLeaderboardRequest::CharacterType
	String_t* ___CharacterType_1;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetCharacterLeaderboardRequest::MaxResultsCount
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___MaxResultsCount_2;
	// System.Int32 PlayFab.ClientModels.GetCharacterLeaderboardRequest::StartPosition
	int32_t ___StartPosition_3;
	// System.String PlayFab.ClientModels.GetCharacterLeaderboardRequest::StatisticName
	String_t* ___StatisticName_4;
};

// PlayFab.ClientModels.GetCharacterLeaderboardResult
struct GetCharacterLeaderboardResult_t751226AA8B78F4B976034B2AAC6C2D2F15FCE8EE  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterLeaderboardEntry> PlayFab.ClientModels.GetCharacterLeaderboardResult::Leaderboard
	List_1_tF1AB119A40C4C4C0AD1C8B1D4896F87E4947DAF6* ___Leaderboard_2;
};

// PlayFab.ClientModels.GetCharacterStatisticsRequest
struct GetCharacterStatisticsRequest_t267D464960AF2DC89F894ACF664AA6B643EA6C34  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetCharacterStatisticsRequest::CharacterId
	String_t* ___CharacterId_1;
};

// PlayFab.ClientModels.GetCharacterStatisticsResult
struct GetCharacterStatisticsResult_t113C2ECA7AC503ED97126C8B4AF186BBE421C865  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.GetCharacterStatisticsResult::CharacterStatistics
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___CharacterStatistics_2;
};

// PlayFab.ClientModels.GetContentDownloadUrlRequest
struct GetContentDownloadUrlRequest_t51F47803DD20DD528B153AD2661EF0D7D4029654  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetContentDownloadUrlRequest::HttpMethod
	String_t* ___HttpMethod_1;
	// System.String PlayFab.ClientModels.GetContentDownloadUrlRequest::Key
	String_t* ___Key_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetContentDownloadUrlRequest::ThruCDN
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ThruCDN_3;
};

// PlayFab.ClientModels.GetContentDownloadUrlResult
struct GetContentDownloadUrlResult_tAFD987CB2B47A5D205B9D6780153BAB37915903E  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.GetContentDownloadUrlResult::URL
	String_t* ___URL_2;
};

// PlayFab.AuthenticationModels.GetEntityTokenRequest
struct GetEntityTokenRequest_t058F7E73EA27EED4A7E6A49B1FF0770354FF6E69  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.AuthenticationModels.GetEntityTokenRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// PlayFab.AuthenticationModels.EntityKey PlayFab.AuthenticationModels.GetEntityTokenRequest::Entity
	EntityKey_tFADF551D013525A30F2A6FB10A4FC4AF5F34278E* ___Entity_2;
};

// PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest
struct GetFriendLeaderboardAroundPlayerRequest_tBC527554F4EA5DC6C05BF33AB959977C4D3045B4  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::IncludeFacebookFriends
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___IncludeFacebookFriends_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::IncludeSteamFriends
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___IncludeSteamFriends_3;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::MaxResultsCount
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___MaxResultsCount_4;
	// System.String PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::PlayFabId
	String_t* ___PlayFabId_5;
	// PlayFab.ClientModels.PlayerProfileViewConstraints PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::ProfileConstraints
	PlayerProfileViewConstraints_t2D0216E216CDBEDAD806C569D17795B60FB7C550* ___ProfileConstraints_6;
	// System.String PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::StatisticName
	String_t* ___StatisticName_7;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::Version
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___Version_8;
	// System.String PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::XboxToken
	String_t* ___XboxToken_9;
};

// PlayFab.ClientModels.GetFriendLeaderboardRequest
struct GetFriendLeaderboardRequest_tC24921FC75AEB6D31EBAC1298F69419AF0F000B6  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetFriendLeaderboardRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetFriendLeaderboardRequest::IncludeFacebookFriends
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___IncludeFacebookFriends_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetFriendLeaderboardRequest::IncludeSteamFriends
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___IncludeSteamFriends_3;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetFriendLeaderboardRequest::MaxResultsCount
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___MaxResultsCount_4;
	// PlayFab.ClientModels.PlayerProfileViewConstraints PlayFab.ClientModels.GetFriendLeaderboardRequest::ProfileConstraints
	PlayerProfileViewConstraints_t2D0216E216CDBEDAD806C569D17795B60FB7C550* ___ProfileConstraints_5;
	// System.Int32 PlayFab.ClientModels.GetFriendLeaderboardRequest::StartPosition
	int32_t ___StartPosition_6;
	// System.String PlayFab.ClientModels.GetFriendLeaderboardRequest::StatisticName
	String_t* ___StatisticName_7;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetFriendLeaderboardRequest::Version
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___Version_8;
	// System.String PlayFab.ClientModels.GetFriendLeaderboardRequest::XboxToken
	String_t* ___XboxToken_9;
};

// PlayFab.ClientModels.GetFriendsListRequest
struct GetFriendsListRequest_tD095DC6CD5427ABC61B3F315FBB7204A75739444  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetFriendsListRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetFriendsListRequest::IncludeFacebookFriends
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___IncludeFacebookFriends_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetFriendsListRequest::IncludeSteamFriends
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___IncludeSteamFriends_3;
	// PlayFab.ClientModels.PlayerProfileViewConstraints PlayFab.ClientModels.GetFriendsListRequest::ProfileConstraints
	PlayerProfileViewConstraints_t2D0216E216CDBEDAD806C569D17795B60FB7C550* ___ProfileConstraints_4;
	// System.String PlayFab.ClientModels.GetFriendsListRequest::XboxToken
	String_t* ___XboxToken_5;
};

// PlayFab.ClientModels.GetFriendsListResult
struct GetFriendsListResult_tD350BDB67572F168FA932E98CE7C34DB1CDC0E9A  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.FriendInfo> PlayFab.ClientModels.GetFriendsListResult::Friends
	List_1_t6D8507218FAECCB535BB0160E5FF36043439BE65* ___Friends_2;
};

// PlayFab.ClientModels.GetLeaderboardAroundCharacterRequest
struct GetLeaderboardAroundCharacterRequest_tA81520118D8CC8B9D66E62B5999227D3378336B0  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetLeaderboardAroundCharacterRequest::CharacterId
	String_t* ___CharacterId_1;
	// System.String PlayFab.ClientModels.GetLeaderboardAroundCharacterRequest::CharacterType
	String_t* ___CharacterType_2;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetLeaderboardAroundCharacterRequest::MaxResultsCount
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___MaxResultsCount_3;
	// System.String PlayFab.ClientModels.GetLeaderboardAroundCharacterRequest::StatisticName
	String_t* ___StatisticName_4;
};

// PlayFab.ClientModels.GetLeaderboardAroundCharacterResult
struct GetLeaderboardAroundCharacterResult_t3033C56D162F38E42CA2C368C46DA2921A493E41  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterLeaderboardEntry> PlayFab.ClientModels.GetLeaderboardAroundCharacterResult::Leaderboard
	List_1_tF1AB119A40C4C4C0AD1C8B1D4896F87E4947DAF6* ___Leaderboard_2;
};

// PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest
struct GetLeaderboardAroundPlayerRequest_tD1C22CFB0F1F778DB0B694C76C423419A476DCFC  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest::MaxResultsCount
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___MaxResultsCount_2;
	// System.String PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest::PlayFabId
	String_t* ___PlayFabId_3;
	// PlayFab.ClientModels.PlayerProfileViewConstraints PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest::ProfileConstraints
	PlayerProfileViewConstraints_t2D0216E216CDBEDAD806C569D17795B60FB7C550* ___ProfileConstraints_4;
	// System.String PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest::StatisticName
	String_t* ___StatisticName_5;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest::Version
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___Version_6;
};

// PlayFab.ClientModels.GetLeaderboardForUsersCharactersRequest
struct GetLeaderboardForUsersCharactersRequest_tEF2A6C42242BD951785B3C3D4F5D169DF8A25C3C  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetLeaderboardForUsersCharactersRequest::StatisticName
	String_t* ___StatisticName_1;
};

// PlayFab.ClientModels.GetLeaderboardForUsersCharactersResult
struct GetLeaderboardForUsersCharactersResult_tE67CF47DF6B0C0EC8124A217495687D0ADAB2E89  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterLeaderboardEntry> PlayFab.ClientModels.GetLeaderboardForUsersCharactersResult::Leaderboard
	List_1_tF1AB119A40C4C4C0AD1C8B1D4896F87E4947DAF6* ___Leaderboard_2;
};

// PlayFab.ClientModels.GetLeaderboardRequest
struct GetLeaderboardRequest_t6815CF68472AB22065418C21DDEB07C883A41193  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetLeaderboardRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetLeaderboardRequest::MaxResultsCount
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___MaxResultsCount_2;
	// PlayFab.ClientModels.PlayerProfileViewConstraints PlayFab.ClientModels.GetLeaderboardRequest::ProfileConstraints
	PlayerProfileViewConstraints_t2D0216E216CDBEDAD806C569D17795B60FB7C550* ___ProfileConstraints_3;
	// System.Int32 PlayFab.ClientModels.GetLeaderboardRequest::StartPosition
	int32_t ___StartPosition_4;
	// System.String PlayFab.ClientModels.GetLeaderboardRequest::StatisticName
	String_t* ___StatisticName_5;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetLeaderboardRequest::Version
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___Version_6;
};

// PlayFab.ClientModels.GetPaymentTokenRequest
struct GetPaymentTokenRequest_t163B16A27CC6BE1E00893D7EC3368B2D245E00DC  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetPaymentTokenRequest::TokenProvider
	String_t* ___TokenProvider_1;
};

// PlayFab.ClientModels.GetPaymentTokenResult
struct GetPaymentTokenResult_t24602A341F685C823DA42D3B4ED51299A20133F3  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.GetPaymentTokenResult::OrderId
	String_t* ___OrderId_2;
	// System.String PlayFab.ClientModels.GetPaymentTokenResult::ProviderToken
	String_t* ___ProviderToken_3;
};

// PlayFab.ClientModels.GetPhotonAuthenticationTokenRequest
struct GetPhotonAuthenticationTokenRequest_t9B058BB73A238036A56AAE722094C94037DEB1C5  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetPhotonAuthenticationTokenRequest::PhotonApplicationId
	String_t* ___PhotonApplicationId_1;
};

// PlayFab.ClientModels.GetPhotonAuthenticationTokenResult
struct GetPhotonAuthenticationTokenResult_t6A42DA77B0947BB88E9672ED8CBE52461CA65272  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.GetPhotonAuthenticationTokenResult::PhotonCustomAuthenticationToken
	String_t* ___PhotonCustomAuthenticationToken_2;
};

// PlayFab.ClientModels.GetPlayFabIDsFromFacebookIDsRequest
struct GetPlayFabIDsFromFacebookIDsRequest_tB275AD11157BEDC861CAE56F8B8D86AC90E0051C  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromFacebookIDsRequest::FacebookIDs
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___FacebookIDs_1;
};

// PlayFab.ClientModels.GetPlayFabIDsFromFacebookIDsResult
struct GetPlayFabIDsFromFacebookIDsResult_tAC717CC80C6863B47645241E22AAB0B5199A8FA1  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.FacebookPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromFacebookIDsResult::Data
	List_1_t176D4CCD5CE6E641270ED2C16AC0C08031525076* ___Data_2;
};

// PlayFab.ClientModels.GetPlayFabIDsFromFacebookInstantGamesIdsRequest
struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest_tA75CEA154F216D5BF2C011E9DAE9BC3F8FD4E521  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromFacebookInstantGamesIdsRequest::FacebookInstantGamesIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___FacebookInstantGamesIds_1;
};

// PlayFab.ClientModels.GetPlayFabIDsFromFacebookInstantGamesIdsResult
struct GetPlayFabIDsFromFacebookInstantGamesIdsResult_tB8681765E88FD8D1405CA301744B4EB363A1C9FB  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.FacebookInstantGamesPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromFacebookInstantGamesIdsResult::Data
	List_1_t4FEA290778C8BA4594A23C022E14B6F3509259D4* ___Data_2;
};

// PlayFab.ClientModels.GetPlayFabIDsFromGameCenterIDsRequest
struct GetPlayFabIDsFromGameCenterIDsRequest_t03B38A98E8957924A2A962D103A7E23CC68C6DD6  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromGameCenterIDsRequest::GameCenterIDs
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___GameCenterIDs_1;
};

// PlayFab.ClientModels.GetPlayFabIDsFromGameCenterIDsResult
struct GetPlayFabIDsFromGameCenterIDsResult_tDDDD12C3F3725D9C09FF048B818E8E7B5CADFB45  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.GameCenterPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromGameCenterIDsResult::Data
	List_1_t90DF96744C9159EA1892F45C476475FD2924083D* ___Data_2;
};

// PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsRequest
struct GetPlayFabIDsFromGenericIDsRequest_t5A5E297DB35E0E92333069915B7156E47A89328E  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.GenericServiceId> PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsRequest::GenericIDs
	List_1_t9B91BE7A798D29A3000012C9037C15CFC12894DD* ___GenericIDs_1;
};

// PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsResult
struct GetPlayFabIDsFromGenericIDsResult_t4075E39127DC60513A34BD47FCD2EFD2220B5286  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.GenericPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsResult::Data
	List_1_t43564592808D45D3E17CBDEBAF931C84D4025DBE* ___Data_2;
};

// PlayFab.ClientModels.GetPlayFabIDsFromGoogleIDsRequest
struct GetPlayFabIDsFromGoogleIDsRequest_t3CAF0AB06B25DF209219981B9B370760572F0804  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromGoogleIDsRequest::GoogleIDs
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___GoogleIDs_1;
};

// PlayFab.ClientModels.GetPlayFabIDsFromGoogleIDsResult
struct GetPlayFabIDsFromGoogleIDsResult_t2B5CA8F7E79F8E066B817055C73B99DA89A42893  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.GooglePlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromGoogleIDsResult::Data
	List_1_t71CE1D87B88DFBCA6EC3B86687C9672E590C83C7* ___Data_2;
};

// PlayFab.ClientModels.GetPlayFabIDsFromGooglePlayGamesPlayerIDsRequest
struct GetPlayFabIDsFromGooglePlayGamesPlayerIDsRequest_t60FA7DD8AF722A7667CE69CECE1002EC1C5CAC6D  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromGooglePlayGamesPlayerIDsRequest::GooglePlayGamesPlayerIDs
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___GooglePlayGamesPlayerIDs_1;
};

// PlayFab.ClientModels.GetPlayFabIDsFromGooglePlayGamesPlayerIDsResult
struct GetPlayFabIDsFromGooglePlayGamesPlayerIDsResult_t0DC2980392783DF85E0900285356738EBE3D7CDE  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.GooglePlayGamesPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromGooglePlayGamesPlayerIDsResult::Data
	List_1_t37A1FDC26F6C0D9AA6B851E977ED5AA7B2C284F4* ___Data_2;
};

// PlayFab.ClientModels.GetPlayFabIDsFromKongregateIDsRequest
struct GetPlayFabIDsFromKongregateIDsRequest_t1C7F52700E5D3707F00FA27B987C6A9CDC69114D  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromKongregateIDsRequest::KongregateIDs
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___KongregateIDs_1;
};

// PlayFab.ClientModels.GetPlayFabIDsFromKongregateIDsResult
struct GetPlayFabIDsFromKongregateIDsResult_t65A76AE8A7A25A3F7601EEA68688941873EAACF7  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.KongregatePlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromKongregateIDsResult::Data
	List_1_t58E5A46A1013ABC842B46A744FB1A5B4E380256D* ___Data_2;
};

// PlayFab.ClientModels.GetPlayFabIDsFromNintendoServiceAccountIdsRequest
struct GetPlayFabIDsFromNintendoServiceAccountIdsRequest_t257824B35205A9C99B0444960998E8A7E26B519A  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromNintendoServiceAccountIdsRequest::NintendoAccountIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___NintendoAccountIds_1;
};

// PlayFab.ClientModels.GetPlayFabIDsFromNintendoServiceAccountIdsResult
struct GetPlayFabIDsFromNintendoServiceAccountIdsResult_tA4461DA79D669F1A17142350D6F021D1874497EF  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.NintendoServiceAccountPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromNintendoServiceAccountIdsResult::Data
	List_1_t347ED05405C8DA7325C059BEAD5AE9EC7DF2EF66* ___Data_2;
};

// PlayFab.ClientModels.GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_tC3BD96F79D674CE16C3ED9ECE716DF17D45FA96D  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::NintendoSwitchDeviceIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___NintendoSwitchDeviceIds_1;
};

// PlayFab.ClientModels.GetPlayFabIDsFromNintendoSwitchDeviceIdsResult
struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_tECF140F80FED44DF111B51657BFED4823A4C4145  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.NintendoSwitchPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::Data
	List_1_t2AD2009467B994C24ED420428E83761FA7746200* ___Data_2;
};

// PlayFab.ClientModels.GetPlayFabIDsFromPSNAccountIDsRequest
struct GetPlayFabIDsFromPSNAccountIDsRequest_t6215A503E62C27247574493608274CD9EAA56162  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetPlayFabIDsFromPSNAccountIDsRequest::IssuerId
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___IssuerId_1;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromPSNAccountIDsRequest::PSNAccountIDs
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PSNAccountIDs_2;
};

// PlayFab.ClientModels.GetPlayFabIDsFromPSNAccountIDsResult
struct GetPlayFabIDsFromPSNAccountIDsResult_t24CA2B421532AC4D974235E8AB71F36C2257B35B  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PSNAccountPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromPSNAccountIDsResult::Data
	List_1_tAE008C79A7DCEF28048C143C44B2C1BC73960E45* ___Data_2;
};

// PlayFab.ClientModels.GetPlayFabIDsFromSteamIDsRequest
struct GetPlayFabIDsFromSteamIDsRequest_tC1E89AE77985DEA520133F183C582CDF312046F2  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromSteamIDsRequest::SteamStringIDs
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___SteamStringIDs_1;
};

// PlayFab.ClientModels.GetPlayFabIDsFromSteamIDsResult
struct GetPlayFabIDsFromSteamIDsResult_t688E60B8A112A704F2262F596DC78A6E5BBB98C4  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.SteamPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromSteamIDsResult::Data
	List_1_t4DD7B6BF0DCD54F77005E9CB16B34AA3831649B5* ___Data_2;
};

// PlayFab.ClientModels.GetPlayFabIDsFromTwitchIDsRequest
struct GetPlayFabIDsFromTwitchIDsRequest_t305BBF2368DEA56D8D8A39B2044CEB66BDE540A1  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromTwitchIDsRequest::TwitchIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___TwitchIds_1;
};

// PlayFab.ClientModels.GetPlayFabIDsFromTwitchIDsResult
struct GetPlayFabIDsFromTwitchIDsResult_tBD52011CB3F0FF79DE2CFDA3AB748C3CCD6B011A  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.TwitchPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromTwitchIDsResult::Data
	List_1_t3E3414D8ECB90C7A51EB35E13889BD2FF0DC3D2B* ___Data_2;
};

// PlayFab.ClientModels.GetPlayFabIDsFromXboxLiveIDsRequest
struct GetPlayFabIDsFromXboxLiveIDsRequest_t73ACCAC2D27CFBE633FAAC6723E9CC12DDB035C9  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetPlayFabIDsFromXboxLiveIDsRequest::Sandbox
	String_t* ___Sandbox_1;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayFabIDsFromXboxLiveIDsRequest::XboxLiveAccountIDs
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___XboxLiveAccountIDs_2;
};

// PlayFab.ClientModels.GetPlayFabIDsFromXboxLiveIDsResult
struct GetPlayFabIDsFromXboxLiveIDsResult_t9D66C97D6008F3ED67EDDEE9CAC2DEE09A8DB595  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.XboxLiveAccountPlayFabIdPair> PlayFab.ClientModels.GetPlayFabIDsFromXboxLiveIDsResult::Data
	List_1_t5714EB5D583975242F3BCD3F610D00B5CAD397D2* ___Data_2;
};

// PlayFab.ClientModels.GetPlayerCombinedInfoRequest
struct GetPlayerCombinedInfoRequest_tCF9E872A2AEAF953E4F96DCADD93C27B78D2DFE2  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetPlayerCombinedInfoRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.GetPlayerCombinedInfoRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_2;
	// System.String PlayFab.ClientModels.GetPlayerCombinedInfoRequest::PlayFabId
	String_t* ___PlayFabId_3;
};

// PlayFab.ClientModels.GetPlayerCombinedInfoResult
struct GetPlayerCombinedInfoResult_t8FA02FB2B4EB7123C2BF5675C866BD6AA28AAB37  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload PlayFab.ClientModels.GetPlayerCombinedInfoResult::InfoResultPayload
	GetPlayerCombinedInfoResultPayload_t6323557A81B0FF04C6B66FC1F916864A4D738BCC* ___InfoResultPayload_2;
	// System.String PlayFab.ClientModels.GetPlayerCombinedInfoResult::PlayFabId
	String_t* ___PlayFabId_3;
};

// PlayFab.ClientModels.GetPlayerProfileRequest
struct GetPlayerProfileRequest_t96486783D0AF60EB25563E45CFE3605488A71B5F  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetPlayerProfileRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.GetPlayerProfileRequest::PlayFabId
	String_t* ___PlayFabId_2;
	// PlayFab.ClientModels.PlayerProfileViewConstraints PlayFab.ClientModels.GetPlayerProfileRequest::ProfileConstraints
	PlayerProfileViewConstraints_t2D0216E216CDBEDAD806C569D17795B60FB7C550* ___ProfileConstraints_3;
};

// PlayFab.ClientModels.GetPlayerProfileResult
struct GetPlayerProfileResult_tC88B24D6F67E08246A094323793DFD03E7711447  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// PlayFab.ClientModels.PlayerProfileModel PlayFab.ClientModels.GetPlayerProfileResult::PlayerProfile
	PlayerProfileModel_tEF2149D2652DD0B25B5250F8037A276739D1414A* ___PlayerProfile_2;
};

// PlayFab.ClientModels.GetPlayerSegmentsRequest
struct GetPlayerSegmentsRequest_t369D70CC3064DDB76E33223576F4A803BF1373CF  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
};

// PlayFab.ClientModels.GetPlayerSegmentsResult
struct GetPlayerSegmentsResult_tBADE60D468AC3889608F56640D078B51F49C0B38  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.GetSegmentResult> PlayFab.ClientModels.GetPlayerSegmentsResult::Segments
	List_1_t2006056A80F89FC3242936484F1B659BCBEC8941* ___Segments_2;
};

// PlayFab.ClientModels.GetPlayerStatisticVersionsRequest
struct GetPlayerStatisticVersionsRequest_tC68F5AB538E6E36CC55F357CF12AE3352F238134  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetPlayerStatisticVersionsRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.GetPlayerStatisticVersionsRequest::StatisticName
	String_t* ___StatisticName_2;
};

// PlayFab.ClientModels.GetPlayerStatisticVersionsResult
struct GetPlayerStatisticVersionsResult_tC31D18B33F7A932B27073E638072846BD2BCE501  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PlayerStatisticVersion> PlayFab.ClientModels.GetPlayerStatisticVersionsResult::StatisticVersions
	List_1_tA1DE21C9669CF4509EC1A140CD7AA1978F9D2342* ___StatisticVersions_2;
};

// PlayFab.ClientModels.GetPlayerStatisticsRequest
struct GetPlayerStatisticsRequest_t84EB62C2DBFFD24EE3B200F275ACA9F38E456951  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetPlayerStatisticsRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayerStatisticsRequest::StatisticNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___StatisticNames_2;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticNameVersion> PlayFab.ClientModels.GetPlayerStatisticsRequest::StatisticNameVersions
	List_1_tC357ECA6F83AF178994F568AC76734126E9270B4* ___StatisticNameVersions_3;
};

// PlayFab.ClientModels.GetPlayerStatisticsResult
struct GetPlayerStatisticsResult_tFE1BD2E17D8A1BB108E7989512B4A16D59C2789A  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticValue> PlayFab.ClientModels.GetPlayerStatisticsResult::Statistics
	List_1_tCDDF6F4596CECA134788D4BBE4D454B680279051* ___Statistics_2;
};

// PlayFab.ClientModels.GetPlayerTagsRequest
struct GetPlayerTagsRequest_tE2D18BFAFA7A80E9BF9FFC44F9CBD97F5B68A9D5  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetPlayerTagsRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.GetPlayerTagsRequest::Namespace
	String_t* ___Namespace_2;
	// System.String PlayFab.ClientModels.GetPlayerTagsRequest::PlayFabId
	String_t* ___PlayFabId_3;
};

// PlayFab.ClientModels.GetPlayerTagsResult
struct GetPlayerTagsResult_t14840C3B1B7D1D8D5F9886AE022D41B5EA972193  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.GetPlayerTagsResult::PlayFabId
	String_t* ___PlayFabId_2;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPlayerTagsResult::Tags
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Tags_3;
};

// PlayFab.ClientModels.GetPlayerTradesRequest
struct GetPlayerTradesRequest_t3935D3E0B3F425F04440E46D1C19045BB8C7F78E  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<PlayFab.ClientModels.TradeStatus> PlayFab.ClientModels.GetPlayerTradesRequest::StatusFilter
	Nullable_1_tD232C455277E63717C41233FF7F6A699FA27AC33 ___StatusFilter_1;
};

// PlayFab.ClientModels.GetPlayerTradesResponse
struct GetPlayerTradesResponse_tDB187D9030084374BA4CF7BE5DC2756D747C80EE  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.TradeInfo> PlayFab.ClientModels.GetPlayerTradesResponse::AcceptedTrades
	List_1_t6A0E065076890870C4685CD54FFBA38E511AF6F8* ___AcceptedTrades_2;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.TradeInfo> PlayFab.ClientModels.GetPlayerTradesResponse::OpenedTrades
	List_1_t6A0E065076890870C4685CD54FFBA38E511AF6F8* ___OpenedTrades_3;
};

// PlayFab.ClientModels.GetPublisherDataRequest
struct GetPublisherDataRequest_t6FE8DFD96382EDEB5A07C6E57847EC6DC71C7EC3  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetPublisherDataRequest::Keys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Keys_1;
};

// PlayFab.ClientModels.GetPublisherDataResult
struct GetPublisherDataResult_t09A484540E7F707BAA87D645B1950167DFF2E381  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetPublisherDataResult::Data
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Data_2;
};

// PlayFab.ClientModels.GetPurchaseRequest
struct GetPurchaseRequest_t8AC38239A654F572F0D3C0850F48E1C2834AE1FF  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetPurchaseRequest::OrderId
	String_t* ___OrderId_1;
};

// PlayFab.ClientModels.GetPurchaseResult
struct GetPurchaseResult_t000F08A7E707E8866A377F417EAE58C12D11C772  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.GetPurchaseResult::OrderId
	String_t* ___OrderId_2;
	// System.String PlayFab.ClientModels.GetPurchaseResult::PaymentProvider
	String_t* ___PaymentProvider_3;
	// System.DateTime PlayFab.ClientModels.GetPurchaseResult::PurchaseDate
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___PurchaseDate_4;
	// System.String PlayFab.ClientModels.GetPurchaseResult::TransactionId
	String_t* ___TransactionId_5;
	// System.String PlayFab.ClientModels.GetPurchaseResult::TransactionStatus
	String_t* ___TransactionStatus_6;
};

// PlayFab.ClientModels.GetSharedGroupDataRequest
struct GetSharedGroupDataRequest_t9D365EF3CCF61A5BEAB96F7B6475A1750370E679  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.GetSharedGroupDataRequest::GetMembers
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___GetMembers_1;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetSharedGroupDataRequest::Keys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Keys_2;
	// System.String PlayFab.ClientModels.GetSharedGroupDataRequest::SharedGroupId
	String_t* ___SharedGroupId_3;
};

// PlayFab.ClientModels.GetSharedGroupDataResult
struct GetSharedGroupDataResult_tE10462618F98D4D72B4D2A80ED15DE51E586713F  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.SharedGroupDataRecord> PlayFab.ClientModels.GetSharedGroupDataResult::Data
	Dictionary_2_t90F01328CE2DA3359FBE4ABC275E8A4A441F207E* ___Data_2;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetSharedGroupDataResult::Members
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Members_3;
};

// PlayFab.ClientModels.GetStoreItemsRequest
struct GetStoreItemsRequest_t795B5ADF001B53C52F13BC0031B798CBDCA5273C  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetStoreItemsRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.GetStoreItemsRequest::StoreId
	String_t* ___StoreId_2;
};

// PlayFab.ClientModels.GetStoreItemsResult
struct GetStoreItemsResult_t91D6A5BE358AF54C064CE69074FB2AAF16B5975A  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.GetStoreItemsResult::CatalogVersion
	String_t* ___CatalogVersion_2;
	// PlayFab.ClientModels.StoreMarketingModel PlayFab.ClientModels.GetStoreItemsResult::MarketingData
	StoreMarketingModel_t4AF761FD531E9A70AC9BF74380D0485A2F5DE95F* ___MarketingData_3;
	// System.Nullable`1<PlayFab.ClientModels.SourceType> PlayFab.ClientModels.GetStoreItemsResult::Source
	Nullable_1_tC6CEDEC6D14642AE9FB5A39F7B223AF7F619001D ___Source_4;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.StoreItem> PlayFab.ClientModels.GetStoreItemsResult::Store
	List_1_tEA5BB14D850766BB1796E0FC9B1B68D0451A2710* ___Store_5;
	// System.String PlayFab.ClientModels.GetStoreItemsResult::StoreId
	String_t* ___StoreId_6;
};

// PlayFab.ClientModels.GetTimeRequest
struct GetTimeRequest_tD244E02A36A259D9D162F39EF9850561A76D58F0  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
};

// PlayFab.ClientModels.GetTimeResult
struct GetTimeResult_tEB8D1A02D5AAC653D33C64187044F9EB2795E661  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.DateTime PlayFab.ClientModels.GetTimeResult::Time
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Time_2;
};

// PlayFab.ClientModels.GetTitleDataRequest
struct GetTitleDataRequest_t48B926031ABF3196C1C105A6AD3DF62FD3EE8B50  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetTitleDataRequest::Keys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Keys_1;
	// System.String PlayFab.ClientModels.GetTitleDataRequest::OverrideLabel
	String_t* ___OverrideLabel_2;
};

// PlayFab.ClientModels.GetTitleDataResult
struct GetTitleDataResult_tBA9144A60C32E90FDDC5373F749CB2D21B6F7238  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetTitleDataResult::Data
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Data_2;
};

// PlayFab.ClientModels.GetTitleNewsRequest
struct GetTitleNewsRequest_tD0FFE3851DEFDE35C3762D52999D333ED47CA828  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GetTitleNewsRequest::Count
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___Count_1;
};

// PlayFab.ClientModels.GetTitleNewsResult
struct GetTitleNewsResult_t16E7083D187D4161DF3A0FA73BBA9569FC099DD4  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.TitleNewsItem> PlayFab.ClientModels.GetTitleNewsResult::News
	List_1_tA1EA0E9437AE42314C4B00B909191D0B8ACDAE41* ___News_2;
};

// PlayFab.ClientModels.GetTitlePublicKeyRequest
struct GetTitlePublicKeyRequest_tD55EB65A4BE9FE8BBA552A042E4D38D280AB0E3C  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetTitlePublicKeyRequest::TitleId
	String_t* ___TitleId_1;
	// System.String PlayFab.ClientModels.GetTitlePublicKeyRequest::TitleSharedSecret
	String_t* ___TitleSharedSecret_2;
};

// PlayFab.ClientModels.GetTitlePublicKeyResult
struct GetTitlePublicKeyResult_tB6D105C0270A7A373FF154F17FC5770C8F824392  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.GetTitlePublicKeyResult::RSAPublicKey
	String_t* ___RSAPublicKey_2;
};

// PlayFab.ClientModels.GetTradeStatusRequest
struct GetTradeStatusRequest_t835601707B901582F75653879F3219C882F40F0B  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GetTradeStatusRequest::OfferingPlayerId
	String_t* ___OfferingPlayerId_1;
	// System.String PlayFab.ClientModels.GetTradeStatusRequest::TradeId
	String_t* ___TradeId_2;
};

// PlayFab.ClientModels.GetTradeStatusResponse
struct GetTradeStatusResponse_t8F2A08C0A8E34CDD08950EAFC3AB65C4DA42FDAA  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// PlayFab.ClientModels.TradeInfo PlayFab.ClientModels.GetTradeStatusResponse::Trade
	TradeInfo_tBE9088C4A58089296E230210566577FD2AEEEE07* ___Trade_2;
};

// PlayFab.ClientModels.GetUserDataRequest
struct GetUserDataRequest_tCAF1E6FC4FE7E58BE0D3BDFE78230975CC08E501  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.GetUserDataRequest::IfChangedFromDataVersion
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___IfChangedFromDataVersion_1;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GetUserDataRequest::Keys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Keys_2;
	// System.String PlayFab.ClientModels.GetUserDataRequest::PlayFabId
	String_t* ___PlayFabId_3;
};

// PlayFab.ClientModels.GetUserDataResult
struct GetUserDataResult_t68AF037F9916162542CE2C905DFF0B0C935FC48E  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.UserDataRecord> PlayFab.ClientModels.GetUserDataResult::Data
	Dictionary_2_tCCB825E12B065472E3DC7F9E132CF4B37C7226E2* ___Data_2;
	// System.UInt32 PlayFab.ClientModels.GetUserDataResult::DataVersion
	uint32_t ___DataVersion_3;
};

// PlayFab.ClientModels.GetUserInventoryRequest
struct GetUserInventoryRequest_t66955459A9F59280CDF3A98A5124052852A05BF2  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GetUserInventoryRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
};

// PlayFab.ClientModels.GetUserInventoryResult
struct GetUserInventoryResult_t28E377BC480EF10C504D613456F8A7BE1F7E4B16  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.GetUserInventoryResult::Inventory
	List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264* ___Inventory_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.GetUserInventoryResult::VirtualCurrency
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___VirtualCurrency_3;
	// System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.VirtualCurrencyRechargeTime> PlayFab.ClientModels.GetUserInventoryResult::VirtualCurrencyRechargeTimes
	Dictionary_2_t980250F79C95159BFB075EFB408C944A4C31F774* ___VirtualCurrencyRechargeTimes_4;
};

// PlayFab.ClientModels.GrantCharacterToUserRequest
struct GrantCharacterToUserRequest_tE6E4139743D537B38EB1AB3AD9255F8FBF795ADB  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.GrantCharacterToUserRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.GrantCharacterToUserRequest::CharacterName
	String_t* ___CharacterName_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GrantCharacterToUserRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.String PlayFab.ClientModels.GrantCharacterToUserRequest::ItemId
	String_t* ___ItemId_4;
};

// PlayFab.ClientModels.GrantCharacterToUserResult
struct GrantCharacterToUserResult_t995B7F5EBD2955C6EFE4CC4C94DC33615D359D07  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.GrantCharacterToUserResult::CharacterId
	String_t* ___CharacterId_2;
	// System.String PlayFab.ClientModels.GrantCharacterToUserResult::CharacterType
	String_t* ___CharacterType_3;
	// System.Boolean PlayFab.ClientModels.GrantCharacterToUserResult::Result
	bool ___Result_4;
};

// System.Net.HttpWebRequest
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9  : public WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B
{
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___requestUri_13;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___actualUri_14;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_15;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_16;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_17;
	// System.Boolean System.Net.HttpWebRequest::allowReadStreamBuffering
	bool ___allowReadStreamBuffering_18;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___certificates_19;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_20;
	// System.Boolean System.Net.HttpWebRequest::haveContentLength
	bool ___haveContentLength_21;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_22;
	// System.Net.HttpContinueDelegate System.Net.HttpWebRequest::continueDelegate
	HttpContinueDelegate_t174E5B124FF75DBAC627C6E41A0802A802EAE6D9* ___continueDelegate_23;
	// System.Net.CookieContainer System.Net.HttpWebRequest::cookieContainer
	CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E* ___cookieContainer_24;
	// System.Net.ICredentials System.Net.HttpWebRequest::credentials
	RuntimeObject* ___credentials_25;
	// System.Boolean System.Net.HttpWebRequest::haveResponse
	bool ___haveResponse_26;
	// System.Boolean System.Net.HttpWebRequest::requestSent
	bool ___requestSent_27;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___webHeaders_28;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_29;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_30;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_31;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_32;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_33;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_34;
	// System.Boolean System.Net.HttpWebRequest::preAuthenticate
	bool ___preAuthenticate_35;
	// System.Boolean System.Net.HttpWebRequest::usedPreAuth
	bool ___usedPreAuth_36;
	// System.Version System.Net.HttpWebRequest::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_37;
	// System.Boolean System.Net.HttpWebRequest::force_version
	bool ___force_version_38;
	// System.Version System.Net.HttpWebRequest::actualVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___actualVersion_39;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	RuntimeObject* ___proxy_40;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_41;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29* ___servicePoint_42;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_43;
	// System.Int32 System.Net.HttpWebRequest::continueTimeout
	int32_t ___continueTimeout_44;
	// System.Net.WebRequestStream System.Net.HttpWebRequest::writeStream
	WebRequestStream_t731AE4852452BAA73C240BDC7DCBA42ADAD2BAAB* ___writeStream_45;
	// System.Net.HttpWebResponse System.Net.HttpWebRequest::webResponse
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* ___webResponse_46;
	// System.Net.WebCompletionSource System.Net.HttpWebRequest::responseTask
	WebCompletionSource_tA2A9E04ED689218A1B2FAFCFD8F358CE4CBD30C5* ___responseTask_47;
	// System.Net.WebOperation System.Net.HttpWebRequest::currentOperation
	WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9* ___currentOperation_48;
	// System.Int32 System.Net.HttpWebRequest::aborted
	int32_t ___aborted_49;
	// System.Boolean System.Net.HttpWebRequest::gotRequestStream
	bool ___gotRequestStream_50;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_51;
	// System.Boolean System.Net.HttpWebRequest::expectContinue
	bool ___expectContinue_52;
	// System.Boolean System.Net.HttpWebRequest::getResponseCalled
	bool ___getResponseCalled_53;
	// System.Object System.Net.HttpWebRequest::locker
	RuntimeObject* ___locker_54;
	// System.Boolean System.Net.HttpWebRequest::finished_reading
	bool ___finished_reading_55;
	// System.Net.DecompressionMethods System.Net.HttpWebRequest::auto_decomp
	int32_t ___auto_decomp_56;
	// System.Int32 System.Net.HttpWebRequest::maxResponseHeadersLength
	int32_t ___maxResponseHeadersLength_57;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_61;
	// Mono.Net.Security.MobileTlsProvider System.Net.HttpWebRequest::tlsProvider
	MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* ___tlsProvider_62;
	// Mono.Security.Interface.MonoTlsSettings System.Net.HttpWebRequest::tlsSettings
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___tlsSettings_63;
	// System.Net.ServerCertValidationCallback System.Net.HttpWebRequest::certValidationCallback
	ServerCertValidationCallback_tC7A568060163FC6810AF9817F26F986C78CFC27F* ___certValidationCallback_64;
	// System.Boolean System.Net.HttpWebRequest::hostHasPort
	bool ___hostHasPort_65;
	// System.Uri System.Net.HttpWebRequest::hostUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___hostUri_66;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::auth_state
	AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 ___auth_state_67;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::proxy_auth_state
	AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 ___proxy_auth_state_68;
	// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task> System.Net.HttpWebRequest::ResendContentFactory
	Func_2_t378757FF082427448349A80CC63683B50DA787D3* ___ResendContentFactory_69;
	// System.Int32 System.Net.HttpWebRequest::ID
	int32_t ___ID_70;
	// System.Boolean System.Net.HttpWebRequest::<ThrowOnError>k__BackingField
	bool ___U3CThrowOnErrorU3Ek__BackingField_71;
	// System.Boolean System.Net.HttpWebRequest::unsafe_auth_blah
	bool ___unsafe_auth_blah_72;
	// System.Boolean System.Net.HttpWebRequest::<ReuseConnection>k__BackingField
	bool ___U3CReuseConnectionU3Ek__BackingField_73;
};

struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_StaticFields
{
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_58;
	// System.Int32 System.Net.HttpWebRequest::defaultMaximumErrorResponseLength
	int32_t ___defaultMaximumErrorResponseLength_59;
	// System.Net.Cache.RequestCachePolicy System.Net.HttpWebRequest::defaultCachePolicy
	RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550* ___defaultCachePolicy_60;
};

// System.Net.HttpWebResponse
struct HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A  : public WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682
{
	// System.Uri System.Net.HttpWebResponse::uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri_3;
	// System.Net.WebHeaderCollection System.Net.HttpWebResponse::webHeaders
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___webHeaders_4;
	// System.Net.CookieCollection System.Net.HttpWebResponse::cookieCollection
	CookieCollection_tB62B610A8E70C48DC8854F3D27BA916AF21D6608* ___cookieCollection_5;
	// System.String System.Net.HttpWebResponse::method
	String_t* ___method_6;
	// System.Version System.Net.HttpWebResponse::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_7;
	// System.Net.HttpStatusCode System.Net.HttpWebResponse::statusCode
	int32_t ___statusCode_8;
	// System.String System.Net.HttpWebResponse::statusDescription
	String_t* ___statusDescription_9;
	// System.Int64 System.Net.HttpWebResponse::contentLength
	int64_t ___contentLength_10;
	// System.String System.Net.HttpWebResponse::contentType
	String_t* ___contentType_11;
	// System.Net.CookieContainer System.Net.HttpWebResponse::cookie_container
	CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E* ___cookie_container_12;
	// System.Boolean System.Net.HttpWebResponse::disposed
	bool ___disposed_13;
	// System.IO.Stream System.Net.HttpWebResponse::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_14;
};

// PlayFab.ClientModels.LinkAndroidDeviceIDRequest
struct LinkAndroidDeviceIDRequest_tE370B4C43A2294AB1C93DB77F646956845E25F7D  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.LinkAndroidDeviceIDRequest::AndroidDevice
	String_t* ___AndroidDevice_1;
	// System.String PlayFab.ClientModels.LinkAndroidDeviceIDRequest::AndroidDeviceId
	String_t* ___AndroidDeviceId_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkAndroidDeviceIDRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkAndroidDeviceIDRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_4;
	// System.String PlayFab.ClientModels.LinkAndroidDeviceIDRequest::OS
	String_t* ___OS_5;
};

// PlayFab.ClientModels.LinkAndroidDeviceIDResult
struct LinkAndroidDeviceIDResult_t4C5F04B8430158F23DC644214A8D337824619911  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.LinkAppleRequest
struct LinkAppleRequest_tD84E9A0D6F6A8B62D3EE0CDA0B2796D05E91F5D1  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkAppleRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkAppleRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_2;
	// System.String PlayFab.ClientModels.LinkAppleRequest::IdentityToken
	String_t* ___IdentityToken_3;
};

// PlayFab.ClientModels.LinkCustomIDRequest
struct LinkCustomIDRequest_t05FE277ACC4DF9F596B9B1364C7A9495AE97C3B8  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.LinkCustomIDRequest::CustomId
	String_t* ___CustomId_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkCustomIDRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkCustomIDRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_3;
};

// PlayFab.ClientModels.LinkCustomIDResult
struct LinkCustomIDResult_t39271A15418FC2562F54CEC9A5C4448BB210D866  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.LinkFacebookAccountRequest
struct LinkFacebookAccountRequest_t88C4C375D233221A98D00DB50A9EFCD1B2D5478E  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.LinkFacebookAccountRequest::AccessToken
	String_t* ___AccessToken_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkFacebookAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkFacebookAccountRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_3;
};

// PlayFab.ClientModels.LinkFacebookAccountResult
struct LinkFacebookAccountResult_tF6DBE4CFEA793A6203945E018381F22047971081  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.LinkFacebookInstantGamesIdRequest
struct LinkFacebookInstantGamesIdRequest_t94A3B57DBAFA66C5760F0058BC521BFE1FC6B5D0  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkFacebookInstantGamesIdRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.LinkFacebookInstantGamesIdRequest::FacebookInstantGamesSignature
	String_t* ___FacebookInstantGamesSignature_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkFacebookInstantGamesIdRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_3;
};

// PlayFab.ClientModels.LinkFacebookInstantGamesIdResult
struct LinkFacebookInstantGamesIdResult_t1AAC9421C0C5BC3891EF7EBFBE208AC625FCCA96  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.LinkGameCenterAccountRequest
struct LinkGameCenterAccountRequest_tDBED4CD7330F5409D950EBEDF8FA2C8DDC546911  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkGameCenterAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkGameCenterAccountRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_2;
	// System.String PlayFab.ClientModels.LinkGameCenterAccountRequest::GameCenterId
	String_t* ___GameCenterId_3;
	// System.String PlayFab.ClientModels.LinkGameCenterAccountRequest::PublicKeyUrl
	String_t* ___PublicKeyUrl_4;
	// System.String PlayFab.ClientModels.LinkGameCenterAccountRequest::Salt
	String_t* ___Salt_5;
	// System.String PlayFab.ClientModels.LinkGameCenterAccountRequest::Signature
	String_t* ___Signature_6;
	// System.String PlayFab.ClientModels.LinkGameCenterAccountRequest::Timestamp
	String_t* ___Timestamp_7;
};

// PlayFab.ClientModels.LinkGameCenterAccountResult
struct LinkGameCenterAccountResult_t647D19A9B79502ED157221910A1614E3F1D7D3BF  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.LinkGoogleAccountRequest
struct LinkGoogleAccountRequest_tA5203EA33908B8A3D2394CE795AA88DB598574DB  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkGoogleAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkGoogleAccountRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_2;
	// System.String PlayFab.ClientModels.LinkGoogleAccountRequest::ServerAuthCode
	String_t* ___ServerAuthCode_3;
};

// PlayFab.ClientModels.LinkGoogleAccountResult
struct LinkGoogleAccountResult_t596A08B9745E145CEFDADFA0E56063D3D00CBC78  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.LinkGooglePlayGamesServicesAccountRequest
struct LinkGooglePlayGamesServicesAccountRequest_t4270383DFD5F35D6B2F64FD7A991FC688AE6526C  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkGooglePlayGamesServicesAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkGooglePlayGamesServicesAccountRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_2;
	// System.String PlayFab.ClientModels.LinkGooglePlayGamesServicesAccountRequest::ServerAuthCode
	String_t* ___ServerAuthCode_3;
};

// PlayFab.ClientModels.LinkGooglePlayGamesServicesAccountResult
struct LinkGooglePlayGamesServicesAccountResult_tC37A276A9BFCA6363605956D660B3EE9632C3388  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.LinkIOSDeviceIDRequest
struct LinkIOSDeviceIDRequest_t3AD9F66E46AEC025EC5A5BDB1498F79BBF019175  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkIOSDeviceIDRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.LinkIOSDeviceIDRequest::DeviceId
	String_t* ___DeviceId_2;
	// System.String PlayFab.ClientModels.LinkIOSDeviceIDRequest::DeviceModel
	String_t* ___DeviceModel_3;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkIOSDeviceIDRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_4;
	// System.String PlayFab.ClientModels.LinkIOSDeviceIDRequest::OS
	String_t* ___OS_5;
};

// PlayFab.ClientModels.LinkIOSDeviceIDResult
struct LinkIOSDeviceIDResult_tE942B412D48690F2CC586B2CC855EF661C95B4FC  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.LinkKongregateAccountRequest
struct LinkKongregateAccountRequest_t7799A47E023C84C2A094468997A37F9ECB7BCEC7  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.LinkKongregateAccountRequest::AuthTicket
	String_t* ___AuthTicket_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkKongregateAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkKongregateAccountRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_3;
	// System.String PlayFab.ClientModels.LinkKongregateAccountRequest::KongregateId
	String_t* ___KongregateId_4;
};

// PlayFab.ClientModels.LinkKongregateAccountResult
struct LinkKongregateAccountResult_tAFE7D9B9BCC18083B4CDB5CFA61F960DAADD6BF8  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.LinkNintendoServiceAccountRequest
struct LinkNintendoServiceAccountRequest_tABB5C3BEAA7E4BD9C66753EB8E55A5D3D684DB6E  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkNintendoServiceAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkNintendoServiceAccountRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_2;
	// System.String PlayFab.ClientModels.LinkNintendoServiceAccountRequest::IdentityToken
	String_t* ___IdentityToken_3;
};

// PlayFab.ClientModels.LinkNintendoSwitchDeviceIdRequest
struct LinkNintendoSwitchDeviceIdRequest_t797A16D441BB21AFDE5341E54954A1D992D4AF4C  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkNintendoSwitchDeviceIdRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkNintendoSwitchDeviceIdRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_2;
	// System.String PlayFab.ClientModels.LinkNintendoSwitchDeviceIdRequest::NintendoSwitchDeviceId
	String_t* ___NintendoSwitchDeviceId_3;
};

// PlayFab.ClientModels.LinkNintendoSwitchDeviceIdResult
struct LinkNintendoSwitchDeviceIdResult_t0EB5797B85E01D6D7A5D8059F6D041D1F14E645D  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.LinkOpenIdConnectRequest
struct LinkOpenIdConnectRequest_tF040FD89F84BACC7AC3E00A111457E05F413FC7C  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.LinkOpenIdConnectRequest::ConnectionId
	String_t* ___ConnectionId_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkOpenIdConnectRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkOpenIdConnectRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_3;
	// System.String PlayFab.ClientModels.LinkOpenIdConnectRequest::IdToken
	String_t* ___IdToken_4;
};

// PlayFab.ClientModels.LinkPSNAccountRequest
struct LinkPSNAccountRequest_tAD86DDC09E0704F6AF0489B4EE66B335D505C2CF  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.LinkPSNAccountRequest::AuthCode
	String_t* ___AuthCode_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkPSNAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkPSNAccountRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_3;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.LinkPSNAccountRequest::IssuerId
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___IssuerId_4;
	// System.String PlayFab.ClientModels.LinkPSNAccountRequest::RedirectUri
	String_t* ___RedirectUri_5;
};

// PlayFab.ClientModels.LinkPSNAccountResult
struct LinkPSNAccountResult_tD44785276C870B20241E65BFFA14D698BEC049D7  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.LinkSteamAccountRequest
struct LinkSteamAccountRequest_tBB6665529569D87319DF664D7EB1E444CE2D89E4  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkSteamAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkSteamAccountRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_2;
	// System.String PlayFab.ClientModels.LinkSteamAccountRequest::SteamTicket
	String_t* ___SteamTicket_3;
};

// PlayFab.ClientModels.LinkSteamAccountResult
struct LinkSteamAccountResult_tAFCB32B4FB5C004D500CA25655AE4AB3446277D5  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.LinkTwitchAccountRequest
struct LinkTwitchAccountRequest_tDAAC83284F1560A202F78A1BADF487F9FD382A17  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.LinkTwitchAccountRequest::AccessToken
	String_t* ___AccessToken_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkTwitchAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkTwitchAccountRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_3;
};

// PlayFab.ClientModels.LinkTwitchAccountResult
struct LinkTwitchAccountResult_tC185948589359A8546F92AA06575DA6B24661EB8  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.LinkXboxAccountRequest
struct LinkXboxAccountRequest_tFE99D5422A8736251BF9D92D53D93F3CEB3EAF8E  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LinkXboxAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LinkXboxAccountRequest::ForceLink
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___ForceLink_2;
	// System.String PlayFab.ClientModels.LinkXboxAccountRequest::XboxToken
	String_t* ___XboxToken_3;
};

// PlayFab.ClientModels.LinkXboxAccountResult
struct LinkXboxAccountResult_tD83C17194A9B9F7222DE65604C58DE3B9AA49FDF  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.LinkedPlatformAccountModel
struct LinkedPlatformAccountModel_t1DA79542E08AB1A8DD40A2001C3A2A88CD136F25  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.LinkedPlatformAccountModel::Email
	String_t* ___Email_0;
	// System.Nullable`1<PlayFab.ClientModels.LoginIdentityProvider> PlayFab.ClientModels.LinkedPlatformAccountModel::Platform
	Nullable_1_t5B7C5B187DC2527C1C1515BC997DF756887BB15A ___Platform_1;
	// System.String PlayFab.ClientModels.LinkedPlatformAccountModel::PlatformUserId
	String_t* ___PlatformUserId_2;
	// System.String PlayFab.ClientModels.LinkedPlatformAccountModel::Username
	String_t* ___Username_3;
};

// PlayFab.ClientModels.ListUsersCharactersRequest
struct ListUsersCharactersRequest_tCF5408D5CA5D53886FC36DB99B07C82075EDCCD5  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.ListUsersCharactersRequest::PlayFabId
	String_t* ___PlayFabId_1;
};

// PlayFab.ClientModels.ListUsersCharactersResult
struct ListUsersCharactersResult_tCD7FD4A1E18258556F000EC213622028E1DE9AA3  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CharacterResult> PlayFab.ClientModels.ListUsersCharactersResult::Characters
	List_1_tA848E8C0DB46B5FEF9D14E94E9501A6EDD685748* ___Characters_2;
};

// PlayFab.ClientModels.LocationModel
struct LocationModel_t1DFBA1A2A4966887BCE78D3536B90613C246595A  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.LocationModel::City
	String_t* ___City_0;
	// System.Nullable`1<PlayFab.ClientModels.ContinentCode> PlayFab.ClientModels.LocationModel::ContinentCode
	Nullable_1_t3EF9CF56AFA87C3A52854AA38643E7CAF92653D7 ___ContinentCode_1;
	// System.Nullable`1<PlayFab.ClientModels.CountryCode> PlayFab.ClientModels.LocationModel::CountryCode
	Nullable_1_t4ADB38113D162809A54E1BC38F5271E2F1625085 ___CountryCode_2;
	// System.Nullable`1<System.Double> PlayFab.ClientModels.LocationModel::Latitude
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___Latitude_3;
	// System.Nullable`1<System.Double> PlayFab.ClientModels.LocationModel::Longitude
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___Longitude_4;
};

// PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest
struct LoginWithAndroidDeviceIDRequest_t3A4C3D2EEA546EC82D997D95542CE9B57F59023B  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::AndroidDevice
	String_t* ___AndroidDevice_1;
	// System.String PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::AndroidDeviceId
	String_t* ___AndroidDeviceId_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_4;
	// System.String PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::EncryptedRequest
	String_t* ___EncryptedRequest_5;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_6;
	// System.String PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::OS
	String_t* ___OS_7;
	// System.String PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::PlayerSecret
	String_t* ___PlayerSecret_8;
	// System.String PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::TitleId
	String_t* ___TitleId_9;
};

// PlayFab.ClientModels.LoginWithAppleRequest
struct LoginWithAppleRequest_t432803D69AD4E022823FD67331F9E6725929F600  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithAppleRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithAppleRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.LoginWithAppleRequest::EncryptedRequest
	String_t* ___EncryptedRequest_3;
	// System.String PlayFab.ClientModels.LoginWithAppleRequest::IdentityToken
	String_t* ___IdentityToken_4;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithAppleRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_5;
	// System.String PlayFab.ClientModels.LoginWithAppleRequest::PlayerSecret
	String_t* ___PlayerSecret_6;
	// System.String PlayFab.ClientModels.LoginWithAppleRequest::TitleId
	String_t* ___TitleId_7;
};

// PlayFab.ClientModels.LoginWithCustomIDRequest
struct LoginWithCustomIDRequest_t9E1E078798737A8AD48B46EC9C0AA65092C8B05B  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithCustomIDRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_1;
	// System.String PlayFab.ClientModels.LoginWithCustomIDRequest::CustomId
	String_t* ___CustomId_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithCustomIDRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.String PlayFab.ClientModels.LoginWithCustomIDRequest::EncryptedRequest
	String_t* ___EncryptedRequest_4;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithCustomIDRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_5;
	// System.String PlayFab.ClientModels.LoginWithCustomIDRequest::PlayerSecret
	String_t* ___PlayerSecret_6;
	// System.String PlayFab.ClientModels.LoginWithCustomIDRequest::TitleId
	String_t* ___TitleId_7;
};

// PlayFab.ClientModels.LoginWithEmailAddressRequest
struct LoginWithEmailAddressRequest_t0D4A01BAE6DE0702B2BF796303B84ABDF575AD49  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithEmailAddressRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.LoginWithEmailAddressRequest::Email
	String_t* ___Email_2;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithEmailAddressRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_3;
	// System.String PlayFab.ClientModels.LoginWithEmailAddressRequest::Password
	String_t* ___Password_4;
	// System.String PlayFab.ClientModels.LoginWithEmailAddressRequest::TitleId
	String_t* ___TitleId_5;
};

// PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest
struct LoginWithFacebookInstantGamesIdRequest_t61431BD47D89224A04BD0D9D83D8641A7A605703  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest::EncryptedRequest
	String_t* ___EncryptedRequest_3;
	// System.String PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest::FacebookInstantGamesSignature
	String_t* ___FacebookInstantGamesSignature_4;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_5;
	// System.String PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest::PlayerSecret
	String_t* ___PlayerSecret_6;
	// System.String PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest::TitleId
	String_t* ___TitleId_7;
};

// PlayFab.ClientModels.LoginWithFacebookRequest
struct LoginWithFacebookRequest_t9CA5170513098AA9DF2E2EE80A70D55C156DF5A3  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.LoginWithFacebookRequest::AccessToken
	String_t* ___AccessToken_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithFacebookRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithFacebookRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.String PlayFab.ClientModels.LoginWithFacebookRequest::EncryptedRequest
	String_t* ___EncryptedRequest_4;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithFacebookRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_5;
	// System.String PlayFab.ClientModels.LoginWithFacebookRequest::PlayerSecret
	String_t* ___PlayerSecret_6;
	// System.String PlayFab.ClientModels.LoginWithFacebookRequest::TitleId
	String_t* ___TitleId_7;
};

// PlayFab.ClientModels.LoginWithGameCenterRequest
struct LoginWithGameCenterRequest_t47DCB198B2366A518C7480ED1BEBF1306BBAD543  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithGameCenterRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithGameCenterRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.LoginWithGameCenterRequest::EncryptedRequest
	String_t* ___EncryptedRequest_3;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithGameCenterRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_4;
	// System.String PlayFab.ClientModels.LoginWithGameCenterRequest::PlayerId
	String_t* ___PlayerId_5;
	// System.String PlayFab.ClientModels.LoginWithGameCenterRequest::PlayerSecret
	String_t* ___PlayerSecret_6;
	// System.String PlayFab.ClientModels.LoginWithGameCenterRequest::PublicKeyUrl
	String_t* ___PublicKeyUrl_7;
	// System.String PlayFab.ClientModels.LoginWithGameCenterRequest::Salt
	String_t* ___Salt_8;
	// System.String PlayFab.ClientModels.LoginWithGameCenterRequest::Signature
	String_t* ___Signature_9;
	// System.String PlayFab.ClientModels.LoginWithGameCenterRequest::Timestamp
	String_t* ___Timestamp_10;
	// System.String PlayFab.ClientModels.LoginWithGameCenterRequest::TitleId
	String_t* ___TitleId_11;
};

// PlayFab.ClientModels.LoginWithGoogleAccountRequest
struct LoginWithGoogleAccountRequest_tF51EDE37EB36FFA7B25883424A588876FE031120  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithGoogleAccountRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithGoogleAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.LoginWithGoogleAccountRequest::EncryptedRequest
	String_t* ___EncryptedRequest_3;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithGoogleAccountRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_4;
	// System.String PlayFab.ClientModels.LoginWithGoogleAccountRequest::PlayerSecret
	String_t* ___PlayerSecret_5;
	// System.String PlayFab.ClientModels.LoginWithGoogleAccountRequest::ServerAuthCode
	String_t* ___ServerAuthCode_6;
	// System.String PlayFab.ClientModels.LoginWithGoogleAccountRequest::TitleId
	String_t* ___TitleId_7;
};

// PlayFab.ClientModels.LoginWithGooglePlayGamesServicesRequest
struct LoginWithGooglePlayGamesServicesRequest_t10AFE0373B76927851BE9A1025302FD2CF44E0DA  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithGooglePlayGamesServicesRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithGooglePlayGamesServicesRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.LoginWithGooglePlayGamesServicesRequest::EncryptedRequest
	String_t* ___EncryptedRequest_3;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithGooglePlayGamesServicesRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_4;
	// System.String PlayFab.ClientModels.LoginWithGooglePlayGamesServicesRequest::PlayerSecret
	String_t* ___PlayerSecret_5;
	// System.String PlayFab.ClientModels.LoginWithGooglePlayGamesServicesRequest::ServerAuthCode
	String_t* ___ServerAuthCode_6;
	// System.String PlayFab.ClientModels.LoginWithGooglePlayGamesServicesRequest::TitleId
	String_t* ___TitleId_7;
};

// PlayFab.ClientModels.LoginWithIOSDeviceIDRequest
struct LoginWithIOSDeviceIDRequest_tF8F87A2ED958950DD3929AB8ECFC6E7667F29A4F  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::DeviceId
	String_t* ___DeviceId_3;
	// System.String PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::DeviceModel
	String_t* ___DeviceModel_4;
	// System.String PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::EncryptedRequest
	String_t* ___EncryptedRequest_5;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_6;
	// System.String PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::OS
	String_t* ___OS_7;
	// System.String PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::PlayerSecret
	String_t* ___PlayerSecret_8;
	// System.String PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::TitleId
	String_t* ___TitleId_9;
};

// PlayFab.ClientModels.LoginWithKongregateRequest
struct LoginWithKongregateRequest_t4AE23CFD1182E89A0CA8E547BB38E4ADA57B0FA5  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.LoginWithKongregateRequest::AuthTicket
	String_t* ___AuthTicket_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithKongregateRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithKongregateRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.String PlayFab.ClientModels.LoginWithKongregateRequest::EncryptedRequest
	String_t* ___EncryptedRequest_4;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithKongregateRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_5;
	// System.String PlayFab.ClientModels.LoginWithKongregateRequest::KongregateId
	String_t* ___KongregateId_6;
	// System.String PlayFab.ClientModels.LoginWithKongregateRequest::PlayerSecret
	String_t* ___PlayerSecret_7;
	// System.String PlayFab.ClientModels.LoginWithKongregateRequest::TitleId
	String_t* ___TitleId_8;
};

// PlayFab.ClientModels.LoginWithNintendoServiceAccountRequest
struct LoginWithNintendoServiceAccountRequest_tFA98602742349FC8F68FA91185CCCB322668DFB5  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithNintendoServiceAccountRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithNintendoServiceAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.LoginWithNintendoServiceAccountRequest::EncryptedRequest
	String_t* ___EncryptedRequest_3;
	// System.String PlayFab.ClientModels.LoginWithNintendoServiceAccountRequest::IdentityToken
	String_t* ___IdentityToken_4;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithNintendoServiceAccountRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_5;
	// System.String PlayFab.ClientModels.LoginWithNintendoServiceAccountRequest::PlayerSecret
	String_t* ___PlayerSecret_6;
	// System.String PlayFab.ClientModels.LoginWithNintendoServiceAccountRequest::TitleId
	String_t* ___TitleId_7;
};

// PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest
struct LoginWithNintendoSwitchDeviceIdRequest_t7D332789DC3FA24808B86CCB9C41A4400FD50C17  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest::EncryptedRequest
	String_t* ___EncryptedRequest_3;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_4;
	// System.String PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest::NintendoSwitchDeviceId
	String_t* ___NintendoSwitchDeviceId_5;
	// System.String PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest::PlayerSecret
	String_t* ___PlayerSecret_6;
	// System.String PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest::TitleId
	String_t* ___TitleId_7;
};

// PlayFab.ClientModels.LoginWithOpenIdConnectRequest
struct LoginWithOpenIdConnectRequest_tA8725EDACB83059224A03B9091ADC186E9DF2BBE  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.LoginWithOpenIdConnectRequest::ConnectionId
	String_t* ___ConnectionId_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithOpenIdConnectRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithOpenIdConnectRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.String PlayFab.ClientModels.LoginWithOpenIdConnectRequest::EncryptedRequest
	String_t* ___EncryptedRequest_4;
	// System.String PlayFab.ClientModels.LoginWithOpenIdConnectRequest::IdToken
	String_t* ___IdToken_5;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithOpenIdConnectRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_6;
	// System.String PlayFab.ClientModels.LoginWithOpenIdConnectRequest::PlayerSecret
	String_t* ___PlayerSecret_7;
	// System.String PlayFab.ClientModels.LoginWithOpenIdConnectRequest::TitleId
	String_t* ___TitleId_8;
};

// PlayFab.ClientModels.LoginWithPSNRequest
struct LoginWithPSNRequest_tB200DF6D65ABEF9B55227AFC0648EA145B54012C  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.LoginWithPSNRequest::AuthCode
	String_t* ___AuthCode_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithPSNRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithPSNRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.String PlayFab.ClientModels.LoginWithPSNRequest::EncryptedRequest
	String_t* ___EncryptedRequest_4;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithPSNRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_5;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.LoginWithPSNRequest::IssuerId
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___IssuerId_6;
	// System.String PlayFab.ClientModels.LoginWithPSNRequest::PlayerSecret
	String_t* ___PlayerSecret_7;
	// System.String PlayFab.ClientModels.LoginWithPSNRequest::RedirectUri
	String_t* ___RedirectUri_8;
	// System.String PlayFab.ClientModels.LoginWithPSNRequest::TitleId
	String_t* ___TitleId_9;
};

// PlayFab.ClientModels.LoginWithPlayFabRequest
struct LoginWithPlayFabRequest_t40758FC97BA27124A414398D558989E3ADC1BEDB  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithPlayFabRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithPlayFabRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_2;
	// System.String PlayFab.ClientModels.LoginWithPlayFabRequest::Password
	String_t* ___Password_3;
	// System.String PlayFab.ClientModels.LoginWithPlayFabRequest::TitleId
	String_t* ___TitleId_4;
	// System.String PlayFab.ClientModels.LoginWithPlayFabRequest::Username
	String_t* ___Username_5;
};

// PlayFab.ClientModels.LoginWithSteamRequest
struct LoginWithSteamRequest_t394F4FD07286ED05DDAB471F812FB6A471BF86C2  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithSteamRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithSteamRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.LoginWithSteamRequest::EncryptedRequest
	String_t* ___EncryptedRequest_3;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithSteamRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_4;
	// System.String PlayFab.ClientModels.LoginWithSteamRequest::PlayerSecret
	String_t* ___PlayerSecret_5;
	// System.String PlayFab.ClientModels.LoginWithSteamRequest::SteamTicket
	String_t* ___SteamTicket_6;
	// System.String PlayFab.ClientModels.LoginWithSteamRequest::TitleId
	String_t* ___TitleId_7;
};

// PlayFab.ClientModels.LoginWithTwitchRequest
struct LoginWithTwitchRequest_t015A772F0B539E3986E1DD2B0CA61F420BF436F1  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.LoginWithTwitchRequest::AccessToken
	String_t* ___AccessToken_1;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithTwitchRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithTwitchRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.String PlayFab.ClientModels.LoginWithTwitchRequest::EncryptedRequest
	String_t* ___EncryptedRequest_4;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithTwitchRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_5;
	// System.String PlayFab.ClientModels.LoginWithTwitchRequest::PlayerSecret
	String_t* ___PlayerSecret_6;
	// System.String PlayFab.ClientModels.LoginWithTwitchRequest::TitleId
	String_t* ___TitleId_7;
};

// PlayFab.ClientModels.LoginWithXboxRequest
struct LoginWithXboxRequest_tE59BFE96922B056F69FC761526E8EEFD9588D179  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.LoginWithXboxRequest::CreateAccount
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___CreateAccount_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.LoginWithXboxRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.LoginWithXboxRequest::EncryptedRequest
	String_t* ___EncryptedRequest_3;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.LoginWithXboxRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_4;
	// System.String PlayFab.ClientModels.LoginWithXboxRequest::PlayerSecret
	String_t* ___PlayerSecret_5;
	// System.String PlayFab.ClientModels.LoginWithXboxRequest::TitleId
	String_t* ___TitleId_6;
	// System.String PlayFab.ClientModels.LoginWithXboxRequest::XboxToken
	String_t* ___XboxToken_7;
};

// PlayFab.ClientModels.MatchmakeRequest
struct MatchmakeRequest_t5DF656F1E5EDDFEDAFBB4F95B4E6EB09BB209681  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.MatchmakeRequest::BuildVersion
	String_t* ___BuildVersion_1;
	// System.String PlayFab.ClientModels.MatchmakeRequest::CharacterId
	String_t* ___CharacterId_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.MatchmakeRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.String PlayFab.ClientModels.MatchmakeRequest::GameMode
	String_t* ___GameMode_4;
	// System.String PlayFab.ClientModels.MatchmakeRequest::LobbyId
	String_t* ___LobbyId_5;
	// System.Nullable`1<PlayFab.ClientModels.Region> PlayFab.ClientModels.MatchmakeRequest::Region
	Nullable_1_tD6B346427FD9C455F0D4135CC5DAB0274DD97359 ___Region_6;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.MatchmakeRequest::StartNewIfNoneFound
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___StartNewIfNoneFound_7;
	// System.String PlayFab.ClientModels.MatchmakeRequest::StatisticName
	String_t* ___StatisticName_8;
	// PlayFab.ClientModels.CollectionFilter PlayFab.ClientModels.MatchmakeRequest::TagFilter
	CollectionFilter_t7CCEA28D3D380C695200F3E7739551F70D1611BF* ___TagFilter_9;
};

// PlayFab.ClientModels.MatchmakeResult
struct MatchmakeResult_t91A455F1630FADD17929926ADFF7FDF7649DF3F2  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.MatchmakeResult::Expires
	String_t* ___Expires_2;
	// System.String PlayFab.ClientModels.MatchmakeResult::LobbyID
	String_t* ___LobbyID_3;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.MatchmakeResult::PollWaitTimeMS
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___PollWaitTimeMS_4;
	// System.String PlayFab.ClientModels.MatchmakeResult::ServerIPV4Address
	String_t* ___ServerIPV4Address_5;
	// System.String PlayFab.ClientModels.MatchmakeResult::ServerIPV6Address
	String_t* ___ServerIPV6Address_6;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.MatchmakeResult::ServerPort
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___ServerPort_7;
	// System.String PlayFab.ClientModels.MatchmakeResult::ServerPublicDNSName
	String_t* ___ServerPublicDNSName_8;
	// System.Nullable`1<PlayFab.ClientModels.MatchmakeStatus> PlayFab.ClientModels.MatchmakeResult::Status
	Nullable_1_tE95F98B8CD3BFF42B3F003FB77543C34A4123434 ___Status_9;
	// System.String PlayFab.ClientModels.MatchmakeResult::Ticket
	String_t* ___Ticket_10;
};

// PlayFab.ClientModels.ModifyUserVirtualCurrencyResult
struct ModifyUserVirtualCurrencyResult_tF894EC7B9796D1FAF729AFE3B51659784FDE7EF1  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Int32 PlayFab.ClientModels.ModifyUserVirtualCurrencyResult::Balance
	int32_t ___Balance_2;
	// System.Int32 PlayFab.ClientModels.ModifyUserVirtualCurrencyResult::BalanceChange
	int32_t ___BalanceChange_3;
	// System.String PlayFab.ClientModels.ModifyUserVirtualCurrencyResult::PlayFabId
	String_t* ___PlayFabId_4;
	// System.String PlayFab.ClientModels.ModifyUserVirtualCurrencyResult::VirtualCurrency
	String_t* ___VirtualCurrency_5;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// PlayFab.ClientModels.OpenTradeRequest
struct OpenTradeRequest_tA7910CAAFB97AB8643D279093230157EEA5CC4EE  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.OpenTradeRequest::AllowedPlayerIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___AllowedPlayerIds_1;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.OpenTradeRequest::OfferedInventoryInstanceIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___OfferedInventoryInstanceIds_2;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.OpenTradeRequest::RequestedCatalogItemIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___RequestedCatalogItemIds_3;
};

// PlayFab.ClientModels.OpenTradeResponse
struct OpenTradeResponse_t2CE0A33BD5DC0C64A948DFF6D5A513FAC50C1037  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// PlayFab.ClientModels.TradeInfo PlayFab.ClientModels.OpenTradeResponse::Trade
	TradeInfo_tBE9088C4A58089296E230210566577FD2AEEEE07* ___Trade_2;
};

// PlayFab.ClientModels.PayForPurchaseRequest
struct PayForPurchaseRequest_t5BFF248C9CB1FF6730145725A875A8328B4FB1A6  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.PayForPurchaseRequest::Currency
	String_t* ___Currency_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.PayForPurchaseRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.PayForPurchaseRequest::OrderId
	String_t* ___OrderId_3;
	// System.String PlayFab.ClientModels.PayForPurchaseRequest::ProviderName
	String_t* ___ProviderName_4;
	// System.String PlayFab.ClientModels.PayForPurchaseRequest::ProviderTransactionId
	String_t* ___ProviderTransactionId_5;
};

// PlayFab.ClientModels.PayForPurchaseResult
struct PayForPurchaseResult_t5E1B46A891BDD3D780DC2009E8922EA88BD69FFD  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.UInt32 PlayFab.ClientModels.PayForPurchaseResult::CreditApplied
	uint32_t ___CreditApplied_2;
	// System.String PlayFab.ClientModels.PayForPurchaseResult::OrderId
	String_t* ___OrderId_3;
	// System.String PlayFab.ClientModels.PayForPurchaseResult::ProviderData
	String_t* ___ProviderData_4;
	// System.String PlayFab.ClientModels.PayForPurchaseResult::ProviderToken
	String_t* ___ProviderToken_5;
	// System.String PlayFab.ClientModels.PayForPurchaseResult::PurchaseConfirmationPageURL
	String_t* ___PurchaseConfirmationPageURL_6;
	// System.String PlayFab.ClientModels.PayForPurchaseResult::PurchaseCurrency
	String_t* ___PurchaseCurrency_7;
	// System.UInt32 PlayFab.ClientModels.PayForPurchaseResult::PurchasePrice
	uint32_t ___PurchasePrice_8;
	// System.Nullable`1<PlayFab.ClientModels.TransactionStatus> PlayFab.ClientModels.PayForPurchaseResult::Status
	Nullable_1_t9E1F0EBFE9C6E268466ED4750DFB7BFA10FD8C07 ___Status_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.PayForPurchaseResult::VCAmount
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___VCAmount_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.PayForPurchaseResult::VirtualCurrency
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___VirtualCurrency_11;
};

// PlayFab.PlayFabError
struct PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23  : public RuntimeObject
{
	// System.String PlayFab.PlayFabError::ApiEndpoint
	String_t* ___ApiEndpoint_0;
	// System.Int32 PlayFab.PlayFabError::HttpCode
	int32_t ___HttpCode_1;
	// System.String PlayFab.PlayFabError::HttpStatus
	String_t* ___HttpStatus_2;
	// PlayFab.PlayFabErrorCode PlayFab.PlayFabError::Error
	int32_t ___Error_3;
	// System.String PlayFab.PlayFabError::ErrorMessage
	String_t* ___ErrorMessage_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> PlayFab.PlayFabError::ErrorDetails
	Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ___ErrorDetails_5;
	// System.Object PlayFab.PlayFabError::CustomData
	RuntimeObject* ___CustomData_6;
	// System.Nullable`1<System.UInt32> PlayFab.PlayFabError::RetryAfterSeconds
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___RetryAfterSeconds_7;
};

struct PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23_ThreadStaticFields
{
	// System.Text.StringBuilder PlayFab.PlayFabError::_tempSb
	StringBuilder_t* ____tempSb_8;
};

// PlayFab.SharedModels.PlayFabLoginResultCommon
struct PlayFabLoginResultCommon_t564463F743BE39995D6BBD360F222C16FB74AA47  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// PlayFab.PlayFabAuthenticationContext PlayFab.SharedModels.PlayFabLoginResultCommon::AuthenticationContext
	PlayFabAuthenticationContext_t221B79722A7A90BF01896A080CB0488FC0A9971A* ___AuthenticationContext_2;
};

// PlayFab.Internal.PlayFabWebRequest
struct PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863  : public RuntimeObject
{
	// System.Boolean PlayFab.Internal.PlayFabWebRequest::_isInitialized
	bool ____isInitialized_11;
};

struct PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields
{
	// System.Collections.Generic.Queue`1<System.Action> PlayFab.Internal.PlayFabWebRequest::ResultQueueTransferThread
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ___ResultQueueTransferThread_0;
	// System.Collections.Generic.Queue`1<System.Action> PlayFab.Internal.PlayFabWebRequest::ResultQueueMainThread
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ___ResultQueueMainThread_1;
	// System.Collections.Generic.List`1<PlayFab.Internal.CallRequestContainer> PlayFab.Internal.PlayFabWebRequest::ActiveRequests
	List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* ___ActiveRequests_2;
	// System.Boolean PlayFab.Internal.PlayFabWebRequest::certValidationSet
	bool ___certValidationSet_3;
	// System.Threading.Thread PlayFab.Internal.PlayFabWebRequest::_requestQueueThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ____requestQueueThread_4;
	// System.Object PlayFab.Internal.PlayFabWebRequest::_ThreadLock
	RuntimeObject* ____ThreadLock_5;
	// System.TimeSpan PlayFab.Internal.PlayFabWebRequest::ThreadKillTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___ThreadKillTimeout_6;
	// System.DateTime PlayFab.Internal.PlayFabWebRequest::_threadKillTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____threadKillTime_7;
	// System.Boolean PlayFab.Internal.PlayFabWebRequest::_isApplicationPlaying
	bool ____isApplicationPlaying_8;
	// System.Int32 PlayFab.Internal.PlayFabWebRequest::_activeCallCount
	int32_t ____activeCallCount_9;
	// System.String PlayFab.Internal.PlayFabWebRequest::_unityVersion
	String_t* ____unityVersion_10;
};

// PlayFab.ClientModels.PurchaseItemRequest
struct PurchaseItemRequest_tE070606E4EAD464357558E48126C4734D2F7C506  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.PurchaseItemRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.PurchaseItemRequest::CharacterId
	String_t* ___CharacterId_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.PurchaseItemRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.String PlayFab.ClientModels.PurchaseItemRequest::ItemId
	String_t* ___ItemId_4;
	// System.Int32 PlayFab.ClientModels.PurchaseItemRequest::Price
	int32_t ___Price_5;
	// System.String PlayFab.ClientModels.PurchaseItemRequest::StoreId
	String_t* ___StoreId_6;
	// System.String PlayFab.ClientModels.PurchaseItemRequest::VirtualCurrency
	String_t* ___VirtualCurrency_7;
};

// PlayFab.ClientModels.PurchaseItemResult
struct PurchaseItemResult_t0F98838DD4B9DD95771031D96FD60D88597D764D  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.PurchaseItemResult::Items
	List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264* ___Items_2;
};

// PlayFab.ClientModels.PurchaseReceiptFulfillment
struct PurchaseReceiptFulfillment_t186B9940CFED13815A2AEAC5253A2C9D4F9E6B50  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.PurchaseReceiptFulfillment::FulfilledItems
	List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264* ___FulfilledItems_0;
	// System.String PlayFab.ClientModels.PurchaseReceiptFulfillment::RecordedPriceSource
	String_t* ___RecordedPriceSource_1;
	// System.String PlayFab.ClientModels.PurchaseReceiptFulfillment::RecordedTransactionCurrency
	String_t* ___RecordedTransactionCurrency_2;
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.PurchaseReceiptFulfillment::RecordedTransactionTotal
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___RecordedTransactionTotal_3;
};

// PlayFab.ClientModels.PushNotificationRegistrationModel
struct PushNotificationRegistrationModel_t35ACE788D79DDE73C44F51819BBAC6214F267B26  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.PushNotificationRegistrationModel::NotificationEndpointARN
	String_t* ___NotificationEndpointARN_0;
	// System.Nullable`1<PlayFab.ClientModels.PushNotificationPlatform> PlayFab.ClientModels.PushNotificationRegistrationModel::Platform
	Nullable_1_tE251DA79A8D0E93D6B7DAB2E248E2683339EA695 ___Platform_1;
};

// PlayFab.ClientModels.RedeemCouponRequest
struct RedeemCouponRequest_t5675549F914957105DF0F1092BF4D9B9C2C8D1F2  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.RedeemCouponRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.RedeemCouponRequest::CharacterId
	String_t* ___CharacterId_2;
	// System.String PlayFab.ClientModels.RedeemCouponRequest::CouponCode
	String_t* ___CouponCode_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.RedeemCouponRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_4;
};

// PlayFab.ClientModels.RedeemCouponResult
struct RedeemCouponResult_tF194CA6CCFDD39047866D5A32510C64B4F1C45E7  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.RedeemCouponResult::GrantedItems
	List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264* ___GrantedItems_2;
};

// PlayFab.ClientModels.RefreshPSNAuthTokenRequest
struct RefreshPSNAuthTokenRequest_tAF960E83D3F69FFE09A341DF66DE48E0DE3D47A9  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.RefreshPSNAuthTokenRequest::AuthCode
	String_t* ___AuthCode_1;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.RefreshPSNAuthTokenRequest::IssuerId
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___IssuerId_2;
	// System.String PlayFab.ClientModels.RefreshPSNAuthTokenRequest::RedirectUri
	String_t* ___RedirectUri_3;
};

// PlayFab.ClientModels.RegionInfo
struct RegionInfo_t742920284384CB9F5B77AA896624869218F923F8  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Boolean PlayFab.ClientModels.RegionInfo::Available
	bool ___Available_0;
	// System.String PlayFab.ClientModels.RegionInfo::Name
	String_t* ___Name_1;
	// System.String PlayFab.ClientModels.RegionInfo::PingUrl
	String_t* ___PingUrl_2;
	// System.Nullable`1<PlayFab.ClientModels.Region> PlayFab.ClientModels.RegionInfo::Region
	Nullable_1_tD6B346427FD9C455F0D4135CC5DAB0274DD97359 ___Region_3;
};

// PlayFab.ClientModels.RegisterForIOSPushNotificationRequest
struct RegisterForIOSPushNotificationRequest_tAE58EB678D907A970C184A4A2FD2E9E75B3BE391  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.RegisterForIOSPushNotificationRequest::ConfirmationMessage
	String_t* ___ConfirmationMessage_1;
	// System.String PlayFab.ClientModels.RegisterForIOSPushNotificationRequest::DeviceToken
	String_t* ___DeviceToken_2;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.RegisterForIOSPushNotificationRequest::SendPushNotificationConfirmation
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___SendPushNotificationConfirmation_3;
};

// PlayFab.ClientModels.RegisterForIOSPushNotificationResult
struct RegisterForIOSPushNotificationResult_t3590642F3B094B5C4E1D094CBBC71D264CF28A8C  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.RegisterPlayFabUserRequest
struct RegisterPlayFabUserRequest_t9CCD4AA2142B94AA94D4F809486BB925E4EBEC4D  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.RegisterPlayFabUserRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserRequest::DisplayName
	String_t* ___DisplayName_2;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserRequest::Email
	String_t* ___Email_3;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserRequest::EncryptedRequest
	String_t* ___EncryptedRequest_4;
	// PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams PlayFab.ClientModels.RegisterPlayFabUserRequest::InfoRequestParameters
	GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* ___InfoRequestParameters_5;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserRequest::Password
	String_t* ___Password_6;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserRequest::PlayerSecret
	String_t* ___PlayerSecret_7;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.RegisterPlayFabUserRequest::RequireBothUsernameAndEmail
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___RequireBothUsernameAndEmail_8;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserRequest::TitleId
	String_t* ___TitleId_9;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserRequest::Username
	String_t* ___Username_10;
};

// PlayFab.ClientModels.RemoveContactEmailRequest
struct RemoveContactEmailRequest_tE33A6A7E8163B419221F72305702BE6A72B5D058  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.RemoveContactEmailRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
};

// PlayFab.ClientModels.RemoveContactEmailResult
struct RemoveContactEmailResult_t47A953EF532A4E6723358B699AD09F5B209280AE  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.RemoveFriendRequest
struct RemoveFriendRequest_t65DE6114B83F043B5D00AA3EADA456C1A640ED0C  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.RemoveFriendRequest::FriendPlayFabId
	String_t* ___FriendPlayFabId_1;
};

// PlayFab.ClientModels.RemoveFriendResult
struct RemoveFriendResult_t4D4C4DC05B609FF8C9F5758656C3ED678646A4A8  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.RemoveGenericIDRequest
struct RemoveGenericIDRequest_t334BD9293954FD10CECEF754B959B6CB03873601  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// PlayFab.ClientModels.GenericServiceId PlayFab.ClientModels.RemoveGenericIDRequest::GenericId
	GenericServiceId_t845FFCE0230F5F2AC512688C09CB390784A40DCE* ___GenericId_1;
};

// PlayFab.ClientModels.RemoveGenericIDResult
struct RemoveGenericIDResult_tEE02A4C18E83ACE22323711023D49D1EEDC93D02  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.RemoveSharedGroupMembersRequest
struct RemoveSharedGroupMembersRequest_t672B79755C84F7963F0197AC7F649DFB47BE62D4  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.RemoveSharedGroupMembersRequest::PlayFabIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PlayFabIds_1;
	// System.String PlayFab.ClientModels.RemoveSharedGroupMembersRequest::SharedGroupId
	String_t* ___SharedGroupId_2;
};

// PlayFab.ClientModels.RemoveSharedGroupMembersResult
struct RemoveSharedGroupMembersResult_t9F15AE0E2590B802799C461D364AEC2F41C87EF3  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.ReportAdActivityRequest
struct ReportAdActivityRequest_tF280F9F16376E09CA24C97A15524A57355362D19  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// PlayFab.ClientModels.AdActivity PlayFab.ClientModels.ReportAdActivityRequest::Activity
	int32_t ___Activity_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ReportAdActivityRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.ReportAdActivityRequest::PlacementId
	String_t* ___PlacementId_3;
	// System.String PlayFab.ClientModels.ReportAdActivityRequest::RewardId
	String_t* ___RewardId_4;
};

// PlayFab.ClientModels.ReportAdActivityResult
struct ReportAdActivityResult_t1C560F4635F86A0C40F5325FE39CB7FBE1DE1F9A  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.ReportPlayerClientRequest
struct ReportPlayerClientRequest_t85D945417F8AD84B449F05E00BAE283608DDBDA4  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.ReportPlayerClientRequest::Comment
	String_t* ___Comment_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ReportPlayerClientRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.ReportPlayerClientRequest::ReporteeId
	String_t* ___ReporteeId_3;
};

// PlayFab.ClientModels.ReportPlayerClientResult
struct ReportPlayerClientResult_t241E6D96E47D8719B56EFC690FD0F6CB76205BF8  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Int32 PlayFab.ClientModels.ReportPlayerClientResult::SubmissionsRemaining
	int32_t ___SubmissionsRemaining_2;
};

// PlayFab.ClientModels.RestoreIOSPurchasesRequest
struct RestoreIOSPurchasesRequest_t000097A3FD2F14C3F4F4DEBA527033F0BD3EF56E  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.RestoreIOSPurchasesRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.RestoreIOSPurchasesRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.RestoreIOSPurchasesRequest::ReceiptData
	String_t* ___ReceiptData_3;
};

// PlayFab.ClientModels.RestoreIOSPurchasesResult
struct RestoreIOSPurchasesResult_tEA0A385A03BA6A9080C82D126B97BB62C9C22375  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PurchaseReceiptFulfillment> PlayFab.ClientModels.RestoreIOSPurchasesResult::Fulfillments
	List_1_t50A44D8AB20157819C0C38F1E5363424ACC9C999* ___Fulfillments_2;
};

// PlayFab.ClientModels.RewardAdActivityRequest
struct RewardAdActivityRequest_tE9341F9C11C66589454A65BB945DD2E86C078BB7  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.RewardAdActivityRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.RewardAdActivityRequest::PlacementId
	String_t* ___PlacementId_2;
	// System.String PlayFab.ClientModels.RewardAdActivityRequest::RewardId
	String_t* ___RewardId_3;
};

// PlayFab.ClientModels.RewardAdActivityResult
struct RewardAdActivityResult_t94A00EAF9EE41752255A4673EF0E25B45E51117A  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.RewardAdActivityResult::AdActivityEventId
	String_t* ___AdActivityEventId_2;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.RewardAdActivityResult::DebugResults
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___DebugResults_3;
	// System.String PlayFab.ClientModels.RewardAdActivityResult::PlacementId
	String_t* ___PlacementId_4;
	// System.String PlayFab.ClientModels.RewardAdActivityResult::PlacementName
	String_t* ___PlacementName_5;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.RewardAdActivityResult::PlacementViewsRemaining
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___PlacementViewsRemaining_6;
	// System.Nullable`1<System.Double> PlayFab.ClientModels.RewardAdActivityResult::PlacementViewsResetMinutes
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___PlacementViewsResetMinutes_7;
	// PlayFab.ClientModels.AdRewardResults PlayFab.ClientModels.RewardAdActivityResult::RewardResults
	AdRewardResults_tCD3953C86B90682A93AB255F40D1B37AC745D82D* ___RewardResults_8;
};

// PlayFab.ClientModels.SendAccountRecoveryEmailRequest
struct SendAccountRecoveryEmailRequest_t175EB9B99FA2F2D019EA567249BBAA92033021B1  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.SendAccountRecoveryEmailRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.SendAccountRecoveryEmailRequest::Email
	String_t* ___Email_2;
	// System.String PlayFab.ClientModels.SendAccountRecoveryEmailRequest::EmailTemplateId
	String_t* ___EmailTemplateId_3;
	// System.String PlayFab.ClientModels.SendAccountRecoveryEmailRequest::TitleId
	String_t* ___TitleId_4;
};

// PlayFab.ClientModels.SendAccountRecoveryEmailResult
struct SendAccountRecoveryEmailResult_tD397DE2B4C711854DDCC6CD65878726990E83350  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.SetFriendTagsRequest
struct SetFriendTagsRequest_tB1697AECA1FFB648EF0E49EE1E32A8DFF64F1172  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.SetFriendTagsRequest::FriendPlayFabId
	String_t* ___FriendPlayFabId_1;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.SetFriendTagsRequest::Tags
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Tags_2;
};

// PlayFab.ClientModels.SetFriendTagsResult
struct SetFriendTagsResult_t3FB32FF008D7F79F4468EA6DA4C920327F49E13F  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.SetPlayerSecretRequest
struct SetPlayerSecretRequest_t155B28C6752FE84EE84726EECAB2789B76F80CFE  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.SetPlayerSecretRequest::EncryptedRequest
	String_t* ___EncryptedRequest_1;
	// System.String PlayFab.ClientModels.SetPlayerSecretRequest::PlayerSecret
	String_t* ___PlayerSecret_2;
};

// PlayFab.ClientModels.SetPlayerSecretResult
struct SetPlayerSecretResult_t0F0A2B0A39F5311D0B7DB58A08704B54D5E78F8C  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.SharedGroupDataRecord
struct SharedGroupDataRecord_t6EABB17CCB23C3B14A9F2A29E1C0B06308DE22EB  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.DateTime PlayFab.ClientModels.SharedGroupDataRecord::LastUpdated
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___LastUpdated_0;
	// System.String PlayFab.ClientModels.SharedGroupDataRecord::LastUpdatedBy
	String_t* ___LastUpdatedBy_1;
	// System.Nullable`1<PlayFab.ClientModels.UserDataPermission> PlayFab.ClientModels.SharedGroupDataRecord::Permission
	Nullable_1_t067499BB68589229FB737513FCF7C77D7952D5DB ___Permission_2;
	// System.String PlayFab.ClientModels.SharedGroupDataRecord::Value
	String_t* ___Value_3;
};

// PlayFab.ClientModels.StartPurchaseRequest
struct StartPurchaseRequest_tC40028ED224835E5869E8741528AFD27A5B3B497  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.StartPurchaseRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.StartPurchaseRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemPurchaseRequest> PlayFab.ClientModels.StartPurchaseRequest::Items
	List_1_t5E9A608270FE195066167121D49A36F80B9E22D5* ___Items_3;
	// System.String PlayFab.ClientModels.StartPurchaseRequest::StoreId
	String_t* ___StoreId_4;
};

// PlayFab.ClientModels.StartPurchaseResult
struct StartPurchaseResult_t5AE695449ACBCC8CA93186640E203802B1E0B70F  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.CartItem> PlayFab.ClientModels.StartPurchaseResult::Contents
	List_1_t07127EA14CA4D7E27B02EC1D9D7EB878FB216E51* ___Contents_2;
	// System.String PlayFab.ClientModels.StartPurchaseResult::OrderId
	String_t* ___OrderId_3;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PaymentOption> PlayFab.ClientModels.StartPurchaseResult::PaymentOptions
	List_1_t75868E13E47CE7F4CD6523D1277CFCA7E6390685* ___PaymentOptions_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.StartPurchaseResult::VirtualCurrencyBalances
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___VirtualCurrencyBalances_5;
};

// PlayFab.ClientModels.StatisticUpdate
struct StatisticUpdate_tFF1ABF7B0BF17840014AAC48D4470605441B5D34  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.StatisticUpdate::StatisticName
	String_t* ___StatisticName_0;
	// System.Int32 PlayFab.ClientModels.StatisticUpdate::Value
	int32_t ___Value_1;
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.StatisticUpdate::Version
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___Version_2;
};

// PlayFab.ClientModels.StoreItem
struct StoreItem_tADBFD4037B803EBC8EC6E38BA1FC7229FB63E71F  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Object PlayFab.ClientModels.StoreItem::CustomData
	RuntimeObject* ___CustomData_0;
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.StoreItem::DisplayPosition
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___DisplayPosition_1;
	// System.String PlayFab.ClientModels.StoreItem::ItemId
	String_t* ___ItemId_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.StoreItem::RealCurrencyPrices
	Dictionary_2_t3530A61C502BFE07F3ED20F8D9B10D762DB0F1D3* ___RealCurrencyPrices_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.StoreItem::VirtualCurrencyPrices
	Dictionary_2_t3530A61C502BFE07F3ED20F8D9B10D762DB0F1D3* ___VirtualCurrencyPrices_4;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// PlayFab.ClientModels.SubscriptionModel
struct SubscriptionModel_tE2460B7EA43E4F7761842C8E495DA045317FE5FF  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.DateTime PlayFab.ClientModels.SubscriptionModel::Expiration
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Expiration_0;
	// System.DateTime PlayFab.ClientModels.SubscriptionModel::InitialSubscriptionTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___InitialSubscriptionTime_1;
	// System.Boolean PlayFab.ClientModels.SubscriptionModel::IsActive
	bool ___IsActive_2;
	// System.Nullable`1<PlayFab.ClientModels.SubscriptionProviderStatus> PlayFab.ClientModels.SubscriptionModel::Status
	Nullable_1_t1C6D81215466D9E73A526195FE2F06D6299CE58C ___Status_3;
	// System.String PlayFab.ClientModels.SubscriptionModel::SubscriptionId
	String_t* ___SubscriptionId_4;
	// System.String PlayFab.ClientModels.SubscriptionModel::SubscriptionItemId
	String_t* ___SubscriptionItemId_5;
	// System.String PlayFab.ClientModels.SubscriptionModel::SubscriptionProvider
	String_t* ___SubscriptionProvider_6;
};

// PlayFab.ClientModels.SubtractUserVirtualCurrencyRequest
struct SubtractUserVirtualCurrencyRequest_t9EF5A4F8756E1C85E4DC210B659F064376422BD5  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Int32 PlayFab.ClientModels.SubtractUserVirtualCurrencyRequest::Amount
	int32_t ___Amount_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.SubtractUserVirtualCurrencyRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.SubtractUserVirtualCurrencyRequest::VirtualCurrency
	String_t* ___VirtualCurrency_3;
};

// PlayFab.ClientModels.TitleNewsItem
struct TitleNewsItem_t3FF911671D0CBBBC29FE3B156BD2CBFAA8E0E5B7  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.TitleNewsItem::Body
	String_t* ___Body_0;
	// System.String PlayFab.ClientModels.TitleNewsItem::NewsId
	String_t* ___NewsId_1;
	// System.DateTime PlayFab.ClientModels.TitleNewsItem::Timestamp
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Timestamp_2;
	// System.String PlayFab.ClientModels.TitleNewsItem::Title
	String_t* ___Title_3;
};

// PlayFab.ClientModels.UnlinkAndroidDeviceIDRequest
struct UnlinkAndroidDeviceIDRequest_tDEB5EEAC89390106CECE2C514E3B9FF6F9F72D9E  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.UnlinkAndroidDeviceIDRequest::AndroidDeviceId
	String_t* ___AndroidDeviceId_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkAndroidDeviceIDRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
};

// PlayFab.ClientModels.UnlinkAndroidDeviceIDResult
struct UnlinkAndroidDeviceIDResult_t1A883DF782BD48500607B480852AA2537F4F3327  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlinkAppleRequest
struct UnlinkAppleRequest_t92C5AB52E8736CCA3D8DE4841B1BDB8F7FB83222  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkAppleRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
};

// PlayFab.ClientModels.UnlinkCustomIDRequest
struct UnlinkCustomIDRequest_t46E020211057E7653AFE02D26F44F9E130D30521  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.UnlinkCustomIDRequest::CustomId
	String_t* ___CustomId_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkCustomIDRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
};

// PlayFab.ClientModels.UnlinkCustomIDResult
struct UnlinkCustomIDResult_t233F6432A9B50B2D68E3C568F574F4FA2D7BB60C  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlinkFacebookAccountRequest
struct UnlinkFacebookAccountRequest_tA7E318BFED129D19D58FA04FD6FBF6B7ADF85928  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkFacebookAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
};

// PlayFab.ClientModels.UnlinkFacebookAccountResult
struct UnlinkFacebookAccountResult_t64890736BCF70AA84E14FBABA25758E9554324B1  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlinkFacebookInstantGamesIdRequest
struct UnlinkFacebookInstantGamesIdRequest_t4B257DB75AFEEF708F6D5AC2C3BB1D09740F6C9C  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkFacebookInstantGamesIdRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.UnlinkFacebookInstantGamesIdRequest::FacebookInstantGamesId
	String_t* ___FacebookInstantGamesId_2;
};

// PlayFab.ClientModels.UnlinkFacebookInstantGamesIdResult
struct UnlinkFacebookInstantGamesIdResult_tA3C0ECA8433D6677C4BB580C8589346222E32D43  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlinkGameCenterAccountRequest
struct UnlinkGameCenterAccountRequest_t9596E9FC71D85C48FFF699F2AD829A3D0DEA901A  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkGameCenterAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
};

// PlayFab.ClientModels.UnlinkGameCenterAccountResult
struct UnlinkGameCenterAccountResult_t6F0C5BCEB35453E4CA8E05A31D654A782BC5E95F  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlinkGoogleAccountRequest
struct UnlinkGoogleAccountRequest_t67E73532283D56ED37F1E9F1289FDE4BE84967CC  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkGoogleAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
};

// PlayFab.ClientModels.UnlinkGoogleAccountResult
struct UnlinkGoogleAccountResult_t6622EFB999584E5DEC5DEB93D2935D979FBE846C  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlinkGooglePlayGamesServicesAccountRequest
struct UnlinkGooglePlayGamesServicesAccountRequest_t2F717932AF82E7668AA9724038C2A9F2229F7872  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkGooglePlayGamesServicesAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
};

// PlayFab.ClientModels.UnlinkGooglePlayGamesServicesAccountResult
struct UnlinkGooglePlayGamesServicesAccountResult_t5C6E7A2299B43C75BA9B8680100BF966FCE31270  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlinkIOSDeviceIDRequest
struct UnlinkIOSDeviceIDRequest_t1EE4B2AFE9CE7D0849D68EF258CADFB476EA53CA  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkIOSDeviceIDRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.UnlinkIOSDeviceIDRequest::DeviceId
	String_t* ___DeviceId_2;
};

// PlayFab.ClientModels.UnlinkIOSDeviceIDResult
struct UnlinkIOSDeviceIDResult_t4596D43010D9025839A9679C5DB058CBBF794AE9  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlinkKongregateAccountRequest
struct UnlinkKongregateAccountRequest_t2FEFF816F15AEF0C241926B63004694A5FC6FD87  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkKongregateAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
};

// PlayFab.ClientModels.UnlinkKongregateAccountResult
struct UnlinkKongregateAccountResult_tAB392A5AFFF5D1FDF901F514F11D3AD3B6021CC8  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlinkNintendoServiceAccountRequest
struct UnlinkNintendoServiceAccountRequest_t06B51402344303DA405A305B5B1F9A54C9145C84  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkNintendoServiceAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
};

// PlayFab.ClientModels.UnlinkNintendoSwitchDeviceIdRequest
struct UnlinkNintendoSwitchDeviceIdRequest_t35F44CBF87CFC802E5C568E898E4E203B3659A11  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkNintendoSwitchDeviceIdRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.UnlinkNintendoSwitchDeviceIdRequest::NintendoSwitchDeviceId
	String_t* ___NintendoSwitchDeviceId_2;
};

// PlayFab.ClientModels.UnlinkNintendoSwitchDeviceIdResult
struct UnlinkNintendoSwitchDeviceIdResult_tC9E5AD9A628AFDDD3DC1E3A2463C9A53307DFCD8  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlinkOpenIdConnectRequest
struct UnlinkOpenIdConnectRequest_t307BC82317C8730161E40EFDED957CF2A68E0799  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.UnlinkOpenIdConnectRequest::ConnectionId
	String_t* ___ConnectionId_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkOpenIdConnectRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
};

// PlayFab.ClientModels.UnlinkPSNAccountRequest
struct UnlinkPSNAccountRequest_t1060A17C5A70C60683D7F133E1ABBC8408A63EE3  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkPSNAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
};

// PlayFab.ClientModels.UnlinkPSNAccountResult
struct UnlinkPSNAccountResult_t72E4629A6FCA43E0C5BAA9E2EE059A5E756096E7  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlinkSteamAccountRequest
struct UnlinkSteamAccountRequest_t2876EA45B25D6F400BBB61DE5AC76A15EBAF02AA  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkSteamAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
};

// PlayFab.ClientModels.UnlinkSteamAccountResult
struct UnlinkSteamAccountResult_t0B0222CF28C08B53406C9B62FBA815C7C3AEE74E  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlinkTwitchAccountRequest
struct UnlinkTwitchAccountRequest_tE5BE128D46C7D5CCEE7B97DEEEC5CA2526CFCCE2  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.UnlinkTwitchAccountRequest::AccessToken
	String_t* ___AccessToken_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkTwitchAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
};

// PlayFab.ClientModels.UnlinkTwitchAccountResult
struct UnlinkTwitchAccountResult_tD82751FFBDC681DE0BB88D43A2C9298CCF0D8AA4  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlinkXboxAccountRequest
struct UnlinkXboxAccountRequest_t8E27CE0799DF36ECD984F4ED8DE17ED3657AE57E  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlinkXboxAccountRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
};

// PlayFab.ClientModels.UnlinkXboxAccountResult
struct UnlinkXboxAccountResult_tE2D65912D4AB4D5E32CA3561994FF8654DE07F7E  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UnlockContainerInstanceRequest
struct UnlockContainerInstanceRequest_tB7E4282214EEE56EF6DDA6CC5C4C8780F8C0FC94  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.UnlockContainerInstanceRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.UnlockContainerInstanceRequest::CharacterId
	String_t* ___CharacterId_2;
	// System.String PlayFab.ClientModels.UnlockContainerInstanceRequest::ContainerItemInstanceId
	String_t* ___ContainerItemInstanceId_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlockContainerInstanceRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_4;
	// System.String PlayFab.ClientModels.UnlockContainerInstanceRequest::KeyItemInstanceId
	String_t* ___KeyItemInstanceId_5;
};

// PlayFab.ClientModels.UnlockContainerItemRequest
struct UnlockContainerItemRequest_t820D81CB38D610CB71E1F56DC332E45B4B518ABC  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.UnlockContainerItemRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.UnlockContainerItemRequest::CharacterId
	String_t* ___CharacterId_2;
	// System.String PlayFab.ClientModels.UnlockContainerItemRequest::ContainerItemId
	String_t* ___ContainerItemId_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UnlockContainerItemRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_4;
};

// PlayFab.ClientModels.UnlockContainerItemResult
struct UnlockContainerItemResult_t35CFBDF59A70BE18F28D78CCF1E3FBFC0878ECF7  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ItemInstance> PlayFab.ClientModels.UnlockContainerItemResult::GrantedItems
	List_1_t0EF5E12708A02CDDAB397230F7858B452CA3C264* ___GrantedItems_2;
	// System.String PlayFab.ClientModels.UnlockContainerItemResult::UnlockedItemInstanceId
	String_t* ___UnlockedItemInstanceId_3;
	// System.String PlayFab.ClientModels.UnlockContainerItemResult::UnlockedWithItemInstanceId
	String_t* ___UnlockedWithItemInstanceId_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> PlayFab.ClientModels.UnlockContainerItemResult::VirtualCurrency
	Dictionary_2_t3530A61C502BFE07F3ED20F8D9B10D762DB0F1D3* ___VirtualCurrency_5;
};

// PlayFab.ClientModels.UpdateAvatarUrlRequest
struct UpdateAvatarUrlRequest_t72A827E07538C3CD5BA65A04CDAFE440BFE37040  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.UpdateAvatarUrlRequest::ImageUrl
	String_t* ___ImageUrl_1;
};

// PlayFab.ClientModels.UpdateCharacterDataRequest
struct UpdateCharacterDataRequest_t1A476F394AE1FFF66454B7F95C6530097CDF706A  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.UpdateCharacterDataRequest::CharacterId
	String_t* ___CharacterId_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateCharacterDataRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateCharacterDataRequest::Data
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Data_3;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.UpdateCharacterDataRequest::KeysToRemove
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___KeysToRemove_4;
	// System.Nullable`1<PlayFab.ClientModels.UserDataPermission> PlayFab.ClientModels.UpdateCharacterDataRequest::Permission
	Nullable_1_t067499BB68589229FB737513FCF7C77D7952D5DB ___Permission_5;
};

// PlayFab.ClientModels.UpdateCharacterDataResult
struct UpdateCharacterDataResult_tAB9AAEEA9FE8658FC10180393C742EA1E50401BE  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.UInt32 PlayFab.ClientModels.UpdateCharacterDataResult::DataVersion
	uint32_t ___DataVersion_2;
};

// PlayFab.ClientModels.UpdateCharacterStatisticsRequest
struct UpdateCharacterStatisticsRequest_tE19059CA8705B365B5C50F31FCD9EF302D50F02F  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.UpdateCharacterStatisticsRequest::CharacterId
	String_t* ___CharacterId_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayFab.ClientModels.UpdateCharacterStatisticsRequest::CharacterStatistics
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___CharacterStatistics_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateCharacterStatisticsRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
};

// PlayFab.ClientModels.UpdateCharacterStatisticsResult
struct UpdateCharacterStatisticsResult_t3F6EF334C142A8BC10FBA7320DDB57FA6BB0952A  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UpdatePlayerStatisticsRequest
struct UpdatePlayerStatisticsRequest_t5B474D977EE17B8842BF33DF9E60B09281F2A496  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdatePlayerStatisticsRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticUpdate> PlayFab.ClientModels.UpdatePlayerStatisticsRequest::Statistics
	List_1_t2BE2D151E3E6356A8F0DE6FDF222CFE019C3EE15* ___Statistics_2;
};

// PlayFab.ClientModels.UpdatePlayerStatisticsResult
struct UpdatePlayerStatisticsResult_tF1D48A2D96A003AFCDDE4DB38B179461B3E63E09  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UpdateSharedGroupDataRequest
struct UpdateSharedGroupDataRequest_t770268D7040E97EEF614E28201FBA15B27F07ABC  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateSharedGroupDataRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateSharedGroupDataRequest::Data
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Data_2;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.UpdateSharedGroupDataRequest::KeysToRemove
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___KeysToRemove_3;
	// System.Nullable`1<PlayFab.ClientModels.UserDataPermission> PlayFab.ClientModels.UpdateSharedGroupDataRequest::Permission
	Nullable_1_t067499BB68589229FB737513FCF7C77D7952D5DB ___Permission_4;
	// System.String PlayFab.ClientModels.UpdateSharedGroupDataRequest::SharedGroupId
	String_t* ___SharedGroupId_5;
};

// PlayFab.ClientModels.UpdateSharedGroupDataResult
struct UpdateSharedGroupDataResult_tC2A0B472A61723265334227D8BA7EE580C3D7DD9  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
};

// PlayFab.ClientModels.UpdateUserDataRequest
struct UpdateUserDataRequest_t00F2203E748C9D0B33E3CC673EAB649EB2B5662A  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateUserDataRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateUserDataRequest::Data
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Data_2;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.UpdateUserDataRequest::KeysToRemove
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___KeysToRemove_3;
	// System.Nullable`1<PlayFab.ClientModels.UserDataPermission> PlayFab.ClientModels.UpdateUserDataRequest::Permission
	Nullable_1_t067499BB68589229FB737513FCF7C77D7952D5DB ___Permission_4;
};

// PlayFab.ClientModels.UpdateUserDataResult
struct UpdateUserDataResult_t23060B0433CB78E7CECEDFC3F7D63B91E051A74B  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.UInt32 PlayFab.ClientModels.UpdateUserDataResult::DataVersion
	uint32_t ___DataVersion_2;
};

// PlayFab.ClientModels.UpdateUserTitleDisplayNameRequest
struct UpdateUserTitleDisplayNameRequest_t7A00322DBF953F51971F85914E1F5B8B75CC8E1C  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.UpdateUserTitleDisplayNameRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.ClientModels.UpdateUserTitleDisplayNameRequest::DisplayName
	String_t* ___DisplayName_2;
};

// PlayFab.ClientModels.UpdateUserTitleDisplayNameResult
struct UpdateUserTitleDisplayNameResult_t624047AEE8BB730C8B15D244261478F5A65DF950  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.UpdateUserTitleDisplayNameResult::DisplayName
	String_t* ___DisplayName_2;
};

// PlayFab.ClientModels.UserAccountInfo
struct UserAccountInfo_t1BF8B02028A765033899EE9940C15383AEF2726A  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// PlayFab.ClientModels.UserAndroidDeviceInfo PlayFab.ClientModels.UserAccountInfo::AndroidDeviceInfo
	UserAndroidDeviceInfo_tF7DC5DEEEC9611A18C44C582A421C87EFAF143E7* ___AndroidDeviceInfo_0;
	// PlayFab.ClientModels.UserAppleIdInfo PlayFab.ClientModels.UserAccountInfo::AppleAccountInfo
	UserAppleIdInfo_tC957F5FCFCA8C6C4EA5ABB763DF6EAE0A83A00B5* ___AppleAccountInfo_1;
	// System.DateTime PlayFab.ClientModels.UserAccountInfo::Created
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Created_2;
	// PlayFab.ClientModels.UserCustomIdInfo PlayFab.ClientModels.UserAccountInfo::CustomIdInfo
	UserCustomIdInfo_tF34BF320AEE125010D3D390BE3019CF6074D15AB* ___CustomIdInfo_3;
	// PlayFab.ClientModels.UserFacebookInfo PlayFab.ClientModels.UserAccountInfo::FacebookInfo
	UserFacebookInfo_t25341AA794CE37708FF857832B3D40C31005F859* ___FacebookInfo_4;
	// PlayFab.ClientModels.UserFacebookInstantGamesIdInfo PlayFab.ClientModels.UserAccountInfo::FacebookInstantGamesIdInfo
	UserFacebookInstantGamesIdInfo_t4AA586B3DB010191CA46294964526B9C6BD0DEFA* ___FacebookInstantGamesIdInfo_5;
	// PlayFab.ClientModels.UserGameCenterInfo PlayFab.ClientModels.UserAccountInfo::GameCenterInfo
	UserGameCenterInfo_tF3E4DC8FCE46154B31494ABC83FF654AB1CE2C42* ___GameCenterInfo_6;
	// PlayFab.ClientModels.UserGoogleInfo PlayFab.ClientModels.UserAccountInfo::GoogleInfo
	UserGoogleInfo_t375C252AF8732A3B29CC0ACA458788F57705CD16* ___GoogleInfo_7;
	// PlayFab.ClientModels.UserGooglePlayGamesInfo PlayFab.ClientModels.UserAccountInfo::GooglePlayGamesInfo
	UserGooglePlayGamesInfo_tF42B79157DF36B2D327573D632CFB3CD62B0BBB8* ___GooglePlayGamesInfo_8;
	// PlayFab.ClientModels.UserIosDeviceInfo PlayFab.ClientModels.UserAccountInfo::IosDeviceInfo
	UserIosDeviceInfo_tB0E4BB1232D6B58F35B0BD7730E967E50B25ACDD* ___IosDeviceInfo_9;
	// PlayFab.ClientModels.UserKongregateInfo PlayFab.ClientModels.UserAccountInfo::KongregateInfo
	UserKongregateInfo_t81FAC344B4B42B3689F7F42D355D8BE667E5B3BD* ___KongregateInfo_10;
	// PlayFab.ClientModels.UserNintendoSwitchAccountIdInfo PlayFab.ClientModels.UserAccountInfo::NintendoSwitchAccountInfo
	UserNintendoSwitchAccountIdInfo_tBD867A24EE34BA9F1E516FC85B3D1E8BCC108F13* ___NintendoSwitchAccountInfo_11;
	// PlayFab.ClientModels.UserNintendoSwitchDeviceIdInfo PlayFab.ClientModels.UserAccountInfo::NintendoSwitchDeviceIdInfo
	UserNintendoSwitchDeviceIdInfo_t53FA7FEB383F7C94C8DF61E423E3049ADF135388* ___NintendoSwitchDeviceIdInfo_12;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.UserOpenIdInfo> PlayFab.ClientModels.UserAccountInfo::OpenIdInfo
	List_1_t36DD8E0BEC48B5AC224AC1F197CE5342EE4C6D62* ___OpenIdInfo_13;
	// System.String PlayFab.ClientModels.UserAccountInfo::PlayFabId
	String_t* ___PlayFabId_14;
	// PlayFab.ClientModels.UserPrivateAccountInfo PlayFab.ClientModels.UserAccountInfo::PrivateInfo
	UserPrivateAccountInfo_t91F7AE36BB4FCCB4CC40C6B6027F6BFC034D50A2* ___PrivateInfo_15;
	// PlayFab.ClientModels.UserPsnInfo PlayFab.ClientModels.UserAccountInfo::PsnInfo
	UserPsnInfo_t8A71B58419169BBDA2512C61AB4D75B25CE15EAB* ___PsnInfo_16;
	// PlayFab.ClientModels.UserSteamInfo PlayFab.ClientModels.UserAccountInfo::SteamInfo
	UserSteamInfo_t9683A2E6234656912ED104E9AC9C9C6857CE23EA* ___SteamInfo_17;
	// PlayFab.ClientModels.UserTitleInfo PlayFab.ClientModels.UserAccountInfo::TitleInfo
	UserTitleInfo_tB92EBF892AF2FE961FBA3C279C86C5A4E6E17821* ___TitleInfo_18;
	// PlayFab.ClientModels.UserTwitchInfo PlayFab.ClientModels.UserAccountInfo::TwitchInfo
	UserTwitchInfo_t4C6ECD3CCCCE4C62C7CB6F454D1ED64EDD3FE431* ___TwitchInfo_19;
	// System.String PlayFab.ClientModels.UserAccountInfo::Username
	String_t* ___Username_20;
	// PlayFab.ClientModels.UserXboxInfo PlayFab.ClientModels.UserAccountInfo::XboxInfo
	UserXboxInfo_t43AC22B8C788C2E29748D1882F26FFFD82150C0D* ___XboxInfo_21;
};

// PlayFab.ClientModels.UserDataRecord
struct UserDataRecord_tE7E165155A91F4CDC8FA7068664F554198EE0F45  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.DateTime PlayFab.ClientModels.UserDataRecord::LastUpdated
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___LastUpdated_0;
	// System.Nullable`1<PlayFab.ClientModels.UserDataPermission> PlayFab.ClientModels.UserDataRecord::Permission
	Nullable_1_t067499BB68589229FB737513FCF7C77D7952D5DB ___Permission_1;
	// System.String PlayFab.ClientModels.UserDataRecord::Value
	String_t* ___Value_2;
};

// PlayFab.ClientModels.UserSteamInfo
struct UserSteamInfo_t9683A2E6234656912ED104E9AC9C9C6857CE23EA  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Nullable`1<PlayFab.ClientModels.TitleActivationStatus> PlayFab.ClientModels.UserSteamInfo::SteamActivationStatus
	Nullable_1_t2AB9F1C63256F190CF5CE9AB0ED2D44A4273FDB0 ___SteamActivationStatus_0;
	// System.String PlayFab.ClientModels.UserSteamInfo::SteamCountry
	String_t* ___SteamCountry_1;
	// System.Nullable`1<PlayFab.ClientModels.Currency> PlayFab.ClientModels.UserSteamInfo::SteamCurrency
	Nullable_1_t2B10F2EF519FFB12D492C998C113D6191D4B45A9 ___SteamCurrency_2;
	// System.String PlayFab.ClientModels.UserSteamInfo::SteamId
	String_t* ___SteamId_3;
	// System.String PlayFab.ClientModels.UserSteamInfo::SteamName
	String_t* ___SteamName_4;
};

// PlayFab.ClientModels.ValidateAmazonReceiptRequest
struct ValidateAmazonReceiptRequest_t02C6A572352CCE41AE720F9A8BE4FD47A4F30243  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.ValidateAmazonReceiptRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.ValidateAmazonReceiptRequest::CurrencyCode
	String_t* ___CurrencyCode_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ValidateAmazonReceiptRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.Int32 PlayFab.ClientModels.ValidateAmazonReceiptRequest::PurchasePrice
	int32_t ___PurchasePrice_4;
	// System.String PlayFab.ClientModels.ValidateAmazonReceiptRequest::ReceiptId
	String_t* ___ReceiptId_5;
	// System.String PlayFab.ClientModels.ValidateAmazonReceiptRequest::UserId
	String_t* ___UserId_6;
};

// PlayFab.ClientModels.ValidateAmazonReceiptResult
struct ValidateAmazonReceiptResult_tBDAAEA70544881D3EC12AB8B21812EAF164F25CF  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PurchaseReceiptFulfillment> PlayFab.ClientModels.ValidateAmazonReceiptResult::Fulfillments
	List_1_t50A44D8AB20157819C0C38F1E5363424ACC9C999* ___Fulfillments_2;
};

// PlayFab.AuthenticationModels.ValidateEntityTokenRequest
struct ValidateEntityTokenRequest_t208B61B7A774BBC7B3CD46D9296ED0BC848DEA3B  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.AuthenticationModels.ValidateEntityTokenRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_1;
	// System.String PlayFab.AuthenticationModels.ValidateEntityTokenRequest::EntityToken
	String_t* ___EntityToken_2;
};

// PlayFab.AuthenticationModels.ValidateEntityTokenResponse
struct ValidateEntityTokenResponse_t3BF0DD16B7B0A2D37AF6A38E77CE63119EFCF7AE  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// PlayFab.AuthenticationModels.EntityKey PlayFab.AuthenticationModels.ValidateEntityTokenResponse::Entity
	EntityKey_tFADF551D013525A30F2A6FB10A4FC4AF5F34278E* ___Entity_2;
	// System.Nullable`1<PlayFab.AuthenticationModels.IdentifiedDeviceType> PlayFab.AuthenticationModels.ValidateEntityTokenResponse::IdentifiedDeviceType
	Nullable_1_t9AD8E1438E05D5BA0F423DA1263AFC5941A801B1 ___IdentifiedDeviceType_3;
	// System.Nullable`1<PlayFab.AuthenticationModels.LoginIdentityProvider> PlayFab.AuthenticationModels.ValidateEntityTokenResponse::IdentityProvider
	Nullable_1_t77AB991F23E03305B5C1448C8B16EAF99B4397F2 ___IdentityProvider_4;
	// System.String PlayFab.AuthenticationModels.ValidateEntityTokenResponse::IdentityProviderIssuedId
	String_t* ___IdentityProviderIssuedId_5;
	// PlayFab.AuthenticationModels.EntityLineage PlayFab.AuthenticationModels.ValidateEntityTokenResponse::Lineage
	EntityLineage_tBB3BF8ABA70636A13AE3412CE723954A429EE67E* ___Lineage_6;
};

// PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest
struct ValidateGooglePlayPurchaseRequest_t19A3C53B5E1DE3BB7A655D929A41D5BED28AA50C  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::CurrencyCode
	String_t* ___CurrencyCode_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::PurchasePrice
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___PurchasePrice_4;
	// System.String PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::ReceiptJson
	String_t* ___ReceiptJson_5;
	// System.String PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::Signature
	String_t* ___Signature_6;
};

// PlayFab.ClientModels.ValidateGooglePlayPurchaseResult
struct ValidateGooglePlayPurchaseResult_t94C27521EBF7C2B9547D9157FE0BAACBAA9FFB6C  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PurchaseReceiptFulfillment> PlayFab.ClientModels.ValidateGooglePlayPurchaseResult::Fulfillments
	List_1_t50A44D8AB20157819C0C38F1E5363424ACC9C999* ___Fulfillments_2;
};

// PlayFab.ClientModels.ValidateIOSReceiptRequest
struct ValidateIOSReceiptRequest_t0FF3109216309862E61A7EC51269B623E98507F4  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.ValidateIOSReceiptRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.ValidateIOSReceiptRequest::CurrencyCode
	String_t* ___CurrencyCode_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ValidateIOSReceiptRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.Int32 PlayFab.ClientModels.ValidateIOSReceiptRequest::PurchasePrice
	int32_t ___PurchasePrice_4;
	// System.String PlayFab.ClientModels.ValidateIOSReceiptRequest::ReceiptData
	String_t* ___ReceiptData_5;
};

// PlayFab.ClientModels.ValidateIOSReceiptResult
struct ValidateIOSReceiptResult_t7B8E9C32E11CF69C0F1644A9E70227BED479112C  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PurchaseReceiptFulfillment> PlayFab.ClientModels.ValidateIOSReceiptResult::Fulfillments
	List_1_t50A44D8AB20157819C0C38F1E5363424ACC9C999* ___Fulfillments_2;
};

// PlayFab.ClientModels.ValidateWindowsReceiptRequest
struct ValidateWindowsReceiptRequest_t1925F0B1023AD2B5E54130D6903DB577AEC6D4C7  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.String PlayFab.ClientModels.ValidateWindowsReceiptRequest::CatalogVersion
	String_t* ___CatalogVersion_1;
	// System.String PlayFab.ClientModels.ValidateWindowsReceiptRequest::CurrencyCode
	String_t* ___CurrencyCode_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ValidateWindowsReceiptRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.UInt32 PlayFab.ClientModels.ValidateWindowsReceiptRequest::PurchasePrice
	uint32_t ___PurchasePrice_4;
	// System.String PlayFab.ClientModels.ValidateWindowsReceiptRequest::Receipt
	String_t* ___Receipt_5;
};

// PlayFab.ClientModels.ValidateWindowsReceiptResult
struct ValidateWindowsReceiptResult_t5DFEC0D218EF949D252DFBC431EB81917AA436BC  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PurchaseReceiptFulfillment> PlayFab.ClientModels.ValidateWindowsReceiptResult::Fulfillments
	List_1_t50A44D8AB20157819C0C38F1E5363424ACC9C999* ___Fulfillments_2;
};

// PlayFab.ClientModels.VirtualCurrencyRechargeTime
struct VirtualCurrencyRechargeTime_tD4B80CB3526B0CD22262886E3372D8A023D6CAA2  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Int32 PlayFab.ClientModels.VirtualCurrencyRechargeTime::RechargeMax
	int32_t ___RechargeMax_0;
	// System.DateTime PlayFab.ClientModels.VirtualCurrencyRechargeTime::RechargeTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___RechargeTime_1;
	// System.Int32 PlayFab.ClientModels.VirtualCurrencyRechargeTime::SecondsToRecharge
	int32_t ___SecondsToRecharge_2;
};

// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8  : public NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7
{
	// System.String[] System.Net.WebHeaderCollection::m_CommonHeaders
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_CommonHeaders_23;
	// System.Int32 System.Net.WebHeaderCollection::m_NumCommonHeaders
	int32_t ___m_NumCommonHeaders_24;
	// System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::m_InnerCollection
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___m_InnerCollection_45;
	// System.Net.WebHeaderCollectionType System.Net.WebHeaderCollection::m_Type
	uint16_t ___m_Type_46;
};

struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8_StaticFields
{
	// System.Net.HeaderInfoTable System.Net.WebHeaderCollection::HInfo
	HeaderInfoTable_tD651971044220ED52EACB30E89A49178FA32D91F* ___HInfo_22;
	// System.String[] System.Net.WebHeaderCollection::s_CommonHeaderNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_CommonHeaderNames_25;
	// System.SByte[] System.Net.WebHeaderCollection::s_CommonHeaderHints
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___s_CommonHeaderHints_26;
	// System.Char[] System.Net.WebHeaderCollection::HttpTrimCharacters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HttpTrimCharacters_47;
	// System.Net.WebHeaderCollection/RfcChar[] System.Net.WebHeaderCollection::RfcCharMap
	RfcCharU5BU5D_t8D79A380C46398F9D1F442FDEE0A27F77B7D1B4C* ___RfcCharMap_48;
};

// PlayFab.ClientModels.WriteEventResponse
struct WriteEventResponse_tCF2011905F8F5EFF4360597D91EDAF4C4AA3F116  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.String PlayFab.ClientModels.WriteEventResponse::EventId
	String_t* ___EventId_2;
};

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___impl_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyCertHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyCertHash_1;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySerialNumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazySerialNumber_2;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyIssuer
	String_t* ___lazyIssuer_3;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySubject
	String_t* ___lazySubject_4;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithm
	String_t* ___lazyKeyAlgorithm_5;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithmParameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyKeyAlgorithmParameters_6;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyPublicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyPublicKey_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotBefore
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotBefore_8;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotAfter
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotAfter_9;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// PlayFab.AuthenticationModels.EntityTokenResponse
struct EntityTokenResponse_tCB7E0082B8ABD19A02403C6F9A438EF756D63E8B  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// PlayFab.AuthenticationModels.EntityKey PlayFab.AuthenticationModels.EntityTokenResponse::Entity
	EntityKey_tFADF551D013525A30F2A6FB10A4FC4AF5F34278E* ___Entity_0;
	// System.String PlayFab.AuthenticationModels.EntityTokenResponse::EntityToken
	String_t* ___EntityToken_1;
	// System.Nullable`1<System.DateTime> PlayFab.AuthenticationModels.EntityTokenResponse::TokenExpiration
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___TokenExpiration_2;
};

// PlayFab.ClientModels.EntityTokenResponse
struct EntityTokenResponse_tF62536B9F1B793EB4711A8394CE36934B5200D1B  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// PlayFab.ClientModels.EntityKey PlayFab.ClientModels.EntityTokenResponse::Entity
	EntityKey_t3E92C74E390ABBE2C7066FD9D20C7E3DC948CC9C* ___Entity_0;
	// System.String PlayFab.ClientModels.EntityTokenResponse::EntityToken
	String_t* ___EntityToken_1;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.EntityTokenResponse::TokenExpiration
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___TokenExpiration_2;
};

// PlayFab.ClientModels.GameInfo
struct GameInfo_t33CE266C7ABB653EB0A5F87BD56F27ACF7EDF2CE  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.GameInfo::BuildVersion
	String_t* ___BuildVersion_0;
	// System.String PlayFab.ClientModels.GameInfo::GameMode
	String_t* ___GameMode_1;
	// System.String PlayFab.ClientModels.GameInfo::GameServerData
	String_t* ___GameServerData_2;
	// System.Nullable`1<PlayFab.ClientModels.GameInstanceState> PlayFab.ClientModels.GameInfo::GameServerStateEnum
	Nullable_1_tDA5DA702EC547DD1BC03BFBA6441B9A76715D804 ___GameServerStateEnum_3;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.GameInfo::LastHeartbeat
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___LastHeartbeat_4;
	// System.String PlayFab.ClientModels.GameInfo::LobbyID
	String_t* ___LobbyID_5;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GameInfo::MaxPlayers
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___MaxPlayers_6;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.GameInfo::PlayerUserIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PlayerUserIds_7;
	// System.Nullable`1<PlayFab.ClientModels.Region> PlayFab.ClientModels.GameInfo::Region
	Nullable_1_tD6B346427FD9C455F0D4135CC5DAB0274DD97359 ___Region_8;
	// System.UInt32 PlayFab.ClientModels.GameInfo::RunTime
	uint32_t ___RunTime_9;
	// System.String PlayFab.ClientModels.GameInfo::ServerIPV4Address
	String_t* ___ServerIPV4Address_10;
	// System.String PlayFab.ClientModels.GameInfo::ServerIPV6Address
	String_t* ___ServerIPV6Address_11;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.GameInfo::ServerPort
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___ServerPort_12;
	// System.String PlayFab.ClientModels.GameInfo::ServerPublicDNSName
	String_t* ___ServerPublicDNSName_13;
	// System.String PlayFab.ClientModels.GameInfo::StatisticName
	String_t* ___StatisticName_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.GameInfo::Tags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Tags_15;
};

// PlayFab.AuthenticationModels.GetEntityTokenResponse
struct GetEntityTokenResponse_tD3A2F286A2716332E695130B0DDE7F9E2E0DABAC  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// PlayFab.AuthenticationModels.EntityKey PlayFab.AuthenticationModels.GetEntityTokenResponse::Entity
	EntityKey_tFADF551D013525A30F2A6FB10A4FC4AF5F34278E* ___Entity_2;
	// System.String PlayFab.AuthenticationModels.GetEntityTokenResponse::EntityToken
	String_t* ___EntityToken_3;
	// System.Nullable`1<System.DateTime> PlayFab.AuthenticationModels.GetEntityTokenResponse::TokenExpiration
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___TokenExpiration_4;
};

// PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerResult
struct GetFriendLeaderboardAroundPlayerResult_t08E0989E5BB790AD662A7223F4C8E46218A66129  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PlayerLeaderboardEntry> PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerResult::Leaderboard
	List_1_tCBCB02FC07BD251869097197A968F8730C15CC46* ___Leaderboard_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerResult::NextReset
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___NextReset_3;
	// System.Int32 PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerResult::Version
	int32_t ___Version_4;
};

// PlayFab.ClientModels.GetLeaderboardAroundPlayerResult
struct GetLeaderboardAroundPlayerResult_tEC5343CE1F5409AC4FC072C15C5E0667D5AE763A  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PlayerLeaderboardEntry> PlayFab.ClientModels.GetLeaderboardAroundPlayerResult::Leaderboard
	List_1_tCBCB02FC07BD251869097197A968F8730C15CC46* ___Leaderboard_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.GetLeaderboardAroundPlayerResult::NextReset
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___NextReset_3;
	// System.Int32 PlayFab.ClientModels.GetLeaderboardAroundPlayerResult::Version
	int32_t ___Version_4;
};

// PlayFab.ClientModels.GetLeaderboardResult
struct GetLeaderboardResult_t03D04CF6DED866003050A495D94A7D8497AD492C  : public PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PlayerLeaderboardEntry> PlayFab.ClientModels.GetLeaderboardResult::Leaderboard
	List_1_tCBCB02FC07BD251869097197A968F8730C15CC46* ___Leaderboard_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.GetLeaderboardResult::NextReset
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___NextReset_3;
	// System.Int32 PlayFab.ClientModels.GetLeaderboardResult::Version
	int32_t ___Version_4;
};

// PlayFab.ClientModels.ItemInstance
struct ItemInstance_tC84FDC49100051713F8BA4C6359C4DB48B3D0341  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.ItemInstance::Annotation
	String_t* ___Annotation_0;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.ItemInstance::BundleContents
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___BundleContents_1;
	// System.String PlayFab.ClientModels.ItemInstance::BundleParent
	String_t* ___BundleParent_2;
	// System.String PlayFab.ClientModels.ItemInstance::CatalogVersion
	String_t* ___CatalogVersion_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.ItemInstance::CustomData
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomData_4;
	// System.String PlayFab.ClientModels.ItemInstance::DisplayName
	String_t* ___DisplayName_5;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.ItemInstance::Expiration
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___Expiration_6;
	// System.String PlayFab.ClientModels.ItemInstance::ItemClass
	String_t* ___ItemClass_7;
	// System.String PlayFab.ClientModels.ItemInstance::ItemId
	String_t* ___ItemId_8;
	// System.String PlayFab.ClientModels.ItemInstance::ItemInstanceId
	String_t* ___ItemInstanceId_9;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.ItemInstance::PurchaseDate
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___PurchaseDate_10;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.ItemInstance::RemainingUses
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___RemainingUses_11;
	// System.String PlayFab.ClientModels.ItemInstance::UnitCurrency
	String_t* ___UnitCurrency_12;
	// System.UInt32 PlayFab.ClientModels.ItemInstance::UnitPrice
	uint32_t ___UnitPrice_13;
	// System.Nullable`1<System.Int32> PlayFab.ClientModels.ItemInstance::UsesIncrementedBy
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___UsesIncrementedBy_14;
};

// PlayFab.ClientModels.LoginResult
struct LoginResult_tA8FAC976BB9AC98F055FB1BFFE740D450A957A8C  : public PlayFabLoginResultCommon_t564463F743BE39995D6BBD360F222C16FB74AA47
{
	// PlayFab.ClientModels.EntityTokenResponse PlayFab.ClientModels.LoginResult::EntityToken
	EntityTokenResponse_tF62536B9F1B793EB4711A8394CE36934B5200D1B* ___EntityToken_3;
	// PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload PlayFab.ClientModels.LoginResult::InfoResultPayload
	GetPlayerCombinedInfoResultPayload_t6323557A81B0FF04C6B66FC1F916864A4D738BCC* ___InfoResultPayload_4;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.LoginResult::LastLoginTime
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___LastLoginTime_5;
	// System.Boolean PlayFab.ClientModels.LoginResult::NewlyCreated
	bool ___NewlyCreated_6;
	// System.String PlayFab.ClientModels.LoginResult::PlayFabId
	String_t* ___PlayFabId_7;
	// System.String PlayFab.ClientModels.LoginResult::SessionTicket
	String_t* ___SessionTicket_8;
	// PlayFab.ClientModels.UserSettings PlayFab.ClientModels.LoginResult::SettingsForUser
	UserSettings_t53FD23BFE7D67CB8C0FA3FFB5F2FC733DA2D22E0* ___SettingsForUser_9;
	// PlayFab.ClientModels.TreatmentAssignment PlayFab.ClientModels.LoginResult::TreatmentAssignment
	TreatmentAssignment_t3AAA5D796B6551BDF72B95A132BE5FE93F1FD99A* ___TreatmentAssignment_10;
};

// PlayFab.ClientModels.MembershipModel
struct MembershipModel_t3C7C2B88E0688100FF4FE3F8DAF8D90E3D2FCEF2  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Boolean PlayFab.ClientModels.MembershipModel::IsActive
	bool ___IsActive_0;
	// System.DateTime PlayFab.ClientModels.MembershipModel::MembershipExpiration
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MembershipExpiration_1;
	// System.String PlayFab.ClientModels.MembershipModel::MembershipId
	String_t* ___MembershipId_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.MembershipModel::OverrideExpiration
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___OverrideExpiration_3;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.SubscriptionModel> PlayFab.ClientModels.MembershipModel::Subscriptions
	List_1_tE2B26FDEA1B16DEED1A7B1FC67EB449D05CBF115* ___Subscriptions_4;
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

// PlayFab.ClientModels.PlayerProfileModel
struct PlayerProfileModel_tEF2149D2652DD0B25B5250F8037A276739D1414A  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Collections.Generic.List`1<PlayFab.ClientModels.AdCampaignAttributionModel> PlayFab.ClientModels.PlayerProfileModel::AdCampaignAttributions
	List_1_t84130783142757DD09A9C5474E78F0BBC3DA5B12* ___AdCampaignAttributions_0;
	// System.String PlayFab.ClientModels.PlayerProfileModel::AvatarUrl
	String_t* ___AvatarUrl_1;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.PlayerProfileModel::BannedUntil
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___BannedUntil_2;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ContactEmailInfoModel> PlayFab.ClientModels.PlayerProfileModel::ContactEmailAddresses
	List_1_t3FE536429219911F92FD1C8652AC167ABC868CF9* ___ContactEmailAddresses_3;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.PlayerProfileModel::Created
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___Created_4;
	// System.String PlayFab.ClientModels.PlayerProfileModel::DisplayName
	String_t* ___DisplayName_5;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.PlayerProfileModel::ExperimentVariants
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___ExperimentVariants_6;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.PlayerProfileModel::LastLogin
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___LastLogin_7;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.LinkedPlatformAccountModel> PlayFab.ClientModels.PlayerProfileModel::LinkedAccounts
	List_1_tE7EF529EDDDCFD9F25DC0ED76CA7446AC80E5231* ___LinkedAccounts_8;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.LocationModel> PlayFab.ClientModels.PlayerProfileModel::Locations
	List_1_t12CC81EA2CBCF5532AB9BEB0511D5085C5A3909E* ___Locations_9;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.MembershipModel> PlayFab.ClientModels.PlayerProfileModel::Memberships
	List_1_t4EAB2E936C3F5B2D0448CA03435BC4E92EF19E70* ___Memberships_10;
	// System.Nullable`1<PlayFab.ClientModels.LoginIdentityProvider> PlayFab.ClientModels.PlayerProfileModel::Origination
	Nullable_1_t5B7C5B187DC2527C1C1515BC997DF756887BB15A ___Origination_11;
	// System.String PlayFab.ClientModels.PlayerProfileModel::PlayerId
	String_t* ___PlayerId_12;
	// System.String PlayFab.ClientModels.PlayerProfileModel::PublisherId
	String_t* ___PublisherId_13;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.PushNotificationRegistrationModel> PlayFab.ClientModels.PlayerProfileModel::PushNotificationRegistrations
	List_1_t79717EC342FB9A91B12676776A0CC67F0602D5E2* ___PushNotificationRegistrations_14;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.StatisticModel> PlayFab.ClientModels.PlayerProfileModel::Statistics
	List_1_t2D0759B3AF00A2641D8E5A4B894928F0F87F3C90* ___Statistics_15;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.TagModel> PlayFab.ClientModels.PlayerProfileModel::Tags
	List_1_tA5C145CD860B7F495BAF017713B038BB84303E81* ___Tags_16;
	// System.String PlayFab.ClientModels.PlayerProfileModel::TitleId
	String_t* ___TitleId_17;
	// System.Nullable`1<System.UInt32> PlayFab.ClientModels.PlayerProfileModel::TotalValueToDateInUSD
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___TotalValueToDateInUSD_18;
	// System.Collections.Generic.List`1<PlayFab.ClientModels.ValueToDateModel> PlayFab.ClientModels.PlayerProfileModel::ValuesToDate
	List_1_tA64A2C995850039E2DEA13FA8E06681F0F36E4FE* ___ValuesToDate_19;
};

// PlayFab.ClientModels.PlayerStatisticVersion
struct PlayerStatisticVersion_tC0C529357C21A063B8C3F4FBBC5D412EAA3C7372  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.DateTime PlayFab.ClientModels.PlayerStatisticVersion::ActivationTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___ActivationTime_0;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.PlayerStatisticVersion::DeactivationTime
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___DeactivationTime_1;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.PlayerStatisticVersion::ScheduledActivationTime
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___ScheduledActivationTime_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.PlayerStatisticVersion::ScheduledDeactivationTime
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___ScheduledDeactivationTime_3;
	// System.String PlayFab.ClientModels.PlayerStatisticVersion::StatisticName
	String_t* ___StatisticName_4;
	// System.UInt32 PlayFab.ClientModels.PlayerStatisticVersion::Version
	uint32_t ___Version_5;
};

// PlayFab.ClientModels.RegisterPlayFabUserResult
struct RegisterPlayFabUserResult_t9F7AF721561FB1E6C2D0F04CF3E38EB80F39300E  : public PlayFabLoginResultCommon_t564463F743BE39995D6BBD360F222C16FB74AA47
{
	// PlayFab.ClientModels.EntityTokenResponse PlayFab.ClientModels.RegisterPlayFabUserResult::EntityToken
	EntityTokenResponse_tF62536B9F1B793EB4711A8394CE36934B5200D1B* ___EntityToken_3;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserResult::PlayFabId
	String_t* ___PlayFabId_4;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserResult::SessionTicket
	String_t* ___SessionTicket_5;
	// PlayFab.ClientModels.UserSettings PlayFab.ClientModels.RegisterPlayFabUserResult::SettingsForUser
	UserSettings_t53FD23BFE7D67CB8C0FA3FFB5F2FC733DA2D22E0* ___SettingsForUser_6;
	// System.String PlayFab.ClientModels.RegisterPlayFabUserResult::Username
	String_t* ___Username_7;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// PlayFab.ClientModels.TradeInfo
struct TradeInfo_tBE9088C4A58089296E230210566577FD2AEEEE07  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.TradeInfo::AcceptedInventoryInstanceIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___AcceptedInventoryInstanceIds_0;
	// System.String PlayFab.ClientModels.TradeInfo::AcceptedPlayerId
	String_t* ___AcceptedPlayerId_1;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.TradeInfo::AllowedPlayerIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___AllowedPlayerIds_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.TradeInfo::CancelledAt
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___CancelledAt_3;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.TradeInfo::FilledAt
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___FilledAt_4;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.TradeInfo::InvalidatedAt
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___InvalidatedAt_5;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.TradeInfo::OfferedCatalogItemIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___OfferedCatalogItemIds_6;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.TradeInfo::OfferedInventoryInstanceIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___OfferedInventoryInstanceIds_7;
	// System.String PlayFab.ClientModels.TradeInfo::OfferingPlayerId
	String_t* ___OfferingPlayerId_8;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.TradeInfo::OpenedAt
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___OpenedAt_9;
	// System.Collections.Generic.List`1<System.String> PlayFab.ClientModels.TradeInfo::RequestedCatalogItemIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___RequestedCatalogItemIds_10;
	// System.Nullable`1<PlayFab.ClientModels.TradeStatus> PlayFab.ClientModels.TradeInfo::Status
	Nullable_1_tD232C455277E63717C41233FF7F6A699FA27AC33 ___Status_11;
	// System.String PlayFab.ClientModels.TradeInfo::TradeId
	String_t* ___TradeId_12;
};

// PlayFab.ClientModels.UserTitleInfo
struct UserTitleInfo_tB92EBF892AF2FE961FBA3C279C86C5A4E6E17821  : public PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E
{
	// System.String PlayFab.ClientModels.UserTitleInfo::AvatarUrl
	String_t* ___AvatarUrl_0;
	// System.DateTime PlayFab.ClientModels.UserTitleInfo::Created
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Created_1;
	// System.String PlayFab.ClientModels.UserTitleInfo::DisplayName
	String_t* ___DisplayName_2;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.UserTitleInfo::FirstLogin
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___FirstLogin_3;
	// System.Nullable`1<System.Boolean> PlayFab.ClientModels.UserTitleInfo::isBanned
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isBanned_4;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.UserTitleInfo::LastLogin
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___LastLogin_5;
	// System.Nullable`1<PlayFab.ClientModels.UserOrigination> PlayFab.ClientModels.UserTitleInfo::Origination
	Nullable_1_t2DC981AC3510FB5B419786ACD6FCAA9611918F93 ___Origination_6;
	// PlayFab.ClientModels.EntityKey PlayFab.ClientModels.UserTitleInfo::TitlePlayerAccount
	EntityKey_t3E92C74E390ABBE2C7066FD9D20C7E3DC948CC9C* ___TitlePlayerAccount_7;
};

// PlayFab.ClientModels.WriteClientCharacterEventRequest
struct WriteClientCharacterEventRequest_t4B18CB6D5C5242AFA1B48ADFF7593381C1335ED3  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> PlayFab.ClientModels.WriteClientCharacterEventRequest::Body
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___Body_1;
	// System.String PlayFab.ClientModels.WriteClientCharacterEventRequest::CharacterId
	String_t* ___CharacterId_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.WriteClientCharacterEventRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_3;
	// System.String PlayFab.ClientModels.WriteClientCharacterEventRequest::EventName
	String_t* ___EventName_4;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.WriteClientCharacterEventRequest::Timestamp
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___Timestamp_5;
};

// PlayFab.ClientModels.WriteClientPlayerEventRequest
struct WriteClientPlayerEventRequest_tA95320423AC8066CD76C9C400278514D14E856DA  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> PlayFab.ClientModels.WriteClientPlayerEventRequest::Body
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___Body_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.WriteClientPlayerEventRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.WriteClientPlayerEventRequest::EventName
	String_t* ___EventName_3;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.WriteClientPlayerEventRequest::Timestamp
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___Timestamp_4;
};

// PlayFab.ClientModels.WriteTitleEventRequest
struct WriteTitleEventRequest_t8F544A3D1AC64FE08CD1E18FF967FC84FBEFE4A3  : public PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> PlayFab.ClientModels.WriteTitleEventRequest::Body
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___Body_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.ClientModels.WriteTitleEventRequest::CustomTags
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___CustomTags_2;
	// System.String PlayFab.ClientModels.WriteTitleEventRequest::EventName
	String_t* ___EventName_3;
	// System.Nullable`1<System.DateTime> PlayFab.ClientModels.WriteTitleEventRequest::Timestamp
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___Timestamp_4;
};

// System.Action`1<System.Byte[]>
struct Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<PlayFab.PlayFabError>
struct Action_1_t795ED1F4E6C6EEAB7072001CFF691E4CC2F7DF93  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955  : public MulticastDelegate_t
{
};

// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
{
};

// PlayFab.Events.PlayFabEvents/PlayFabErrorEvent
struct PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.Net.WebException
struct WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.Net.WebExceptionStatus System.Net.WebException::m_Status
	int32_t ___m_Status_18;
	// System.Net.WebResponse System.Net.WebException::m_Response
	WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* ___m_Response_19;
	// System.Net.WebExceptionInternalStatus System.Net.WebException::m_InternalStatus
	int32_t ___m_InternalStatus_20;
};

// PlayFab.Internal.SingletonMonoBehaviour`1<PlayFab.Internal.PlayFabHttp>
struct SingletonMonoBehaviour_1_tCB6523709E67B7DC827F60B06DD4BFEDF795E51F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean PlayFab.Internal.SingletonMonoBehaviour`1::initialized
	bool ___initialized_5;
};

struct SingletonMonoBehaviour_1_tCB6523709E67B7DC827F60B06DD4BFEDF795E51F_StaticFields
{
	// T PlayFab.Internal.SingletonMonoBehaviour`1::_instance
	PlayFabHttp_t368B793060DC7677E3ADB9712686BAB6A596CEE2* ____instance_4;
};

// PlayFab.Internal.PlayFabHttp
struct PlayFabHttp_t368B793060DC7677E3ADB9712686BAB6A596CEE2  : public SingletonMonoBehaviour_1_tCB6523709E67B7DC827F60B06DD4BFEDF795E51F
{
	// System.Collections.Generic.Queue`1<System.Collections.IEnumerator> PlayFab.Internal.PlayFabHttp::_injectedCoroutines
	Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64* ____injectedCoroutines_13;
	// System.Collections.Generic.Queue`1<System.Action> PlayFab.Internal.PlayFabHttp::_injectedAction
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ____injectedAction_14;
};

struct PlayFabHttp_t368B793060DC7677E3ADB9712686BAB6A596CEE2_StaticFields
{
	// System.Collections.Generic.List`1<PlayFab.Internal.CallRequestContainer> PlayFab.Internal.PlayFabHttp::_apiCallQueue
	List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* ____apiCallQueue_6;
	// PlayFab.Internal.PlayFabHttp/ApiProcessingEvent`1<PlayFab.Internal.ApiProcessingEventArgs> PlayFab.Internal.PlayFabHttp::ApiProcessingEventHandler
	ApiProcessingEvent_1_t6F4803BFD135D3D4D36DCB98032C0FE836C2D6EE* ___ApiProcessingEventHandler_7;
	// PlayFab.Internal.PlayFabHttp/ApiProcessErrorEvent PlayFab.Internal.PlayFabHttp::ApiProcessingErrorEventHandler
	ApiProcessErrorEvent_tAB2563254C371E2B33F894333DBDDCA46BC2B5A6* ___ApiProcessingErrorEventHandler_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.Internal.PlayFabHttp::GlobalHeaderInjection
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___GlobalHeaderInjection_9;
	// PlayFab.Public.IPlayFabLogger PlayFab.Internal.PlayFabHttp::_logger
	RuntimeObject* ____logger_10;
	// PlayFab.Public.IScreenTimeTracker PlayFab.Internal.PlayFabHttp::screenTimeTracker
	RuntimeObject* ___screenTimeTracker_11;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
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
// System.String[]
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


// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T PlayFab.PluginManager::GetPlugin<System.Object>(PlayFab.PluginContract,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PluginManager_GetPlugin_TisRuntimeObject_mCD2C880644961691F0811814B86B0883E9EF4E9E_gshared (int32_t ___contract0, String_t* ___instanceName1, const RuntimeMethod* method) ;
// T PlayFab.Internal.SingletonMonoBehaviour`1<System.Object>::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingletonMonoBehaviour_1_get_instance_m10531E351D585222BDB6DC479E89E132A0E7F15E_gshared (const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;

// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCertificateValidationCallback__ctor_mC5C0650D4E5D29475BDBDA5B43FEA44DB0DBF367 (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Net.ServicePointManager::set_ServerCertificateValidationCallback(System.Net.Security.RemoteCertificateValidationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManager_set_ServerCertificateValidationCallback_mF96AEDFB771DB862FB7F71AEFA29471C991B393A (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___value0, const RuntimeMethod* method) ;
// System.Void PlayFab.Internal.PlayFabWebRequest::SetupCertificates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_SetupCertificates_m6F5620FA093B151B693AE9F86C425E0837AF714E (PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Action>::Clear()
inline void Queue_1_Clear_mF64267E0006F20E5E3029290482ABD8CDF9ADD5F (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<PlayFab.Internal.CallRequestContainer>::Clear()
inline void List_1_Clear_m4345FDA5CC3F67B61065716CCCE34400989F9A2E_inline (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Net.ServicePointManager::set_DefaultConnectionLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManager_set_DefaultConnectionLimit_m76A034CFB0A48F668CA1B76F8676AFB783600125 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.ServicePointManager::set_Expect100Continue(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServicePointManager_set_Expect100Continue_m80D90D682815479266428807D61DCDDEA3973FF3_inline (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m6C22CE09C3AC5BC10FF5502B2CCA0EBAF458AF19 (U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___start0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m16EBCAA6745CD77A6287EAF1ABFE06007F066D60 (U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD* __this, const RuntimeMethod* method) ;
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_mC7086F3D74F2E7F0DF555361F6173F978EFFB89B (U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06* __this, const RuntimeMethod* method) ;
// System.Net.WebRequest System.Net.WebRequest::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* WebRequest_Create_mEA404E1E326B2790C70C40894101C6DB41DA8E6C (String_t* ___requestUriString0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Net.HttpWebRequest::set_UserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequest_set_UserAgent_mF44CBC379376E5598E1C73FD7F1E3B949383F834 (HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean PlayFab.PlayFabSettings::get_RequestKeepAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayFabSettings_get_RequestKeepAlive_m0AEB295AA9461963D06926550F485C2F22B885AB (const RuntimeMethod* method) ;
// System.Void System.Net.HttpWebRequest::set_KeepAlive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpWebRequest_set_KeepAlive_mF8D4C5D79359F77F6612FC9087EB8575BC31280E_inline (HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 PlayFab.PlayFabSettings::get_RequestTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayFabSettings_get_RequestTimeout_mD84307C84412920DC2562AD20E6D16A240FE1E2E (const RuntimeMethod* method) ;
// System.Void System.Net.HttpWebRequest::set_ReadWriteTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequest_set_ReadWriteTimeout_m7558CE38A07498C398CC344AA550D82725F41310 (HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Byte[]>::Invoke(T)
inline void Action_1_Invoke_m7B78C4449D43643629C94054D9354AA39696C0F8_inline (Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Net.WebResponse System.Net.WebException::get_Response()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* WebException_get_Response_m808BF96464DDCE6C66D633355101C69800A5A7E7_inline (WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PlayFab.Internal.CallRequestContainer>::Insert(System.Int32,T)
inline void List_1_Insert_m9F23E733CD984628272E7E41351CA1CD9DE2DE78 (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* __this, int32_t ___index0, CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC*, int32_t, CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// System.Void PlayFab.Internal.PlayFabWebRequest::ActivateThreadWorker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_ActivateThreadWorker_m258E96C002F00AC454C86D3FFE5CF2DE7BE7BED8 (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_op_Addition_m652BE1306897DBE4CDF3ADA99FFFE2E70BFE3865 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PlayFab.Internal.CallRequestContainer>::.ctor()
inline void List_1__ctor_m82576545D74FF830428AFD8BFE2B7C3F3B0EA4BE (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<PlayFab.Internal.CallRequestContainer>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m1AAEB0989E2CC4BD238D01829F89E295726F8B78 (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Collections.Generic.List`1<PlayFab.Internal.CallRequestContainer>::get_Count()
inline int32_t List_1_get_Count_m9665CF465A295E34CC62D3F9D5B95079F135B395_inline (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<PlayFab.Internal.CallRequestContainer>::get_Item(System.Int32)
inline CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* List_1_get_Item_m1BEA5BBBD4A8D9AE83829DACC9A31896D7C2D7B0 (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* (*) (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<PlayFab.Internal.CallRequestContainer>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mEC9F829D7539D4577A9647002A8989CC608A2577 (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void PlayFab.Internal.PlayFabWebRequest::Post(PlayFab.Internal.CallRequestContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_Post_m27CEE000787C10A0BAF50715D9D4F4990B9A0589 (CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* ___reqContainer0, const RuntimeMethod* method) ;
// System.Void PlayFab.Internal.PlayFabWebRequest::ProcessHttpResponse(PlayFab.Internal.CallRequestContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_ProcessHttpResponse_m1B5E20CB50C16162CA0E655BC25DC36C742AEA74 (CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* ___reqContainer0, const RuntimeMethod* method) ;
// System.Void PlayFab.Internal.PlayFabWebRequest::ProcessJsonResponse(PlayFab.Internal.CallRequestContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_ProcessJsonResponse_m26544223B648566722344EA7EA7618D23E148CD7 (CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* ___reqContainer0, const RuntimeMethod* method) ;
// System.Boolean System.DateTime::op_LessThanOrEqual(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_LessThanOrEqual_mC22EB236042D9E1C17C64393FB429E58B8F952F8 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___t10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___t21, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Void System.Net.HttpWebRequest::set_SendChunked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequest_set_SendChunked_m5B227DE6AC5E5F904BD5146043A4AB80F9671491 (HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.String PlayFab.Internal.PlayFabWebRequest::ResponseToString(System.Net.WebResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayFabWebRequest_ResponseToString_m52B18647BF93DF73CE971BAD44371CFC84A79289 (WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* ___webResponse0, const RuntimeMethod* method) ;
// System.Net.WebExceptionStatus System.Net.WebException::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebException_get_Status_m9B08D3B07C3D75A6783EADB1215EB54E2D3B9822_inline (WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebException__ctor_m8075F9F7345CECCBDB276E0B67DE820A9F7D03E9 (WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void PlayFab.Internal.PlayFabWebRequest::QueueRequestError(PlayFab.Internal.CallRequestContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_QueueRequestError_mB8C74E316D2F5A5769E45507AFF16033FE5E8847 (CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* ___reqContainer0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_m5A8C212720A229AC50FF65D930357C77E6880463 (U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92* __this, const RuntimeMethod* method) ;
// PlayFab.PlayFabError PlayFab.Internal.PlayFabHttp::GeneratePlayFabError(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* PlayFabHttp_GeneratePlayFabError_mE42EAD0F84688CEF2955AE1249C81308874E6692 (String_t* ___apiEndpoint0, String_t* ___json1, RuntimeObject* ___customData2, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Action>::Enqueue(T)
inline void Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m059142FE683072C0CE1EEF3B2AADF00CFBBF7AED (U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* __this, const RuntimeMethod* method) ;
// T PlayFab.PluginManager::GetPlugin<PlayFab.ISerializerPlugin>(PlayFab.PluginContract,System.String)
inline RuntimeObject* PluginManager_GetPlugin_TisISerializerPlugin_tB1E1A4440F7B43AE85D8B29B95AFBE9852029C62_mCA8B3C31B813B966C86F7CF11569F498716E292E (int32_t ___contract0, String_t* ___instanceName1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (int32_t, String_t*, const RuntimeMethod*))PluginManager_GetPlugin_TisRuntimeObject_mCD2C880644961691F0811814B86B0883E9EF4E9E_gshared)(___contract0, ___instanceName1, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// T PlayFab.Internal.SingletonMonoBehaviour`1<PlayFab.Internal.PlayFabHttp>::get_instance()
inline PlayFabHttp_t368B793060DC7677E3ADB9712686BAB6A596CEE2* SingletonMonoBehaviour_1_get_instance_mE8325C33FB36C03CF943C3317FF54FC569508E68 (const RuntimeMethod* method)
{
	return ((  PlayFabHttp_t368B793060DC7677E3ADB9712686BAB6A596CEE2* (*) (const RuntimeMethod*))SingletonMonoBehaviour_1_get_instance_m10531E351D585222BDB6DC479E89E132A0E7F15E_gshared)(method);
}
// System.Void PlayFab.Internal.PlayFabHttp::OnPlayFabApiResult(PlayFab.Internal.CallRequestContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabHttp_OnPlayFabApiResult_m0F390F6497E2C47CAD3C418A8702A02A53C5B519 (PlayFabHttp_t368B793060DC7677E3ADB9712686BAB6A596CEE2* __this, CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* ___reqContainer0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F (double ___value0, const RuntimeMethod* method) ;
// System.Void PlayFab.Internal.PlayFabWebRequest::SimpleHttpsWorker(System.String,System.String,System.Byte[],System.Action`1<System.Byte[]>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_SimpleHttpsWorker_m4057D81AB38B9FD56F0558E8CCE1EC19284A6983 (PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* __this, String_t* ___httpMethod0, String_t* ___fullUrl1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload2, Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* ___successCallback3, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___errorCallback4, const RuntimeMethod* method) ;
// System.Void PlayFab.Internal.PlayFabHttp::SendErrorEvent(PlayFab.SharedModels.PlayFabRequestCommon,PlayFab.PlayFabError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabHttp_SendErrorEvent_mBAB17F8B70E52A63F6B3DE7E292E6A55CD067D98 (PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method) ;
// System.Void System.Action`1<PlayFab.PlayFabError>::Invoke(T)
inline void Action_1_Invoke_m699C90324A80072756CE8C48EA34AAE7489B05BA_inline (Action_1_t795ED1F4E6C6EEAB7072001CFF691E4CC2F7DF93* __this, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t795ED1F4E6C6EEAB7072001CFF691E4CC2F7DF93*, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void PlayFab.Internal.PlayFabDeviceUtil::OnPlayFabLogin(PlayFab.SharedModels.PlayFabResultCommon,PlayFab.PlayFabApiSettings,PlayFab.SharedModels.IPlayFabInstanceApi)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabDeviceUtil_OnPlayFabLogin_m43D0ADF0600E937FB25E871714CDEF5C15DB057D (PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40* ___result0, PlayFabApiSettings_tA64AE28AC2930D2710835FCD401A4212558752D1* ___settings1, RuntimeObject* ___instanceApi2, const RuntimeMethod* method) ;
// System.Void PlayFab.Internal.PlayFabHttp::SendEvent(System.String,PlayFab.SharedModels.PlayFabRequestCommon,PlayFab.SharedModels.PlayFabResultCommon,PlayFab.Internal.ApiProcessingEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabHttp_SendEvent_m13C1127674F00346767ECC8311A9D8A88CDDB5B9 (String_t* ___apiEndpoint0, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request1, PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40* ___result2, int32_t ___eventType3, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.IO.Directory::GetCurrentDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Directory_GetCurrentDirectory_m576783BDF2FDF97303C15E51713790415BF57CC1 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.String PlayFab.Internal.PlayFabUtil::ReadAllFileText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayFabUtil_ReadAllFileText_m054E77B1978CB7CA11861973359DA2D951B8228C (String_t* ___filename0, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetTempPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetTempPath_mA919EEA03E4CDC7C85A73771EBCF90F48A74B856 (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void PlayFab.SharedModels.PlayFabRequestCommon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17 (PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* __this, const RuntimeMethod* method) ;
// System.Void PlayFab.SharedModels.PlayFabResultCommon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46 (PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40* __this, const RuntimeMethod* method) ;
// System.Void PlayFab.SharedModels.PlayFabBaseModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E (PlayFabBaseModel_t8A6DEC14EE30C2F52F3DDB7513B352300DC0EA0E* __this, const RuntimeMethod* method) ;
// System.Void PlayFab.SharedModels.PlayFabLoginResultCommon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabLoginResultCommon__ctor_m9A54D6B9CCE858788C0C02085321998C461E1477 (PlayFabLoginResultCommon_t564463F743BE39995D6BBD360F222C16FB74AA47* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayFab.Internal.PlayFabWebRequest::SkipCertificateValidation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_SkipCertificateValidation_m84BF35219B420083F6C29D3C1E46F6D5B39E77EF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_AcceptAllCertifications_m9C71DE8BC96AB00B11061D3C8D4F38C248FED532_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* V_0 = NULL;
	{
		// var rcvc = new System.Net.Security.RemoteCertificateValidationCallback(AcceptAllCertifications); //(sender, cert, chain, ssl) => true
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_0 = (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955*)il2cpp_codegen_object_new(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RemoteCertificateValidationCallback__ctor_mC5C0650D4E5D29475BDBDA5B43FEA44DB0DBF367(L_0, NULL, (intptr_t)((void*)PlayFabWebRequest_AcceptAllCertifications_m9C71DE8BC96AB00B11061D3C8D4F38C248FED532_RuntimeMethod_var), NULL);
		V_0 = L_0;
		// ServicePointManager.ServerCertificateValidationCallback = rcvc;
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var);
		ServicePointManager_set_ServerCertificateValidationCallback_mF96AEDFB771DB862FB7F71AEFA29471C991B393A(L_1, NULL);
		// certValidationSet = true;
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___certValidationSet_3 = (bool)1;
		// }
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::set_CustomCertValidationHook(System.Net.Security.RemoteCertificateValidationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_set_CustomCertValidationHook_mFA5A67DA1CD3F9498EEACF80ECD8E3C4AB67F249 (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ServicePointManager.ServerCertificateValidationCallback = value;
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var);
		ServicePointManager_set_ServerCertificateValidationCallback_mF96AEDFB771DB862FB7F71AEFA29471C991B393A(L_0, NULL);
		// certValidationSet = true;
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___certValidationSet_3 = (bool)1;
		// }
		return;
	}
}
// System.Boolean PlayFab.Internal.PlayFabWebRequest::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayFabWebRequest_get_IsInitialized_m6A0B6C235B647E40883B9D1207A1F12880C40C86 (PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool IsInitialized { get { return _isInitialized; } }
		bool L_0 = __this->____isInitialized_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool IsInitialized { get { return _isInitialized; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_Initialize_mB9C1B63DED3F8EFBC5D7C308AF0424874D51C805 (PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetupCertificates();
		PlayFabWebRequest_SetupCertificates_m6F5620FA093B151B693AE9F86C425E0837AF714E(__this, NULL);
		// _isApplicationPlaying = true;
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____isApplicationPlaying_8 = (bool)1;
		// _unityVersion = Application.unityVersion;
		String_t* L_0;
		L_0 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____unityVersion_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____unityVersion_10), (void*)L_0);
		// _isInitialized = true;
		__this->____isInitialized_11 = (bool)1;
		// }
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_OnDestroy_mCB5FE3BFABA3AA78660F06B1BFED171387C41EE5 (PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4345FDA5CC3F67B61065716CCCE34400989F9A2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_mF64267E0006F20E5E3029290482ABD8CDF9ADD5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_0 = NULL;
	bool V_1 = false;
	List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	{
		// _isApplicationPlaying = false;
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____isApplicationPlaying_8 = (bool)0;
		// lock (ResultQueueTransferThread)
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueTransferThread_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0031;
					}
				}
				{
					Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0031:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// ResultQueueTransferThread.Clear();
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_4 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueTransferThread_0;
			NullCheck(L_4);
			Queue_1_Clear_mF64267E0006F20E5E3029290482ABD8CDF9ADD5F(L_4, Queue_1_Clear_mF64267E0006F20E5E3029290482ABD8CDF9ADD5F_RuntimeMethod_var);
			goto IL_0032;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		// lock (ActiveRequests)
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_5 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ActiveRequests_2;
		V_2 = L_5;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_3;
					if (!L_6)
					{
						goto IL_005c;
					}
				}
				{
					List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_7 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_7, NULL);
				}

IL_005c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_8 = V_2;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_8, (&V_3), NULL);
			// ActiveRequests.Clear();
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_9 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ActiveRequests_2;
			NullCheck(L_9);
			List_1_Clear_m4345FDA5CC3F67B61065716CCCE34400989F9A2E_inline(L_9, List_1_Clear_m4345FDA5CC3F67B61065716CCCE34400989F9A2E_RuntimeMethod_var);
			goto IL_005d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		// lock (_ThreadLock)
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		RuntimeObject* L_10 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____ThreadLock_5;
		V_4 = L_10;
		V_5 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007b:
			{// begin finally (depth: 1)
				{
					bool L_11 = V_5;
					if (!L_11)
					{
						goto IL_0087;
					}
				}
				{
					RuntimeObject* L_12 = V_4;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_12, NULL);
				}

IL_0087:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_13 = V_4;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_13, (&V_5), NULL);
			// _requestQueueThread = null;
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____requestQueueThread_4 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____requestQueueThread_4), (void*)(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)NULL);
			goto IL_0088;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::SetupCertificates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_SetupCertificates_m6F5620FA093B151B693AE9F86C425E0837AF714E (PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53B06C7610329A6CA8970A5B5CF9840CA1B35FCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA2A997DD0819AE41C382B1BC929DE1F4855C126);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// ServicePointManager.DefaultConnectionLimit = 10;
		il2cpp_codegen_runtime_class_init_inline(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var);
		ServicePointManager_set_DefaultConnectionLimit_m76A034CFB0A48F668CA1B76F8676AFB783600125(((int32_t)10), NULL);
		// ServicePointManager.Expect100Continue = false;
		ServicePointManager_set_Expect100Continue_m80D90D682815479266428807D61DCDDEA3973FF3_inline((bool)0, NULL);
		// if (!certValidationSet)
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		bool L_0 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___certValidationSet_3;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// Debug.LogWarning("PlayFab API calls will likely fail because you have not set up a HttpWebRequest certificate validation mechanism");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral53B06C7610329A6CA8970A5B5CF9840CA1B35FCD, NULL);
		// Debug.LogWarning("Please set a validation callback into PlayFab.Internal.PlayFabWebRequest.CustomCertValidationHook, or set PlayFab.Internal.PlayFabWebRequest.SkipCertificateValidation()");
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDA2A997DD0819AE41C382B1BC929DE1F4855C126, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Boolean PlayFab.Internal.PlayFabWebRequest::AcceptAllCertifications(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayFabWebRequest_AcceptAllCertifications_m9C71DE8BC96AB00B11061D3C8D4F38C248FED532 (RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return true;
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::SimpleGetCall(System.String,System.Action`1<System.Byte[]>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_SimpleGetCall_m534D17541D902C91038883E8440FA8256E5ABD89 (PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* __this, String_t* ___fullUrl0, Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* ___successCallback1, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___errorCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CSimpleGetCallU3Eb__0_m52BAEE923AEFFA46007EBC6B112450CCF27368D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789* V_0 = NULL;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789* L_0 = (U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass21_0__ctor_m6C22CE09C3AC5BC10FF5502B2CCA0EBAF458AF19(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789* L_2 = V_0;
		String_t* L_3 = ___fullUrl0;
		NullCheck(L_2);
		L_2->___fullUrl_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___fullUrl_1), (void*)L_3);
		U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789* L_4 = V_0;
		Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* L_5 = ___successCallback1;
		NullCheck(L_4);
		L_4->___successCallback_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___successCallback_2), (void*)L_5);
		U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789* L_6 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = ___errorCallback2;
		NullCheck(L_6);
		L_6->___errorCallback_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___errorCallback_3), (void*)L_7);
		// var newThread = new Thread(() => SimpleHttpsWorker("GET", fullUrl, null, successCallback, errorCallback));
		U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789* L_8 = V_0;
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_9 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CSimpleGetCallU3Eb__0_m52BAEE923AEFFA46007EBC6B112450CCF27368D0_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_10 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_10, L_9, NULL);
		V_1 = L_10;
		// newThread.Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_11 = V_1;
		NullCheck(L_11);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_11, NULL);
		// }
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::SimplePutCall(System.String,System.Byte[],System.Action`1<System.Byte[]>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_SimplePutCall_m2674CE8A431606564359532208BD9C32F07EB491 (PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* __this, String_t* ___fullUrl0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload1, Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* ___successCallback2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___errorCallback3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3CSimplePutCallU3Eb__0_m122A62590140D769201F9EA404FF043F1DA87FED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD* V_0 = NULL;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD* L_0 = (U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass22_0__ctor_m16EBCAA6745CD77A6287EAF1ABFE06007F066D60(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD* L_2 = V_0;
		String_t* L_3 = ___fullUrl0;
		NullCheck(L_2);
		L_2->___fullUrl_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___fullUrl_1), (void*)L_3);
		U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___payload1;
		NullCheck(L_4);
		L_4->___payload_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___payload_2), (void*)L_5);
		U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD* L_6 = V_0;
		Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* L_7 = ___successCallback2;
		NullCheck(L_6);
		L_6->___successCallback_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___successCallback_3), (void*)L_7);
		U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD* L_8 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = ___errorCallback3;
		NullCheck(L_8);
		L_8->___errorCallback_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___errorCallback_4), (void*)L_9);
		// var newThread = new Thread(() => SimpleHttpsWorker("PUT", fullUrl, payload, successCallback, errorCallback));
		U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD* L_10 = V_0;
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_11 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass22_0_U3CSimplePutCallU3Eb__0_m122A62590140D769201F9EA404FF043F1DA87FED_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_12 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_12, L_11, NULL);
		V_1 = L_12;
		// newThread.Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_13 = V_1;
		NullCheck(L_13);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_13, NULL);
		// }
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::SimplePostCall(System.String,System.Byte[],System.Action`1<System.Byte[]>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_SimplePostCall_m4E1B91A940D7E74E34CC46177CC0427FCE0B9268 (PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* __this, String_t* ___fullUrl0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload1, Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* ___successCallback2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___errorCallback3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_U3CSimplePostCallU3Eb__0_m8B11C6F54DCCEA736C23C33C7D9B2D52CBC3B417_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06* V_0 = NULL;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06* L_0 = (U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass23_0__ctor_mC7086F3D74F2E7F0DF555361F6173F978EFFB89B(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06* L_2 = V_0;
		String_t* L_3 = ___fullUrl0;
		NullCheck(L_2);
		L_2->___fullUrl_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___fullUrl_1), (void*)L_3);
		U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___payload1;
		NullCheck(L_4);
		L_4->___payload_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___payload_2), (void*)L_5);
		U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06* L_6 = V_0;
		Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* L_7 = ___successCallback2;
		NullCheck(L_6);
		L_6->___successCallback_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___successCallback_3), (void*)L_7);
		U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06* L_8 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = ___errorCallback3;
		NullCheck(L_8);
		L_8->___errorCallback_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___errorCallback_4), (void*)L_9);
		// var newThread = new Thread(() => SimpleHttpsWorker("POST", fullUrl, payload, successCallback, errorCallback));
		U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06* L_10 = V_0;
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_11 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass23_0_U3CSimplePostCallU3Eb__0_m8B11C6F54DCCEA736C23C33C7D9B2D52CBC3B417_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_12 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_12, L_11, NULL);
		V_1 = L_12;
		// newThread.Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_13 = V_1;
		NullCheck(L_13);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_13, NULL);
		// }
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::SimpleHttpsWorker(System.String,System.String,System.Byte[],System.Action`1<System.Byte[]>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_SimpleHttpsWorker_m4057D81AB38B9FD56F0558E8CCE1EC19284A6983 (PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* __this, String_t* ___httpMethod0, String_t* ___fullUrl1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload2, Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* ___successCallback3, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___errorCallback4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabSettings_t30A10F424DF4CB2CE2664301E025BD0C3D5B7C51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_SimpleHttpsWorker_m4057D81AB38B9FD56F0558E8CCE1EC19284A6983_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C5C2017CE5797EC5DD58BA9DFC6CC62B33ED289);
		s_Il2CppMethodInitialized = true;
	}
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* V_0 = NULL;
	bool V_1 = false;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_2 = NULL;
	WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_5 = NULL;
	bool V_6 = false;
	WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* V_7 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_8 = NULL;
	bool V_9 = false;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_10 = NULL;
	Exception_t* V_11 = NULL;
	Exception_t* V_12 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		// var httpRequest = (HttpWebRequest)WebRequest.Create(fullUrl);
		String_t* L_0 = ___fullUrl1;
		il2cpp_codegen_runtime_class_init_inline(WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
		WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* L_1;
		L_1 = WebRequest_Create_mEA404E1E326B2790C70C40894101C6DB41DA8E6C(L_0, NULL);
		V_0 = ((HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9*)CastclassClass((RuntimeObject*)L_1, HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var));
		// httpRequest.UserAgent = "UnityEngine-Unity; Version: " + _unityVersion;
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		String_t* L_3 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____unityVersion_10;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0C5C2017CE5797EC5DD58BA9DFC6CC62B33ED289, L_3, NULL);
		NullCheck(L_2);
		HttpWebRequest_set_UserAgent_mF44CBC379376E5598E1C73FD7F1E3B949383F834(L_2, L_4, NULL);
		// httpRequest.Method = httpMethod;
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_5 = V_0;
		String_t* L_6 = ___httpMethod0;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Net.WebRequest::set_Method(System.String) */, L_5, L_6);
		// httpRequest.KeepAlive = PlayFabSettings.RequestKeepAlive;
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PlayFabSettings_t30A10F424DF4CB2CE2664301E025BD0C3D5B7C51_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = PlayFabSettings_get_RequestKeepAlive_m0AEB295AA9461963D06926550F485C2F22B885AB(NULL);
		NullCheck(L_7);
		HttpWebRequest_set_KeepAlive_mF8D4C5D79359F77F6612FC9087EB8575BC31280E_inline(L_7, L_8, NULL);
		// httpRequest.Timeout = PlayFabSettings.RequestTimeout;
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_9 = V_0;
		int32_t L_10;
		L_10 = PlayFabSettings_get_RequestTimeout_mD84307C84412920DC2562AD20E6D16A240FE1E2E(NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< int32_t >::Invoke(31 /* System.Void System.Net.WebRequest::set_Timeout(System.Int32) */, L_9, L_10);
		// httpRequest.AllowWriteStreamBuffering = false;
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_11 = V_0;
		NullCheck(L_11);
		VirtualActionInvoker1< bool >::Invoke(44 /* System.Void System.Net.HttpWebRequest::set_AllowWriteStreamBuffering(System.Boolean) */, L_11, (bool)0);
		// httpRequest.ReadWriteTimeout = PlayFabSettings.RequestTimeout;
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_12 = V_0;
		int32_t L_13;
		L_13 = PlayFabSettings_get_RequestTimeout_mD84307C84412920DC2562AD20E6D16A240FE1E2E(NULL);
		NullCheck(L_12);
		HttpWebRequest_set_ReadWriteTimeout_m7558CE38A07498C398CC344AA550D82725F41310(L_12, L_13, NULL);
		// if (payload != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___payload2;
		V_1 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_008d;
		}
	}
	{
		// httpRequest.ContentLength = payload.LongLength;
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___payload2;
		NullCheck(L_17);
		NullCheck(L_16);
		VirtualActionInvoker1< int64_t >::Invoke(19 /* System.Void System.Net.WebRequest::set_ContentLength(System.Int64) */, L_16, ((int64_t)((int32_t)(((RuntimeArray*)L_17)->max_length))));
		// using (var stream = httpRequest.GetRequestStream())
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_18 = V_0;
		NullCheck(L_18);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19;
		L_19 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(32 /* System.IO.Stream System.Net.WebRequest::GetRequestStream() */, L_18);
		V_2 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0081:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20 = V_2;
					if (!L_20)
					{
						goto IL_008b;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21 = V_2;
					NullCheck(L_21);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_21);
				}

IL_008b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// stream.Write(payload, 0, payload.Length);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___payload2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___payload2;
			NullCheck(L_24);
			NullCheck(L_22);
			VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_22, L_23, 0, ((int32_t)(((RuntimeArray*)L_24)->max_length)));
			goto IL_008c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008c:
	{
	}

IL_008d:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// var response = httpRequest.GetResponse();
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_25 = V_0;
			NullCheck(L_25);
			WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_26;
			L_26 = VirtualFuncInvoker0< WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* >::Invoke(33 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_25);
			V_3 = L_26;
			// byte[] output = null;
			V_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
			// using (var responseStream = response.GetResponseStream())
			WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_27 = V_3;
			NullCheck(L_27);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_28;
			L_28 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(18 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_27);
			V_5 = L_28;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00cf_1:
				{// begin finally (depth: 2)
					{
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_29 = V_5;
						if (!L_29)
						{
							goto IL_00db_1;
						}
					}
					{
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_30 = V_5;
						NullCheck(L_30);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_30);
					}

IL_00db_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// if (responseStream != null)
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_31 = V_5;
					V_6 = (bool)((!(((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_32 = V_6;
					if (!L_32)
					{
						goto IL_00cc_2;
					}
				}
				{
					// output = new byte[response.ContentLength];
					WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_33 = V_3;
					NullCheck(L_33);
					int64_t L_34;
					L_34 = VirtualFuncInvoker0< int64_t >::Invoke(14 /* System.Int64 System.Net.WebResponse::get_ContentLength() */, L_33);
					if ((int64_t)(L_34) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), PlayFabWebRequest_SimpleHttpsWorker_m4057D81AB38B9FD56F0558E8CCE1EC19284A6983_RuntimeMethod_var);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_34));
					V_4 = L_35;
					// responseStream.Read(output, 0, output.Length);
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_36 = V_5;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_4;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_4;
					NullCheck(L_38);
					NullCheck(L_36);
					int32_t L_39;
					L_39 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_36, L_37, 0, ((int32_t)(((RuntimeArray*)L_38)->max_length)));
				}

IL_00cc_2:
				{
					goto IL_00dc_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00dc_1:
		{
			// successCallback(output);
			Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* L_40 = ___successCallback3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_4;
			NullCheck(L_40);
			Action_1_Invoke_m7B78C4449D43643629C94054D9354AA39696C0F8_inline(L_40, L_41, NULL);
			goto IL_0160;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0152;
		}
		throw e;
	}

CATCH_00e9:
	{// begin catch(System.Net.WebException)
		{
			// catch (WebException webException)
			V_7 = ((WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8*)IL2CPP_GET_ACTIVE_EXCEPTION(WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8*));
		}
		try
		{// begin try (depth: 2)
			{
				// using (var responseStream = webException.Response.GetResponseStream())
				WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* L_42 = V_7;
				NullCheck(L_42);
				WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_43;
				L_43 = WebException_get_Response_m808BF96464DDCE6C66D633355101C69800A5A7E7_inline(L_42, NULL);
				NullCheck(L_43);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_44;
				L_44 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(18 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_43);
				V_8 = L_44;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0131_1:
					{// begin finally (depth: 3)
						{
							Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_45 = V_8;
							if (!L_45)
							{
								goto IL_013d_1;
							}
						}
						{
							Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_46 = V_8;
							NullCheck(L_46);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var)), L_46);
						}

IL_013d_1:
						{
							return;
						}
					}// end finally (depth: 3)
				});
				try
				{// begin try (depth: 3)
					{
						// if (responseStream != null)
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_47 = V_8;
						V_9 = (bool)((!(((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_47) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
						bool L_48 = V_9;
						if (!L_48)
						{
							goto IL_012e_2;
						}
					}
					{
						// using (var stream = new StreamReader(responseStream))
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_49 = V_8;
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_50 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var)));
						NullCheck(L_50);
						StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_50, L_49, NULL);
						V_10 = L_50;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0121_2:
							{// begin finally (depth: 4)
								{
									StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_51 = V_10;
									if (!L_51)
									{
										goto IL_012d_2;
									}
								}
								{
									StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_52 = V_10;
									NullCheck(L_52);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var)), L_52);
								}

IL_012d_2:
								{
									return;
								}
							}// end finally (depth: 4)
						});
						try
						{// begin try (depth: 4)
							// errorCallback(stream.ReadToEnd());
							Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_53 = ___errorCallback4;
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_54 = V_10;
							NullCheck(L_54);
							String_t* L_55;
							L_55 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_54);
							NullCheck(L_53);
							Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_53, L_55, NULL);
							goto IL_012e_2;
						}// end try (depth: 4)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_012e_2:
					{
						goto IL_013e_1;
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_013e_1:
			{
				goto IL_014f;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0141;
			}
			throw e;
		}

CATCH_0141:
		{// begin catch(System.Exception)
			// catch (Exception e)
			V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.LogException(e);
			Exception_t* L_56 = V_11;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_56, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_014f;
		}// end catch (depth: 2)

IL_014f:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0160;
		}
	}// end catch (depth: 1)

CATCH_0152:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogException(e);
		Exception_t* L_57 = V_12;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_57, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0160;
	}// end catch (depth: 1)

IL_0160:
	{
		// }
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::MakeApiCall(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_MakeApiCall_mD01A42F76A8F1254BC63595584F7B6A638F13328 (PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* __this, RuntimeObject* ___reqContainerObj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m9F23E733CD984628272E7E41351CA1CD9DE2DE78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* V_0 = NULL;
	List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* V_1 = NULL;
	bool V_2 = false;
	{
		// CallRequestContainer reqContainer = (CallRequestContainer)reqContainerObj;
		RuntimeObject* L_0 = ___reqContainerObj0;
		V_0 = ((CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090*)CastclassClass((RuntimeObject*)L_0, CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090_il2cpp_TypeInfo_var));
		// reqContainer.HttpState = HttpRequestState.Idle;
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_1 = V_0;
		NullCheck(L_1);
		L_1->___HttpState_0 = 2;
		// lock (ActiveRequests)
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_2 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ActiveRequests_2;
		V_1 = L_2;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_4 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_003b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_5 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_2), NULL);
			// ActiveRequests.Insert(0, reqContainer);
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_6 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ActiveRequests_2;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_7 = V_0;
			NullCheck(L_6);
			List_1_Insert_m9F23E733CD984628272E7E41351CA1CD9DE2DE78(L_6, 0, L_7, List_1_Insert_m9F23E733CD984628272E7E41351CA1CD9DE2DE78_RuntimeMethod_var);
			goto IL_003c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// ActivateThreadWorker();
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		PlayFabWebRequest_ActivateThreadWorker_m258E96C002F00AC454C86D3FFE5CF2DE7BE7BED8(NULL);
		// }
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::ActivateThreadWorker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_ActivateThreadWorker_m258E96C002F00AC454C86D3FFE5CF2DE7BE7BED8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_WorkerThreadMainLoop_mAF6EA60E58ED95EAC3D0FD08BD8814051CCCB171_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (_ThreadLock)
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____ThreadLock_5;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0050;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0050:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (_requestQueueThread != null)
				il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____requestQueueThread_4;
				V_2 = (bool)((!(((RuntimeObject*)(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_0022_1;
				}
			}
			{
				// return;
				goto IL_0051;
			}

IL_0022_1:
			{
				// _requestQueueThread = new Thread(WorkerThreadMainLoop);
				ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_6 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_6, NULL, (intptr_t)((void*)PlayFabWebRequest_WorkerThreadMainLoop_mAF6EA60E58ED95EAC3D0FD08BD8814051CCCB171_RuntimeMethod_var), NULL);
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_7 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_7, L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
				((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____requestQueueThread_4 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____requestQueueThread_4), (void*)L_7);
				// _requestQueueThread.Start();
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_8 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____requestQueueThread_4;
				NullCheck(L_8);
				Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_8, NULL);
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::WorkerThreadMainLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_WorkerThreadMainLoop_mAF6EA60E58ED95EAC3D0FD08BD8814051CCCB171 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m1AAEB0989E2CC4BD238D01829F89E295726F8B78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4345FDA5CC3F67B61065716CCCE34400989F9A2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mEC9F829D7539D4577A9647002A8989CC608A2577_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m82576545D74FF830428AFD8BFE2B7C3F3B0EA4BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9665CF465A295E34CC62D3F9D5B95079F135B395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1BEA5BBBD4A8D9AE83829DACC9A31896D7C2D7B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	Exception_t* V_18 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B27_0 = 0;
	{
	}
	try
	{// begin try (depth: 1)
		{
			// lock (_ThreadLock)
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			RuntimeObject* L_0 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____ThreadLock_5;
			V_2 = L_0;
			V_3 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_002b_1:
				{// begin finally (depth: 2)
					{
						bool L_1 = V_3;
						if (!L_1)
						{
							goto IL_0035_1;
						}
					}
					{
						RuntimeObject* L_2 = V_2;
						Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
					}

IL_0035_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				RuntimeObject* L_3 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_3), NULL);
				// _threadKillTime = DateTime.UtcNow + ThreadKillTimeout;
				il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
				L_4 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
				il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
				TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ThreadKillTimeout_6;
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
				L_6 = DateTime_op_Addition_m652BE1306897DBE4CDF3ADA99FFFE2E70BFE3865(L_4, L_5, NULL);
				((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____threadKillTime_7 = L_6;
				goto IL_0036_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0036_1:
		{
			// List<CallRequestContainer> localActiveRequests = new List<CallRequestContainer>();
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_7 = (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC*)il2cpp_codegen_object_new(List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			List_1__ctor_m82576545D74FF830428AFD8BFE2B7C3F3B0EA4BE(L_7, List_1__ctor_m82576545D74FF830428AFD8BFE2B7C3F3B0EA4BE_RuntimeMethod_var);
			V_1 = L_7;
		}

IL_003c_1:
		{
			// lock (ActiveRequests)
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_8 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ActiveRequests_2;
			V_5 = L_8;
			V_6 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0077_1:
				{// begin finally (depth: 2)
					{
						bool L_9 = V_6;
						if (!L_9)
						{
							goto IL_0083_1;
						}
					}
					{
						List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_10 = V_5;
						Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_10, NULL);
					}

IL_0083_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_11 = V_5;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_11, (&V_6), NULL);
				// localActiveRequests.AddRange(ActiveRequests);
				List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_12 = V_1;
				il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
				List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_13 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ActiveRequests_2;
				NullCheck(L_12);
				List_1_AddRange_m1AAEB0989E2CC4BD238D01829F89E295726F8B78(L_12, L_13, List_1_AddRange_m1AAEB0989E2CC4BD238D01829F89E295726F8B78_RuntimeMethod_var);
				// ActiveRequests.Clear();
				List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_14 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ActiveRequests_2;
				NullCheck(L_14);
				List_1_Clear_m4345FDA5CC3F67B61065716CCCE34400989F9A2E_inline(L_14, List_1_Clear_m4345FDA5CC3F67B61065716CCCE34400989F9A2E_RuntimeMethod_var);
				// _activeCallCount = localActiveRequests.Count;
				List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_15 = V_1;
				NullCheck(L_15);
				int32_t L_16;
				L_16 = List_1_get_Count_m9665CF465A295E34CC62D3F9D5B95079F135B395_inline(L_15, List_1_get_Count_m9665CF465A295E34CC62D3F9D5B95079F135B395_RuntimeMethod_var);
				((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____activeCallCount_9 = L_16;
				goto IL_0084_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0084_1:
		{
			// var activeCalls = localActiveRequests.Count;
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_17 = V_1;
			NullCheck(L_17);
			int32_t L_18;
			L_18 = List_1_get_Count_m9665CF465A295E34CC62D3F9D5B95079F135B395_inline(L_17, List_1_get_Count_m9665CF465A295E34CC62D3F9D5B95079F135B395_RuntimeMethod_var);
			V_4 = L_18;
			// for (var i = activeCalls - 1; i >= 0; i--) // We must iterate backwards, because we remove at index i in some cases
			int32_t L_19 = V_4;
			V_7 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
			goto IL_0127_1;
		}

IL_0097_1:
		{
			// switch (localActiveRequests[i].HttpState)
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_20 = V_1;
			int32_t L_21 = V_7;
			NullCheck(L_20);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_22;
			L_22 = List_1_get_Item_m1BEA5BBBD4A8D9AE83829DACC9A31896D7C2D7B0(L_20, L_21, List_1_get_Item_m1BEA5BBBD4A8D9AE83829DACC9A31896D7C2D7B0_RuntimeMethod_var);
			NullCheck(L_22);
			int32_t L_23 = L_22->___HttpState_0;
			V_9 = L_23;
			int32_t L_24 = V_9;
			V_8 = L_24;
			int32_t L_25 = V_8;
			switch (L_25)
			{
				case 0:
				{
					goto IL_00df_1;
				}
				case 1:
				{
					goto IL_0107_1;
				}
				case 2:
				{
					goto IL_00cf_1;
				}
				case 3:
				{
					goto IL_00c4_1;
				}
			}
		}
		{
			goto IL_0120_1;
		}

IL_00c4_1:
		{
			// localActiveRequests.RemoveAt(i); break;
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_26 = V_1;
			int32_t L_27 = V_7;
			NullCheck(L_26);
			List_1_RemoveAt_mEC9F829D7539D4577A9647002A8989CC608A2577(L_26, L_27, List_1_RemoveAt_mEC9F829D7539D4577A9647002A8989CC608A2577_RuntimeMethod_var);
			// localActiveRequests.RemoveAt(i); break;
			goto IL_0120_1;
		}

IL_00cf_1:
		{
			// Post(localActiveRequests[i]); break;
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_28 = V_1;
			int32_t L_29 = V_7;
			NullCheck(L_28);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_30;
			L_30 = List_1_get_Item_m1BEA5BBBD4A8D9AE83829DACC9A31896D7C2D7B0(L_28, L_29, List_1_get_Item_m1BEA5BBBD4A8D9AE83829DACC9A31896D7C2D7B0_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			PlayFabWebRequest_Post_m27CEE000787C10A0BAF50715D9D4F4990B9A0589(L_30, NULL);
			// Post(localActiveRequests[i]); break;
			goto IL_0120_1;
		}

IL_00df_1:
		{
			// if (localActiveRequests[i].HttpRequest.HaveResponse) // Else we'll try again next tick
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_31 = V_1;
			int32_t L_32 = V_7;
			NullCheck(L_31);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_33;
			L_33 = List_1_get_Item_m1BEA5BBBD4A8D9AE83829DACC9A31896D7C2D7B0(L_31, L_32, List_1_get_Item_m1BEA5BBBD4A8D9AE83829DACC9A31896D7C2D7B0_RuntimeMethod_var);
			NullCheck(L_33);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_34 = L_33->___HttpRequest_1;
			NullCheck(L_34);
			bool L_35;
			L_35 = VirtualFuncInvoker0< bool >::Invoke(49 /* System.Boolean System.Net.HttpWebRequest::get_HaveResponse() */, L_34);
			V_10 = L_35;
			bool L_36 = V_10;
			if (!L_36)
			{
				goto IL_0105_1;
			}
		}
		{
			// ProcessHttpResponse(localActiveRequests[i]);
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_37 = V_1;
			int32_t L_38 = V_7;
			NullCheck(L_37);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_39;
			L_39 = List_1_get_Item_m1BEA5BBBD4A8D9AE83829DACC9A31896D7C2D7B0(L_37, L_38, List_1_get_Item_m1BEA5BBBD4A8D9AE83829DACC9A31896D7C2D7B0_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			PlayFabWebRequest_ProcessHttpResponse_m1B5E20CB50C16162CA0E655BC25DC36C742AEA74(L_39, NULL);
		}

IL_0105_1:
		{
			// break;
			goto IL_0120_1;
		}

IL_0107_1:
		{
			// ProcessJsonResponse(localActiveRequests[i]);
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_40 = V_1;
			int32_t L_41 = V_7;
			NullCheck(L_40);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_42;
			L_42 = List_1_get_Item_m1BEA5BBBD4A8D9AE83829DACC9A31896D7C2D7B0(L_40, L_41, List_1_get_Item_m1BEA5BBBD4A8D9AE83829DACC9A31896D7C2D7B0_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			PlayFabWebRequest_ProcessJsonResponse_m26544223B648566722344EA7EA7618D23E148CD7(L_42, NULL);
			// localActiveRequests.RemoveAt(i);
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_43 = V_1;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			List_1_RemoveAt_mEC9F829D7539D4577A9647002A8989CC608A2577(L_43, L_44, List_1_RemoveAt_mEC9F829D7539D4577A9647002A8989CC608A2577_RuntimeMethod_var);
			// break;
			goto IL_0120_1;
		}

IL_0120_1:
		{
			// for (var i = activeCalls - 1; i >= 0; i--) // We must iterate backwards, because we remove at index i in some cases
			int32_t L_45 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		}

IL_0127_1:
		{
			// for (var i = activeCalls - 1; i >= 0; i--) // We must iterate backwards, because we remove at index i in some cases
			int32_t L_46 = V_7;
			V_11 = (bool)((((int32_t)((((int32_t)L_46) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_47 = V_11;
			if (L_47)
			{
				goto IL_0097_1;
			}
		}
		{
			// lock (_ThreadLock)
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			RuntimeObject* L_48 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____ThreadLock_5;
			V_12 = L_48;
			V_13 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_019c_1:
				{// begin finally (depth: 2)
					{
						bool L_49 = V_13;
						if (!L_49)
						{
							goto IL_01a8_1;
						}
					}
					{
						RuntimeObject* L_50 = V_12;
						Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_50, NULL);
					}

IL_01a8_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					RuntimeObject* L_51 = V_12;
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_51, (&V_13), NULL);
					// var now = DateTime.UtcNow;
					il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
					DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_52;
					L_52 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
					V_14 = L_52;
					// if (activeCalls > 0 && _isApplicationPlaying)
					int32_t L_53 = V_4;
					if ((((int32_t)L_53) <= ((int32_t)0)))
					{
						goto IL_0160_2;
					}
				}
				{
					il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
					bool L_54 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____isApplicationPlaying_8;
					G_B27_0 = ((int32_t)(L_54));
					goto IL_0161_2;
				}

IL_0160_2:
				{
					G_B27_0 = 0;
				}

IL_0161_2:
				{
					V_15 = (bool)G_B27_0;
					bool L_55 = V_15;
					if (!L_55)
					{
						goto IL_017a_2;
					}
				}
				{
					// _threadKillTime = now + ThreadKillTimeout;
					DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_56 = V_14;
					il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
					TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_57 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ThreadKillTimeout_6;
					il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
					DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_58;
					L_58 = DateTime_op_Addition_m652BE1306897DBE4CDF3ADA99FFFE2E70BFE3865(L_56, L_57, NULL);
					((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____threadKillTime_7 = L_58;
				}

IL_017a_2:
				{
					// active = now <= _threadKillTime;
					DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_59 = V_14;
					il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
					DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_60 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____threadKillTime_7;
					il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
					bool L_61;
					L_61 = DateTime_op_LessThanOrEqual_mC22EB236042D9E1C17C64393FB429E58B8F952F8(L_59, L_60, NULL);
					V_0 = L_61;
					// if (!active)
					bool L_62 = V_0;
					V_16 = (bool)((((int32_t)L_62) == ((int32_t)0))? 1 : 0);
					bool L_63 = V_16;
					if (!L_63)
					{
						goto IL_0199_2;
					}
				}
				{
					// _requestQueueThread = null;
					il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
					((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____requestQueueThread_4 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____requestQueueThread_4), (void*)(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)NULL);
				}

IL_0199_2:
				{
					goto IL_01a9_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_01a9_1:
		{
			// Thread.Sleep(1);
			Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(1, NULL);
			// } while (active);
			bool L_64 = V_0;
			V_17 = L_64;
			bool L_65 = V_17;
			if (L_65)
			{
				goto IL_003c_1;
			}
		}
		{
			goto IL_01d2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01be;
		}
		throw e;
	}

CATCH_01be:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_18 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogException(e);
		Exception_t* L_66 = V_18;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_66, NULL);
		// _requestQueueThread = null;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var)));
		((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))))->____requestQueueThread_4 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))))->____requestQueueThread_4), (void*)(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01d2;
	}// end catch (depth: 1)

IL_01d2:
	{
		// }
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::Post(PlayFab.Internal.CallRequestContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_Post_m27CEE000787C10A0BAF50715D9D4F4990B9A0589 (CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* ___reqContainer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabSettings_t30A10F424DF4CB2CE2664301E025BD0C3D5B7C51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C5C2017CE5797EC5DD58BA9DFC6CC62B33ED289);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_1;
	memset((&V_1), 0, sizeof(V_1));
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_2 = NULL;
	WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* V_3 = NULL;
	WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t* V_6 = NULL;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B15_0 = NULL;
	CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* G_B15_1 = NULL;
	String_t* G_B14_0 = NULL;
	CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* G_B14_1 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			// reqContainer.HttpRequest = (HttpWebRequest)WebRequest.Create(reqContainer.FullUrl);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_0 = ___reqContainer0;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_1 = ___reqContainer0;
			NullCheck(L_1);
			String_t* L_2 = L_1->___FullUrl_3;
			il2cpp_codegen_runtime_class_init_inline(WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
			WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* L_3;
			L_3 = WebRequest_Create_mEA404E1E326B2790C70C40894101C6DB41DA8E6C(L_2, NULL);
			NullCheck(L_0);
			L_0->___HttpRequest_1 = ((HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9*)CastclassClass((RuntimeObject*)L_3, HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var));
			Il2CppCodeGenWriteBarrier((void**)(&L_0->___HttpRequest_1), (void*)((HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9*)CastclassClass((RuntimeObject*)L_3, HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var)));
			// reqContainer.HttpRequest.UserAgent = "UnityEngine-Unity; Version: " + _unityVersion;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_4 = ___reqContainer0;
			NullCheck(L_4);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_5 = L_4->___HttpRequest_1;
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			String_t* L_6 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____unityVersion_10;
			String_t* L_7;
			L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0C5C2017CE5797EC5DD58BA9DFC6CC62B33ED289, L_6, NULL);
			NullCheck(L_5);
			HttpWebRequest_set_UserAgent_mF44CBC379376E5598E1C73FD7F1E3B949383F834(L_5, L_7, NULL);
			// reqContainer.HttpRequest.SendChunked = false;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_8 = ___reqContainer0;
			NullCheck(L_8);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_9 = L_8->___HttpRequest_1;
			NullCheck(L_9);
			HttpWebRequest_set_SendChunked_m5B227DE6AC5E5F904BD5146043A4AB80F9671491(L_9, (bool)0, NULL);
			// reqContainer.HttpRequest.Proxy = null;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_10 = ___reqContainer0;
			NullCheck(L_10);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_11 = L_10->___HttpRequest_1;
			NullCheck(L_11);
			VirtualActionInvoker1< RuntimeObject* >::Invoke(27 /* System.Void System.Net.WebRequest::set_Proxy(System.Net.IWebProxy) */, L_11, (RuntimeObject*)NULL);
			// foreach (var pair in reqContainer.RequestHeaders)
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_12 = ___reqContainer0;
			NullCheck(L_12);
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = L_12->___RequestHeaders_7;
			NullCheck(L_13);
			Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_14;
			L_14 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_13, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
			V_0 = L_14;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_008e_1:
				{// begin finally (depth: 2)
					Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_0), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_0083_2;
				}

IL_005c_2:
				{
					// foreach (var pair in reqContainer.RequestHeaders)
					KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_15;
					L_15 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_0), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
					V_1 = L_15;
					// reqContainer.HttpRequest.Headers.Add(pair.Key, pair.Value);
					CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_16 = ___reqContainer0;
					NullCheck(L_16);
					HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_17 = L_16->___HttpRequest_1;
					NullCheck(L_17);
					WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* L_18;
					L_18 = VirtualFuncInvoker0< WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* >::Invoke(16 /* System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers() */, L_17);
					String_t* L_19;
					L_19 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_1), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
					String_t* L_20;
					L_20 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_1), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
					NullCheck(L_18);
					VirtualActionInvoker2< String_t*, String_t* >::Invoke(18 /* System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String) */, L_18, L_19, L_20);
				}

IL_0083_2:
				{
					// foreach (var pair in reqContainer.RequestHeaders)
					bool L_21;
					L_21 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_0), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
					if (L_21)
					{
						goto IL_005c_2;
					}
				}
				{
					goto IL_009d_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_009d_1:
		{
			// reqContainer.HttpRequest.ContentType = "application/json";
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_22 = ___reqContainer0;
			NullCheck(L_22);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_23 = L_22->___HttpRequest_1;
			NullCheck(L_23);
			VirtualActionInvoker1< String_t* >::Invoke(21 /* System.Void System.Net.WebRequest::set_ContentType(System.String) */, L_23, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
			// reqContainer.HttpRequest.Method = "POST";
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_24 = ___reqContainer0;
			NullCheck(L_24);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_25 = L_24->___HttpRequest_1;
			NullCheck(L_25);
			VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Net.WebRequest::set_Method(System.String) */, L_25, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
			// reqContainer.HttpRequest.KeepAlive = PlayFabSettings.RequestKeepAlive;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_26 = ___reqContainer0;
			NullCheck(L_26);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_27 = L_26->___HttpRequest_1;
			il2cpp_codegen_runtime_class_init_inline(PlayFabSettings_t30A10F424DF4CB2CE2664301E025BD0C3D5B7C51_il2cpp_TypeInfo_var);
			bool L_28;
			L_28 = PlayFabSettings_get_RequestKeepAlive_m0AEB295AA9461963D06926550F485C2F22B885AB(NULL);
			NullCheck(L_27);
			HttpWebRequest_set_KeepAlive_mF8D4C5D79359F77F6612FC9087EB8575BC31280E_inline(L_27, L_28, NULL);
			// reqContainer.HttpRequest.Timeout = PlayFabSettings.RequestTimeout;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_29 = ___reqContainer0;
			NullCheck(L_29);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_30 = L_29->___HttpRequest_1;
			int32_t L_31;
			L_31 = PlayFabSettings_get_RequestTimeout_mD84307C84412920DC2562AD20E6D16A240FE1E2E(NULL);
			NullCheck(L_30);
			VirtualActionInvoker1< int32_t >::Invoke(31 /* System.Void System.Net.WebRequest::set_Timeout(System.Int32) */, L_30, L_31);
			// reqContainer.HttpRequest.AllowWriteStreamBuffering = false;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_32 = ___reqContainer0;
			NullCheck(L_32);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_33 = L_32->___HttpRequest_1;
			NullCheck(L_33);
			VirtualActionInvoker1< bool >::Invoke(44 /* System.Void System.Net.HttpWebRequest::set_AllowWriteStreamBuffering(System.Boolean) */, L_33, (bool)0);
			// reqContainer.HttpRequest.Proxy = null;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_34 = ___reqContainer0;
			NullCheck(L_34);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_35 = L_34->___HttpRequest_1;
			NullCheck(L_35);
			VirtualActionInvoker1< RuntimeObject* >::Invoke(27 /* System.Void System.Net.WebRequest::set_Proxy(System.Net.IWebProxy) */, L_35, (RuntimeObject*)NULL);
			// reqContainer.HttpRequest.ContentLength = reqContainer.Payload.LongLength;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_36 = ___reqContainer0;
			NullCheck(L_36);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_37 = L_36->___HttpRequest_1;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_38 = ___reqContainer0;
			NullCheck(L_38);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = L_38->___Payload_4;
			NullCheck(L_39);
			NullCheck(L_37);
			VirtualActionInvoker1< int64_t >::Invoke(19 /* System.Void System.Net.WebRequest::set_ContentLength(System.Int64) */, L_37, ((int64_t)((int32_t)(((RuntimeArray*)L_39)->max_length))));
			// reqContainer.HttpRequest.ReadWriteTimeout = PlayFabSettings.RequestTimeout;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_40 = ___reqContainer0;
			NullCheck(L_40);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_41 = L_40->___HttpRequest_1;
			int32_t L_42;
			L_42 = PlayFabSettings_get_RequestTimeout_mD84307C84412920DC2562AD20E6D16A240FE1E2E(NULL);
			NullCheck(L_41);
			HttpWebRequest_set_ReadWriteTimeout_m7558CE38A07498C398CC344AA550D82725F41310(L_41, L_42, NULL);
			// using (var stream = reqContainer.HttpRequest.GetRequestStream())
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_43 = ___reqContainer0;
			NullCheck(L_43);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_44 = L_43->___HttpRequest_1;
			NullCheck(L_44);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_45;
			L_45 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(32 /* System.IO.Stream System.Net.WebRequest::GetRequestStream() */, L_44);
			V_2 = L_45;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0146_1:
				{// begin finally (depth: 2)
					{
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_46 = V_2;
						if (!L_46)
						{
							goto IL_0150_1;
						}
					}
					{
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_47 = V_2;
						NullCheck(L_47);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_47);
					}

IL_0150_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// stream.Write(reqContainer.Payload, 0, reqContainer.Payload.Length);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_48 = V_2;
				CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_49 = ___reqContainer0;
				NullCheck(L_49);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = L_49->___Payload_4;
				CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_51 = ___reqContainer0;
				NullCheck(L_51);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = L_51->___Payload_4;
				NullCheck(L_52);
				NullCheck(L_48);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_48, L_50, 0, ((int32_t)(((RuntimeArray*)L_52)->max_length)));
				goto IL_0151_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0151_1:
		{
			// reqContainer.HttpState = HttpRequestState.Sent;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_53 = ___reqContainer0;
			NullCheck(L_53);
			L_53->___HttpState_0 = 0;
			goto IL_01f4;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_015e;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ba;
		}
		throw e;
	}

CATCH_015e:
	{// begin catch(System.Net.WebException)
		{
			// catch (WebException e)
			V_3 = ((WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8*)IL2CPP_GET_ACTIVE_EXCEPTION(WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8*));
			// reqContainer.JsonResponse = ResponseToString(e.Response) ?? e.Status + ": WebException making http request to: " + reqContainer.FullUrl;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_54 = ___reqContainer0;
			WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* L_55 = V_3;
			NullCheck(L_55);
			WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_56;
			L_56 = WebException_get_Response_m808BF96464DDCE6C66D633355101C69800A5A7E7_inline(L_55, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var)));
			String_t* L_57;
			L_57 = PlayFabWebRequest_ResponseToString_m52B18647BF93DF73CE971BAD44371CFC84A79289(L_56, NULL);
			String_t* L_58 = L_57;
			G_B14_0 = L_58;
			G_B14_1 = L_54;
			if (L_58)
			{
				G_B15_0 = L_58;
				G_B15_1 = L_54;
				goto IL_0195;
			}
		}
		{
			WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* L_59 = V_3;
			NullCheck(L_59);
			int32_t L_60;
			L_60 = WebException_get_Status_m9B08D3B07C3D75A6783EADB1215EB54E2D3B9822_inline(L_59, NULL);
			V_5 = L_60;
			Il2CppFakeBox<int32_t> L_61(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebExceptionStatus_t86B29EE86F8C7D20D1825C71503F0473C43B4B92_il2cpp_TypeInfo_var)), (&V_5));
			String_t* L_62;
			L_62 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_61), NULL);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_63 = ___reqContainer0;
			NullCheck(L_63);
			String_t* L_64 = L_63->___FullUrl_3;
			String_t* L_65;
			L_65 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E6FA5C849AB45DB7E04304231F76394AF579ACD)), L_64, NULL);
			G_B15_0 = L_65;
			G_B15_1 = G_B14_1;
		}

IL_0195:
		{
			NullCheck(G_B15_1);
			G_B15_1->___JsonResponse_5 = G_B15_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B15_1->___JsonResponse_5), (void*)G_B15_0);
			// var enhancedError = new WebException(reqContainer.JsonResponse, e);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_66 = ___reqContainer0;
			NullCheck(L_66);
			String_t* L_67 = L_66->___JsonResponse_5;
			WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* L_68 = V_3;
			WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* L_69 = (WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8_il2cpp_TypeInfo_var)));
			NullCheck(L_69);
			WebException__ctor_m8075F9F7345CECCBDB276E0B67DE820A9F7D03E9(L_69, L_67, L_68, NULL);
			V_4 = L_69;
			// Debug.LogException(enhancedError);
			WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* L_70 = V_4;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_70, NULL);
			// QueueRequestError(reqContainer);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_71 = ___reqContainer0;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var)));
			PlayFabWebRequest_QueueRequestError_mB8C74E316D2F5A5769E45507AFF16033FE5E8847(L_71, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01f4;
		}
	}// end catch (depth: 1)

CATCH_01ba:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// reqContainer.JsonResponse = "Unhandled exception in Post : " + reqContainer.FullUrl;
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_72 = ___reqContainer0;
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_73 = ___reqContainer0;
		NullCheck(L_73);
		String_t* L_74 = L_73->___FullUrl_3;
		String_t* L_75;
		L_75 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1BD65742F210C0596EB07708EBD8DBCEFA36FAF3)), L_74, NULL);
		NullCheck(L_72);
		L_72->___JsonResponse_5 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&L_72->___JsonResponse_5), (void*)L_75);
		// var enhancedError = new Exception(reqContainer.JsonResponse, e);
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_76 = ___reqContainer0;
		NullCheck(L_76);
		String_t* L_77 = L_76->___JsonResponse_5;
		Exception_t* L_78 = V_6;
		Exception_t* L_79 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_79);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_79, L_77, L_78, NULL);
		V_7 = L_79;
		// Debug.LogException(enhancedError);
		Exception_t* L_80 = V_7;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_80, NULL);
		// QueueRequestError(reqContainer);
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_81 = ___reqContainer0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var)));
		PlayFabWebRequest_QueueRequestError_mB8C74E316D2F5A5769E45507AFF16033FE5E8847(L_81, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01f4;
	}// end catch (depth: 1)

IL_01f4:
	{
		// }
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::ProcessHttpResponse(PlayFab.Internal.CallRequestContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_ProcessHttpResponse_m1B5E20CB50C16162CA0E655BC25DC36C742AEA74 (CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* ___reqContainer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF6B9737206257D24874F24E888EA1B1F661B9CA);
		s_Il2CppMethodInitialized = true;
	}
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B6_0 = 0;
	String_t* G_B9_0 = NULL;
	CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* G_B9_1 = NULL;
	String_t* G_B8_0 = NULL;
	CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* G_B8_1 = NULL;
	String_t* G_B13_0 = NULL;
	CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* G_B13_1 = NULL;
	String_t* G_B12_0 = NULL;
	CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* G_B12_1 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			// var httpResponse = (HttpWebResponse)reqContainer.HttpRequest.GetResponse();
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_0 = ___reqContainer0;
			NullCheck(L_0);
			HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_1 = L_0->___HttpRequest_1;
			NullCheck(L_1);
			WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_2;
			L_2 = VirtualFuncInvoker0< WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* >::Invoke(33 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_1);
			V_0 = ((HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A*)CastclassClass((RuntimeObject*)L_2, HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A_il2cpp_TypeInfo_var));
			// if (httpResponse.StatusCode == HttpStatusCode.OK)
			HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* L_3 = V_0;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = VirtualFuncInvoker0< int32_t >::Invoke(25 /* System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode() */, L_3);
			V_1 = (bool)((((int32_t)L_4) == ((int32_t)((int32_t)200)))? 1 : 0);
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0032_1;
			}
		}
		{
			// reqContainer.JsonResponse = ResponseToString(httpResponse);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_6 = ___reqContainer0;
			HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* L_7 = V_0;
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			String_t* L_8;
			L_8 = PlayFabWebRequest_ResponseToString_m52B18647BF93DF73CE971BAD44371CFC84A79289(L_7, NULL);
			NullCheck(L_6);
			L_6->___JsonResponse_5 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&L_6->___JsonResponse_5), (void*)L_8);
		}

IL_0032_1:
		{
			// if (httpResponse.StatusCode != HttpStatusCode.OK || string.IsNullOrEmpty(reqContainer.JsonResponse))
			HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* L_9 = V_0;
			NullCheck(L_9);
			int32_t L_10;
			L_10 = VirtualFuncInvoker0< int32_t >::Invoke(25 /* System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode() */, L_9);
			if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)200)))))
			{
				goto IL_004c_1;
			}
		}
		{
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_11 = ___reqContainer0;
			NullCheck(L_11);
			String_t* L_12 = L_11->___JsonResponse_5;
			bool L_13;
			L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
			G_B6_0 = ((int32_t)(L_13));
			goto IL_004d_1;
		}

IL_004c_1:
		{
			G_B6_0 = 1;
		}

IL_004d_1:
		{
			V_2 = (bool)G_B6_0;
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_0070_1;
			}
		}
		{
			// reqContainer.JsonResponse = reqContainer.JsonResponse ?? "No response from server";
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_15 = ___reqContainer0;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_16 = ___reqContainer0;
			NullCheck(L_16);
			String_t* L_17 = L_16->___JsonResponse_5;
			String_t* L_18 = L_17;
			G_B8_0 = L_18;
			G_B8_1 = L_15;
			if (L_18)
			{
				G_B9_0 = L_18;
				G_B9_1 = L_15;
				goto IL_0062_1;
			}
		}
		{
			G_B9_0 = _stringLiteralDF6B9737206257D24874F24E888EA1B1F661B9CA;
			G_B9_1 = G_B8_1;
		}

IL_0062_1:
		{
			NullCheck(G_B9_1);
			G_B9_1->___JsonResponse_5 = G_B9_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___JsonResponse_5), (void*)G_B9_0);
			// QueueRequestError(reqContainer);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_19 = ___reqContainer0;
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			PlayFabWebRequest_QueueRequestError_mB8C74E316D2F5A5769E45507AFF16033FE5E8847(L_19, NULL);
			// return;
			goto IL_00be;
		}

IL_0070_1:
		{
			// reqContainer.HttpState = HttpRequestState.Received;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_20 = ___reqContainer0;
			NullCheck(L_20);
			L_20->___HttpState_0 = 1;
			goto IL_00be;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007c;
		}
		throw e;
	}

CATCH_007c:
	{// begin catch(System.Exception)
		{
			// catch (Exception e)
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// var msg = "Unhandled exception in ProcessHttpResponse : " + reqContainer.FullUrl;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_21 = ___reqContainer0;
			NullCheck(L_21);
			String_t* L_22 = L_21->___FullUrl_3;
			String_t* L_23;
			L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A83F57C00932DA1D345C01E65E7CF0EAB0725BC)), L_22, NULL);
			V_4 = L_23;
			// reqContainer.JsonResponse = reqContainer.JsonResponse ?? msg;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_24 = ___reqContainer0;
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_25 = ___reqContainer0;
			NullCheck(L_25);
			String_t* L_26 = L_25->___JsonResponse_5;
			String_t* L_27 = L_26;
			G_B12_0 = L_27;
			G_B12_1 = L_24;
			if (L_27)
			{
				G_B13_0 = L_27;
				G_B13_1 = L_24;
				goto IL_009d;
			}
		}
		{
			String_t* L_28 = V_4;
			G_B13_0 = L_28;
			G_B13_1 = G_B12_1;
		}

IL_009d:
		{
			NullCheck(G_B13_1);
			G_B13_1->___JsonResponse_5 = G_B13_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___JsonResponse_5), (void*)G_B13_0);
			// var enhancedError = new Exception(msg, e);
			String_t* L_29 = V_4;
			Exception_t* L_30 = V_3;
			Exception_t* L_31 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			NullCheck(L_31);
			Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_31, L_29, L_30, NULL);
			V_5 = L_31;
			// Debug.LogException(enhancedError);
			Exception_t* L_32 = V_5;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_32, NULL);
			// QueueRequestError(reqContainer);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_33 = ___reqContainer0;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var)));
			PlayFabWebRequest_QueueRequestError_mB8C74E316D2F5A5769E45507AFF16033FE5E8847(L_33, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00be;
		}
	}// end catch (depth: 1)

IL_00be:
	{
		// }
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::QueueRequestError(PlayFab.Internal.CallRequestContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_QueueRequestError_mB8C74E316D2F5A5769E45507AFF16033FE5E8847 (CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* ___reqContainer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabHttp_t368B793060DC7677E3ADB9712686BAB6A596CEE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass30_0_U3CQueueRequestErrorU3Eb__0_m678EB9595C71DBB62634561ED5E3CAAE27652FFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92* V_0 = NULL;
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_1 = NULL;
	bool V_2 = false;
	{
		U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92* L_0 = (U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass30_0__ctor_m5A8C212720A229AC50FF65D930357C77E6880463(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92* L_1 = V_0;
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_2 = ___reqContainer0;
		NullCheck(L_1);
		L_1->___reqContainer_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___reqContainer_0), (void*)L_2);
		// reqContainer.Error = PlayFabHttp.GeneratePlayFabError(reqContainer.ApiEndpoint, reqContainer.JsonResponse, reqContainer.CustomData); // Decode the server-json error
		U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92* L_3 = V_0;
		NullCheck(L_3);
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_4 = L_3->___reqContainer_0;
		U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92* L_5 = V_0;
		NullCheck(L_5);
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_6 = L_5->___reqContainer_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___ApiEndpoint_2;
		U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92* L_8 = V_0;
		NullCheck(L_8);
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_9 = L_8->___reqContainer_0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___JsonResponse_5;
		U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92* L_11 = V_0;
		NullCheck(L_11);
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_12 = L_11->___reqContainer_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->___CustomData_13;
		il2cpp_codegen_runtime_class_init_inline(PlayFabHttp_t368B793060DC7677E3ADB9712686BAB6A596CEE2_il2cpp_TypeInfo_var);
		PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* L_14;
		L_14 = PlayFabHttp_GeneratePlayFabError_mE42EAD0F84688CEF2955AE1249C81308874E6692(L_7, L_10, L_13, NULL);
		NullCheck(L_4);
		L_4->___Error_9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___Error_9), (void*)L_14);
		// reqContainer.HttpState = HttpRequestState.Error;
		U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92* L_15 = V_0;
		NullCheck(L_15);
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_16 = L_15->___reqContainer_0;
		NullCheck(L_16);
		L_16->___HttpState_0 = 3;
		// lock (ResultQueueTransferThread)
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_17 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueTransferThread_0;
		V_1 = L_17;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0077:
			{// begin finally (depth: 1)
				{
					bool L_18 = V_2;
					if (!L_18)
					{
						goto IL_0081;
					}
				}
				{
					Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_19 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_19, NULL);
				}

IL_0081:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_20 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_20, (&V_2), NULL);
			// ResultQueueTransferThread.Enqueue(() =>
			// {
			//     PlayFabHttp.SendErrorEvent(reqContainer.ApiRequest, reqContainer.Error);
			//     if (reqContainer.ErrorCallback != null)
			//         reqContainer.ErrorCallback(reqContainer.Error);
			// });
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_21 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueTransferThread_0;
			U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92* L_22 = V_0;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
			NullCheck(L_23);
			Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass30_0_U3CQueueRequestErrorU3Eb__0_m678EB9595C71DBB62634561ED5E3CAAE27652FFB_RuntimeMethod_var), NULL);
			NullCheck(L_21);
			Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4(L_21, L_23, Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
			goto IL_0082;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::ProcessJsonResponse(PlayFab.Internal.CallRequestContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_ProcessJsonResponse_m26544223B648566722344EA7EA7618D23E148CD7 (CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* ___reqContainer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializerPlugin_DeserializeObject_TisHttpResponseObject_t5E8A588B1281C0BD1F1DF73FDA1EF9867EB85271_m315B6A993EC6406591E61EC211E212F66097DE53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializerPlugin_tB1E1A4440F7B43AE85D8B29B95AFBE9852029C62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PluginManager_GetPlugin_TisISerializerPlugin_tB1E1A4440F7B43AE85D8B29B95AFBE9852029C62_mCA8B3C31B813B966C86F7CF11569F498716E292E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PluginManager_t808323586B608823653190D949106EF945AA1AC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_instance_mE8325C33FB36C03CF943C3317FF54FC569508E68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3CProcessJsonResponseU3Eb__0_m8AB12C4FE5E8CA40D356CEE157ADCFE1E287D432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3CProcessJsonResponseU3Eb__1_m30C0FD0874F571A1F1C241939755916FAD9B5BAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	HttpResponseObject_t5E8A588B1281C0BD1F1DF73FDA1EF9867EB85271* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_5 = NULL;
	bool V_6 = false;
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_7 = NULL;
	bool V_8 = false;
	Exception_t* V_9 = NULL;
	String_t* V_10 = NULL;
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	String_t* G_B21_0 = NULL;
	CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* G_B21_1 = NULL;
	String_t* G_B20_0 = NULL;
	CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* G_B20_1 = NULL;
	{
		U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_0 = (U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass31_0__ctor_m059142FE683072C0CE1EEF3B2AADF00CFBBF7AED(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_1 = V_0;
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_2 = ___reqContainer0;
		NullCheck(L_1);
		L_1->___reqContainer_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___reqContainer_0), (void*)L_2);
	}
	try
	{// begin try (depth: 1)
		{
			// var serializer = PluginManager.GetPlugin<ISerializerPlugin>(PluginContract.PlayFab_Serializer);
			il2cpp_codegen_runtime_class_init_inline(PluginManager_t808323586B608823653190D949106EF945AA1AC6_il2cpp_TypeInfo_var);
			RuntimeObject* L_3;
			L_3 = PluginManager_GetPlugin_TisISerializerPlugin_tB1E1A4440F7B43AE85D8B29B95AFBE9852029C62_mCA8B3C31B813B966C86F7CF11569F498716E292E(0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, PluginManager_GetPlugin_TisISerializerPlugin_tB1E1A4440F7B43AE85D8B29B95AFBE9852029C62_mCA8B3C31B813B966C86F7CF11569F498716E292E_RuntimeMethod_var);
			V_1 = L_3;
			// var httpResult = serializer.DeserializeObject<HttpResponseObject>(reqContainer.JsonResponse);
			RuntimeObject* L_4 = V_1;
			U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_5 = V_0;
			NullCheck(L_5);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_6 = L_5->___reqContainer_0;
			NullCheck(L_6);
			String_t* L_7 = L_6->___JsonResponse_5;
			NullCheck(L_4);
			HttpResponseObject_t5E8A588B1281C0BD1F1DF73FDA1EF9867EB85271* L_8;
			L_8 = GenericInterfaceFuncInvoker1< HttpResponseObject_t5E8A588B1281C0BD1F1DF73FDA1EF9867EB85271*, String_t* >::Invoke(ISerializerPlugin_DeserializeObject_TisHttpResponseObject_t5E8A588B1281C0BD1F1DF73FDA1EF9867EB85271_m315B6A993EC6406591E61EC211E212F66097DE53_RuntimeMethod_var, L_4, L_7);
			V_2 = L_8;
			// if (httpResult == null || httpResult.code != 200)
			HttpResponseObject_t5E8A588B1281C0BD1F1DF73FDA1EF9867EB85271* L_9 = V_2;
			if (!L_9)
			{
				goto IL_0042_1;
			}
		}
		{
			HttpResponseObject_t5E8A588B1281C0BD1F1DF73FDA1EF9867EB85271* L_10 = V_2;
			NullCheck(L_10);
			int32_t L_11 = L_10->___code_0;
			G_B4_0 = ((((int32_t)((((int32_t)L_11) == ((int32_t)((int32_t)200)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0043_1;
		}

IL_0042_1:
		{
			G_B4_0 = 1;
		}

IL_0043_1:
		{
			V_3 = (bool)G_B4_0;
			bool L_12 = V_3;
			if (!L_12)
			{
				goto IL_0059_1;
			}
		}
		{
			// QueueRequestError(reqContainer);
			U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_13 = V_0;
			NullCheck(L_13);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_14 = L_13->___reqContainer_0;
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			PlayFabWebRequest_QueueRequestError_mB8C74E316D2F5A5769E45507AFF16033FE5E8847(L_14, NULL);
			// return;
			goto IL_01a8;
		}

IL_0059_1:
		{
			// reqContainer.JsonResponse = serializer.SerializeObject(httpResult.data);
			U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_15 = V_0;
			NullCheck(L_15);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_16 = L_15->___reqContainer_0;
			RuntimeObject* L_17 = V_1;
			HttpResponseObject_t5E8A588B1281C0BD1F1DF73FDA1EF9867EB85271* L_18 = V_2;
			NullCheck(L_18);
			RuntimeObject* L_19 = L_18->___data_2;
			NullCheck(L_17);
			String_t* L_20;
			L_20 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(3 /* System.String PlayFab.ISerializerPlugin::SerializeObject(System.Object) */, ISerializerPlugin_tB1E1A4440F7B43AE85D8B29B95AFBE9852029C62_il2cpp_TypeInfo_var, L_17, L_19);
			NullCheck(L_16);
			L_16->___JsonResponse_5 = L_20;
			Il2CppCodeGenWriteBarrier((void**)(&L_16->___JsonResponse_5), (void*)L_20);
			// reqContainer.DeserializeResultJson(); // Assigns Result with a properly typed object
			U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_21 = V_0;
			NullCheck(L_21);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_22 = L_21->___reqContainer_0;
			NullCheck(L_22);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23 = L_22->___DeserializeResultJson_10;
			NullCheck(L_23);
			Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_23, NULL);
			// reqContainer.ApiResult.Request = reqContainer.ApiRequest;
			U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_24 = V_0;
			NullCheck(L_24);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_25 = L_24->___reqContainer_0;
			NullCheck(L_25);
			PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40* L_26 = L_25->___ApiResult_8;
			U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_27 = V_0;
			NullCheck(L_27);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_28 = L_27->___reqContainer_0;
			NullCheck(L_28);
			PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* L_29 = L_28->___ApiRequest_6;
			NullCheck(L_26);
			L_26->___Request_0 = L_29;
			Il2CppCodeGenWriteBarrier((void**)(&L_26->___Request_0), (void*)L_29);
			// reqContainer.ApiResult.CustomData = reqContainer.CustomData;
			U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_30 = V_0;
			NullCheck(L_30);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_31 = L_30->___reqContainer_0;
			NullCheck(L_31);
			PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40* L_32 = L_31->___ApiResult_8;
			U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_33 = V_0;
			NullCheck(L_33);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_34 = L_33->___reqContainer_0;
			NullCheck(L_34);
			RuntimeObject* L_35 = L_34->___CustomData_13;
			NullCheck(L_32);
			L_32->___CustomData_1 = L_35;
			Il2CppCodeGenWriteBarrier((void**)(&L_32->___CustomData_1), (void*)L_35);
			// if(_isApplicationPlaying)
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			bool L_36 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____isApplicationPlaying_8;
			V_4 = L_36;
			bool L_37 = V_4;
			if (!L_37)
			{
				goto IL_00d5_1;
			}
		}
		{
			// PlayFabHttp.instance.OnPlayFabApiResult(reqContainer);
			PlayFabHttp_t368B793060DC7677E3ADB9712686BAB6A596CEE2* L_38;
			L_38 = SingletonMonoBehaviour_1_get_instance_mE8325C33FB36C03CF943C3317FF54FC569508E68(SingletonMonoBehaviour_1_get_instance_mE8325C33FB36C03CF943C3317FF54FC569508E68_RuntimeMethod_var);
			U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_39 = V_0;
			NullCheck(L_39);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_40 = L_39->___reqContainer_0;
			NullCheck(L_38);
			PlayFabHttp_OnPlayFabApiResult_m0F390F6497E2C47CAD3C418A8702A02A53C5B519(L_38, L_40, NULL);
		}

IL_00d5_1:
		{
			// lock (ResultQueueTransferThread)
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_41 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueTransferThread_0;
			V_5 = L_41;
			V_6 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0104_1:
				{// begin finally (depth: 2)
					{
						bool L_42 = V_6;
						if (!L_42)
						{
							goto IL_0110_1;
						}
					}
					{
						Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_43 = V_5;
						Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_43, NULL);
					}

IL_0110_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_44 = V_5;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_44, (&V_6), NULL);
				// ResultQueueTransferThread.Enqueue(() => { PlayFabDeviceUtil.OnPlayFabLogin(reqContainer.ApiResult, reqContainer.settings, reqContainer.instanceApi); });
				il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_45 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueTransferThread_0;
				U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_46 = V_0;
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_47 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
				NullCheck(L_47);
				Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_47, L_46, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3CProcessJsonResponseU3Eb__0_m8AB12C4FE5E8CA40D356CEE157ADCFE1E287D432_RuntimeMethod_var), NULL);
				NullCheck(L_45);
				Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4(L_45, L_47, Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
				goto IL_0111_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0111_1:
		{
			// lock (ResultQueueTransferThread)
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_48 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueTransferThread_0;
			V_7 = L_48;
			V_8 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0140_1:
				{// begin finally (depth: 2)
					{
						bool L_49 = V_8;
						if (!L_49)
						{
							goto IL_014c_1;
						}
					}
					{
						Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_50 = V_7;
						Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_50, NULL);
					}

IL_014c_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_51 = V_7;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_51, (&V_8), NULL);
				//                     ResultQueueTransferThread.Enqueue(() =>
				//                     {
				// #if PLAYFAB_REQUEST_TIMING
				//                         reqContainer.Stopwatch.Stop();
				//                         reqContainer.Timing.MainThreadRequestMs = (int)reqContainer.Stopwatch.ElapsedMilliseconds;
				//                         PlayFabHttp.SendRequestTiming(reqContainer.Timing);
				// #endif
				//                         try
				//                         {
				//                             PlayFabHttp.SendEvent(reqContainer.ApiEndpoint, reqContainer.ApiRequest, reqContainer.ApiResult, ApiProcessingEventType.Post);
				//                             reqContainer.InvokeSuccessCallback();
				//                         }
				//                         catch (Exception e)
				//                         {
				//                             Debug.LogException(e); // Log the user's callback exception back to them without halting PlayFabHttp
				//                         }
				//                     });
				il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_52 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueTransferThread_0;
				U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_53 = V_0;
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_54 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
				NullCheck(L_54);
				Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_54, L_53, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3CProcessJsonResponseU3Eb__1_m30C0FD0874F571A1F1C241939755916FAD9B5BAD_RuntimeMethod_var), NULL);
				NullCheck(L_52);
				Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4(L_52, L_54, Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
				goto IL_014d_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_014d_1:
		{
			goto IL_01a8;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0150;
		}
		throw e;
	}

CATCH_0150:
	{// begin catch(System.Exception)
		{
			// catch (Exception e)
			V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// var msg = "Unhandled exception in ProcessJsonResponse : " + reqContainer.FullUrl;
			U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_55 = V_0;
			NullCheck(L_55);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_56 = L_55->___reqContainer_0;
			NullCheck(L_56);
			String_t* L_57 = L_56->___FullUrl_3;
			String_t* L_58;
			L_58 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD31B70969B50FA442E9EF973C99F63C2559D3481)), L_57, NULL);
			V_10 = L_58;
			// reqContainer.JsonResponse = reqContainer.JsonResponse ?? msg;
			U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_59 = V_0;
			NullCheck(L_59);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_60 = L_59->___reqContainer_0;
			U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_61 = V_0;
			NullCheck(L_61);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_62 = L_61->___reqContainer_0;
			NullCheck(L_62);
			String_t* L_63 = L_62->___JsonResponse_5;
			String_t* L_64 = L_63;
			G_B20_0 = L_64;
			G_B20_1 = L_60;
			if (L_64)
			{
				G_B21_0 = L_64;
				G_B21_1 = L_60;
				goto IL_0181;
			}
		}
		{
			String_t* L_65 = V_10;
			G_B21_0 = L_65;
			G_B21_1 = G_B20_1;
		}

IL_0181:
		{
			NullCheck(G_B21_1);
			G_B21_1->___JsonResponse_5 = G_B21_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B21_1->___JsonResponse_5), (void*)G_B21_0);
			// var enhancedError = new Exception(msg, e);
			String_t* L_66 = V_10;
			Exception_t* L_67 = V_9;
			Exception_t* L_68 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			NullCheck(L_68);
			Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_68, L_66, L_67, NULL);
			V_11 = L_68;
			// Debug.LogException(enhancedError);
			Exception_t* L_69 = V_11;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_69, NULL);
			// QueueRequestError(reqContainer);
			U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* L_70 = V_0;
			NullCheck(L_70);
			CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_71 = L_70->___reqContainer_0;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var)));
			PlayFabWebRequest_QueueRequestError_mB8C74E316D2F5A5769E45507AFF16033FE5E8847(L_71, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01a8;
		}
	}// end catch (depth: 1)

IL_01a8:
	{
		// }
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest_Update_mCEE2881952E1763C58DE32B4DA68FDF687F50B84 (PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_0 = NULL;
	bool V_1 = false;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	bool V_3 = false;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_4 = NULL;
	bool V_5 = false;
	{
		// lock (ResultQueueTransferThread)
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueTransferThread_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_004c;
					}
				}
				{
					Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_004c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				goto IL_002e_1;
			}

IL_0015_1:
			{
				// var actionToQueue = ResultQueueTransferThread.Dequeue();
				il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_4 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueTransferThread_0;
				NullCheck(L_4);
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
				L_5 = Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E(L_4, Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
				V_2 = L_5;
				// ResultQueueMainThread.Enqueue(actionToQueue);
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_6 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueMainThread_1;
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_2;
				NullCheck(L_6);
				Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4(L_6, L_7, Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
			}

IL_002e_1:
			{
				// while (ResultQueueTransferThread.Count > 0)
				il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_8 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueTransferThread_0;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline(L_8, Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
				V_3 = (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
				bool L_10 = V_3;
				if (L_10)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		goto IL_0065;
	}

IL_004f:
	{
		// var finishedRequest = ResultQueueMainThread.Dequeue();
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_11 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueMainThread_1;
		NullCheck(L_11);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12;
		L_12 = Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E(L_11, Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
		V_4 = L_12;
		// finishedRequest();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = V_4;
		NullCheck(L_13);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_13, NULL);
	}

IL_0065:
	{
		// while (ResultQueueMainThread.Count > 0)
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_14 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueMainThread_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline(L_14, Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_15) > ((int32_t)0))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_004f;
		}
	}
	{
		// }
		return;
	}
}
// System.String PlayFab.Internal.PlayFabWebRequest::ResponseToString(System.Net.WebResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayFabWebRequest_ResponseToString_m52B18647BF93DF73CE971BAD44371CFC84A79289 (WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* ___webResponse0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_2 = NULL;
	bool V_3 = false;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_4 = NULL;
	WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* V_5 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_6 = NULL;
	bool V_7 = false;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_8 = NULL;
	Exception_t* V_9 = NULL;
	Exception_t* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		// if (webResponse == null)
		WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_0 = ___webResponse0;
		V_0 = (bool)((((RuntimeObject*)(WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return null;
		V_1 = (String_t*)NULL;
		goto IL_00c5;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// using (var responseStream = webResponse.GetResponseStream())
			WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_2 = ___webResponse0;
			NullCheck(L_2);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
			L_3 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(18 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_2);
			V_2 = L_3;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_004c_1:
				{// begin finally (depth: 2)
					{
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = V_2;
						if (!L_4)
						{
							goto IL_0056_1;
						}
					}
					{
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = V_2;
						NullCheck(L_5);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
					}

IL_0056_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// if (responseStream == null)
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = V_2;
					V_3 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
					bool L_7 = V_3;
					if (!L_7)
					{
						goto IL_0029_2;
					}
				}
				{
					// return null;
					V_1 = (String_t*)NULL;
					goto IL_00c5;
				}

IL_0029_2:
				{
					// using (var stream = new StreamReader(responseStream))
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = V_2;
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_9 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
					NullCheck(L_9);
					StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_9, L_8, NULL);
					V_4 = L_9;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_003f_2:
						{// begin finally (depth: 3)
							{
								StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_10 = V_4;
								if (!L_10)
								{
									goto IL_004b_2;
								}
							}
							{
								StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_11 = V_4;
								NullCheck(L_11);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
							}

IL_004b_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						// return stream.ReadToEnd();
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_12 = V_4;
						NullCheck(L_12);
						String_t* L_13;
						L_13 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_12);
						V_1 = L_13;
						goto IL_00c5;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0057;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b6;
		}
		throw e;
	}

CATCH_0057:
	{// begin catch(System.Net.WebException)
		{
			// catch (WebException webException)
			V_5 = ((WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8*)IL2CPP_GET_ACTIVE_EXCEPTION(WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8*));
		}
		try
		{// begin try (depth: 2)
			{
				// using (var responseStream = webException.Response.GetResponseStream())
				WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* L_14 = V_5;
				NullCheck(L_14);
				WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_15;
				L_15 = WebException_get_Response_m808BF96464DDCE6C66D633355101C69800A5A7E7_inline(L_14, NULL);
				NullCheck(L_15);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16;
				L_16 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(18 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_15);
				V_6 = L_16;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009a_1:
					{// begin finally (depth: 3)
						{
							Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17 = V_6;
							if (!L_17)
							{
								goto IL_00a6_1;
							}
						}
						{
							Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_18 = V_6;
							NullCheck(L_18);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var)), L_18);
						}

IL_00a6_1:
						{
							return;
						}
					}// end finally (depth: 3)
				});
				try
				{// begin try (depth: 3)
					{
						// if (responseStream == null)
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19 = V_6;
						V_7 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_19) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
						bool L_20 = V_7;
						if (!L_20)
						{
							goto IL_0079_2;
						}
					}
					{
						// return null;
						V_1 = (String_t*)NULL;
						goto IL_00c5;
					}

IL_0079_2:
					{
						// using (var stream = new StreamReader(responseStream))
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21 = V_6;
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_22 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var)));
						NullCheck(L_22);
						StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_22, L_21, NULL);
						V_8 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{// begin finally (depth: 4)
								{
									StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_23 = V_8;
									if (!L_23)
									{
										goto IL_0099_2;
									}
								}
								{
									StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_24 = V_8;
									NullCheck(L_24);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var)), L_24);
								}

IL_0099_2:
								{
									return;
								}
							}// end finally (depth: 4)
						});
						try
						{// begin try (depth: 4)
							// return stream.ReadToEnd();
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_25 = V_8;
							NullCheck(L_25);
							String_t* L_26;
							L_26 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_25);
							V_1 = L_26;
							goto IL_00c5;
						}// end try (depth: 4)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00a7;
			}
			throw e;
		}

CATCH_00a7:
		{// begin catch(System.Exception)
			// catch (Exception e)
			V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.LogException(e);
			Exception_t* L_27 = V_9;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_27, NULL);
			// return null;
			V_1 = (String_t*)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c5;
		}// end catch (depth: 2)
	}// end catch (depth: 1)

CATCH_00b6:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogException(e);
		Exception_t* L_28 = V_10;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_28, NULL);
		// return null;
		V_1 = (String_t*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c5;
	}// end catch (depth: 1)

IL_00c5:
	{
		// }
		String_t* L_29 = V_1;
		return L_29;
	}
}
// System.Int32 PlayFab.Internal.PlayFabWebRequest::GetPendingMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayFabWebRequest_GetPendingMessages_m482394C99680245DDC3FAC60A4EF0B2F4CD744BA (PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9665CF465A295E34CC62D3F9D5B95079F135B395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* V_1 = NULL;
	bool V_2 = false;
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		// var count = 0;
		V_0 = 0;
		// lock (ActiveRequests)
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_0 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ActiveRequests_2;
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_0033;
					}
				}
				{
					List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_2 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0033:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_3 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_2), NULL);
			// count += ActiveRequests.Count + _activeCallCount;
			int32_t L_4 = V_0;
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_5 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ActiveRequests_2;
			NullCheck(L_5);
			int32_t L_6;
			L_6 = List_1_get_Count_m9665CF465A295E34CC62D3F9D5B95079F135B395_inline(L_5, List_1_get_Count_m9665CF465A295E34CC62D3F9D5B95079F135B395_RuntimeMethod_var);
			int32_t L_7 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____activeCallCount_9;
			V_0 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)il2cpp_codegen_add(L_6, L_7))));
			goto IL_0034;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// lock (ResultQueueTransferThread)
		il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_8 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueTransferThread_0;
		V_3 = L_8;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_4;
					if (!L_9)
					{
						goto IL_0060;
					}
				}
				{
					Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_10 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_10, NULL);
				}

IL_0060:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_11 = V_3;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_11, (&V_4), NULL);
			// count += ResultQueueTransferThread.Count;
			int32_t L_12 = V_0;
			il2cpp_codegen_runtime_class_init_inline(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
			Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_13 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueTransferThread_0;
			NullCheck(L_13);
			int32_t L_14;
			L_14 = Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline(L_13, Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
			V_0 = ((int32_t)il2cpp_codegen_add(L_12, L_14));
			goto IL_0061;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		// return count;
		int32_t L_15 = V_0;
		V_5 = L_15;
		goto IL_0066;
	}

IL_0066:
	{
		// }
		int32_t L_16 = V_5;
		return L_16;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest__ctor_m77FC0B2C5AA6A99AD3CA39285A0594AFDF6EEF33 (PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* __this, const RuntimeMethod* method) 
{
	{
		// private bool _isInitialized = false;
		__this->____isInitialized_11 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabWebRequest__cctor_m3198BE2231D2644D9380025A82A3EE7B7BA0D8E3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m82576545D74FF830428AFD8BFE2B7C3F3B0EA4BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Queue<Action> ResultQueueTransferThread = new Queue<Action>();
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*)il2cpp_codegen_object_new(Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272(L_0, Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueTransferThread_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueTransferThread_0), (void*)L_0);
		// private static readonly Queue<Action> ResultQueueMainThread = new Queue<Action>();
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_1 = (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*)il2cpp_codegen_object_new(Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272(L_1, Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueMainThread_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ResultQueueMainThread_1), (void*)L_1);
		// private static readonly List<CallRequestContainer> ActiveRequests = new List<CallRequestContainer>();
		List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC* L_2 = (List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC*)il2cpp_codegen_object_new(List_1_tC323597D9EB88F09C3E58070F1FF1724B8266CDC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m82576545D74FF830428AFD8BFE2B7C3F3B0EA4BE(L_2, List_1__ctor_m82576545D74FF830428AFD8BFE2B7C3F3B0EA4BE_RuntimeMethod_var);
		((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ActiveRequests_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ActiveRequests_2), (void*)L_2);
		// private static bool certValidationSet = false;
		((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___certValidationSet_3 = (bool)0;
		// private static readonly object _ThreadLock = new object();
		RuntimeObject* L_3 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_3, NULL);
		((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____ThreadLock_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____ThreadLock_5), (void*)L_3);
		// private static readonly TimeSpan ThreadKillTimeout = TimeSpan.FromSeconds(60);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F((60.0), NULL);
		((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ThreadKillTimeout_6 = L_4;
		// private static DateTime _threadKillTime = DateTime.UtcNow + ThreadKillTimeout; // Kill the thread after 1 minute of inactivity
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6 = ((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->___ThreadKillTimeout_6;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		L_7 = DateTime_op_Addition_m652BE1306897DBE4CDF3ADA99FFFE2E70BFE3865(L_5, L_6, NULL);
		((PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863_il2cpp_TypeInfo_var))->____threadKillTime_7 = L_7;
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
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m6C22CE09C3AC5BC10FF5502B2CCA0EBAF458AF19 (U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass21_0::<SimpleGetCall>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CSimpleGetCallU3Eb__0_m52BAEE923AEFFA46007EBC6B112450CCF27368D0 (U3CU3Ec__DisplayClass21_0_t75222C4A56A01AA2085E63F1542362A6981E5789* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var newThread = new Thread(() => SimpleHttpsWorker("GET", fullUrl, null, successCallback, errorCallback));
		PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* L_0 = __this->___U3CU3E4__this_0;
		String_t* L_1 = __this->___fullUrl_1;
		Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* L_2 = __this->___successCallback_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = __this->___errorCallback_3;
		NullCheck(L_0);
		PlayFabWebRequest_SimpleHttpsWorker_m4057D81AB38B9FD56F0558E8CCE1EC19284A6983(L_0, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, L_1, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, L_2, L_3, NULL);
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
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m16EBCAA6745CD77A6287EAF1ABFE06007F066D60 (U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass22_0::<SimplePutCall>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CSimplePutCallU3Eb__0_m122A62590140D769201F9EA404FF043F1DA87FED (U3CU3Ec__DisplayClass22_0_tDAC818DD506784620F24F1F44E37E53367EF64AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var newThread = new Thread(() => SimpleHttpsWorker("PUT", fullUrl, payload, successCallback, errorCallback));
		PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* L_0 = __this->___U3CU3E4__this_0;
		String_t* L_1 = __this->___fullUrl_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___payload_2;
		Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* L_3 = __this->___successCallback_3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = __this->___errorCallback_4;
		NullCheck(L_0);
		PlayFabWebRequest_SimpleHttpsWorker_m4057D81AB38B9FD56F0558E8CCE1EC19284A6983(L_0, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, L_1, L_2, L_3, L_4, NULL);
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
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_mC7086F3D74F2E7F0DF555361F6173F978EFFB89B (U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass23_0::<SimplePostCall>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0_U3CSimplePostCallU3Eb__0_m8B11C6F54DCCEA736C23C33C7D9B2D52CBC3B417 (U3CU3Ec__DisplayClass23_0_t1375EFCE0F511F089BE1F69E790C17E87A751E06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var newThread = new Thread(() => SimpleHttpsWorker("POST", fullUrl, payload, successCallback, errorCallback));
		PlayFabWebRequest_t576A508B67779D4D9ED8E3BD0A32FD7362593863* L_0 = __this->___U3CU3E4__this_0;
		String_t* L_1 = __this->___fullUrl_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___payload_2;
		Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* L_3 = __this->___successCallback_3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = __this->___errorCallback_4;
		NullCheck(L_0);
		PlayFabWebRequest_SimpleHttpsWorker_m4057D81AB38B9FD56F0558E8CCE1EC19284A6983(L_0, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, L_1, L_2, L_3, L_4, NULL);
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
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_m5A8C212720A229AC50FF65D930357C77E6880463 (U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass30_0::<QueueRequestError>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0_U3CQueueRequestErrorU3Eb__0_m678EB9595C71DBB62634561ED5E3CAAE27652FFB (U3CU3Ec__DisplayClass30_0_tF20975A33FB818A11DAB032E88F2518CF6833B92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabHttp_t368B793060DC7677E3ADB9712686BAB6A596CEE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// PlayFabHttp.SendErrorEvent(reqContainer.ApiRequest, reqContainer.Error);
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_0 = __this->___reqContainer_0;
		NullCheck(L_0);
		PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* L_1 = L_0->___ApiRequest_6;
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_2 = __this->___reqContainer_0;
		NullCheck(L_2);
		PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* L_3 = L_2->___Error_9;
		il2cpp_codegen_runtime_class_init_inline(PlayFabHttp_t368B793060DC7677E3ADB9712686BAB6A596CEE2_il2cpp_TypeInfo_var);
		PlayFabHttp_SendErrorEvent_mBAB17F8B70E52A63F6B3DE7E292E6A55CD067D98(L_1, L_3, NULL);
		// if (reqContainer.ErrorCallback != null)
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_4 = __this->___reqContainer_0;
		NullCheck(L_4);
		Action_1_t795ED1F4E6C6EEAB7072001CFF691E4CC2F7DF93* L_5 = L_4->___ErrorCallback_12;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t795ED1F4E6C6EEAB7072001CFF691E4CC2F7DF93*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		// reqContainer.ErrorCallback(reqContainer.Error);
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_7 = __this->___reqContainer_0;
		NullCheck(L_7);
		Action_1_t795ED1F4E6C6EEAB7072001CFF691E4CC2F7DF93* L_8 = L_7->___ErrorCallback_12;
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_9 = __this->___reqContainer_0;
		NullCheck(L_9);
		PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* L_10 = L_9->___Error_9;
		NullCheck(L_8);
		Action_1_Invoke_m699C90324A80072756CE8C48EA34AAE7489B05BA_inline(L_8, L_10, NULL);
	}

IL_004b:
	{
		// });
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
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m059142FE683072C0CE1EEF3B2AADF00CFBBF7AED (U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass31_0::<ProcessJsonResponse>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CProcessJsonResponseU3Eb__0_m8AB12C4FE5E8CA40D356CEE157ADCFE1E287D432 (U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* __this, const RuntimeMethod* method) 
{
	{
		// ResultQueueTransferThread.Enqueue(() => { PlayFabDeviceUtil.OnPlayFabLogin(reqContainer.ApiResult, reqContainer.settings, reqContainer.instanceApi); });
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_0 = __this->___reqContainer_0;
		NullCheck(L_0);
		PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40* L_1 = L_0->___ApiResult_8;
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_2 = __this->___reqContainer_0;
		NullCheck(L_2);
		PlayFabApiSettings_tA64AE28AC2930D2710835FCD401A4212558752D1* L_3 = L_2->___settings_14;
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_4 = __this->___reqContainer_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___instanceApi_16;
		PlayFabDeviceUtil_OnPlayFabLogin_m43D0ADF0600E937FB25E871714CDEF5C15DB057D(L_1, L_3, L_5, NULL);
		// ResultQueueTransferThread.Enqueue(() => { PlayFabDeviceUtil.OnPlayFabLogin(reqContainer.ApiResult, reqContainer.settings, reqContainer.instanceApi); });
		return;
	}
}
// System.Void PlayFab.Internal.PlayFabWebRequest/<>c__DisplayClass31_0::<ProcessJsonResponse>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CProcessJsonResponseU3Eb__1_m30C0FD0874F571A1F1C241939755916FAD9B5BAD (U3CU3Ec__DisplayClass31_0_t7C5C0314B205C245B1D55F64A6CEA64041DFAFFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabHttp_t368B793060DC7677E3ADB9712686BAB6A596CEE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// PlayFabHttp.SendEvent(reqContainer.ApiEndpoint, reqContainer.ApiRequest, reqContainer.ApiResult, ApiProcessingEventType.Post);
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_0 = __this->___reqContainer_0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___ApiEndpoint_2;
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_2 = __this->___reqContainer_0;
		NullCheck(L_2);
		PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* L_3 = L_2->___ApiRequest_6;
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_4 = __this->___reqContainer_0;
		NullCheck(L_4);
		PlayFabResultCommon_t021FCFD75D498AB8A802ECE543435DCBFC333F40* L_5 = L_4->___ApiResult_8;
		il2cpp_codegen_runtime_class_init_inline(PlayFabHttp_t368B793060DC7677E3ADB9712686BAB6A596CEE2_il2cpp_TypeInfo_var);
		PlayFabHttp_SendEvent_m13C1127674F00346767ECC8311A9D8A88CDDB5B9(L_1, L_3, L_5, 1, NULL);
		// reqContainer.InvokeSuccessCallback();
		CallRequestContainer_t1A4D22D12B279E8E540CDB13B52EF6A17DC76090* L_6 = __this->___reqContainer_0;
		NullCheck(L_6);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = L_6->___InvokeSuccessCallback_11;
		NullCheck(L_7);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_7, NULL);
		goto IL_004a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003e;
		}
		throw e;
	}

CATCH_003e:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogException(e); // Log the user's callback exception back to them without halting PlayFabHttp
		Exception_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004a;
	}// end catch (depth: 1)

IL_004a:
	{
		// });
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
// System.Void PlayFab.Internal.PlayFabUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabUtil__cctor_mDB77FC38A3BA4BDF28F85AD069C9B62EEC99B583 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0148158FF48219C8E8DD90DFA6A3C023A0261547);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral069F35026B6BCCA2BB8BA259FC9436261EEB0459);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B91D7034A4D1EC8C9039891209967DF738DB375);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E936BC84446C9F69C3F58175DC76161F7591AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral245F4D61EEEFF6D0546760C8CCC6282CC669231A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25075B588D83D27D9411DFE8170C33D085CF2547);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306672BBE62849A62311872D53806EBDA8256524);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral677D59695ED3C80ADA513405D766F44E03B73445);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral679701020D660D0FB2A6D6F31EDB552EDB4A91D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A69B335567D4DF389E8E5DE65DA9F5A8E6542F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B91476B669B38A581258CA075559C1938AB08C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral994AD2AD3D2E81FA85CEFF3E97D2780A39BB7500);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AFFCDBEEE2F5078EF6E4BCC6F451A5A5E596521);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB37F76745C8EF5ACC6C7E6770CE02526DE4D0756);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6C0C96F1D7ADF0E4C7FBEDC6B831F35B42FE09C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED45F4AF48C69346087C97D466BF405E270AABE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string _localSettingsFileName = "playfab.local.settings.json";
		((PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var))->____localSettingsFileName_0 = _stringLiteralC6C0C96F1D7ADF0E4C7FBEDC6B831F35B42FE09C;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var))->____localSettingsFileName_0), (void*)_stringLiteralC6C0C96F1D7ADF0E4C7FBEDC6B831F35B42FE09C);
		// public static readonly string[] _defaultDateTimeFormats = new string[]{ // All parseable ISO 8601 formats for DateTime.[Try]ParseExact - Lets us deserialize any legacy timestamps in one of these formats
		//     // These are the standard format with ISO 8601 UTC markers (T/Z)
		//     "yyyy-MM-ddTHH:mm:ss.FFFFFFZ",
		//     "yyyy-MM-ddTHH:mm:ss.FFFFZ",
		//     "yyyy-MM-ddTHH:mm:ss.FFFZ", // DEFAULT_UTC_OUTPUT_INDEX
		//     "yyyy-MM-ddTHH:mm:ss.FFZ",
		//     "yyyy-MM-ddTHH:mm:ssZ",
		//     "yyyy-MM-dd HH:mm:ssZ", // Added for Android Push Plugin
		// 
		//     // These are the standard format without ISO 8601 UTC markers (T/Z)
		//     "yyyy-MM-dd HH:mm:ss.FFFFFF",
		//     "yyyy-MM-dd HH:mm:ss.FFFF",
		//     "yyyy-MM-dd HH:mm:ss.FFF",
		//     "yyyy-MM-dd HH:mm:ss.FF", // DEFAULT_LOCAL_OUTPUT_INDEX
		//     "yyyy-MM-dd HH:mm:ss",
		// 
		//     // These are the result of an input bug, which we now have to support as long as the db has entries formatted like this
		//     "yyyy-MM-dd HH:mm.ss.FFFF",
		//     "yyyy-MM-dd HH:mm.ss.FFF",
		//     "yyyy-MM-dd HH:mm.ss.FF",
		//     "yyyy-MM-dd HH:mm.ss",
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral994AD2AD3D2E81FA85CEFF3E97D2780A39BB7500);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral994AD2AD3D2E81FA85CEFF3E97D2780A39BB7500);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral25075B588D83D27D9411DFE8170C33D085CF2547);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral25075B588D83D27D9411DFE8170C33D085CF2547);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral0148158FF48219C8E8DD90DFA6A3C023A0261547);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral0148158FF48219C8E8DD90DFA6A3C023A0261547);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral069F35026B6BCCA2BB8BA259FC9436261EEB0459);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral069F35026B6BCCA2BB8BA259FC9436261EEB0459);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral677D59695ED3C80ADA513405D766F44E03B73445);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral677D59695ED3C80ADA513405D766F44E03B73445);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral0E936BC84446C9F69C3F58175DC76161F7591AF7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral0E936BC84446C9F69C3F58175DC76161F7591AF7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral9AFFCDBEEE2F5078EF6E4BCC6F451A5A5E596521);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral9AFFCDBEEE2F5078EF6E4BCC6F451A5A5E596521);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral0B91D7034A4D1EC8C9039891209967DF738DB375);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral0B91D7034A4D1EC8C9039891209967DF738DB375);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral306672BBE62849A62311872D53806EBDA8256524);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral306672BBE62849A62311872D53806EBDA8256524);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralB37F76745C8EF5ACC6C7E6770CE02526DE4D0756);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralB37F76745C8EF5ACC6C7E6770CE02526DE4D0756);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralED45F4AF48C69346087C97D466BF405E270AABE2);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralED45F4AF48C69346087C97D466BF405E270AABE2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral74B91476B669B38A581258CA075559C1938AB08C);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral74B91476B669B38A581258CA075559C1938AB08C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral6A69B335567D4DF389E8E5DE65DA9F5A8E6542F8);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral6A69B335567D4DF389E8E5DE65DA9F5A8E6542F8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral679701020D660D0FB2A6D6F31EDB552EDB4A91D8);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral679701020D660D0FB2A6D6F31EDB552EDB4A91D8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral245F4D61EEEFF6D0546760C8CCC6282CC669231A);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral245F4D61EEEFF6D0546760C8CCC6282CC669231A);
		((PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var))->____defaultDateTimeFormats_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var))->____defaultDateTimeFormats_1), (void*)L_15);
		// public static DateTimeStyles DateTimeStyles = DateTimeStyles.RoundtripKind;
		((PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var))->___DateTimeStyles_4 = ((int32_t)128);
		// static PlayFabUtil() { }
		return;
	}
}
// System.String PlayFab.Internal.PlayFabUtil::get_timeStamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayFabUtil_get_timeStamp_m4D4FFAE5392E1D4D646378BCFA9CD69D54358A4A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// get { return DateTime.Now.ToString(_defaultDateTimeFormats[DEFAULT_LOCAL_OUTPUT_INDEX]); }
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ((PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var))->____defaultDateTimeFormats_1;
		NullCheck(L_1);
		int32_t L_2 = ((int32_t)9);
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		String_t* L_4;
		L_4 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_0), L_3, NULL);
		V_1 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		// get { return DateTime.Now.ToString(_defaultDateTimeFormats[DEFAULT_LOCAL_OUTPUT_INDEX]); }
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.String PlayFab.Internal.PlayFabUtil::get_utcTimeStamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayFabUtil_get_utcTimeStamp_mD37D394FFE1B0CC7FD5375DE9A0D3FB2C03865AE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// get { return DateTime.UtcNow.ToString(_defaultDateTimeFormats[DEFAULT_UTC_OUTPUT_INDEX]); }
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ((PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var))->____defaultDateTimeFormats_1;
		NullCheck(L_1);
		int32_t L_2 = 2;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		String_t* L_4;
		L_4 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_0), L_3, NULL);
		V_1 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		// get { return DateTime.UtcNow.ToString(_defaultDateTimeFormats[DEFAULT_UTC_OUTPUT_INDEX]); }
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.String PlayFab.Internal.PlayFabUtil::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayFabUtil_Format_mDB89CE460EBBF94E4736035A80C13B44E172C259 (String_t* ___text0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// return args.Length > 0 ? string.Format(text, args) : text;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0008;
		}
	}
	{
		String_t* L_1 = ___text0;
		G_B3_0 = L_1;
		goto IL_000f;
	}

IL_0008:
	{
		String_t* L_2 = ___text0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args1;
		String_t* L_4;
		L_4 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_2, L_3, NULL);
		G_B3_0 = L_4;
	}

IL_000f:
	{
		V_0 = G_B3_0;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.String PlayFab.Internal.PlayFabUtil::ReadAllFileText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayFabUtil_ReadAllFileText_m054E77B1978CB7CA11861973359DA2D951B8228C (String_t* ___filename0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_3 = NULL;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_4 = NULL;
	bool V_5 = false;
	{
		// if (!File.Exists(filename))
		String_t* L_0 = ___filename0;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_3;
		goto IL_00b4;
	}

IL_001a:
	{
		// if (_sb == null)
		il2cpp_codegen_runtime_class_init_inline(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
		StringBuilder_t* L_4 = ((PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var))->____sb_5;
		V_2 = (bool)((((RuntimeObject*)(StringBuilder_t*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// _sb = new StringBuilder();
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
		((PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var))->____sb_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var))->____sb_5), (void*)L_6);
	}

IL_0032:
	{
		// _sb.Length = 0;
		il2cpp_codegen_runtime_class_init_inline(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
		StringBuilder_t* L_7 = ((PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var))->____sb_5;
		NullCheck(L_7);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_7, 0, NULL);
		// using (var fs = new FileStream(filename, FileMode.Open))
		String_t* L_8 = ___filename0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_9, L_8, 3, NULL);
		V_3 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009c:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_10 = V_3;
					if (!L_10)
					{
						goto IL_00a6;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_11 = V_3;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_00a6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var br = new BinaryReader(fs))
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12 = V_3;
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_13, L_12, NULL);
				V_4 = L_13;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_008c_1:
					{// begin finally (depth: 2)
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = V_4;
							if (!L_14)
							{
								goto IL_0098_1;
							}
						}
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = V_4;
							NullCheck(L_15);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
						}

IL_0098_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0066_2;
					}

IL_0052_2:
					{
						// _sb.Append(br.ReadChar());
						il2cpp_codegen_runtime_class_init_inline(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
						StringBuilder_t* L_16 = ((PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var))->____sb_5;
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_17 = V_4;
						NullCheck(L_17);
						Il2CppChar L_18;
						L_18 = VirtualFuncInvoker0< Il2CppChar >::Invoke(12 /* System.Char System.IO.BinaryReader::ReadChar() */, L_17);
						NullCheck(L_16);
						StringBuilder_t* L_19;
						L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_16, L_18, NULL);
					}

IL_0066_2:
					{
						// while (br.BaseStream.Position != br.BaseStream.Length)
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_20 = V_4;
						NullCheck(L_20);
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21;
						L_21 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_20);
						NullCheck(L_21);
						int64_t L_22;
						L_22 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_21);
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_23 = V_4;
						NullCheck(L_23);
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24;
						L_24 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_23);
						NullCheck(L_24);
						int64_t L_25;
						L_25 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_24);
						V_5 = (bool)((((int32_t)((((int64_t)L_22) == ((int64_t)L_25))? 1 : 0)) == ((int32_t)0))? 1 : 0);
						bool L_26 = V_5;
						if (L_26)
						{
							goto IL_0052_2;
						}
					}
					{
						goto IL_0099_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0099_1:
			{
				goto IL_00a7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a7:
	{
		// return _sb.ToString();
		il2cpp_codegen_runtime_class_init_inline(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
		StringBuilder_t* L_27 = ((PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var))->____sb_5;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		V_1 = L_28;
		goto IL_00b4;
	}

IL_00b4:
	{
		// }
		String_t* L_29 = V_1;
		return L_29;
	}
}
// System.String PlayFab.Internal.PlayFabUtil::GetLocalSettingsFileProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayFabUtil_GetLocalSettingsFileProperty_m9FC7649F20545FF7C6556BCE32B4E37ED5DEE5BE (String_t* ___propertyKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializerPlugin_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m22ACF819CB7215CFCB8465E731B0FFA6B91EC6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PluginManager_GetPlugin_TisISerializerPlugin_tB1E1A4440F7B43AE85D8B29B95AFBE9852029C62_mCA8B3C31B813B966C86F7CF11569F498716E292E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PluginManager_t808323586B608823653190D949106EF945AA1AC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	String_t* V_12 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B11_0 = NULL;
	{
		// string envFileContent = null;
		V_0 = (String_t*)NULL;
		// string currDir = Directory.GetCurrentDirectory();
		String_t* L_0;
		L_0 = Directory_GetCurrentDirectory_m576783BDF2FDF97303C15E51713790415BF57CC1(NULL);
		V_1 = L_0;
		// string currDirEnvFile = Path.Combine(currDir, _localSettingsFileName);
		String_t* L_1 = V_1;
		il2cpp_codegen_runtime_class_init_inline(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
		String_t* L_2 = ((PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var))->____localSettingsFileName_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_1, L_2, NULL);
		V_2 = L_3;
		// if (File.Exists(currDirEnvFile))
		String_t* L_4 = V_2;
		bool L_5;
		L_5 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_4, NULL);
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		// envFileContent = ReadAllFileText(currDirEnvFile);
		String_t* L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = PlayFabUtil_ReadAllFileText_m054E77B1978CB7CA11861973359DA2D951B8228C(L_7, NULL);
		V_0 = L_8;
		goto IL_0058;
	}

IL_002a:
	{
		// string tempDir = Path.GetTempPath();
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Path_GetTempPath_mA919EEA03E4CDC7C85A73771EBCF90F48A74B856(NULL);
		V_4 = L_9;
		// string tempDirEnvFile = Path.Combine(tempDir, _localSettingsFileName);
		String_t* L_10 = V_4;
		il2cpp_codegen_runtime_class_init_inline(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
		String_t* L_11 = ((PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_StaticFields*)il2cpp_codegen_static_fields_for(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var))->____localSettingsFileName_0;
		String_t* L_12;
		L_12 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_10, L_11, NULL);
		V_5 = L_12;
		// if (File.Exists(tempDirEnvFile))
		String_t* L_13 = V_5;
		bool L_14;
		L_14 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_13, NULL);
		V_6 = L_14;
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0057;
		}
	}
	{
		// envFileContent = ReadAllFileText(tempDirEnvFile);
		String_t* L_16 = V_5;
		il2cpp_codegen_runtime_class_init_inline(PlayFabUtil_t11A269469B20625BEA0BE31700850F4970745DE1_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = PlayFabUtil_ReadAllFileText_m054E77B1978CB7CA11861973359DA2D951B8228C(L_16, NULL);
		V_0 = L_17;
	}

IL_0057:
	{
	}

IL_0058:
	{
		// if (!string.IsNullOrEmpty(envFileContent))
		String_t* L_18 = V_0;
		bool L_19;
		L_19 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_18, NULL);
		V_7 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_00b3;
		}
	}
	{
		// var serializer = PluginManager.GetPlugin<ISerializerPlugin>(PluginContract.PlayFab_Serializer);
		il2cpp_codegen_runtime_class_init_inline(PluginManager_t808323586B608823653190D949106EF945AA1AC6_il2cpp_TypeInfo_var);
		RuntimeObject* L_21;
		L_21 = PluginManager_GetPlugin_TisISerializerPlugin_tB1E1A4440F7B43AE85D8B29B95AFBE9852029C62_mCA8B3C31B813B966C86F7CF11569F498716E292E(0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, PluginManager_GetPlugin_TisISerializerPlugin_tB1E1A4440F7B43AE85D8B29B95AFBE9852029C62_mCA8B3C31B813B966C86F7CF11569F498716E292E_RuntimeMethod_var);
		V_8 = L_21;
		// var envJson = serializer.DeserializeObject<Dictionary<string, object>>(envFileContent);
		RuntimeObject* L_22 = V_8;
		String_t* L_23 = V_0;
		NullCheck(L_22);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_24;
		L_24 = GenericInterfaceFuncInvoker1< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t* >::Invoke(ISerializerPlugin_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m22ACF819CB7215CFCB8465E731B0FFA6B91EC6E5_RuntimeMethod_var, L_22, L_23);
		V_9 = L_24;
	}
	try
	{// begin try (depth: 1)
		{
			// if (envJson.TryGetValue(propertyKey, out result))
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_25 = V_9;
			String_t* L_26 = ___propertyKey0;
			NullCheck(L_25);
			bool L_27;
			L_27 = Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8(L_25, L_26, (&V_10), Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
			V_11 = L_27;
			bool L_28 = V_11;
			if (!L_28)
			{
				goto IL_00a3_1;
			}
		}
		{
			// return result == null ? null : result.ToString();
			RuntimeObject* L_29 = V_10;
			if (!L_29)
			{
				goto IL_009e_1;
			}
		}
		{
			RuntimeObject* L_30 = V_10;
			NullCheck(L_30);
			String_t* L_31;
			L_31 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
			G_B11_0 = L_31;
			goto IL_009f_1;
		}

IL_009e_1:
		{
			G_B11_0 = ((String_t*)(NULL));
		}

IL_009f_1:
		{
			V_12 = G_B11_0;
			goto IL_00bc;
		}

IL_00a3_1:
		{
			// return null;
			V_12 = (String_t*)NULL;
			goto IL_00bc;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a8;
		}
		throw e;
	}

CATCH_00a8:
	{// begin catch(System.Collections.Generic.KeyNotFoundException)
		// catch (KeyNotFoundException)
		// return string.Empty;
		String_t* L_32 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_12 = L_32;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bc;
	}// end catch (depth: 1)

IL_00b3:
	{
		// return string.Empty;
		String_t* L_33 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_12 = L_33;
		goto IL_00bc;
	}

IL_00bc:
	{
		// }
		String_t* L_34 = V_12;
		return L_34;
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
// System.Void PlayFab.ClientModels.AcceptTradeRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcceptTradeRequest__ctor_mAE1034387A6DD11E6C4A47665822642D5E392692 (AcceptTradeRequest_tCA8D0094280CF37CD34F7BB9152DC0D23556F376* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.AcceptTradeResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcceptTradeResponse__ctor_m9A2B897FD456B8277A21129CA4FF6A18A1230AC9 (AcceptTradeResponse_t2DEB99BC611E243FCE8FC81CA3DDA8BAA2D13322* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.AdCampaignAttributionModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdCampaignAttributionModel__ctor_mF4FB5FFB40FB617A3FB1F7612D98C34FFCE77E1E (AdCampaignAttributionModel_t324EE01E17E5CC1340F13C8951C4B2F05B4945F7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.AddFriendRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddFriendRequest__ctor_mC9FAE75E14F09C30A495F883C37CD954E05E768A (AddFriendRequest_tF4BA2D4892D728DD9D5FFE396EAABCF13C1A9705* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.AddFriendResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddFriendResult__ctor_mCE3F070EF8EB89C72FC1A9DECF414CE8AF506CF6 (AddFriendResult_t0218A16AA3A18288F291B171DFD96376DE515534* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.AddGenericIDRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddGenericIDRequest__ctor_m29AF6A46BBB55B9FE43F34102831BDE0640BB852 (AddGenericIDRequest_t208E40CF528CA8272C8823BD051D213DAD5B0EA8* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.AddGenericIDResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddGenericIDResult__ctor_m207DBA03C8C34CB4C8FC74C71B6CAC1FC39F3F90 (AddGenericIDResult_t3E723F036056C29DF96F4E1053ED56304B3EC80F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.AddOrUpdateContactEmailRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddOrUpdateContactEmailRequest__ctor_m12ECDE1EC256E79EBFE85A4FEEC9F208E662B946 (AddOrUpdateContactEmailRequest_t33A7F5F1E3CAE06D9563C4EED6BC4C6911451E7E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.AddOrUpdateContactEmailResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddOrUpdateContactEmailResult__ctor_m037D7AFE9AF7169736D66AFCD9DFD8404ABE664D (AddOrUpdateContactEmailResult_t631FCD1D822A3B0F46BE44BAF2E53E00E943DA70* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.AddSharedGroupMembersRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddSharedGroupMembersRequest__ctor_m2BC6E4B0C09D4AFC508F6C4246D1195A31F7A163 (AddSharedGroupMembersRequest_t49F0477C5C94AC5E5A3A23B4DE6CEAEF27A11743* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.AddSharedGroupMembersResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddSharedGroupMembersResult__ctor_m11A0F439B09FBA342402614C4EEC54B4EF25E560 (AddSharedGroupMembersResult_t7EE390B62E9A845FBCC7248A1AAD09C31AEF4879* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.AddUsernamePasswordRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddUsernamePasswordRequest__ctor_mBB5C1743E87A56E2C0F311D826E5CDDE0CC8EA40 (AddUsernamePasswordRequest_t8CBA4EF047D9418B602D6D19B59907C1E2EE5B91* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.AddUsernamePasswordResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddUsernamePasswordResult__ctor_mEF07E6C71F7F7829A998775D7B61EC9A7D648926 (AddUsernamePasswordResult_t1A7692E815C0BA6CD252047D9E52653952F2E72B* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.AddUserVirtualCurrencyRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddUserVirtualCurrencyRequest__ctor_m0362EA5C259145D340EE79851E143E1F61C9355C (AddUserVirtualCurrencyRequest_tE481F2AF4ECA12DA7C32BFC4F7A78A005015223A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.AdPlacementDetails::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdPlacementDetails__ctor_m2EBE0531E7077AB6E423F2E95CEADF31159C20F0 (AdPlacementDetails_t1ACAA9338484D08748B37626C54ACAA90E7E7D71* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.AdRewardItemGranted::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRewardItemGranted__ctor_mA2232C41C14EC236F3DB1C9F8697F736B3AF8078 (AdRewardItemGranted_t3104882ABECE75D7CF8AEEB5392C89BAC70FB623* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.AdRewardResults::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRewardResults__ctor_mEF49A7611246D3D7544F48BE2148F8C3AAB76FBE (AdRewardResults_tCD3953C86B90682A93AB255F40D1B37AC745D82D* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidDevicePushNotificationRegistrationRequest__ctor_m9094141FD05B3FCFB926C6E3155717BCBDA95AC2 (AndroidDevicePushNotificationRegistrationRequest_tD1CFE25352A150E613CE3B461BF2890422CF7DD2* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.AndroidDevicePushNotificationRegistrationResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidDevicePushNotificationRegistrationResult__ctor_m5F24D1C415B4D67D06A8602115BFA226831A7319 (AndroidDevicePushNotificationRegistrationResult_t0327FEE4DDC186DEA1B8752BDCF791267579210C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.AttributeInstallRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeInstallRequest__ctor_mCE4C0714AC59470E0EB5CB7C1DB75480CED72BAD (AttributeInstallRequest_t3F0CE1807B4E4F4C8ECA5F054ADEF43040842FD4* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.AttributeInstallResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeInstallResult__ctor_m65319C5C7B8A28D381F088109C68400B152E5E5A (AttributeInstallResult_t899E05405169CB686C872A120AF4627134A30C86* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.CancelTradeRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancelTradeRequest__ctor_m140C2EBCD66D6ECFB9A576179A557B0A6134528C (CancelTradeRequest_t71CBB4870F838FE0023A802A93945155CDF7ADFD* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.CancelTradeResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancelTradeResponse__ctor_m4AB1B4D73A581B46D2AE8027ADCE8B6DC5EB7CA4 (CancelTradeResponse_t9D05D5983F3DB05CE845504A19ED0ECC83576AB4* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.CartItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CartItem__ctor_m0CC6CF5B9970F17E564289EA1C2F9D49F75C66A6 (CartItem_tAD26528DE8C365A9E31F0B3195464F6CB3FA4308* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.CatalogItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CatalogItem__ctor_m60A742168B8EF67082048FD811E113A3D98FF8C2 (CatalogItem_t9A33C8BB264459850843DCD8BA4209848E87C69D* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.CatalogItemBundleInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CatalogItemBundleInfo__ctor_m1DA67A23A182A66CB8A351636405F0FA911C8905 (CatalogItemBundleInfo_tD6204212D0429B288618470A599C0BDD613DB26E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.CatalogItemConsumableInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CatalogItemConsumableInfo__ctor_mD1EA3A35B23C45434E450AF9472D13FA07EF7FD5 (CatalogItemConsumableInfo_t8E031AF03A11E82E6A5955C18D3BAC8BE5287A80* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.CatalogItemContainerInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CatalogItemContainerInfo__ctor_m76E30E8FB9DD2EBC3C3CD2964CDBCF421114CC44 (CatalogItemContainerInfo_t7BB7170B4721F488FF4DB455D9712D4CC5298ADD* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.CharacterInventory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInventory__ctor_m8812FE2EF631CCE460A7DA22FBC1D338D7BDF237 (CharacterInventory_t50ED70091B9834B7A45E243C93EC3A47C5EE630D* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.CharacterLeaderboardEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterLeaderboardEntry__ctor_m9D3BC95F93B6B943FDB699370BA02B8908053B37 (CharacterLeaderboardEntry_t1C7364F456AB72E7EC4BB852BA3ED903426F6B4D* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.CharacterResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterResult__ctor_m3AED251784B026265EA4C16CBB33C37A68372F53 (CharacterResult_tD0B33C717CF49F6367553BE928EEE43877EFBBBD* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.CollectionFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionFilter__ctor_mF09AC8C9C069CE743E865C353D394918CBEC0831 (CollectionFilter_t7CCEA28D3D380C695200F3E7739551F70D1611BF* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.ConfirmPurchaseRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfirmPurchaseRequest__ctor_mEBB66CBD6A79B7269EBD77E2A4237B36DCA05CA4 (ConfirmPurchaseRequest_t34A41693EC4B5BC40728DE31124DDAB244538561* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ConfirmPurchaseResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfirmPurchaseResult__ctor_mCE8AEF40AD0E2CD287800FF33D7F4B234190B6B5 (ConfirmPurchaseResult_tE18D51212E9CDA979D56C783A74CBD3DA19E261A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ConsumeItemRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumeItemRequest__ctor_m66FE149F94AC6E0593D3FF5F36167428276F9E6F (ConsumeItemRequest_tF624E7A9D03B42057F78245C65E3CCF4640C02F0* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ConsumeItemResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumeItemResult__ctor_mA723863B0F08049D90162B1DBA667F4DFAB155AD (ConsumeItemResult_t857BE736F224FAAD829AB19DEB93CBDEBCC2A5AC* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ConsumeMicrosoftStoreEntitlementsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumeMicrosoftStoreEntitlementsRequest__ctor_m156D79B106DBEA7C6EBCFB560993D97C2B335A76 (ConsumeMicrosoftStoreEntitlementsRequest_tDC32D9C5D90BCC8F1C5306116BCD7ABB8F0DF4F3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ConsumeMicrosoftStoreEntitlementsResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumeMicrosoftStoreEntitlementsResponse__ctor_m3C7A3A4D5A51C0307A6405E4869B026A911EFD84 (ConsumeMicrosoftStoreEntitlementsResponse_t1149821801D39C822BB30732196D2A453FA7A6BD* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ConsumePS5EntitlementsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumePS5EntitlementsRequest__ctor_m694C2A7F5F8CF5B8886BD66B85235E3CEBB9E0FE (ConsumePS5EntitlementsRequest_t1F4D452BA5687D7AB47A5DE16F70D08781904468* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ConsumePS5EntitlementsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumePS5EntitlementsResult__ctor_mDA3648163FE1E8D4EC64D3E16247E967BDB9080D (ConsumePS5EntitlementsResult_t503F5F1DA853DBBE3F670D1C6BA12C356A6D409F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ConsumePSNEntitlementsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumePSNEntitlementsRequest__ctor_m5883404E6C5564E7CCD203509658C3D64301D835 (ConsumePSNEntitlementsRequest_t17FBCC37A9E22D998654FCA5C98A273EAACEA864* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ConsumePSNEntitlementsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumePSNEntitlementsResult__ctor_m3034803EB6FD3CF5010F04AC8091E9AC085D037F (ConsumePSNEntitlementsResult_tA6CD96C5E6284DD36E67500A1B4A14C2883B2B5F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ConsumeXboxEntitlementsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumeXboxEntitlementsRequest__ctor_mDB884F45249327F999485A032C7D61E98096D83C (ConsumeXboxEntitlementsRequest_tCB2BA68C6BDCFDEC0C45DDC56169D55CB5AC0A4F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ConsumeXboxEntitlementsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumeXboxEntitlementsResult__ctor_m30319B4E2422B2E9AE604B5FD39EDD4C68712997 (ConsumeXboxEntitlementsResult_tD340EB525403F8FC22939E14C0921424F4B0549F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ContactEmailInfoModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContactEmailInfoModel__ctor_m794F46FA47E47E341459C666FA75914C73AD2FC8 (ContactEmailInfoModel_tD30B739F3AD7363DB63A6C079C8191EC7C4ED92D* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.Container_Dictionary_String_String::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_Dictionary_String_String__ctor_mDB399DE2844340439D0DC87661B9089C569D8DC0 (Container_Dictionary_String_String_t960F748D379C121F44BFBA7B3396B68D61B60027* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.CreateSharedGroupRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSharedGroupRequest__ctor_mDA0982C05B7A5EDC53C728883D34A584571453FC (CreateSharedGroupRequest_t307D783E4A09507D5705E293B7F409DC01D9AEBF* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.CreateSharedGroupResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSharedGroupResult__ctor_m72E6FF81763682A77BF4C96B774CF4BD439A70C1 (CreateSharedGroupResult_tD3F430E2324446A1A03DB4C66B00A50345AA0FEE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.CurrentGamesRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentGamesRequest__ctor_mAEF8C1EAF34648D14E313F37DC7A506638B2A730 (CurrentGamesRequest_t9EBE4A14397B570B30163E4A6188EC02C8092FDB* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.CurrentGamesResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentGamesResult__ctor_m8DA92B3D04DC21C1177319C8FC2E8BD2AFEEB462 (CurrentGamesResult_tB1A2E574010B94109AEEDB952F4B9DB92CF63324* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.DeviceInfoRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceInfoRequest__ctor_m24704D3EFB01B75A21994D6F3FD961E5B87F4B80 (DeviceInfoRequest_tBD53C238AFC812A302C8773CDA4CAF4DE27D8BAA* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.EmptyResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyResponse__ctor_m8B453A5BE8555255EC6C57E74235AB53AA7A22F6 (EmptyResponse_t0A154C95CF262586F83678BD1D0986EA244FB89A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.EmptyResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyResult__ctor_m72D6772BFFA0A460CC8DC6CA048231B2449F86D0 (EmptyResult_t3F8DAA8CDEAE30F534D1B72977760F073C48DE64* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.EntityKey::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityKey__ctor_m9FFECD35C944491D01B61DE6659CEACCCAEB237A (EntityKey_t3E92C74E390ABBE2C7066FD9D20C7E3DC948CC9C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.EntityTokenResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityTokenResponse__ctor_mBCEFB4813A5D669BEB5F6A326252F0B0278185AA (EntityTokenResponse_tF62536B9F1B793EB4711A8394CE36934B5200D1B* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.ExecuteCloudScriptRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteCloudScriptRequest__ctor_m251F7F43E00D0004A45D5D27CA8F2BA9BE9E67C2 (ExecuteCloudScriptRequest_tB66740CBA0752CC25A741260066BE6BF4E9559B3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ExecuteCloudScriptResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteCloudScriptResult__ctor_mA15ECB1039865976D910F1FCD9FC9540462B92C1 (ExecuteCloudScriptResult_t9FD80BA0B58357B9AE506727246D18419BCD6F69* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.FacebookInstantGamesPlayFabIdPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacebookInstantGamesPlayFabIdPair__ctor_m5D59D6F4FA0F02674AFD95E66707DBC88BC29AAD (FacebookInstantGamesPlayFabIdPair_t0D7008A2CFF5E5C0DD8D15C5E70839ABC7757CBF* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.FacebookPlayFabIdPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacebookPlayFabIdPair__ctor_m9A85E91C2DCEBF2C7A7997FC891C3168A520C237 (FacebookPlayFabIdPair_tF6D810D330B041CC29B3A36DD7FAF95361455AF3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.FriendInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendInfo__ctor_mE7812341910D4A692CBCD33919E1B44E072E5C2E (FriendInfo_tD4C459996614A9E2C4BCBC4565272BD50CA30355* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.GameCenterPlayFabIdPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlayFabIdPair__ctor_mF9ECE363A84228966A1B25EA94E62E63FB21760C (GameCenterPlayFabIdPair_tBCF6D95E2448ED031257AF8D2F3C287A15DA1244* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.GameInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo__ctor_m2E4B8993DFEBBBEC0C2E8D7D6A734A004B315076 (GameInfo_t33CE266C7ABB653EB0A5F87BD56F27ACF7EDF2CE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.GameServerRegionsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameServerRegionsRequest__ctor_m788D6FC211986FA8514AB933F7F1F915BC279275 (GameServerRegionsRequest_tE52E8B0933978E8BFBF9C35B02910A09FD660FA1* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GameServerRegionsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameServerRegionsResult__ctor_m141E520C73575BB61A91A311CDB075564EBC1C0A (GameServerRegionsResult_t5193C393CE87A74A84E4E22E9AEA0106931A5949* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GenericPlayFabIdPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPlayFabIdPair__ctor_mA39BFB3256F3CA67366CB786815C6A76258D83C1 (GenericPlayFabIdPair_t1C9E09D926074E8C215C364655EDC29EC7D5AD40* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.GenericServiceId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericServiceId__ctor_m857349581CF691AE7E0EBE050925EBBB24DF3270 (GenericServiceId_t845FFCE0230F5F2AC512688C09CB390784A40DCE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetAccountInfoRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAccountInfoRequest__ctor_mA07826B9FC60B44767A25BB09A3C5A3BBB8AED0C (GetAccountInfoRequest_tC0147A50F81DD6B6BCC3ABD921E2930F6F43EBD4* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetAccountInfoResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAccountInfoResult__ctor_mAD6CD90A81729134F59F19730C68B1F4F9DEA861 (GetAccountInfoResult_t3749F7FEB631D14EE484694B7953E1EEC0D4997C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetAdPlacementsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAdPlacementsRequest__ctor_m1CA458DD48FDBEB1A62081C6A29F144FAFAA39CA (GetAdPlacementsRequest_tE5AEC539C50FBCB69CDC269CCE806B7E12735FE1* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetAdPlacementsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAdPlacementsResult__ctor_mA9E3F75CAD31637897EF4AF24EB83355BFD9386D (GetAdPlacementsResult_tBDBA84AFBE0E8DFAA39F68B11B6C2E0ACAF58637* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetCatalogItemsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCatalogItemsRequest__ctor_m3D1E1795F1C4446593F562EE24D41D60D4046968 (GetCatalogItemsRequest_tCB1333AAA1EAFC89DFA7E9317A5C527C9B985553* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetCatalogItemsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCatalogItemsResult__ctor_m8CC1500D6C301AD4FF8A00208A143949FD16A3DB (GetCatalogItemsResult_tB411483732EB649E2A5C87171A9A4A9DFB9F5B7A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetCharacterDataRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCharacterDataRequest__ctor_mA5B74ECFE699C87AA0F94057DDB21F49DDF31511 (GetCharacterDataRequest_t6C05771F13C702A9045DD3B899170E5445B1766B* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetCharacterDataResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCharacterDataResult__ctor_m474D605DDDC9BF87BF584842FD8CB230AE90A752 (GetCharacterDataResult_tF0476467F5B9B17397185F7E4DAF671E2FE8F891* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetCharacterInventoryRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCharacterInventoryRequest__ctor_mB6039830D82216B84DE772FFF94B43173A164AFC (GetCharacterInventoryRequest_t580ACC64D36255B5C5067A28C5CEF9EB0CF58CDD* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetCharacterInventoryResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCharacterInventoryResult__ctor_mB0E2516B78FF08F710DE44945CB3124DA4D89666 (GetCharacterInventoryResult_t3B8789B3A7CDD4FB2D5412AAF4CC984E24F4BAF6* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetCharacterLeaderboardRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCharacterLeaderboardRequest__ctor_m4F62286B7F4DC8E0C919E7A16722671148078CFB (GetCharacterLeaderboardRequest_tAFAFAB8549BCD8A8E150271072595B60F4F1F3D3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetCharacterLeaderboardResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCharacterLeaderboardResult__ctor_m8083688DD7B3BC044C99D79AFAC3671B2275C026 (GetCharacterLeaderboardResult_t751226AA8B78F4B976034B2AAC6C2D2F15FCE8EE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetCharacterStatisticsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCharacterStatisticsRequest__ctor_mA8427D3BB231D4403FD913FE95683661BD2B7446 (GetCharacterStatisticsRequest_t267D464960AF2DC89F894ACF664AA6B643EA6C34* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetCharacterStatisticsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCharacterStatisticsResult__ctor_m5CEA086F738756677FD8B4FF0D01C0133AB37699 (GetCharacterStatisticsResult_t113C2ECA7AC503ED97126C8B4AF186BBE421C865* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetContentDownloadUrlRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetContentDownloadUrlRequest__ctor_mF112647E1F95FA5DEF0D1428D1746BAEF219A76A (GetContentDownloadUrlRequest_t51F47803DD20DD528B153AD2661EF0D7D4029654* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetContentDownloadUrlResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetContentDownloadUrlResult__ctor_mA89D87DCCE6CF11CA6BCDA644CC2243FECFE18BE (GetContentDownloadUrlResult_tAFD987CB2B47A5D205B9D6780153BAB37915903E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFriendLeaderboardAroundPlayerRequest__ctor_m28FD4548308710B5FB2A374478AF238E5144773D (GetFriendLeaderboardAroundPlayerRequest_tBC527554F4EA5DC6C05BF33AB959977C4D3045B4* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetFriendLeaderboardAroundPlayerResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFriendLeaderboardAroundPlayerResult__ctor_m9EA6D0AB74D8C65CF9C4C6835B1A5ED341814E4F (GetFriendLeaderboardAroundPlayerResult_t08E0989E5BB790AD662A7223F4C8E46218A66129* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetFriendLeaderboardRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFriendLeaderboardRequest__ctor_m8ECEEBC6BA6184FB020A5D324A28D4204EB4EE48 (GetFriendLeaderboardRequest_tC24921FC75AEB6D31EBAC1298F69419AF0F000B6* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetFriendsListRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFriendsListRequest__ctor_m293AC778544FB3BF9B63D601D0310A4034EB5DE5 (GetFriendsListRequest_tD095DC6CD5427ABC61B3F315FBB7204A75739444* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetFriendsListResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFriendsListResult__ctor_mFB3289FB9B6281B9DC68F26F7EDB3AB88D7CD8BA (GetFriendsListResult_tD350BDB67572F168FA932E98CE7C34DB1CDC0E9A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetLeaderboardAroundCharacterRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetLeaderboardAroundCharacterRequest__ctor_m0F6069FC82E3BA5A2BD33AA217A18FB1CA436023 (GetLeaderboardAroundCharacterRequest_tA81520118D8CC8B9D66E62B5999227D3378336B0* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetLeaderboardAroundCharacterResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetLeaderboardAroundCharacterResult__ctor_mE3E6DF16FF49E0527D2832C6F793246A5F14F10F (GetLeaderboardAroundCharacterResult_t3033C56D162F38E42CA2C368C46DA2921A493E41* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetLeaderboardAroundPlayerRequest__ctor_mBA0BD0B62AD2480A1FD3D7E96D7BCB787057AC67 (GetLeaderboardAroundPlayerRequest_tD1C22CFB0F1F778DB0B694C76C423419A476DCFC* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetLeaderboardAroundPlayerResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetLeaderboardAroundPlayerResult__ctor_m1504A4FBE985C8C0B3C0E4A6825BE9C9FD61715C (GetLeaderboardAroundPlayerResult_tEC5343CE1F5409AC4FC072C15C5E0667D5AE763A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetLeaderboardForUsersCharactersRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetLeaderboardForUsersCharactersRequest__ctor_mC98D6F18EBB74B12E6DF03792E19A33E2F60B566 (GetLeaderboardForUsersCharactersRequest_tEF2A6C42242BD951785B3C3D4F5D169DF8A25C3C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetLeaderboardForUsersCharactersResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetLeaderboardForUsersCharactersResult__ctor_m474B066F8ABB8523DA5A97CF7574E6B41397A1F1 (GetLeaderboardForUsersCharactersResult_tE67CF47DF6B0C0EC8124A217495687D0ADAB2E89* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetLeaderboardRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetLeaderboardRequest__ctor_mCDA23C21FAD1DF7018B2B96F167F93A00A6AC6F5 (GetLeaderboardRequest_t6815CF68472AB22065418C21DDEB07C883A41193* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetLeaderboardResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetLeaderboardResult__ctor_m8EF96BF506855E3ABE06F99F1002414008B37F1B (GetLeaderboardResult_t03D04CF6DED866003050A495D94A7D8497AD492C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPaymentTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPaymentTokenRequest__ctor_m1183ADD223A94551079E0A10DF8DB377107EF80D (GetPaymentTokenRequest_t163B16A27CC6BE1E00893D7EC3368B2D245E00DC* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPaymentTokenResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPaymentTokenResult__ctor_mE2E93F088315DA9D849EEC8D8C97EAC5C17737C3 (GetPaymentTokenResult_t24602A341F685C823DA42D3B4ED51299A20133F3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPhotonAuthenticationTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPhotonAuthenticationTokenRequest__ctor_m5BFCDE1952A5042DBB7A3ECEA83A51977BB8430C (GetPhotonAuthenticationTokenRequest_t9B058BB73A238036A56AAE722094C94037DEB1C5* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPhotonAuthenticationTokenResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPhotonAuthenticationTokenResult__ctor_mCAB44791AF590BC4199129B5AC76DAC851A6AA5D (GetPhotonAuthenticationTokenResult_t6A42DA77B0947BB88E9672ED8CBE52461CA65272* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerCombinedInfoRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerCombinedInfoRequest__ctor_mC593F4E424E330F77007A444364BCAE9D9D4ED0D (GetPlayerCombinedInfoRequest_tCF9E872A2AEAF953E4F96DCADD93C27B78D2DFE2* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerCombinedInfoRequestParams__ctor_m1CEE643F87D90B72C0265CA9E0574FF6DC8EC05C (GetPlayerCombinedInfoRequestParams_t3917E84443A25D99911EAE3D92DD71B83391A370* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerCombinedInfoResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerCombinedInfoResult__ctor_mC024443C26AA38F1C2BD91B1E07D3848015F40ED (GetPlayerCombinedInfoResult_t8FA02FB2B4EB7123C2BF5675C866BD6AA28AAB37* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerCombinedInfoResultPayload__ctor_mDB3DD2E9EE9F4D7D344361AB4875E6BDA593D065 (GetPlayerCombinedInfoResultPayload_t6323557A81B0FF04C6B66FC1F916864A4D738BCC* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerProfileRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerProfileRequest__ctor_mF2C3854F0C03BCE0EB401B0B4269EC807AE575F8 (GetPlayerProfileRequest_t96486783D0AF60EB25563E45CFE3605488A71B5F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerProfileResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerProfileResult__ctor_m6578103393A683BB7603BCF243A337326D7699A2 (GetPlayerProfileResult_tC88B24D6F67E08246A094323793DFD03E7711447* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerSegmentsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerSegmentsRequest__ctor_m0835DE0FE34B6277B474CC6FB0CF827723BF7DC8 (GetPlayerSegmentsRequest_t369D70CC3064DDB76E33223576F4A803BF1373CF* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerSegmentsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerSegmentsResult__ctor_mC4A0D2D1E8F6C87432AA3D28BB5274A0D78C5C43 (GetPlayerSegmentsResult_tBADE60D468AC3889608F56640D078B51F49C0B38* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerStatisticsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerStatisticsRequest__ctor_mF9CFB3675C756EDEFB3FF813BE30D31D46AFBAA0 (GetPlayerStatisticsRequest_t84EB62C2DBFFD24EE3B200F275ACA9F38E456951* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerStatisticsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerStatisticsResult__ctor_m22A58C4C85F18C22758393D75BC470557A4A5A17 (GetPlayerStatisticsResult_tFE1BD2E17D8A1BB108E7989512B4A16D59C2789A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerStatisticVersionsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerStatisticVersionsRequest__ctor_m72DDD9E560031388FAD070FED8B607E4F3DA7F4D (GetPlayerStatisticVersionsRequest_tC68F5AB538E6E36CC55F357CF12AE3352F238134* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerStatisticVersionsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerStatisticVersionsResult__ctor_m688F1201688748B4C87BDA5845933617F68DD95F (GetPlayerStatisticVersionsResult_tC31D18B33F7A932B27073E638072846BD2BCE501* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerTagsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerTagsRequest__ctor_m45E90246C5A68BD59469278581BF9EF876714B96 (GetPlayerTagsRequest_tE2D18BFAFA7A80E9BF9FFC44F9CBD97F5B68A9D5* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerTagsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerTagsResult__ctor_mC38EF1280A352E58E519E6FF553654E2B5B09246 (GetPlayerTagsResult_t14840C3B1B7D1D8D5F9886AE022D41B5EA972193* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerTradesRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerTradesRequest__ctor_m558AC87C313D64D89808067FCF8D5BE69DAAD11F (GetPlayerTradesRequest_t3935D3E0B3F425F04440E46D1C19045BB8C7F78E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayerTradesResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayerTradesResponse__ctor_m18427ACCAE4A7DA40C6E27A035889965D7BF2D7A (GetPlayerTradesResponse_tDB187D9030084374BA4CF7BE5DC2756D747C80EE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromFacebookIDsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromFacebookIDsRequest__ctor_mEEBEE0DAF070715BCED4214278D74DD7DE7AC044 (GetPlayFabIDsFromFacebookIDsRequest_tB275AD11157BEDC861CAE56F8B8D86AC90E0051C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromFacebookIDsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromFacebookIDsResult__ctor_m9E40B5945398B205CBC012671B65740837E17501 (GetPlayFabIDsFromFacebookIDsResult_tAC717CC80C6863B47645241E22AAB0B5199A8FA1* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromFacebookInstantGamesIdsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromFacebookInstantGamesIdsRequest__ctor_m2E9DA2EEDC352BD201EEEF848CD819D037DC849B (GetPlayFabIDsFromFacebookInstantGamesIdsRequest_tA75CEA154F216D5BF2C011E9DAE9BC3F8FD4E521* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromFacebookInstantGamesIdsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromFacebookInstantGamesIdsResult__ctor_m8CB67D3D394EAEDD16EF5308768E677982F9D5BD (GetPlayFabIDsFromFacebookInstantGamesIdsResult_tB8681765E88FD8D1405CA301744B4EB363A1C9FB* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromGameCenterIDsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromGameCenterIDsRequest__ctor_m350A40F2D8A8A1EDBAED461B6EFC7DBAB50885AC (GetPlayFabIDsFromGameCenterIDsRequest_t03B38A98E8957924A2A962D103A7E23CC68C6DD6* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromGameCenterIDsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromGameCenterIDsResult__ctor_m9EBE4BD6B9FF98741627EBBF4E780B17746E1304 (GetPlayFabIDsFromGameCenterIDsResult_tDDDD12C3F3725D9C09FF048B818E8E7B5CADFB45* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromGenericIDsRequest__ctor_m383636DBD14D644B4D5A0EA3EDCADF86308ED69C (GetPlayFabIDsFromGenericIDsRequest_t5A5E297DB35E0E92333069915B7156E47A89328E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromGenericIDsResult__ctor_mCD5D447851CC49EADA1B0FFE190D038170D2C172 (GetPlayFabIDsFromGenericIDsResult_t4075E39127DC60513A34BD47FCD2EFD2220B5286* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromGoogleIDsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromGoogleIDsRequest__ctor_mEEE07F9E6263FF7FE515878517B589EEE444EADB (GetPlayFabIDsFromGoogleIDsRequest_t3CAF0AB06B25DF209219981B9B370760572F0804* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromGoogleIDsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromGoogleIDsResult__ctor_m3DCCA76DDD0B207847FF614190BB87C518ED845E (GetPlayFabIDsFromGoogleIDsResult_t2B5CA8F7E79F8E066B817055C73B99DA89A42893* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromGooglePlayGamesPlayerIDsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromGooglePlayGamesPlayerIDsRequest__ctor_m49880202E4200C73AA55778E131325861382F788 (GetPlayFabIDsFromGooglePlayGamesPlayerIDsRequest_t60FA7DD8AF722A7667CE69CECE1002EC1C5CAC6D* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromGooglePlayGamesPlayerIDsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromGooglePlayGamesPlayerIDsResult__ctor_mA00D00A0ADAB4641E7C05236DE9335463CF37DD9 (GetPlayFabIDsFromGooglePlayGamesPlayerIDsResult_t0DC2980392783DF85E0900285356738EBE3D7CDE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromKongregateIDsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromKongregateIDsRequest__ctor_m7847E247045EBCA2A1B88637EE4458D2F8C137F4 (GetPlayFabIDsFromKongregateIDsRequest_t1C7F52700E5D3707F00FA27B987C6A9CDC69114D* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromKongregateIDsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromKongregateIDsResult__ctor_m2C60B625BB808A4A3B564DB7E147311C1C85B7C4 (GetPlayFabIDsFromKongregateIDsResult_t65A76AE8A7A25A3F7601EEA68688941873EAACF7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromNintendoServiceAccountIdsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromNintendoServiceAccountIdsRequest__ctor_mB83D2B1BC49957760EE1C29D7BE148711F3A017E (GetPlayFabIDsFromNintendoServiceAccountIdsRequest_t257824B35205A9C99B0444960998E8A7E26B519A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromNintendoServiceAccountIdsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromNintendoServiceAccountIdsResult__ctor_m308002B6EA74BAF1B5488F7E5B00D9EA7FC9EAB1 (GetPlayFabIDsFromNintendoServiceAccountIdsResult_tA4461DA79D669F1A17142350D6F021D1874497EF* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__ctor_m1D2948E0B145C1A5FB6738FDF2C2AA388F7FF9C5 (GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_tC3BD96F79D674CE16C3ED9ECE716DF17D45FA96D* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromNintendoSwitchDeviceIdsResult__ctor_mD714B06431897C5AD48CA5D9AEE33CDA3A36CDFA (GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_tECF140F80FED44DF111B51657BFED4823A4C4145* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromPSNAccountIDsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromPSNAccountIDsRequest__ctor_mBADCE82D5B51ED7D3A37FF6413FF558CA7610701 (GetPlayFabIDsFromPSNAccountIDsRequest_t6215A503E62C27247574493608274CD9EAA56162* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromPSNAccountIDsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromPSNAccountIDsResult__ctor_m6BD587445076348B709798133AB20F4604ACFE61 (GetPlayFabIDsFromPSNAccountIDsResult_t24CA2B421532AC4D974235E8AB71F36C2257B35B* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromSteamIDsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromSteamIDsRequest__ctor_m59147CF8D6D90C0E46907A8A7422B81A6C1311AE (GetPlayFabIDsFromSteamIDsRequest_tC1E89AE77985DEA520133F183C582CDF312046F2* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromSteamIDsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromSteamIDsResult__ctor_mC3141EF474C3F11597E2B85EED45D6CC52FE5DEC (GetPlayFabIDsFromSteamIDsResult_t688E60B8A112A704F2262F596DC78A6E5BBB98C4* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromTwitchIDsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromTwitchIDsRequest__ctor_m86F882818F98ABAA7C687B9FE62F4AF7BFACDB1A (GetPlayFabIDsFromTwitchIDsRequest_t305BBF2368DEA56D8D8A39B2044CEB66BDE540A1* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromTwitchIDsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromTwitchIDsResult__ctor_m235BFE959A3B1F9F44F4BB9A431F620D78CA5C74 (GetPlayFabIDsFromTwitchIDsResult_tBD52011CB3F0FF79DE2CFDA3AB748C3CCD6B011A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromXboxLiveIDsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromXboxLiveIDsRequest__ctor_m9470DE62980627E4377E282C403202D11D7530C2 (GetPlayFabIDsFromXboxLiveIDsRequest_t73ACCAC2D27CFBE633FAAC6723E9CC12DDB035C9* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPlayFabIDsFromXboxLiveIDsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPlayFabIDsFromXboxLiveIDsResult__ctor_mB2C2114A16615CCA9FE26814868E61F6F7F3ACA3 (GetPlayFabIDsFromXboxLiveIDsResult_t9D66C97D6008F3ED67EDDEE9CAC2DEE09A8DB595* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPublisherDataRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPublisherDataRequest__ctor_mB31B6AD48B4C7D685D37B6B3CEFDA1C0371D2C3E (GetPublisherDataRequest_t6FE8DFD96382EDEB5A07C6E57847EC6DC71C7EC3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPublisherDataResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPublisherDataResult__ctor_m5855B92CF56CAF91EA9521A36369E1B7BDE63E72 (GetPublisherDataResult_t09A484540E7F707BAA87D645B1950167DFF2E381* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPurchaseRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPurchaseRequest__ctor_m9F89BEE8946F208370AD59E4140C0F38C1904249 (GetPurchaseRequest_t8AC38239A654F572F0D3C0850F48E1C2834AE1FF* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetPurchaseResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPurchaseResult__ctor_mC7DAC7D3B0A8D9C8D40E55CD89F3E89F6357B8D0 (GetPurchaseResult_t000F08A7E707E8866A377F417EAE58C12D11C772* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetSegmentResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetSegmentResult__ctor_m657288D598FFA901564D5D7E21A16AC24EB38797 (GetSegmentResult_tEA5188B42B6E5B1F15926AB703BCEF9CEC9B9D81* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetSharedGroupDataRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetSharedGroupDataRequest__ctor_mD38C0918B9FD764DC6569DA224D7C47D0F0C5A1E (GetSharedGroupDataRequest_t9D365EF3CCF61A5BEAB96F7B6475A1750370E679* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetSharedGroupDataResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetSharedGroupDataResult__ctor_mC9F82575AC2984EED979129944F187FB745C4FA5 (GetSharedGroupDataResult_tE10462618F98D4D72B4D2A80ED15DE51E586713F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetStoreItemsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetStoreItemsRequest__ctor_m064372D47BF987014A77095EABFE690B61BC35BA (GetStoreItemsRequest_t795B5ADF001B53C52F13BC0031B798CBDCA5273C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetStoreItemsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetStoreItemsResult__ctor_mD3AC4D0ED432957223D872D3EDE12D363D1292E6 (GetStoreItemsResult_t91D6A5BE358AF54C064CE69074FB2AAF16B5975A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetTimeRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetTimeRequest__ctor_m844B807C1FD10846D083F4B155BC33C1DC90A225 (GetTimeRequest_tD244E02A36A259D9D162F39EF9850561A76D58F0* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetTimeResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetTimeResult__ctor_m42C4B495E82BC0565FA500C664DC26DED1181A86 (GetTimeResult_tEB8D1A02D5AAC653D33C64187044F9EB2795E661* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetTitleDataRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetTitleDataRequest__ctor_m3B3965A2E760B42C2F100B412E52CB5E788F596C (GetTitleDataRequest_t48B926031ABF3196C1C105A6AD3DF62FD3EE8B50* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetTitleDataResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetTitleDataResult__ctor_m1B3BB88E9FCCDDBB8C26B602ED0ED31BCC6363AE (GetTitleDataResult_tBA9144A60C32E90FDDC5373F749CB2D21B6F7238* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetTitleNewsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetTitleNewsRequest__ctor_mA6B46E817A379A82BB97CA9E7CE78B6EDD9D3E92 (GetTitleNewsRequest_tD0FFE3851DEFDE35C3762D52999D333ED47CA828* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetTitleNewsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetTitleNewsResult__ctor_m7C19FF7CA4FE9DC6FB0028DC857154C7ECABD043 (GetTitleNewsResult_t16E7083D187D4161DF3A0FA73BBA9569FC099DD4* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetTitlePublicKeyRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetTitlePublicKeyRequest__ctor_m82AD314A35843678D3E6E7654B5A719968C6AF4B (GetTitlePublicKeyRequest_tD55EB65A4BE9FE8BBA552A042E4D38D280AB0E3C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetTitlePublicKeyResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetTitlePublicKeyResult__ctor_mF8CBCB2C3F74B57EEF1DD835A3C8931B7543EE90 (GetTitlePublicKeyResult_tB6D105C0270A7A373FF154F17FC5770C8F824392* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetTradeStatusRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetTradeStatusRequest__ctor_mD1296CF40A9710CCD1B1F54340799A3BCECFC6B7 (GetTradeStatusRequest_t835601707B901582F75653879F3219C882F40F0B* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetTradeStatusResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetTradeStatusResponse__ctor_mB083279E2DBAC39B12DFF04617C22BBF3754FE94 (GetTradeStatusResponse_t8F2A08C0A8E34CDD08950EAFC3AB65C4DA42FDAA* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetUserDataRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetUserDataRequest__ctor_m523EBE281F8FFDC1ADDC0FAC37DD923D5E669EE8 (GetUserDataRequest_tCAF1E6FC4FE7E58BE0D3BDFE78230975CC08E501* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetUserDataResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetUserDataResult__ctor_m5FA60FF8C375ECFC8B1B39E41312F3C49F101537 (GetUserDataResult_t68AF037F9916162542CE2C905DFF0B0C935FC48E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetUserInventoryRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetUserInventoryRequest__ctor_m3F0054135931BD01D2C21AAAF06E39A95C24B164 (GetUserInventoryRequest_t66955459A9F59280CDF3A98A5124052852A05BF2* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GetUserInventoryResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetUserInventoryResult__ctor_mCFD82F99ED7BEB0E9914BA38520B9284CEF0BFD3 (GetUserInventoryResult_t28E377BC480EF10C504D613456F8A7BE1F7E4B16* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.GooglePlayFabIdPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayFabIdPair__ctor_m9E614264B3437B3063D3F2323BE168D055486060 (GooglePlayFabIdPair_t72F94EC86476E7F6EAFA33E558822FDC8BB09D6F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.GooglePlayGamesPlayFabIdPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GooglePlayGamesPlayFabIdPair__ctor_mF91C7D472CEF4ACBEFB49E32BF23EE0062474E73 (GooglePlayGamesPlayFabIdPair_tF60353DDD4A5EF68B950127EDEE1C1F5BA55653A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.GrantCharacterToUserRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrantCharacterToUserRequest__ctor_mBDE6942538450BC5DC01E7BBF4268866EB4D365C (GrantCharacterToUserRequest_tE6E4139743D537B38EB1AB3AD9255F8FBF795ADB* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.GrantCharacterToUserResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrantCharacterToUserResult__ctor_m532FB4140978FD0CD868F631D9CCD1B0C3DB6ABA (GrantCharacterToUserResult_t995B7F5EBD2955C6EFE4CC4C94DC33615D359D07* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ItemInstance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemInstance__ctor_m630482BF8023429C4B680DD0242540E5E0200A50 (ItemInstance_tC84FDC49100051713F8BA4C6359C4DB48B3D0341* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.ItemPurchaseRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemPurchaseRequest__ctor_m392A162E1335538B1237A54CCF17F1B754096F55 (ItemPurchaseRequest_t92F81220686869A5DC3826889DB6091A48354C3B* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.KongregatePlayFabIdPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KongregatePlayFabIdPair__ctor_mF4087146F21B4E680EAED89734DAE23EB59EF03B (KongregatePlayFabIdPair_tC4BC594035C641891C2BDBFBF907F1E86DB0E75E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkAndroidDeviceIDRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkAndroidDeviceIDRequest__ctor_m4891778C0C526866F25701B353946DA546FDC17C (LinkAndroidDeviceIDRequest_tE370B4C43A2294AB1C93DB77F646956845E25F7D* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkAndroidDeviceIDResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkAndroidDeviceIDResult__ctor_mD0E7615EFEEE31A3FA3C72230D5F55E29CFC2BF9 (LinkAndroidDeviceIDResult_t4C5F04B8430158F23DC644214A8D337824619911* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkAppleRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkAppleRequest__ctor_m07B19477F1F7AEF34389048BC76A1C1C04D15F3C (LinkAppleRequest_tD84E9A0D6F6A8B62D3EE0CDA0B2796D05E91F5D1* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkCustomIDRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkCustomIDRequest__ctor_m9BD1999944C2ED09C1A6C6BCB7D33FB03F53CBD1 (LinkCustomIDRequest_t05FE277ACC4DF9F596B9B1364C7A9495AE97C3B8* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkCustomIDResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkCustomIDResult__ctor_m6E0BCFB212958C6DB0EBD335FF06944E960C5033 (LinkCustomIDResult_t39271A15418FC2562F54CEC9A5C4448BB210D866* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkedPlatformAccountModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedPlatformAccountModel__ctor_mD1D2CF1FD3FB116FEE5468961A4F709A94C0CF40 (LinkedPlatformAccountModel_t1DA79542E08AB1A8DD40A2001C3A2A88CD136F25* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkFacebookAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkFacebookAccountRequest__ctor_m623BB701FF51D502C2717571FE120ED91F14F0E5 (LinkFacebookAccountRequest_t88C4C375D233221A98D00DB50A9EFCD1B2D5478E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkFacebookAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkFacebookAccountResult__ctor_mAF81D1E4F8EF4E644900C6C26FA102E464215A8D (LinkFacebookAccountResult_tF6DBE4CFEA793A6203945E018381F22047971081* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkFacebookInstantGamesIdRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkFacebookInstantGamesIdRequest__ctor_m3BC1F47F1D886FA30E3F71A8FB4DE3004987421E (LinkFacebookInstantGamesIdRequest_t94A3B57DBAFA66C5760F0058BC521BFE1FC6B5D0* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkFacebookInstantGamesIdResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkFacebookInstantGamesIdResult__ctor_m5412CFFB5B86EDA02C63E42C24E29B6F89CF0E61 (LinkFacebookInstantGamesIdResult_t1AAC9421C0C5BC3891EF7EBFBE208AC625FCCA96* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkGameCenterAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkGameCenterAccountRequest__ctor_mDC2B66B40E1E996FBDB4113FEF52C6C08500C2A4 (LinkGameCenterAccountRequest_tDBED4CD7330F5409D950EBEDF8FA2C8DDC546911* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkGameCenterAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkGameCenterAccountResult__ctor_m6DF755A9447A0175D24BA523227D5FDA24148CC8 (LinkGameCenterAccountResult_t647D19A9B79502ED157221910A1614E3F1D7D3BF* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkGoogleAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkGoogleAccountRequest__ctor_m3ECDF324222C6B60F754F3B0CADD56113A30EDE6 (LinkGoogleAccountRequest_tA5203EA33908B8A3D2394CE795AA88DB598574DB* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkGoogleAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkGoogleAccountResult__ctor_m61A44A4D24AB6B5499787EF2F336C6BFF67883B3 (LinkGoogleAccountResult_t596A08B9745E145CEFDADFA0E56063D3D00CBC78* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkGooglePlayGamesServicesAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkGooglePlayGamesServicesAccountRequest__ctor_mBF95873CC3F5E11241D5B1FB0C75CA2B400CD29A (LinkGooglePlayGamesServicesAccountRequest_t4270383DFD5F35D6B2F64FD7A991FC688AE6526C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkGooglePlayGamesServicesAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkGooglePlayGamesServicesAccountResult__ctor_mD28155E6602E81A4EB982E0E5FDC23CA780CD1A3 (LinkGooglePlayGamesServicesAccountResult_tC37A276A9BFCA6363605956D660B3EE9632C3388* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkIOSDeviceIDRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkIOSDeviceIDRequest__ctor_m176BC27475D91B4B7EA9931715C308A5F06BF9EC (LinkIOSDeviceIDRequest_t3AD9F66E46AEC025EC5A5BDB1498F79BBF019175* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkIOSDeviceIDResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkIOSDeviceIDResult__ctor_mE0A419B97872CC87B58D2B730590B11B1291FF14 (LinkIOSDeviceIDResult_tE942B412D48690F2CC586B2CC855EF661C95B4FC* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkKongregateAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkKongregateAccountRequest__ctor_m5EF74B08D1700002A72243627A885346577506D8 (LinkKongregateAccountRequest_t7799A47E023C84C2A094468997A37F9ECB7BCEC7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkKongregateAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkKongregateAccountResult__ctor_m598FE134F71B5ED3B2F76EDE565E8D0F6D427BFB (LinkKongregateAccountResult_tAFE7D9B9BCC18083B4CDB5CFA61F960DAADD6BF8* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkNintendoServiceAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkNintendoServiceAccountRequest__ctor_m5948AE4A691A41EBCB53BF803F8E58261810943A (LinkNintendoServiceAccountRequest_tABB5C3BEAA7E4BD9C66753EB8E55A5D3D684DB6E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkNintendoSwitchDeviceIdRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkNintendoSwitchDeviceIdRequest__ctor_m2430AFE4B2A69FEB5005981EC522014D0E5A7652 (LinkNintendoSwitchDeviceIdRequest_t797A16D441BB21AFDE5341E54954A1D992D4AF4C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkNintendoSwitchDeviceIdResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkNintendoSwitchDeviceIdResult__ctor_mBAA7A0A5C22775754B9A9628C3DD6E5B756478A4 (LinkNintendoSwitchDeviceIdResult_t0EB5797B85E01D6D7A5D8059F6D041D1F14E645D* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkOpenIdConnectRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkOpenIdConnectRequest__ctor_m63FE39CEF7217407D462E65FA60C4FBC00F7CDD2 (LinkOpenIdConnectRequest_tF040FD89F84BACC7AC3E00A111457E05F413FC7C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkPSNAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkPSNAccountRequest__ctor_m3FC0C8C1D8370177707C6DA479A957F6EFF23C0F (LinkPSNAccountRequest_tAD86DDC09E0704F6AF0489B4EE66B335D505C2CF* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkPSNAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkPSNAccountResult__ctor_m2C389C7079D6F89F16487AC54424691A7B23D562 (LinkPSNAccountResult_tD44785276C870B20241E65BFFA14D698BEC049D7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkSteamAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkSteamAccountRequest__ctor_m40D0869EFB283F5AAC96DF692F948C11A6118903 (LinkSteamAccountRequest_tBB6665529569D87319DF664D7EB1E444CE2D89E4* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkSteamAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkSteamAccountResult__ctor_mF1F0E58888B1C19506FD24F57A3B9D8D5D2A6EB0 (LinkSteamAccountResult_tAFCB32B4FB5C004D500CA25655AE4AB3446277D5* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkTwitchAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkTwitchAccountRequest__ctor_m8B6F4381ED69FC0DC789B840FD57A90DD5313360 (LinkTwitchAccountRequest_tDAAC83284F1560A202F78A1BADF487F9FD382A17* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkTwitchAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkTwitchAccountResult__ctor_m7B5F42C8627C5CA17B051C2036F89C76F95C6BD8 (LinkTwitchAccountResult_tC185948589359A8546F92AA06575DA6B24661EB8* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkXboxAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkXboxAccountRequest__ctor_m4AE668E4B4B5B57730063627B1739ED17B792393 (LinkXboxAccountRequest_tFE99D5422A8736251BF9D92D53D93F3CEB3EAF8E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LinkXboxAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkXboxAccountResult__ctor_m64ADB6D729BD4B76BA07BC1FD0C089C180AC82BB (LinkXboxAccountResult_tD83C17194A9B9F7222DE65604C58DE3B9AA49FDF* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ListUsersCharactersRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListUsersCharactersRequest__ctor_m45F9A6E8F2F7F48B9A5D2C2C7A74D1873794822D (ListUsersCharactersRequest_tCF5408D5CA5D53886FC36DB99B07C82075EDCCD5* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ListUsersCharactersResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListUsersCharactersResult__ctor_m1E8FDC6A272141B38F5C0AD9D32718F72725B577 (ListUsersCharactersResult_tCD7FD4A1E18258556F000EC213622028E1DE9AA3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.LocationModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationModel__ctor_m9EFD36F0F576F4915CDE647C1C516D9A41FC7E97 (LocationModel_t1DFBA1A2A4966887BCE78D3536B90613C246595A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginResult__ctor_mD4444F0A839BC3C6E88101036863E105C872A0E5 (LoginResult_tA8FAC976BB9AC98F055FB1BFFE740D450A957A8C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabLoginResultCommon__ctor_m9A54D6B9CCE858788C0C02085321998C461E1477(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithAndroidDeviceIDRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithAndroidDeviceIDRequest__ctor_mFE2308334DF3C99B1053DD4065756C20B7F493E3 (LoginWithAndroidDeviceIDRequest_t3A4C3D2EEA546EC82D997D95542CE9B57F59023B* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithAppleRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithAppleRequest__ctor_mDC09B1A72827EB143320454754A5A324A30B2266 (LoginWithAppleRequest_t432803D69AD4E022823FD67331F9E6725929F600* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithCustomIDRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithCustomIDRequest__ctor_mD6F575CB5E9042497CE69DFD2AFBB6E99B925CC1 (LoginWithCustomIDRequest_t9E1E078798737A8AD48B46EC9C0AA65092C8B05B* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithEmailAddressRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithEmailAddressRequest__ctor_m0BE12FBAE323BC60E2F400BCD6F1DF3F02FF7D53 (LoginWithEmailAddressRequest_t0D4A01BAE6DE0702B2BF796303B84ABDF575AD49* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithFacebookInstantGamesIdRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithFacebookInstantGamesIdRequest__ctor_mAD42720D02A53E54501641997051934C70284556 (LoginWithFacebookInstantGamesIdRequest_t61431BD47D89224A04BD0D9D83D8641A7A605703* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithFacebookRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithFacebookRequest__ctor_mC595E2EDA882BA6DD19EAE0112A19A3A74E296CB (LoginWithFacebookRequest_t9CA5170513098AA9DF2E2EE80A70D55C156DF5A3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithGameCenterRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithGameCenterRequest__ctor_mE2281480E3DEF97C986D4E9A55E630C5571577F1 (LoginWithGameCenterRequest_t47DCB198B2366A518C7480ED1BEBF1306BBAD543* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithGoogleAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithGoogleAccountRequest__ctor_mA5E440F0374A7255AA6F1EA4D6E40141469181D2 (LoginWithGoogleAccountRequest_tF51EDE37EB36FFA7B25883424A588876FE031120* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithGooglePlayGamesServicesRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithGooglePlayGamesServicesRequest__ctor_m5DA363CF04C38F77D5239910495A3A211710136B (LoginWithGooglePlayGamesServicesRequest_t10AFE0373B76927851BE9A1025302FD2CF44E0DA* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithIOSDeviceIDRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithIOSDeviceIDRequest__ctor_mB0F6EED283D08283EB8A3339FFE464594DAA1C2D (LoginWithIOSDeviceIDRequest_tF8F87A2ED958950DD3929AB8ECFC6E7667F29A4F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithKongregateRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithKongregateRequest__ctor_m31DF104EF2A34674A1F03343E147822B47635B2C (LoginWithKongregateRequest_t4AE23CFD1182E89A0CA8E547BB38E4ADA57B0FA5* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithNintendoServiceAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithNintendoServiceAccountRequest__ctor_mD0ADF39268664E65D3E3D8336906EC3AE2B07091 (LoginWithNintendoServiceAccountRequest_tFA98602742349FC8F68FA91185CCCB322668DFB5* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithNintendoSwitchDeviceIdRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithNintendoSwitchDeviceIdRequest__ctor_mBC6935FFAD192AC83B45F18FFD8445D522F9547F (LoginWithNintendoSwitchDeviceIdRequest_t7D332789DC3FA24808B86CCB9C41A4400FD50C17* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithOpenIdConnectRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithOpenIdConnectRequest__ctor_m4F83BE5BA82E3DAB94FA097DAD033C796341702C (LoginWithOpenIdConnectRequest_tA8725EDACB83059224A03B9091ADC186E9DF2BBE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithPlayFabRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithPlayFabRequest__ctor_m54AFE531DAE5145AC92EF76DA905BCB9B0D8CD47 (LoginWithPlayFabRequest_t40758FC97BA27124A414398D558989E3ADC1BEDB* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithPSNRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithPSNRequest__ctor_mCE36B6FE9A310744113DA25F6C3D884D2F20762F (LoginWithPSNRequest_tB200DF6D65ABEF9B55227AFC0648EA145B54012C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithSteamRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithSteamRequest__ctor_mB345B27AACED8114E4162C877FB5072EEAE2CE98 (LoginWithSteamRequest_t394F4FD07286ED05DDAB471F812FB6A471BF86C2* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithTwitchRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithTwitchRequest__ctor_mCF4232F6A2BEC512F0F932D4A51A0CCED4B546B4 (LoginWithTwitchRequest_t015A772F0B539E3986E1DD2B0CA61F420BF436F1* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LoginWithXboxRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginWithXboxRequest__ctor_m2F67570AC66D65977AE7DA9A6E9F18A37B273A0C (LoginWithXboxRequest_tE59BFE96922B056F69FC761526E8EEFD9588D179* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.LogStatement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogStatement__ctor_m01C5C15403CDF2FBA55BAE50878C1BE68A3E5B58 (LogStatement_t1817F7333FB8B5A212EC3EE93C17A94A92FD4D1E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.MatchmakeRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakeRequest__ctor_m5EBB09EB10D55C35B8EA6241070913D31FBADCC5 (MatchmakeRequest_t5DF656F1E5EDDFEDAFBB4F95B4E6EB09BB209681* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.MatchmakeResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchmakeResult__ctor_m48610B25D0D9ECC9259290CB4EDD939389AF2F47 (MatchmakeResult_t91A455F1630FADD17929926ADFF7FDF7649DF3F2* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.MembershipModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MembershipModel__ctor_mA18D54C9891458CEBA71000ACBAFA84CB1275505 (MembershipModel_t3C7C2B88E0688100FF4FE3F8DAF8D90E3D2FCEF2* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.MicrosoftStorePayload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftStorePayload__ctor_mAC159460E9AFE3A87ECE18D91A542C1A9ADE3F27 (MicrosoftStorePayload_t06065D771429807DA9B8ADEE81B6E2219795C25E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.ModifyUserVirtualCurrencyResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifyUserVirtualCurrencyResult__ctor_mA5E3C4C599F48EF57D1E9FFAC6B0FFDAC94C9BE1 (ModifyUserVirtualCurrencyResult_tF894EC7B9796D1FAF729AFE3B51659784FDE7EF1* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.NameIdentifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameIdentifier__ctor_mA67A61EA25CFC9A237720D43458D5CA8E69D5156 (NameIdentifier_tC463953295AF9517FB179D31BED70D412C5D144C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.NintendoServiceAccountPlayFabIdPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NintendoServiceAccountPlayFabIdPair__ctor_mFB68CD107580B65D30A6481FA89D994ECBFC5DB3 (NintendoServiceAccountPlayFabIdPair_t31B8D8B6905F156B3F4B095613ADB0F1D4BCA0A9* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.NintendoSwitchPlayFabIdPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NintendoSwitchPlayFabIdPair__ctor_m4AF937A990596920B48CFDE3DA12A730E34931C3 (NintendoSwitchPlayFabIdPair_t687B2A5829A336F37205F96BD81A5CA589CC1526* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.OpenTradeRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenTradeRequest__ctor_m9D031103EC6DCCA3DDF8DF19EB8572AA641CE616 (OpenTradeRequest_tA7910CAAFB97AB8643D279093230157EEA5CC4EE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.OpenTradeResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenTradeResponse__ctor_m4ED25918AC9BBC79B93E7DA31EAD0E4735C22234 (OpenTradeResponse_t2CE0A33BD5DC0C64A948DFF6D5A513FAC50C1037* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.PayForPurchaseRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayForPurchaseRequest__ctor_m2B7B5B56BCEC5F29CBE4F9AF61F9331367EAA008 (PayForPurchaseRequest_t5BFF248C9CB1FF6730145725A875A8328B4FB1A6* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.PayForPurchaseResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayForPurchaseResult__ctor_mEF4D18EDC39016F994DB4CF10F82F32C22299946 (PayForPurchaseResult_t5E1B46A891BDD3D780DC2009E8922EA88BD69FFD* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.PaymentOption::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaymentOption__ctor_m25D4D0DAC2EC82144A345065C0AF6A6ECCD8E2A6 (PaymentOption_t1D243751621312CFA26FA5E4B3D4AB9480938CDF* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.PlayerLeaderboardEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLeaderboardEntry__ctor_mE6BEEAB4753F40F01EAE3304158D9476911CC0CF (PlayerLeaderboardEntry_tCFF8F31BA39EE8CAD577AC4938DDE619E6EE66A9* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.PlayerProfileModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProfileModel__ctor_m97F355B852C3E2F06806E950F3FD939182F08E2A (PlayerProfileModel_tEF2149D2652DD0B25B5250F8037A276739D1414A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.PlayerProfileViewConstraints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProfileViewConstraints__ctor_mA4EB082CF10584A6E29FA990926CA09EF7F2A6FF (PlayerProfileViewConstraints_t2D0216E216CDBEDAD806C569D17795B60FB7C550* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.PlayerStatisticVersion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatisticVersion__ctor_mBC36D60C59C5C3A76D7C5CBA98556DF3993C817A (PlayerStatisticVersion_tC0C529357C21A063B8C3F4FBBC5D412EAA3C7372* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.PlayStation5Payload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayStation5Payload__ctor_m3718BC7C388971744E034F287F82610DC9353D52 (PlayStation5Payload_tAFC96038092FCE7BE6749D798C481EBDA45A174D* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.PSNAccountPlayFabIdPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PSNAccountPlayFabIdPair__ctor_m8AFD4DECC7A8E4064B3DBD2EA62329C7E038FAAD (PSNAccountPlayFabIdPair_t5F266A64CD3768182B54DF5D9B1D5E058DF33865* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.PurchaseItemRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseItemRequest__ctor_mEEA2ED32DB88D1AE8C925BE36A63A76F615B33CD (PurchaseItemRequest_tE070606E4EAD464357558E48126C4734D2F7C506* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.PurchaseItemResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseItemResult__ctor_m4469D6A900AD7CFE52616DA474380DD350EB5429 (PurchaseItemResult_t0F98838DD4B9DD95771031D96FD60D88597D764D* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.PurchaseReceiptFulfillment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseReceiptFulfillment__ctor_m1B7EED0E8160139BA176F64FF653E4E9EFB9DF7C (PurchaseReceiptFulfillment_t186B9940CFED13815A2AEAC5253A2C9D4F9E6B50* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.PushNotificationRegistrationModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationRegistrationModel__ctor_mA690D34B4C195B3D2ED7234D4CF19FDB8B01E957 (PushNotificationRegistrationModel_t35ACE788D79DDE73C44F51819BBAC6214F267B26* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.RedeemCouponRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedeemCouponRequest__ctor_mF7214963650D1ABDFC548247B521370553FBE918 (RedeemCouponRequest_t5675549F914957105DF0F1092BF4D9B9C2C8D1F2* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.RedeemCouponResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedeemCouponResult__ctor_m6E9F82C38A36CAB7075E97A989F4195434D73FF4 (RedeemCouponResult_tF194CA6CCFDD39047866D5A32510C64B4F1C45E7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.RefreshPSNAuthTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefreshPSNAuthTokenRequest__ctor_mAE43284404C83882CE752CE0C672EDFA4DB124EB (RefreshPSNAuthTokenRequest_tAF960E83D3F69FFE09A341DF66DE48E0DE3D47A9* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.RegionInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionInfo__ctor_m9A7BD7854FE39FB8E822C4F747D9304377B76C11 (RegionInfo_t742920284384CB9F5B77AA896624869218F923F8* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.RegisterForIOSPushNotificationRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterForIOSPushNotificationRequest__ctor_m02AA7BC4C6B4DA2E339C613C9EC8CFC14CDEBD83 (RegisterForIOSPushNotificationRequest_tAE58EB678D907A970C184A4A2FD2E9E75B3BE391* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.RegisterForIOSPushNotificationResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterForIOSPushNotificationResult__ctor_m3DEEF4420121DE83B53EBD0116E0D63E8A64CAA6 (RegisterForIOSPushNotificationResult_t3590642F3B094B5C4E1D094CBBC71D264CF28A8C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.RegisterPlayFabUserRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterPlayFabUserRequest__ctor_m684C435F469ECF47F66FBD782DBDBC2EC77E6F22 (RegisterPlayFabUserRequest_t9CCD4AA2142B94AA94D4F809486BB925E4EBEC4D* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.RegisterPlayFabUserResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterPlayFabUserResult__ctor_mB76A2B07320AD75CF6DE485C94D465CF3E9229B9 (RegisterPlayFabUserResult_t9F7AF721561FB1E6C2D0F04CF3E38EB80F39300E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabLoginResultCommon__ctor_m9A54D6B9CCE858788C0C02085321998C461E1477(__this, NULL);
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
// System.Void PlayFab.ClientModels.RemoveContactEmailRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveContactEmailRequest__ctor_mC71A611A54227E542BB4FA92D8D7FCDC78FD4DEB (RemoveContactEmailRequest_tE33A6A7E8163B419221F72305702BE6A72B5D058* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.RemoveContactEmailResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveContactEmailResult__ctor_m2F54A9919769ADE45AA510D2BF1AAFCBFE30DD4B (RemoveContactEmailResult_t47A953EF532A4E6723358B699AD09F5B209280AE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.RemoveFriendRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveFriendRequest__ctor_m0F4DACE902E805AFC4CDA298EA2BD01D260475E6 (RemoveFriendRequest_t65DE6114B83F043B5D00AA3EADA456C1A640ED0C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.RemoveFriendResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveFriendResult__ctor_m03595BA34FC11F88864DB5CB46C4C811D08ABF1C (RemoveFriendResult_t4D4C4DC05B609FF8C9F5758656C3ED678646A4A8* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.RemoveGenericIDRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveGenericIDRequest__ctor_m673CFE74364B82CFDD69F5D284849A1251FC66B5 (RemoveGenericIDRequest_t334BD9293954FD10CECEF754B959B6CB03873601* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.RemoveGenericIDResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveGenericIDResult__ctor_mDB7E333E844635681F65FE2325CE93F60EC3123A (RemoveGenericIDResult_tEE02A4C18E83ACE22323711023D49D1EEDC93D02* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.RemoveSharedGroupMembersRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveSharedGroupMembersRequest__ctor_m8ECBB7AE5D5C11BD455EE0C7B6B2D67393EA3674 (RemoveSharedGroupMembersRequest_t672B79755C84F7963F0197AC7F649DFB47BE62D4* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.RemoveSharedGroupMembersResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveSharedGroupMembersResult__ctor_m7835BD028222B7F7FE8862E6CB3EE76BC97C49D1 (RemoveSharedGroupMembersResult_t9F15AE0E2590B802799C461D364AEC2F41C87EF3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ReportAdActivityRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportAdActivityRequest__ctor_m0751B0DF04AA96AC08652E2D96B63F29142BE990 (ReportAdActivityRequest_tF280F9F16376E09CA24C97A15524A57355362D19* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ReportAdActivityResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportAdActivityResult__ctor_m72A5A4EAA5F93FFCB6E0B49ADBD2EB68C6E18FEE (ReportAdActivityResult_t1C560F4635F86A0C40F5325FE39CB7FBE1DE1F9A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ReportPlayerClientRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportPlayerClientRequest__ctor_m82B0236613C98CBDA927BC138F8B6AFC515E4791 (ReportPlayerClientRequest_t85D945417F8AD84B449F05E00BAE283608DDBDA4* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ReportPlayerClientResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportPlayerClientResult__ctor_m0598E8817AC25D0E7876A0CD34AD7648606D6016 (ReportPlayerClientResult_t241E6D96E47D8719B56EFC690FD0F6CB76205BF8* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.RestoreIOSPurchasesRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestoreIOSPurchasesRequest__ctor_m1EE071208FD152F98D71E6434103759031979D6D (RestoreIOSPurchasesRequest_t000097A3FD2F14C3F4F4DEBA527033F0BD3EF56E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.RestoreIOSPurchasesResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestoreIOSPurchasesResult__ctor_mB7FB01E42586A6F30ADC0DA572C57344ACF01EA7 (RestoreIOSPurchasesResult_tEA0A385A03BA6A9080C82D126B97BB62C9C22375* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.RewardAdActivityRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardAdActivityRequest__ctor_m25CA11A566C65AA52DE90450A217F5C908FEBC83 (RewardAdActivityRequest_tE9341F9C11C66589454A65BB945DD2E86C078BB7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.RewardAdActivityResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardAdActivityResult__ctor_mD3AD1EAEB57A121966561730D3D6263ABD39EDF9 (RewardAdActivityResult_t94A00EAF9EE41752255A4673EF0E25B45E51117A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ScriptExecutionError::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptExecutionError__ctor_m650BBD8DA9882877220E6931F33D0E9D41CABF2E (ScriptExecutionError_t15D016342B1D7DCF38FB8401037A2E748BF58785* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.SendAccountRecoveryEmailRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendAccountRecoveryEmailRequest__ctor_m1C453E0E87AE30BE12B24EC992376E111FCA8A88 (SendAccountRecoveryEmailRequest_t175EB9B99FA2F2D019EA567249BBAA92033021B1* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.SendAccountRecoveryEmailResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendAccountRecoveryEmailResult__ctor_m0AEF6BD6BA146ABCF1AFA6C87D9AB47BFBD7CD34 (SendAccountRecoveryEmailResult_tD397DE2B4C711854DDCC6CD65878726990E83350* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.SetFriendTagsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetFriendTagsRequest__ctor_mA269C17C67F09B2009E4C708DA180AF1D7F51FD0 (SetFriendTagsRequest_tB1697AECA1FFB648EF0E49EE1E32A8DFF64F1172* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.SetFriendTagsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetFriendTagsResult__ctor_m96DD30CAB4F468F27DAF97EC119355C78CE35686 (SetFriendTagsResult_t3FB32FF008D7F79F4468EA6DA4C920327F49E13F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.SetPlayerSecretRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPlayerSecretRequest__ctor_m4C28539675A872CE032DBB8402523E99B53F2CD1 (SetPlayerSecretRequest_t155B28C6752FE84EE84726EECAB2789B76F80CFE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.SetPlayerSecretResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPlayerSecretResult__ctor_mFFA4F557F95C1151923885D0E11D029FC6B3BCCB (SetPlayerSecretResult_t0F0A2B0A39F5311D0B7DB58A08704B54D5E78F8C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.SharedGroupDataRecord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedGroupDataRecord__ctor_m4A651B9DFBB7770A696115DB0A3BBBE72117DE08 (SharedGroupDataRecord_t6EABB17CCB23C3B14A9F2A29E1C0B06308DE22EB* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.StartPurchaseRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartPurchaseRequest__ctor_m06C1B1CD01DEF1B1C60315E4AC64DEBCFC23A061 (StartPurchaseRequest_tC40028ED224835E5869E8741528AFD27A5B3B497* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.StartPurchaseResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartPurchaseResult__ctor_mF0670304BC063F73DE23B620DFD12519AE9AE8D6 (StartPurchaseResult_t5AE695449ACBCC8CA93186640E203802B1E0B70F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.StatisticModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatisticModel__ctor_mF50713C2077057DEC1EA0948F207DF7F276E5AF9 (StatisticModel_tB2ED71209F882A61E023E593485AC3CBE7354CBD* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.StatisticNameVersion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatisticNameVersion__ctor_mD660317DE9DF95EC1C5ED1938CB8F557631D33A9 (StatisticNameVersion_t6435F7DD4C0291DA496DE0389D2E5A4FC161BCDE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.StatisticUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatisticUpdate__ctor_m276A0FBB6D1EEFF2AB4BF8A7CDCB8A3173363F2A (StatisticUpdate_tFF1ABF7B0BF17840014AAC48D4470605441B5D34* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.StatisticValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatisticValue__ctor_m142A38741280A1DB57A880CE7E46F6A513D0E086 (StatisticValue_t41732BCF004BE4378AE04A44F6410E992855FB24* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.SteamPlayFabIdPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamPlayFabIdPair__ctor_m637BD6AF7C4CBF9790B9952B66993A13A8BFD0EB (SteamPlayFabIdPair_tFECA16BBF2AA75081EC51F9BF796DB77F7522E18* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.StoreItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreItem__ctor_mE691C23E8360F1C44D43CF5B55AE7C70E181C1D0 (StoreItem_tADBFD4037B803EBC8EC6E38BA1FC7229FB63E71F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.StoreMarketingModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreMarketingModel__ctor_m66614AB7791F3F983AABD417B0C5C67279903F63 (StoreMarketingModel_t4AF761FD531E9A70AC9BF74380D0485A2F5DE95F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.SubscriptionModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscriptionModel__ctor_m123D33CA869091913C461039A1768AF084D708D9 (SubscriptionModel_tE2460B7EA43E4F7761842C8E495DA045317FE5FF* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.SubtractUserVirtualCurrencyRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubtractUserVirtualCurrencyRequest__ctor_m2C242BD4972BD12682DDB616D4F959F4E84E4CEA (SubtractUserVirtualCurrencyRequest_t9EF5A4F8756E1C85E4DC210B659F064376422BD5* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.TagModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagModel__ctor_m1EAFB213D2EA2D19744F1F70675FC4A4B63F2B5C (TagModel_tA73EAC7F011DDE0C0433781A0E207DEFD3971740* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.TitleNewsItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleNewsItem__ctor_m210939D4C373FC94E2AB042CC1F2C7220CE7939D (TitleNewsItem_t3FF911671D0CBBBC29FE3B156BD2CBFAA8E0E5B7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.TradeInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TradeInfo__ctor_m995169E7704F00FEC8133703CA19F32B80727E24 (TradeInfo_tBE9088C4A58089296E230210566577FD2AEEEE07* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.TreatmentAssignment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreatmentAssignment__ctor_m373FA22DF7CD33955020A63D1AA3C757B6B9E05E (TreatmentAssignment_t3AAA5D796B6551BDF72B95A132BE5FE93F1FD99A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.TwitchPlayFabIdPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwitchPlayFabIdPair__ctor_m452F6BA6C8CE283327808BFAE29F0791F5630F68 (TwitchPlayFabIdPair_tF6965786D5E8E95243A21420C5A3CAF7A1A50320* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkAndroidDeviceIDRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkAndroidDeviceIDRequest__ctor_m6124243729475A094D74F68FD3F316EAEC4AC30D (UnlinkAndroidDeviceIDRequest_tDEB5EEAC89390106CECE2C514E3B9FF6F9F72D9E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkAndroidDeviceIDResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkAndroidDeviceIDResult__ctor_m11C51DA7039069E53BCABCA1AD13980E8C614671 (UnlinkAndroidDeviceIDResult_t1A883DF782BD48500607B480852AA2537F4F3327* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkAppleRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkAppleRequest__ctor_mC803BC53311640A011BBA2293455ED8405347F6F (UnlinkAppleRequest_t92C5AB52E8736CCA3D8DE4841B1BDB8F7FB83222* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkCustomIDRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkCustomIDRequest__ctor_mE9BA5D10A61DDD555C8D8ECA0ABFE4F72C576D7D (UnlinkCustomIDRequest_t46E020211057E7653AFE02D26F44F9E130D30521* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkCustomIDResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkCustomIDResult__ctor_m4596A1F0D18E7DB9B4BBFD61072CBA7560DBCA9B (UnlinkCustomIDResult_t233F6432A9B50B2D68E3C568F574F4FA2D7BB60C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkFacebookAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkFacebookAccountRequest__ctor_mC082FCEEA441EDC42D8549BDED8510E58E12DCAD (UnlinkFacebookAccountRequest_tA7E318BFED129D19D58FA04FD6FBF6B7ADF85928* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkFacebookAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkFacebookAccountResult__ctor_mA3E3717C358D89C8E374F8B6F3C63C73A1C4317E (UnlinkFacebookAccountResult_t64890736BCF70AA84E14FBABA25758E9554324B1* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkFacebookInstantGamesIdRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkFacebookInstantGamesIdRequest__ctor_m235F7F3F5E8F50F96197732A111D0B2BB1AB51B3 (UnlinkFacebookInstantGamesIdRequest_t4B257DB75AFEEF708F6D5AC2C3BB1D09740F6C9C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkFacebookInstantGamesIdResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkFacebookInstantGamesIdResult__ctor_mA12963AB317820BB381122015BD52DF47C00590E (UnlinkFacebookInstantGamesIdResult_tA3C0ECA8433D6677C4BB580C8589346222E32D43* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkGameCenterAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkGameCenterAccountRequest__ctor_m8760DFEEC72B67F5AF88607B98C1C39CF537754D (UnlinkGameCenterAccountRequest_t9596E9FC71D85C48FFF699F2AD829A3D0DEA901A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkGameCenterAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkGameCenterAccountResult__ctor_m8B11C61E764C993A207189C40ED65E51AC6F37F0 (UnlinkGameCenterAccountResult_t6F0C5BCEB35453E4CA8E05A31D654A782BC5E95F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkGoogleAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkGoogleAccountRequest__ctor_m4A1AE9BD05C61833C3A8BCAEDFFCC660EECC4DAD (UnlinkGoogleAccountRequest_t67E73532283D56ED37F1E9F1289FDE4BE84967CC* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkGoogleAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkGoogleAccountResult__ctor_m3389D61AB21387FCC876533E0BD0F5C8F936C6D5 (UnlinkGoogleAccountResult_t6622EFB999584E5DEC5DEB93D2935D979FBE846C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkGooglePlayGamesServicesAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkGooglePlayGamesServicesAccountRequest__ctor_m68A3EAD6B41C1FB6A392F68355B6990222D06EC7 (UnlinkGooglePlayGamesServicesAccountRequest_t2F717932AF82E7668AA9724038C2A9F2229F7872* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkGooglePlayGamesServicesAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkGooglePlayGamesServicesAccountResult__ctor_mB02AF361B02D5485F3420ABADAED9F5E806E9229 (UnlinkGooglePlayGamesServicesAccountResult_t5C6E7A2299B43C75BA9B8680100BF966FCE31270* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkIOSDeviceIDRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkIOSDeviceIDRequest__ctor_m8EA6CE7E1E720F2E7491C9CCD45C3C5996BFCB0E (UnlinkIOSDeviceIDRequest_t1EE4B2AFE9CE7D0849D68EF258CADFB476EA53CA* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkIOSDeviceIDResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkIOSDeviceIDResult__ctor_m70E2FC3BEFEAD6AC2B31718459042FEDCBADE9E4 (UnlinkIOSDeviceIDResult_t4596D43010D9025839A9679C5DB058CBBF794AE9* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkKongregateAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkKongregateAccountRequest__ctor_mC945F2020A214D74F94EFB2302F014A5D6536C5C (UnlinkKongregateAccountRequest_t2FEFF816F15AEF0C241926B63004694A5FC6FD87* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkKongregateAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkKongregateAccountResult__ctor_m4E1A80355E69E187A6B97E64B37D0BF1EBEB68A6 (UnlinkKongregateAccountResult_tAB392A5AFFF5D1FDF901F514F11D3AD3B6021CC8* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkNintendoServiceAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkNintendoServiceAccountRequest__ctor_mFD50F1D931974C8A19C9AF63CF869C0E497AA7D3 (UnlinkNintendoServiceAccountRequest_t06B51402344303DA405A305B5B1F9A54C9145C84* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkNintendoSwitchDeviceIdRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkNintendoSwitchDeviceIdRequest__ctor_m2C89B21D625689C749AE6A893ADBBC685E37380D (UnlinkNintendoSwitchDeviceIdRequest_t35F44CBF87CFC802E5C568E898E4E203B3659A11* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkNintendoSwitchDeviceIdResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkNintendoSwitchDeviceIdResult__ctor_m20CCC5D5BBDB5E46ECB4FC0DB15E96C138D6B687 (UnlinkNintendoSwitchDeviceIdResult_tC9E5AD9A628AFDDD3DC1E3A2463C9A53307DFCD8* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkOpenIdConnectRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkOpenIdConnectRequest__ctor_mFFA25C1F5AA6F1D6E709AC737E2103EC5289732F (UnlinkOpenIdConnectRequest_t307BC82317C8730161E40EFDED957CF2A68E0799* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkPSNAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkPSNAccountRequest__ctor_mCCEC7950880E55CD76E9A30FEAEA8199EFFF3854 (UnlinkPSNAccountRequest_t1060A17C5A70C60683D7F133E1ABBC8408A63EE3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkPSNAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkPSNAccountResult__ctor_mA9EC0D60D56DFA2E71F32D0BB9491F7B6DA8897C (UnlinkPSNAccountResult_t72E4629A6FCA43E0C5BAA9E2EE059A5E756096E7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkSteamAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkSteamAccountRequest__ctor_m076F68CDC6081666AB9BE196898B8E35C88387AE (UnlinkSteamAccountRequest_t2876EA45B25D6F400BBB61DE5AC76A15EBAF02AA* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkSteamAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkSteamAccountResult__ctor_mAF0BDB775D7A16C3C741772CF94B78BB16E90EE7 (UnlinkSteamAccountResult_t0B0222CF28C08B53406C9B62FBA815C7C3AEE74E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkTwitchAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkTwitchAccountRequest__ctor_m6A5DCDEEA50FE3A2A19EC37694944AC67BA8FFCC (UnlinkTwitchAccountRequest_tE5BE128D46C7D5CCEE7B97DEEEC5CA2526CFCCE2* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkTwitchAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkTwitchAccountResult__ctor_mC4C5593C7C3BAD16A607664688E0887F70C266A0 (UnlinkTwitchAccountResult_tD82751FFBDC681DE0BB88D43A2C9298CCF0D8AA4* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkXboxAccountRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkXboxAccountRequest__ctor_mE581A4A7F5D2CD84F9611262F2427C6D41977560 (UnlinkXboxAccountRequest_t8E27CE0799DF36ECD984F4ED8DE17ED3657AE57E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlinkXboxAccountResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkXboxAccountResult__ctor_mB727896FD2068BE0D54D622DED1928B2ED02B580 (UnlinkXboxAccountResult_tE2D65912D4AB4D5E32CA3561994FF8654DE07F7E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlockContainerInstanceRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockContainerInstanceRequest__ctor_mB555569594FB7C11F851871170C58A7B416E4211 (UnlockContainerInstanceRequest_tB7E4282214EEE56EF6DDA6CC5C4C8780F8C0FC94* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlockContainerItemRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockContainerItemRequest__ctor_m19C5F8B37FD3800A467EB15953FC0720A806E310 (UnlockContainerItemRequest_t820D81CB38D610CB71E1F56DC332E45B4B518ABC* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UnlockContainerItemResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockContainerItemResult__ctor_mB6F5C9670AFD68AEBBB4BAA2FE03E138FFDE33CE (UnlockContainerItemResult_t35CFBDF59A70BE18F28D78CCF1E3FBFC0878ECF7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateAvatarUrlRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateAvatarUrlRequest__ctor_mC4E7E59145437CC1BE741B811B5F6F560F145EDE (UpdateAvatarUrlRequest_t72A827E07538C3CD5BA65A04CDAFE440BFE37040* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateCharacterDataRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateCharacterDataRequest__ctor_mC4DB763A213A3418B8CF34C196DADF2BA66BA809 (UpdateCharacterDataRequest_t1A476F394AE1FFF66454B7F95C6530097CDF706A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateCharacterDataResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateCharacterDataResult__ctor_mED78D33DB6A819C3A2C0730895AD8B74C3C57011 (UpdateCharacterDataResult_tAB9AAEEA9FE8658FC10180393C742EA1E50401BE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateCharacterStatisticsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateCharacterStatisticsRequest__ctor_mB6C840EF7AC92BC0990DAADCB927ED048EC598DE (UpdateCharacterStatisticsRequest_tE19059CA8705B365B5C50F31FCD9EF302D50F02F* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateCharacterStatisticsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateCharacterStatisticsResult__ctor_m02FB1ABECC0512066F08755FD54DC75DCA382390 (UpdateCharacterStatisticsResult_t3F6EF334C142A8BC10FBA7320DDB57FA6BB0952A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdatePlayerStatisticsRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatePlayerStatisticsRequest__ctor_m326E4C9B3C6A96A9C6CC01D4236C11C4EC4F21CC (UpdatePlayerStatisticsRequest_t5B474D977EE17B8842BF33DF9E60B09281F2A496* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdatePlayerStatisticsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatePlayerStatisticsResult__ctor_mC266BDAFF941B48C0A0EFF7226F13A15DD61C591 (UpdatePlayerStatisticsResult_tF1D48A2D96A003AFCDDE4DB38B179461B3E63E09* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateSharedGroupDataRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSharedGroupDataRequest__ctor_m77BD7FDB8EE5606C20D5038B4A8358D932943D9E (UpdateSharedGroupDataRequest_t770268D7040E97EEF614E28201FBA15B27F07ABC* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateSharedGroupDataResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSharedGroupDataResult__ctor_m88A330E4112DF044511F338AA43FC135E99C0652 (UpdateSharedGroupDataResult_tC2A0B472A61723265334227D8BA7EE580C3D7DD9* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateUserDataRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateUserDataRequest__ctor_m085241A7619C2B3BB47F59688FFB0C9E9863D5FA (UpdateUserDataRequest_t00F2203E748C9D0B33E3CC673EAB649EB2B5662A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateUserDataResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateUserDataResult__ctor_m543F1445487363400B36394770594B3CC9D2EDE6 (UpdateUserDataResult_t23060B0433CB78E7CECEDFC3F7D63B91E051A74B* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateUserTitleDisplayNameRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateUserTitleDisplayNameRequest__ctor_m1478E7F1AAA82AD3925FEB80E35E8342DE16B1A8 (UpdateUserTitleDisplayNameRequest_t7A00322DBF953F51971F85914E1F5B8B75CC8E1C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.UpdateUserTitleDisplayNameResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateUserTitleDisplayNameResult__ctor_m28C736ECD3C9418DA49798092E135BFDCEF5367F (UpdateUserTitleDisplayNameResult_t624047AEE8BB730C8B15D244261478F5A65DF950* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserAccountInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAccountInfo__ctor_m0B101309D1CABA57AF6A40D9021847ED6A5DC192 (UserAccountInfo_t1BF8B02028A765033899EE9940C15383AEF2726A* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserAndroidDeviceInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAndroidDeviceInfo__ctor_m0CBE751E65D69225F87E352AFC3418FDB357A75D (UserAndroidDeviceInfo_tF7DC5DEEEC9611A18C44C582A421C87EFAF143E7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserAppleIdInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAppleIdInfo__ctor_mBB61EC4F66DC73F95187915EE5DBA752B2E9FDC0 (UserAppleIdInfo_tC957F5FCFCA8C6C4EA5ABB763DF6EAE0A83A00B5* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserCustomIdInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserCustomIdInfo__ctor_mD0D0B1FB5618E29A23E08ED515C46A4A324CA13B (UserCustomIdInfo_tF34BF320AEE125010D3D390BE3019CF6074D15AB* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserDataRecord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserDataRecord__ctor_mD36706010FDEC77CE6C613DB2FBF13AD5628F43B (UserDataRecord_tE7E165155A91F4CDC8FA7068664F554198EE0F45* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserFacebookInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserFacebookInfo__ctor_m8088182553413588575958F763323BDD8CE8DC62 (UserFacebookInfo_t25341AA794CE37708FF857832B3D40C31005F859* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserFacebookInstantGamesIdInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserFacebookInstantGamesIdInfo__ctor_m7558C1724FEE9C8BD87F6CDF814B225C82CD8AFB (UserFacebookInstantGamesIdInfo_t4AA586B3DB010191CA46294964526B9C6BD0DEFA* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserGameCenterInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserGameCenterInfo__ctor_m5E267CB2A1F28BF14DF6FF819614186358958038 (UserGameCenterInfo_tF3E4DC8FCE46154B31494ABC83FF654AB1CE2C42* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserGoogleInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserGoogleInfo__ctor_m841CB7D609183A3B7BA6563962831D1BCF3EEA2F (UserGoogleInfo_t375C252AF8732A3B29CC0ACA458788F57705CD16* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserGooglePlayGamesInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserGooglePlayGamesInfo__ctor_m42B8B90F22791D05791F8B115FB84DA859B8BE06 (UserGooglePlayGamesInfo_tF42B79157DF36B2D327573D632CFB3CD62B0BBB8* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserIosDeviceInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserIosDeviceInfo__ctor_mF0AE23B65482E1A01377BD8C3E24A78F64FF2219 (UserIosDeviceInfo_tB0E4BB1232D6B58F35B0BD7730E967E50B25ACDD* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserKongregateInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserKongregateInfo__ctor_m6B1B8DC96F524DE11D4E6CB3B9F2AA7E52F64456 (UserKongregateInfo_t81FAC344B4B42B3689F7F42D355D8BE667E5B3BD* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserNintendoSwitchAccountIdInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserNintendoSwitchAccountIdInfo__ctor_m687CEE384339DBFF35C51E461340C5C1853B917D (UserNintendoSwitchAccountIdInfo_tBD867A24EE34BA9F1E516FC85B3D1E8BCC108F13* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserNintendoSwitchDeviceIdInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserNintendoSwitchDeviceIdInfo__ctor_m72CEE298DDE0196934B865F114A5880A8912881F (UserNintendoSwitchDeviceIdInfo_t53FA7FEB383F7C94C8DF61E423E3049ADF135388* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserOpenIdInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOpenIdInfo__ctor_m81CD93B4BD545F7DD9FAA9D2E7D981BDE2E49D33 (UserOpenIdInfo_t1243706E2AA47FF74B9FEF1FF537454B0D48FFE3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserPrivateAccountInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserPrivateAccountInfo__ctor_m96BDB211833B281F90EE345C9E6D4150C8DA94D4 (UserPrivateAccountInfo_t91F7AE36BB4FCCB4CC40C6B6027F6BFC034D50A2* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserPsnInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserPsnInfo__ctor_m9721FBFFAB8524D0B415C35E08213B2FF9EBF6C5 (UserPsnInfo_t8A71B58419169BBDA2512C61AB4D75B25CE15EAB* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSettings__ctor_m5CD297D6D681F0A7820BC031BECF6B26C8C5DF90 (UserSettings_t53FD23BFE7D67CB8C0FA3FFB5F2FC733DA2D22E0* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserSteamInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSteamInfo__ctor_m1C646BD4BC50F8054CD22FFAD1B043FBDBA303A0 (UserSteamInfo_t9683A2E6234656912ED104E9AC9C9C6857CE23EA* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserTitleInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTitleInfo__ctor_m686B56A734ADD2EB81D1B9CA12B9803F99F48A5E (UserTitleInfo_tB92EBF892AF2FE961FBA3C279C86C5A4E6E17821* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserTwitchInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTwitchInfo__ctor_m436A9460A8818E31C3FD3BE881E0E60796E15040 (UserTwitchInfo_t4C6ECD3CCCCE4C62C7CB6F454D1ED64EDD3FE431* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.UserXboxInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserXboxInfo__ctor_m6C5742944DB685AA37434E89518F6C8CF243E85E (UserXboxInfo_t43AC22B8C788C2E29748D1882F26FFFD82150C0D* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateAmazonReceiptRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateAmazonReceiptRequest__ctor_m94D38D123ECACC4D9F59830AB731F61D3E10979A (ValidateAmazonReceiptRequest_t02C6A572352CCE41AE720F9A8BE4FD47A4F30243* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateAmazonReceiptResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateAmazonReceiptResult__ctor_m3F8288B791553EF9989F128D61541E6694D4D181 (ValidateAmazonReceiptResult_tBDAAEA70544881D3EC12AB8B21812EAF164F25CF* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateGooglePlayPurchaseRequest__ctor_m99AED4344A996A93531EACFDC27984FBB28FF431 (ValidateGooglePlayPurchaseRequest_t19A3C53B5E1DE3BB7A655D929A41D5BED28AA50C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateGooglePlayPurchaseResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateGooglePlayPurchaseResult__ctor_m8D2EC8BAD3C1EA53F7E250E7BC9996B5A425CEAF (ValidateGooglePlayPurchaseResult_t94C27521EBF7C2B9547D9157FE0BAACBAA9FFB6C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateIOSReceiptRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateIOSReceiptRequest__ctor_m6190DD618DE881A3A818945B1D8C7954E8BB2962 (ValidateIOSReceiptRequest_t0FF3109216309862E61A7EC51269B623E98507F4* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateIOSReceiptResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateIOSReceiptResult__ctor_m289B9D4776BBC332F8A49709C6B4485EB5EB4276 (ValidateIOSReceiptResult_t7B8E9C32E11CF69C0F1644A9E70227BED479112C* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateWindowsReceiptRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateWindowsReceiptRequest__ctor_m9E16DB14A77715AEA6C9AFA30A3B7F240CEB3F0C (ValidateWindowsReceiptRequest_t1925F0B1023AD2B5E54130D6903DB577AEC6D4C7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValidateWindowsReceiptResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateWindowsReceiptResult__ctor_m10BA354E7F8C095414A678ED51E60CA207673B1E (ValidateWindowsReceiptResult_t5DFEC0D218EF949D252DFBC431EB81917AA436BC* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.ValueToDateModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueToDateModel__ctor_m2D0D5B7604B3F32FB72185AC2C3369063BDB6056 (ValueToDateModel_t98B3C39B5FDB48BC22F6DFBE4839E6DFD03BB9FE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.Variable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Variable__ctor_mD9A6B40479B285102BAAD6ABAE2515B799AF7810 (Variable_tDCD6D1358DFF185712A375020E6EA7576EB437E7* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.VirtualCurrencyRechargeTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCurrencyRechargeTime__ctor_mC239AB1CAD6DCF93CBC1CBF2803A4880ECCC328E (VirtualCurrencyRechargeTime_tD4B80CB3526B0CD22262886E3372D8A023D6CAA2* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.ClientModels.WriteClientCharacterEventRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteClientCharacterEventRequest__ctor_m34164D5DAA1D00210F6582A7AD00BE63C693BE8F (WriteClientCharacterEventRequest_t4B18CB6D5C5242AFA1B48ADFF7593381C1335ED3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.WriteClientPlayerEventRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteClientPlayerEventRequest__ctor_m5A05D817566CE4E7DEE3428988B304AB7FD06E1C (WriteClientPlayerEventRequest_tA95320423AC8066CD76C9C400278514D14E856DA* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.WriteEventResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteEventResponse__ctor_mEFDA7F16257A454FBA7E16D4FFC9330FDF9F841D (WriteEventResponse_tCF2011905F8F5EFF4360597D91EDAF4C4AA3F116* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.ClientModels.WriteTitleEventRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteTitleEventRequest__ctor_m7D1E54B4350C95D9E610267268D047CFC24EE20B (WriteTitleEventRequest_t8F544A3D1AC64FE08CD1E18FF967FC84FBEFE4A3* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.ClientModels.XboxLiveAccountPlayFabIdPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XboxLiveAccountPlayFabIdPair__ctor_m1A7DDAF0E16AC6F189C72A75F8012AB1B40A9662 (XboxLiveAccountPlayFabIdPair_t409FF6972AF23BC564AA53174AAEDDECAEC9F6DE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_Multicast(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* currentDelegate = reinterpret_cast<PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D*, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___request0, ___error1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenInst(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	NullCheck(___request0);
	typedef void (*FunctionPointerType) (PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D*, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___request0, ___error1, method);
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenStatic(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D*, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___request0, ___error1, method);
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenStaticInvoker(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D*, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* >::Invoke(__this->___method_ptr_0, method, NULL, ___request0, ___error1);
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_ClosedStaticInvoker(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D*, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___request0, ___error1);
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenVirtual(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	NullCheck(___request0);
	VirtualActionInvoker1< PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* >::Invoke(il2cpp_codegen_method_get_slot(method), ___request0, ___error1);
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenInterface(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	NullCheck(___request0);
	InterfaceActionInvoker1< PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___request0, ___error1);
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenGenericVirtual(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	NullCheck(___request0);
	GenericVirtualActionInvoker1< PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* >::Invoke(method, ___request0, ___error1);
}
void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenGenericInterface(PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method)
{
	NullCheck(___request0);
	GenericInterfaceActionInvoker1< PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* >::Invoke(method, ___request0, ___error1);
}
// System.Void PlayFab.Events.PlayFabEvents/PlayFabErrorEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabErrorEvent__ctor_m2A7788530C700396124CAE117A7B8A8D830EE99B (PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenStatic;
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
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038_Multicast;
}
// System.Void PlayFab.Events.PlayFabEvents/PlayFabErrorEvent::Invoke(PlayFab.SharedModels.PlayFabRequestCommon,PlayFab.PlayFabError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabErrorEvent_Invoke_mC72A34EB21591A0DAA34836E22A89E7DA238D038 (PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D*, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___request0, ___error1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult PlayFab.Events.PlayFabEvents/PlayFabErrorEvent::BeginInvoke(PlayFab.SharedModels.PlayFabRequestCommon,PlayFab.PlayFabError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayFabErrorEvent_BeginInvoke_mD33FA45553968F664B9C7FA6DBF5ABF91F5D656C (PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, PlayFabRequestCommon_t42B97E9F405CF1969D1CB265129566E2657A654D* ___request0, PlayFabError_t085A18640C2631872C3888388E2BC667C7B09C23* ___error1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___request0;
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void PlayFab.Events.PlayFabEvents/PlayFabErrorEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayFabErrorEvent_EndInvoke_m25BF1B023D9883283109BA5E5F2BA6215F10308A (PlayFabErrorEvent_t32269E6C8CF3C5FF597C169C1CACE3D97D0E50C3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayFab.AuthenticationModels.AuthenticateCustomIdRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticateCustomIdRequest__ctor_mE2DE31774E0AAC2FC4E4D7EF46252E4982FB682B (AuthenticateCustomIdRequest_tE91474227AC5EB717401D577941B21F995C8E5AC* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.AuthenticationModels.AuthenticateCustomIdResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticateCustomIdResult__ctor_mB31FE721D84441531E67BA7B78289762A4978D1C (AuthenticateCustomIdResult_t4B35C3258C572E8DFCC590A16993C5BC3F934F36* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.AuthenticationModels.DeleteRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteRequest__ctor_m19B72561A7CB91D6AE810DC516C12B92E14B3E44 (DeleteRequest_t0B9D2C009B483135923187736BB065BB74B2B1DE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.AuthenticationModels.EmptyResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyResponse__ctor_m5D4B24E9EBCADB3AB9CFD0E4B6D673C38B2BE199 (EmptyResponse_t5D64DF52A735AC35F2A14FC8A62D357FFFCA7652* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.AuthenticationModels.EntityKey::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityKey__ctor_mB1488235600DA953B7B9CC3FEA6BD0B581CDBABD (EntityKey_tFADF551D013525A30F2A6FB10A4FC4AF5F34278E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.AuthenticationModels.EntityLineage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityLineage__ctor_m702D59D688842FBEEA0556ADA6FF027B4C632DC3 (EntityLineage_tBB3BF8ABA70636A13AE3412CE723954A429EE67E* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.AuthenticationModels.EntityTokenResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityTokenResponse__ctor_m23020BA7DE7C57ED4B1E7DB8A6E91E3C01E703B7 (EntityTokenResponse_tCB7E0082B8ABD19A02403C6F9A438EF756D63E8B* __this, const RuntimeMethod* method) 
{
	{
		PlayFabBaseModel__ctor_mEB7DCE98193DC376F3422B1011C0DC17B2795E2E(__this, NULL);
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
// System.Void PlayFab.AuthenticationModels.GetEntityTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetEntityTokenRequest__ctor_m9B22427D71006B07D4EF7EE46CB3D3DEEC0B6CE9 (GetEntityTokenRequest_t058F7E73EA27EED4A7E6A49B1FF0770354FF6E69* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.AuthenticationModels.GetEntityTokenResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetEntityTokenResponse__ctor_m005FA6D3219909B9145CCA811B9EF14B76CC1D41 (GetEntityTokenResponse_tD3A2F286A2716332E695130B0DDE7F9E2E0DABAC* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
// System.Void PlayFab.AuthenticationModels.ValidateEntityTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateEntityTokenRequest__ctor_m1CC2F8D79AD059413023EC9D83F2ECA04DF1AECA (ValidateEntityTokenRequest_t208B61B7A774BBC7B3CD46D9296ED0BC848DEA3B* __this, const RuntimeMethod* method) 
{
	{
		PlayFabRequestCommon__ctor_m6A3F4FFAFCC90E4D69D376813DA32F302FB35C17(__this, NULL);
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
// System.Void PlayFab.AuthenticationModels.ValidateEntityTokenResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateEntityTokenResponse__ctor_m84808164C3ADB884CEB8B2E27FF7B2E206A37729 (ValidateEntityTokenResponse_t3BF0DD16B7B0A2D37AF6A38E77CE63119EFCF7AE* __this, const RuntimeMethod* method) 
{
	{
		PlayFabResultCommon__ctor_m045283BC3AF921586DC332AF1F5B96CBF85C3A46(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServicePointManager_set_Expect100Continue_m80D90D682815479266428807D61DCDDEA3973FF3_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var);
		((ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_StaticFields*)il2cpp_codegen_static_fields_for(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var))->___expectContinue_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpWebRequest_set_KeepAlive_mF8D4C5D79359F77F6612FC9087EB8575BC31280E_inline (HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___keepAlive_29 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* WebException_get_Response_m808BF96464DDCE6C66D633355101C69800A5A7E7_inline (WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* __this, const RuntimeMethod* method) 
{
	{
		WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_0 = __this->___m_Response_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebException_get_Status_m9B08D3B07C3D75A6783EADB1215EB54E2D3B9822_inline (WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Status_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
