// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_NetworkNext_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NetworkNext.NetworkNextUtils.UpgradePlayer
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                UserId                         (Parm, ZeroConstructor)
// ENetworkNextPlatformType*      Platform                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Tag                            (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C5C8CC0              		 offset:47f8cc0                       

void UNetworkNextUtils::STATIC_UpgradePlayer(class UObject** WorldContextObject, class APlayerController** PlayerController, struct FString* UserId, ENetworkNextPlatformType* Platform, struct FString* Tag)
=======
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserId                         (Parm, ZeroConstructor)
// ENetworkNextPlatformType       Platform                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Tag                            (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DABBC370              		 offset:41fc370                       

void UNetworkNextUtils::STATIC_UpgradePlayer(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& UserId, ENetworkNextPlatformType Platform, const struct FString& Tag)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NetworkNext.NetworkNextUtils.UpgradePlayer"));

	UNetworkNextUtils_UpgradePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.UserId = UserId;
	params.Platform = Platform;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NetworkNext.NetworkNextUtils.SetServerConfig
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FNetworkNextServerConfig* ServerConfig                   (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71C5C8C00              		 offset:47f8c00                       

void UNetworkNextUtils::STATIC_SetServerConfig(struct FNetworkNextServerConfig* ServerConfig)
=======
// struct FNetworkNextServerConfig ServerConfig                   (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6DABBC2B0              		 offset:41fc2b0                       

void UNetworkNextUtils::STATIC_SetServerConfig(const struct FNetworkNextServerConfig& ServerConfig)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NetworkNext.NetworkNextUtils.SetServerConfig"));

	UNetworkNextUtils_SetServerConfig_Params params;
	params.ServerConfig = ServerConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NetworkNext.NetworkNextUtils.SetConfig
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FNetworkNextConfig*     Config                         (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71C5C8B50              		 offset:47f8b50                       

void UNetworkNextUtils::STATIC_SetConfig(struct FNetworkNextConfig* Config)
=======
// struct FNetworkNextConfig      Config                         (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6DABBC200              		 offset:41fc200                       

void UNetworkNextUtils::STATIC_SetConfig(const struct FNetworkNextConfig& Config)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NetworkNext.NetworkNextUtils.SetConfig"));

	UNetworkNextUtils_SetConfig_Params params;
	params.Config = Config;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NetworkNext.NetworkNextUtils.GetClientStats
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FNetworkNextClientStats ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C5C8AA0              		 offset:47f8aa0                       

struct FNetworkNextClientStats UNetworkNextUtils::STATIC_GetClientStats(class UObject** WorldContextObject)
=======
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FNetworkNextClientStats ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DABBC150              		 offset:41fc150                       

struct FNetworkNextClientStats UNetworkNextUtils::STATIC_GetClientStats(class UObject* WorldContextObject)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NetworkNext.NetworkNextUtils.GetClientStats"));

	UNetworkNextUtils_GetClientStats_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NetworkNext.NetworkNextUtils.GetClientSessionId
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
<<<<<<< HEAD
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C5C89D0              		 offset:47f89d0                       

struct FString UNetworkNextUtils::STATIC_GetClientSessionId(class UObject** WorldContextObject)
=======
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DABBC080              		 offset:41fc080                       

struct FString UNetworkNextUtils::STATIC_GetClientSessionId(class UObject* WorldContextObject)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NetworkNext.NetworkNextUtils.GetClientSessionId"));

	UNetworkNextUtils_GetClientSessionId_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
