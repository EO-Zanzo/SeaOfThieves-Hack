#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Kraken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Kraken.KrakenTentacle
// 0x0120 (0x05B0 - 0x0490)
class AKrakenTentacle : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0490(0x0010) MISSED OFFSET
	class UHealthComponent*                            HealthComponent;                                          // 0x04A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UActorDamageableComponent*                   DamageableComponent;                                      // 0x04A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVenomComponent*                             VenomComponent;                                           // 0x04B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              VenomChance;                                              // 0x04B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF4];                                      // 0x04BC(0x00F4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenTentacle");
		return ptr;
	}


	void OnDamageToTentacle(const struct FImpactDamageEvent& ImpactDamageEvent);
};


// Class Kraken.EnvQueryContext_AllKrakenOccupiedLocations
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AllKrakenOccupiedLocations : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.EnvQueryContext_AllKrakenOccupiedLocations");
		return ptr;
	}

};


// Class Kraken.EnvQueryContext_AllocatedShip
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AllocatedShip : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.EnvQueryContext_AllocatedShip");
		return ptr;
	}

};


// Class Kraken.EnvQueryContext_AllShipsInWorld
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AllShipsInWorld : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.EnvQueryContext_AllShipsInWorld");
		return ptr;
	}

};


// Class Kraken.EnvQueryContext_PreviousLocation
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_PreviousLocation : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.EnvQueryContext_PreviousLocation");
		return ptr;
	}

};


// Class Kraken.EnvQueryGenerator_KrakenSpawnLocations
// 0x0000 (0x0048 - 0x0048)
class UEnvQueryGenerator_KrakenSpawnLocations : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.EnvQueryGenerator_KrakenSpawnLocations");
		return ptr;
	}

};


// Class Kraken.EnvQueryGenerator_KrakenTentacleSpawnLocations
// 0x0000 (0x0048 - 0x0048)
class UEnvQueryGenerator_KrakenTentacleSpawnLocations : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.EnvQueryGenerator_KrakenTentacleSpawnLocations");
		return ptr;
	}

};


// Class Kraken.Murk
// 0x00A0 (0x0530 - 0x0490)
class AMurk : public AActor
{
public:
	class UMurkWaterModifierZoneComponent*             WaterModifierZone;                                        // 0x0490(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SceneRootComponent;                                       // 0x0498(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        InnerSheet;                                               // 0x04A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        OuterSheet;                                               // 0x04A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              UnderwaterSheetHeightScale;                               // 0x04B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    InnerSheetMaterialInstance;                               // 0x04B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    OuterSheetMaterialInstance;                               // 0x04C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x04C8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.Murk");
		return ptr;
	}

};


// Class Kraken.KrakenShipWrappingTentacle
// 0x01D0 (0x0780 - 0x05B0)
class AKrakenShipWrappingTentacle : public AKrakenTentacle
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x05B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TentacleCollisions;                                       // 0x05B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TentacleMesh;                                             // 0x05C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               DamageZone;                                               // 0x05C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             InteractableBlockingRegions;                              // 0x05D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             KnockbackRegions;                                         // 0x05D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UKrakenShipWrappingTentacleAIAudioComponent* AudioComponent;                                           // 0x05E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 LowDetailTentacleMesh;                                    // 0x05E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStringAssetReference                       HighDetailTentacleMeshAsset;                              // 0x05F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleParams           Params;                                                   // 0x0600(0x00E8) (Edit, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    TentacleDynamicMaterialInstance;                          // 0x06E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMesh*                                 HighDetailTentacleMesh;                                   // 0x06F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FKrakenShipWrappingTentacleAnimationState   CurrentServerAnimationState;                              // 0x06F8(0x0010) (Net, Transient)
	struct FKrakenShipWrappingTentacleAnimationState   PendingServerAnimationState;                              // 0x0708(0x0010) (Net, Transient)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0718(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenShipWrappingTentacle");
		return ptr;
	}


	void OnRep_CurrentServerAnimationState();
};


// Class Kraken.KrakenTelemetryComponent
// 0x0108 (0x01E0 - 0x00D8)
class UKrakenTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x00D8(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenTelemetryComponent");
		return ptr;
	}

};


// Class Kraken.Kraken
// 0x04C0 (0x0950 - 0x0490)
class AKraken : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0490(0x0010) MISSED OFFSET
	float                                              RelevancyDistance;                                        // 0x04A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x04A4(0x0014) MISSED OFFSET
	float                                              InnerRadius;                                              // 0x04B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x04BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EKrakenState>                          CurrentState;                                             // 0x04C0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x177];                                     // 0x04C1(0x0177) MISSED OFFSET
	class AMurk*                                       MurkActor;                                                // 0x0638(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x88];                                      // 0x0640(0x0088) MISSED OFFSET
	class UKrakenAICharacterAudioComponent*            KrakenAudioComponent;                                     // 0x06C8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKrakenTelemetryComponent*                   KrakenTelemetryComponent;                                 // 0x06D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEncounterParams                            SightingEncounterParams;                                  // 0x06D8(0x000C) (Edit, DisableEditOnInstance)
	struct FEncounterParams                            CloseEncounterParams;                                     // 0x06E4(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x10];                                      // 0x06F0(0x0010) MISSED OFFSET
	struct FKrakenParams                               Params;                                                   // 0x0700(0x0158) (Transient)
	int                                                NumTentaclesRemaining;                                    // 0x0858(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xF4];                                      // 0x085C(0x00F4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.Kraken");
		return ptr;
	}


	void Multicast_OnTentacleTakenDamage();
	void AddActorToKnownTargets(class AActor* Target);
};


