// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WBP_BlackZoneWarning_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BlackZoneWarning.WBP_BlackZoneWarning_C.PlayWarning
// (Public, BlueprintCallable, BlueprintEvent)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       
=======
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UWBP_BlackZoneWarning_C::PlayWarning()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BlackZoneWarning.WBP_BlackZoneWarning_C.PlayWarning"));

	UWBP_BlackZoneWarning_C_PlayWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BlackZoneWarning.WBP_BlackZoneWarning_C.Play Full Warning
// (BlueprintCallable, BlueprintEvent)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       
=======
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UWBP_BlackZoneWarning_C::Play_Full_Warning()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BlackZoneWarning.WBP_BlackZoneWarning_C.Play Full Warning"));

	UWBP_BlackZoneWarning_C_Play_Full_Warning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BlackZoneWarning.WBP_BlackZoneWarning_C.ExecuteUbergraph_WBP_BlackZoneWarning
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       
=======
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UWBP_BlackZoneWarning_C::ExecuteUbergraph_WBP_BlackZoneWarning(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BlackZoneWarning.WBP_BlackZoneWarning_C.ExecuteUbergraph_WBP_BlackZoneWarning"));

	UWBP_BlackZoneWarning_C_ExecuteUbergraph_WBP_BlackZoneWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
