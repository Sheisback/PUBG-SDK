#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Landscape_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Landscape.LandscapeProxy.EditorApplySpline
struct ALandscapeProxy_EditorApplySpline_Params
{
	class USplineComponent**                           InSplineComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             StartWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EndWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             StartSideFalloff;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EndSideFalloff;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             StartRoll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EndRoll;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumSubdivisions;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRaiseHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLowerHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ULandscapeLayerInfoObject**                  PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
struct ALandscapeProxy_ChangeLODDistanceFactor_Params
{
	float*                                             InLODDistanceFactor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
