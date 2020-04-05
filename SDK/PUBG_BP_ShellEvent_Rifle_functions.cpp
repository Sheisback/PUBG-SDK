// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ShellEvent_Rifle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShellEvent_Rifle.BP_ShellEvent_Rifle_C.RunEvent
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                InCollideDirection             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                InHitLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                InHitNormal                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName*                  InBoneName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWorld**                 InWorld                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       
=======
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UBP_ShellEvent_Rifle_C::RunEvent(struct FVector* InCollideDirection, struct FVector* InHitLocation, struct FVector* InHitNormal, struct FName* InBoneName, class UWorld** InWorld, class AActor** InActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShellEvent_Rifle.BP_ShellEvent_Rifle_C.RunEvent"));

	UBP_ShellEvent_Rifle_C_RunEvent_Params params;
	params.InCollideDirection = InCollideDirection;
	params.InHitLocation = InHitLocation;
	params.InHitNormal = InHitNormal;
	params.InBoneName = InBoneName;
	params.InWorld = InWorld;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShellEvent_Rifle.BP_ShellEvent_Rifle_C.ExecuteUbergraph_BP_ShellEvent_Rifle
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       
=======
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UBP_ShellEvent_Rifle_C::ExecuteUbergraph_BP_ShellEvent_Rifle(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShellEvent_Rifle.BP_ShellEvent_Rifle_C.ExecuteUbergraph_BP_ShellEvent_Rifle"));

	UBP_ShellEvent_Rifle_C_ExecuteUbergraph_BP_ShellEvent_Rifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
