#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Watercrafts_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Watercrafts.Watercraft.OnRigidBodyWake
struct AWatercraft_OnRigidBodyWake_Params
{
	struct FName                                       InBoneName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Watercrafts.Watercraft.OnRigidBodySleep
struct AWatercraft_OnRigidBodySleep_Params
{
	struct FName                                       InBoneName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables
struct ARowboat_SetAlwaysEnabledInteractables_Params
{
	TArray<class UChildActorComponent*>                InAlwaysEnabledInteractables;                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Watercrafts.Rowboat.OnRep_IsSinking
struct ARowboat_OnRep_IsSinking_Params
{
};

// Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft
struct UWatercraftBlueprintFunctionLibrary_SpawnWatercraft_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WatercraftClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AWatercraft*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
