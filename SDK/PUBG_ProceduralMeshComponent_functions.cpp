// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ProceduralMeshComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>*        Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>*        Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>*      UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>*   VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProcMeshTangent>* Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF71C8F3B10              		 offset:4b23b10                       

void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FLinearColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents)
=======
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6DAEE7660              		 offset:4527660                       

void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor"));

	UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>*        Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>*        Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>*      UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FColor>*         VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProcMeshTangent>* Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF71C8F3870              		 offset:4b23870                       

void UProceduralMeshComponent::UpdateMeshSection(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents)
=======
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FColor>          VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6DAEE73C0              		 offset:45273c0                       

void UProceduralMeshComponent::UpdateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection"));

	UProceduralMeshComponent_UpdateMeshSection_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8F3580              		 offset:4b23580                       

void UProceduralMeshComponent::SetMeshSectionVisible(int* SectionIndex, bool* bNewVisibility)
=======
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAEE70D0              		 offset:45270d0                       

void UProceduralMeshComponent::SetMeshSectionVisible(int SectionIndex, bool bNewVisibility)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible"));

	UProceduralMeshComponent_SetMeshSectionVisible_Params params;
	params.SectionIndex = SectionIndex;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// int*                           SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8F34F0              		 offset:4b234f0                       

bool UProceduralMeshComponent::IsMeshSectionVisible(int* SectionIndex)
=======
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAEE7040              		 offset:4527040                       

bool UProceduralMeshComponent::IsMeshSectionVisible(int SectionIndex)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible"));

	UProceduralMeshComponent_IsMeshSectionVisible_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C8F31C0              		 offset:4b231c0                       
=======
// FunctionAddress:0x00007FF6DAEE6D10              		 offset:4526d10                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

int UProceduralMeshComponent::GetNumSections()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections"));

	UProceduralMeshComponent_GetNumSections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>*        Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>*                   Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>*        Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>*      UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>*   VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProcMeshTangent>* Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8F2BE0              		 offset:4b22be0                       

void UProceduralMeshComponent::CreateMeshSection_LinearColor(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FLinearColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents, bool* bCreateCollision)
=======
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAEE6730              		 offset:4526730                       

void UProceduralMeshComponent::CreateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor"));

	UProceduralMeshComponent_CreateMeshSection_LinearColor_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;
	params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>*        Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>*                   Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>*        Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>*      UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FColor>*         VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProcMeshTangent>* Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8F28A0              		 offset:4b228a0                       

void UProceduralMeshComponent::CreateMeshSection(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents, bool* bCreateCollision)
=======
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FColor>          VertexColors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FProcMeshTangent> Tangents                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAEE63F0              		 offset:45263f0                       

void UProceduralMeshComponent::CreateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection"));

	UProceduralMeshComponent_CreateMeshSection_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;
	params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8F23D0              		 offset:4b223d0                       

void UProceduralMeshComponent::ClearMeshSection(int* SectionIndex)
=======
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAEE5F20              		 offset:4525f20                       

void UProceduralMeshComponent::ClearMeshSection(int SectionIndex)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection"));

	UProceduralMeshComponent_ClearMeshSection_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C8F23B0              		 offset:4b223b0                       
=======
// FunctionAddress:0x00007FF6DAEE5F00              		 offset:4525f00                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UProceduralMeshComponent::ClearCollisionConvexMeshes()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes"));

	UProceduralMeshComponent_ClearCollisionConvexMeshes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C8F2390              		 offset:4b22390                       
=======
// FunctionAddress:0x00007FF6DAEE5EE0              		 offset:4525ee0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UProceduralMeshComponent::ClearAllMeshSections()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections"));

	UProceduralMeshComponent_ClearAllMeshSections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// TArray<struct FVector>*        ConvexVerts                    (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C8F2040              		 offset:4b22040                       

void UProceduralMeshComponent::AddCollisionConvexMesh(TArray<struct FVector>* ConvexVerts)
=======
// TArray<struct FVector>         ConvexVerts                    (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DAEE5B90              		 offset:4525b90                       

void UProceduralMeshComponent::AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh"));

	UProceduralMeshComponent_AddCollisionConvexMesh_Params params;
	params.ConvexVerts = ConvexVerts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UProceduralMeshComponent** InProcMesh                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                PlanePosition                  (Parm, IsPlainOldData)
// struct FVector*                PlaneNormal                    (Parm, IsPlainOldData)
// bool*                          bCreateOtherHalf               (Parm, ZeroConstructor, IsPlainOldData)
// class UProceduralMeshComponent* OutOtherHalfProcMesh           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EProcMeshSliceCapOption*       CapOption                      (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     CapMaterial                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8F3640              		 offset:4b23640                       

void UKismetProceduralMeshLibrary::STATIC_SliceProceduralMesh(class UProceduralMeshComponent** InProcMesh, struct FVector* PlanePosition, struct FVector* PlaneNormal, bool* bCreateOtherHalf, EProcMeshSliceCapOption* CapOption, class UMaterialInterface** CapMaterial, class UProceduralMeshComponent** OutOtherHalfProcMesh)
=======
// class UProceduralMeshComponent* InProcMesh                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 PlanePosition                  (Parm, IsPlainOldData)
// struct FVector                 PlaneNormal                    (Parm, IsPlainOldData)
// bool                           bCreateOtherHalf               (Parm, ZeroConstructor, IsPlainOldData)
// class UProceduralMeshComponent* OutOtherHalfProcMesh           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EProcMeshSliceCapOption        CapOption                      (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      CapMaterial                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAEE7190              		 offset:4527190                       

