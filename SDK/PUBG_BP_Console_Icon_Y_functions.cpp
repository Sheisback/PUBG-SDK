// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Console_Icon_Y_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Console_Icon_Y.BP_Console_Icon_Y_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       
=======
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UBP_Console_Icon_Y_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Console_Icon_Y.BP_Console_Icon_Y_C.PreConstruct"));

	UBP_Console_Icon_Y_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Console_Icon_Y.BP_Console_Icon_Y_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       
=======
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UBP_Console_Icon_Y_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Console_Icon_Y.BP_Console_Icon_Y_C.Construct"));

	UBP_Console_Icon_Y_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Console_Icon_Y.BP_Console_Icon_Y_C.ExecuteUbergraph_BP_Console_Icon_Y
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       
=======
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UBP_Console_Icon_Y_C::ExecuteUbergraph_BP_Console_Icon_Y(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Console_Icon_Y.BP_Console_Icon_Y_C.ExecuteUbergraph_BP_Console_Icon_Y"));

	UBP_Console_Icon_Y_C_ExecuteUbergraph_BP_Console_Icon_Y_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
