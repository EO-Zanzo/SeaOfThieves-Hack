#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bp_light_volume_sphere_ghost_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bp_light_volume_sphere_ghost_a.bp_light_volume_sphere_ghost_a_C
// 0x0008 (0x0498 - 0x0490)
class Abp_light_volume_sphere_ghost_a_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent0;                                     // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass bp_light_volume_sphere_ghost_a.bp_light_volume_sphere_ghost_a_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
