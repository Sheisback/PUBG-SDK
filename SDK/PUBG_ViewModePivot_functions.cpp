// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ViewModePivot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ViewModePivot.ViewModePivot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       
=======
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void AViewModePivot_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ViewModePivot.ViewModePivot_C.UserConstructionScript"));

	AViewModePivot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
