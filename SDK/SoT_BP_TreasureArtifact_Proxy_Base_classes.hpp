#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureArtifact_Proxy_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureArtifact_Proxy_Base.BP_TreasureArtifact_Proxy_Base_C
// 0x0010 (0x0900 - 0x08F0)
class ABP_TreasureArtifact_Proxy_Base_C : public AStaticSimpleBootyItemProxy
{
public:
	class UStaticMeshComponent*                        Glint;                                                    // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_TreasureArtifact_Proxy_Base.BP_TreasureArtifact_Proxy_Base_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