void UKismetProceduralMeshLibrary::STATIC_SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial, class UProceduralMeshComponent** OutOtherHalfProcMesh)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh"));

	UKismetProceduralMeshLibrary_SliceProceduralMesh_Params params;
	params.InProcMesh = InProcMesh;
	params.PlanePosition = PlanePosition;
	params.PlaneNormal = PlaneNormal;
	params.bCreateOtherHalf = bCreateOtherHalf;
	params.CapOption = CapOption;
	params.CapMaterial = CapMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOtherHalfProcMesh != nullptr)
		*OutOtherHalfProcMesh = params.OutOtherHalfProcMesh;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UStaticMesh**            InMesh                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
=======
// class UStaticMesh*             InMesh                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
// TArray<struct FVector>         Vertices                       (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       UVs                            (Parm, OutParm, ZeroConstructor)
// TArray<struct FProcMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C8F31F0              		 offset:4b231f0                       

void UKismetProceduralMeshLibrary::STATIC_GetSectionFromStaticMesh(class UStaticMesh** InMesh, int* LODIndex, int* SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
=======
// FunctionAddress:0x00007FF6DAEE6D40              		 offset:4526d40                       

void UKismetProceduralMeshLibrary::STATIC_GetSectionFromStaticMesh(class UStaticMesh* InMesh, int LODIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh"));

	UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params params;
	params.InMesh = InMesh;
	params.LODIndex = LODIndex;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FVector*                BoxRadius                      (Parm, IsPlainOldData)
=======
// struct FVector                 BoxRadius                      (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
// TArray<struct FVector>         Vertices                       (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector2D>       UVs                            (Parm, OutParm, ZeroConstructor)
// TArray<struct FProcMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C8F2F20              		 offset:4b22f20                       

void UKismetProceduralMeshLibrary::STATIC_GenerateBoxMesh(struct FVector* BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
=======
// FunctionAddress:0x00007FF6DAEE6A70              		 offset:4526a70                       

void UKismetProceduralMeshLibrary::STATIC_GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh"));

	UKismetProceduralMeshLibrary_GenerateBoxMesh_Params params;
	params.BoxRadius = BoxRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           NumX                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumY                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWinding                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF71C8F2730              		 offset:4b22730                       

void UKismetProceduralMeshLibrary::STATIC_CreateGridMeshTriangles(int* NumX, int* NumY, bool* bWinding, TArray<int>* Triangles)
=======
// int                            NumX                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumY                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWinding                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6DAEE6280              		 offset:4526280                       

void UKismetProceduralMeshLibrary::STATIC_CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles"));

	UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params params;
	params.NumX = NumX;
	params.NumY = NumY;
	params.bWinding = bWinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UStaticMeshComponent**   StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// class UProceduralMeshComponent** ProcMeshComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8F2600              		 offset:4b22600                       

void UKismetProceduralMeshLibrary::STATIC_CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent** StaticMeshComponent, int* LODIndex, class UProceduralMeshComponent** ProcMeshComponent, bool* bCreateCollision)
=======
// class UStaticMeshComponent*    StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// class UProceduralMeshComponent* ProcMeshComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAEE6150              		 offset:4526150                       

void UKismetProceduralMeshLibrary::STATIC_CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent"));

	UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.LODIndex = LODIndex;
	params.ProcMeshComponent = ProcMeshComponent;
	params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    Triangles                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
<<<<<<< HEAD
// int*                           Vert0                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Vert1                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Vert2                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Vert3                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8F2450              		 offset:4b22450                       

void UKismetProceduralMeshLibrary::STATIC_ConvertQuadToTriangles(int* Vert0, int* Vert1, int* Vert2, int* Vert3, TArray<int>* Triangles)
=======
// int                            Vert0                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Vert1                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Vert2                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Vert3                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAEE5FA0              		 offset:4525fa0                       

void UKismetProceduralMeshLibrary::STATIC_ConvertQuadToTriangles(int Vert0, int Vert1, int Vert2, int Vert3, TArray<int>* Triangles)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles"));

	UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Params params;
	params.Vert0 = Vert0;
	params.Vert1 = Vert1;
	params.Vert2 = Vert2;
	params.Vert3 = Vert3;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// TArray<struct FVector>*        Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>*                   Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>*      UVs                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FProcMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF71C8F2140              		 offset:4b22140                       

void UKismetProceduralMeshLibrary::STATIC_CalculateTangentsForMesh(TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector2D>* UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents)
=======
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UVs                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FProcMeshTangent> Tangents                       (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6DAEE5C90              		 offset:4525c90                       

void UKismetProceduralMeshLibrary::STATIC_CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh"));

	UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params params;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.UVs = UVs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Normals != nullptr)
		*Normals = params.Normals;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
