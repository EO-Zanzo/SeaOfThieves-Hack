#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MultiCrewSkeletonThrone_Plunder_Outpost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MultiCrewSkeletonThrone_Plunder_Outpost.BP_MultiCrewSkeletonThrone_Plunder_Outpost_C
// 0x0000 (0x0508 - 0x0508)
class ABP_MultiCrewSkeletonThrone_Plunder_Outpost_C : public ABP_MultiCrewSkeletonThrone_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MultiCrewSkeletonThrone_Plunder_Outpost.BP_MultiCrewSkeletonThrone_Plunder_Outpost_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