// Class Kraken.KrakenAnimatedTentacleAnimationDataAsset
// 0x0030 (0x0058 - 0x0028)
class UKrakenAnimatedTentacleAnimationDataAsset : public UDataAsset
{
public:
	class UKrakenAnimatedTentacleAnimationSpecDataAsset* AnimationSpec;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrameTimeDelta;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimationLength;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumFrames;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowLookAround;                                          // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresWaterHeightQuery;                                 // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	float                                              AnimationPlayRateScale;                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FKrakenAnimatedTentacleAnimationBoneTrack> Bones;                                                    // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenAnimatedTentacleAnimationDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenAnimatedTentacleAnimationMappingDataAsset
// 0x0010 (0x0038 - 0x0028)
class UKrakenAnimatedTentacleAnimationMappingDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenAnimatedTentacleMappedAnimation> Animations;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenAnimatedTentacleAnimationMappingDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenAnimatedTentacleAnimationSpecDataAsset
// 0x0010 (0x0038 - 0x0028)
class UKrakenAnimatedTentacleAnimationSpecDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenAnimatedTentacleAnimationSpecBone> Bones;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenAnimatedTentacleAnimationSpecDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenAnimatedTentacleStateAnimationsDataAsset
// 0x0030 (0x0058 - 0x0028)
class UKrakenAnimatedTentacleStateAnimationsDataAsset : public UDataAsset
{
public:
	TAssetPtr<class UKrakenAnimatedTentacleAnimationMappingDataAsset> MappingAssetReference;                                    // 0x0028(0x0020) (Edit)
	TArray<struct FKrakenAnimatedTentacleStateAnimationMapping> States;                                                   // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenAnimatedTentacleStateAnimationsDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenIdleBehaviourParamsDataAsset
// 0x00B8 (0x00E0 - 0x0028)
class UKrakenIdleBehaviourParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenIdleBehaviourParams                  Params;                                                   // 0x0028(0x00B8) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenIdleBehaviourParamsDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenParamsDataAsset
// 0x0158 (0x0180 - 0x0028)
class UKrakenParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenParams                               Params;                                                   // 0x0028(0x0158) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenParamsDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenPlayerGrabbingBehaviourParamsDataAsset
// 0x00D0 (0x00F8 - 0x0028)
class UKrakenPlayerGrabbingBehaviourParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenPlayerGrabbingBehaviourParams        Params;                                                   // 0x0028(0x00D0) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenPlayerGrabbingBehaviourParamsDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UKrakenServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenServiceInterface");
		return ptr;
	}

};


// Class Kraken.KrakenService
// 0x0250 (0x06E0 - 0x0490)
class AKrakenService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0490(0x0008) MISSED OFFSET
	class UKrakenServiceParamsDataAsset*               KrakenServiceParams;                                      // 0x0498(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x178];                                     // 0x04A0(0x0178) MISSED OFFSET
	class AKraken*                                     Kraken;                                                   // 0x0618(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC0];                                      // 0x0620(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenService");
		return ptr;
	}


	void RequestKrakenWithLocation(const struct FVector& SpawnLocation, class AActor* SpawnedForActor);
	bool IsServiceInitialized();
	bool IsKrakenActive();
	void DismissKraken();
};


// Class Kraken.KrakenServiceParamsDataAsset
// 0x0090 (0x00B8 - 0x0028)
class UKrakenServiceParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenServiceParams                        Params;                                                   // 0x0028(0x0090) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenServiceParamsDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenShipHittingBehaviourParamsDataAsset
// 0x0058 (0x0080 - 0x0028)
class UKrakenShipHittingBehaviourParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenShipHittingBehaviourParams           Params;                                                   // 0x0028(0x0058) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenShipHittingBehaviourParamsDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenShipWrappingBehaviourParamsDataAsset
// 0x03E8 (0x0410 - 0x0028)
class UKrakenShipWrappingBehaviourParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FKrakenShipWrappingBehaviourParams          Params;                                                   // 0x0030(0x03E0) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenShipWrappingBehaviourParamsDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenShipWrappingKnockbackRegionComponent
// 0x0080 (0x0330 - 0x02B0)
class UKrakenShipWrappingKnockbackRegionComponent : public USceneComponent
{
public:
	class UBoxComponent*                               KnockbackRegion;                                          // 0x02B0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     KnockbackDirection;                                       // 0x02B8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackTime;                                            // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKnockBackInfo                              KnockbackParams;                                          // 0x02C8(0x0034) (Edit)
	unsigned char                                      UnknownData00[0x34];                                      // 0x02FC(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Kraken.KrakenShipWrappingKnockbackRegionComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
