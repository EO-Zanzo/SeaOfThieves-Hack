// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_IslandStorageBarrel_Outpost_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IslandStorageBarrel_Outpost.BP_IslandStorageBarrel_Outpost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_IslandStorageBarrel_Outpost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandStorageBarrel_Outpost.BP_IslandStorageBarrel_Outpost_C.UserConstructionScript");

	ABP_IslandStorageBarrel_Outpost_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
