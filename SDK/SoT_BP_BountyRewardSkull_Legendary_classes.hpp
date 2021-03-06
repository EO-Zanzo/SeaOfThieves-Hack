#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkull_Legendary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BountyRewardSkull_Legendary.BP_BountyRewardSkull_Legendary_C
// 0x0010 (0x0820 - 0x0810)
class ABP_BountyRewardSkull_Legendary_C : public ABP_BountyRewardSkull_C
{
public:
	class UParticleSystemComponent*                    VFX_Skull_Glow_1st;                                       // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    VFX_Skull_Glow_3rd;                                       // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_BountyRewardSkull_Legendary.BP_BountyRewardSkull_Legendary_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
