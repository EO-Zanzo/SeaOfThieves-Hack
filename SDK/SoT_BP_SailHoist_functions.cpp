// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SailHoist_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SailHoist.BP_SailHoist_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockableInfo ABP_SailHoist_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SailHoist.BP_SailHoist_C.GetDockableInfo");

	ABP_SailHoist_C_GetDockableInfo_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_SailHoist.BP_SailHoist_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SailHoist_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SailHoist.BP_SailHoist_C.UserConstructionScript");

	ABP_SailHoist_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
