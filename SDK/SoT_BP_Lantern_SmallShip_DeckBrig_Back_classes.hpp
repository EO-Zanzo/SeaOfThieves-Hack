#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_SmallShip_DeckBrig_Back_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lantern_SmallShip_DeckBrig_Back.BP_Lantern_SmallShip_DeckBrig_Back_C
// 0x0000 (0x06B9 - 0x06B9)
class ABP_Lantern_SmallShip_DeckBrig_Back_C : public ABP_InteractableShipLantern_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Lantern_SmallShip_DeckBrig_Back.BP_Lantern_SmallShip_DeckBrig_Back_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif