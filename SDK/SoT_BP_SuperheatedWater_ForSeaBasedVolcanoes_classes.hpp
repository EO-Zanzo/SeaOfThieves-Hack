#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SuperheatedWater_ForSeaBasedVolcanoes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SuperheatedWater_ForSeaBasedVolcanoes.BP_SuperheatedWater_ForSeaBasedVolcanoes_C
// 0x0000 (0x0630 - 0x0630)
class ABP_SuperheatedWater_ForSeaBasedVolcanoes_C : public ABP_SuperheatedWater_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SuperheatedWater_ForSeaBasedVolcanoes.BP_SuperheatedWater_ForSeaBasedVolcanoes_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
