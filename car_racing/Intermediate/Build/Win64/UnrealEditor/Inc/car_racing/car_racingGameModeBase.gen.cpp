// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "car_racing/car_racingGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecar_racingGameModeBase() {}
// Cross Module References
	CAR_RACING_API UClass* Z_Construct_UClass_Acar_racingGameModeBase_NoRegister();
	CAR_RACING_API UClass* Z_Construct_UClass_Acar_racingGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_car_racing();
// End Cross Module References
	void Acar_racingGameModeBase::StaticRegisterNativesAcar_racingGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Acar_racingGameModeBase);
	UClass* Z_Construct_UClass_Acar_racingGameModeBase_NoRegister()
	{
		return Acar_racingGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Acar_racingGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acar_racingGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_car_racing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acar_racingGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "car_racingGameModeBase.h" },
		{ "ModuleRelativePath", "car_racingGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acar_racingGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acar_racingGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Acar_racingGameModeBase_Statics::ClassParams = {
		&Acar_racingGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Acar_racingGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Acar_racingGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acar_racingGameModeBase()
	{
		if (!Z_Registration_Info_UClass_Acar_racingGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Acar_racingGameModeBase.OuterSingleton, Z_Construct_UClass_Acar_racingGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Acar_racingGameModeBase.OuterSingleton;
	}
	template<> CAR_RACING_API UClass* StaticClass<Acar_racingGameModeBase>()
	{
		return Acar_racingGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acar_racingGameModeBase);
	struct Z_CompiledInDeferFile_FID_car_racing_Source_car_racing_car_racingGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_racing_Source_car_racing_car_racingGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Acar_racingGameModeBase, Acar_racingGameModeBase::StaticClass, TEXT("Acar_racingGameModeBase"), &Z_Registration_Info_UClass_Acar_racingGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Acar_racingGameModeBase), 341156629U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_racing_Source_car_racing_car_racingGameModeBase_h_2801380400(TEXT("/Script/car_racing"),
		Z_CompiledInDeferFile_FID_car_racing_Source_car_racing_car_racingGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_car_racing_Source_car_racing_car_racingGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
