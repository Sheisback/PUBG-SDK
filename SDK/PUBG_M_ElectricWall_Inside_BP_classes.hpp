#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_M_ElectricWall_Inside_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C
// 0x0020 (0x0488 - 0x0468)
class AM_ElectricWall_Inside_BP_C : public ATslPostProcessEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _____0______0_F1196C2844F052526643A091F7753F02;           // 0x0478(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _____0__Direction_F1196C2844F052526643A091F7753F02;       // 0x047C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          �Є�|�x�;                                                 // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C"));

		return ptr;
	}


	void UserConstructionScript();
	void �Є�|�x�_();
	void ReceiveBeginPlay();
	void Custom_Event();
	void OnSetEffectParameter(struct FString* ParameterName, float* Value);
	void ExecuteUbergraph_M_ElectricWall_Inside_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
