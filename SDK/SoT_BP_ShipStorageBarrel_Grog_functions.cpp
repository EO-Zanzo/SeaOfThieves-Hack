// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipStorageBarrel_Grog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_ShipStorageBarrel_Grog_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.GetClosestInteractionPoint");

	ABP_ShipStorageBarrel_Grog_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	UObject::ProcessEvent(fn, &params);

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.ShouldDrawTooltipInWorldSpace
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DesiredTooltipWorldPosition    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ShipStorageBarrel_Grog_C::ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.ShouldDrawTooltipInWorldSpace");

	ABP_ShipStorageBarrel_Grog_C_ShouldDrawTooltipInWorldSpace_Params params;
	params.InInteractor = InInteractor;

	UObject::ProcessEvent(fn, &params);

	if (DesiredTooltipWorldPosition != nullptr)
		*DesiredTooltipWorldPosition = params.DesiredTooltipWorldPosition;

	return params.ReturnValue;
}


// Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShipStorageBarrel_Grog_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C.UserConstructionScript");

	ABP_ShipStorageBarrel_Grog_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
