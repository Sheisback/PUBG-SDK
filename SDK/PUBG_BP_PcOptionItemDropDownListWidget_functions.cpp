// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionItemDropDownListWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
<<<<<<< HEAD
// struct FString*                SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UBP_PcOptionItemDropDownListWidget_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
=======
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcOptionItemDropDownListWidget_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature"));

	UBP_PcOptionItemDropDownListWidget_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.ExecuteUbergraph_BP_PcOptionItemDropDownListWidget
// ()
// Parameters:
<<<<<<< HEAD
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UBP_PcOptionItemDropDownListWidget_C::ExecuteUbergraph_BP_PcOptionItemDropDownListWidget(int* EntryPoint)
=======
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcOptionItemDropDownListWidget_C::ExecuteUbergraph_BP_PcOptionItemDropDownListWidget(int EntryPoint)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.ExecuteUbergraph_BP_PcOptionItemDropDownListWidget"));

	UBP_PcOptionItemDropDownListWidget_C_ExecuteUbergraph_BP_PcOptionItemDropDownListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
<<<<<<< HEAD
// struct FString*                KeyStr                         (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UBP_PcOptionItemDropDownListWidget_C::OnSelectionChanged__DelegateSignature(struct FString* KeyStr, TEnumAsByte<ESelectInfo>* SelectionType)
=======
// struct FString                 KeyStr                         (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcOptionItemDropDownListWidget_C::OnSelectionChanged__DelegateSignature(const struct FString& KeyStr, TEnumAsByte<ESelectInfo> SelectionType)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C.OnSelectionChanged__DelegateSignature"));

	UBP_PcOptionItemDropDownListWidget_C_OnSelectionChanged__DelegateSignature_Params params;
	params.KeyStr = KeyStr;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
