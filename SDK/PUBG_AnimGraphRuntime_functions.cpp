// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AnimGraphRuntime_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
<<<<<<< HEAD
// struct FVector*                RootPos                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                JointPos                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                EndPos                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                JointTarget                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                Effector                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 OutJointPos                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutEndPos                      (Parm, OutParm, IsPlainOldData)
// bool*                          bAllowStretching               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         StartStretchRatio              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxStretchScale                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7195BC640              		 offset:17ec640                       

void UKismetAnimationLibrary::STATIC_K2_TwoBoneIK(struct FVector* RootPos, struct FVector* JointPos, struct FVector* EndPos, struct FVector* JointTarget, struct FVector* Effector, bool* bAllowStretching, float* StartStretchRatio, float* MaxStretchScale, struct FVector* OutJointPos, struct FVector* OutEndPos)
=======
// struct FVector                 RootPos                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 JointPos                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 EndPos                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 JointTarget                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Effector                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 OutJointPos                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutEndPos                      (Parm, OutParm, IsPlainOldData)
// bool                           bAllowStretching               (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartStretchRatio              (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxStretchScale                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA0EAFC0              		 offset:372afc0                       

void UKismetAnimationLibrary::STATIC_K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale, struct FVector* OutJointPos, struct FVector* OutEndPos)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK"));

	UKismetAnimationLibrary_K2_TwoBoneIK_Params params;
	params.RootPos = RootPos;
	params.JointPos = JointPos;
	params.EndPos = EndPos;
	params.JointTarget = JointTarget;
	params.Effector = Effector;
	params.bAllowStretching = bAllowStretching;
	params.StartStretchRatio = StartStretchRatio;
	params.MaxStretchScale = MaxStretchScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutJointPos != nullptr)
		*OutJointPos = params.OutJointPos;
	if (OutEndPos != nullptr)
		*OutEndPos = params.OutEndPos;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
<<<<<<< HEAD
// struct FTransform*             CurrentTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                TargetPosition                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                LookAtVector                   (Parm, IsPlainOldData)
// bool*                          bUseUpVector                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                UpVector                       (Parm, IsPlainOldData)
// float*                         ClampConeInDegree              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7195BC3C0              		 offset:17ec3c0                       

struct FTransform UKismetAnimationLibrary::STATIC_K2_LookAt(struct FTransform* CurrentTransform, struct FVector* TargetPosition, struct FVector* LookAtVector, bool* bUseUpVector, struct FVector* UpVector, float* ClampConeInDegree)
=======
// struct FTransform              CurrentTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetPosition                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 LookAtVector                   (Parm, IsPlainOldData)
// bool                           bUseUpVector                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 UpVector                       (Parm, IsPlainOldData)
// float                          ClampConeInDegree              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA0EAD40              		 offset:372ad40                       

struct FTransform UKismetAnimationLibrary::STATIC_K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt"));

	UKismetAnimationLibrary_K2_LookAt_Params params;
	params.CurrentTransform = CurrentTransform;
	params.TargetPosition = TargetPosition;
	params.LookAtVector = LookAtVector;
	params.bUseUpVector = bUseUpVector;
	params.UpVector = UpVector;
	params.ClampConeInDegree = ClampConeInDegree;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// (Final, Native, Protected, HasOutParms)
// Parameters:
<<<<<<< HEAD
// struct FName*                  NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF7195BCBF0              		 offset:17ecbf0                       

void UPlayMontageCallbackProxy::OnNotifyEndReceived(struct FName* NotifyName, struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload)
=======
// struct FName                   NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6DA0EB570              		 offset:372b570                       

void UPlayMontageCallbackProxy::OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived"));

	UPlayMontageCallbackProxy_OnNotifyEndReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (Final, Native, Protected, HasOutParms)
// Parameters:
<<<<<<< HEAD
// struct FName*                  NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF7195BCB10              		 offset:17ecb10                       

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(struct FName* NotifyName, struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload)
=======
// struct FName                   NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6DA0EB490              		 offset:372b490                       

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived"));

	UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (Final, Native, Protected)
// Parameters:
<<<<<<< HEAD
// class UAnimMontage**           Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7195BCA40              		 offset:17eca40                       

void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage** Montage, bool* bInterrupted)
=======
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA0EB3C0              		 offset:372b3c0                       

void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded"));

	UPlayMontageCallbackProxy_OnMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// (Final, Native, Protected)
// Parameters:
<<<<<<< HEAD
// class UAnimMontage**           Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7195BC970              		 offset:17ec970                       

void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage** Montage, bool* bInterrupted)
=======
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA0EB2F0              		 offset:372b2f0                       

void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut"));

	UPlayMontageCallbackProxy_OnMontageBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class USkeletalMeshComponent** InSkeletalMeshComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimMontage**           MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         StartingPosition               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StartingSection                (Parm, ZeroConstructor, IsPlainOldData)
// class UPlayMontageCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7195BC240              		 offset:17ec240                       

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent** InSkeletalMeshComponent, class UAnimMontage** MontageToPlay, float* PlayRate, float* StartingPosition, struct FName* StartingSection)
=======
// class USkeletalMeshComponent*  InSkeletalMeshComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartingPosition               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartingSection                (Parm, ZeroConstructor, IsPlainOldData)
// class UPlayMontageCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA0EABC0              		 offset:372abc0                       

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage"));

	UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params params;
	params.InSkeletalMeshComponent = InSkeletalMeshComponent;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

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
