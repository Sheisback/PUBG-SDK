#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Sanhok_Environment_Water_Drop_Tiny_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Sanhok_Environment_Water_Drop_Tiny_BP.P_Sanhok_Environment_Water_Drop_Tiny_BP_C
<<<<<<< HEAD
// 0x0008 (0x04B8 - 0x04B0)
class AP_Sanhok_Environment_Water_Drop_Tiny_BP_C : public ATslParticleEnvironment
{
public:
	float                                              SpawnRateMin;                                             // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpawnRateMax;                                             // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
=======
// 0x0008 (0x04D8 - 0x04D0)
class AP_Sanhok_Environment_Water_Drop_Tiny_BP_C : public ATslParticleEnvironment
{
public:
	float                                              SpawnRateMin;                                             // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpawnRateMax;                                             // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass P_Sanhok_Environment_Water_Drop_Tiny_BP.P_Sanhok_Environment_Water_Drop_Tiny_BP_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
