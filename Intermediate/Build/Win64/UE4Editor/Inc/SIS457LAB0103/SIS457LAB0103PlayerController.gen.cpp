// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457LAB0103/SIS457LAB0103PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIS457LAB0103PlayerController() {}
// Cross Module References
	SIS457LAB0103_API UClass* Z_Construct_UClass_ASIS457LAB0103PlayerController_NoRegister();
	SIS457LAB0103_API UClass* Z_Construct_UClass_ASIS457LAB0103PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SIS457LAB0103();
// End Cross Module References
	void ASIS457LAB0103PlayerController::StaticRegisterNativesASIS457LAB0103PlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASIS457LAB0103PlayerController_NoRegister()
	{
		return ASIS457LAB0103PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASIS457LAB0103PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASIS457LAB0103PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457LAB0103,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** PlayerController class used to enable cursor */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SIS457LAB0103PlayerController.h" },
		{ "ModuleRelativePath", "SIS457LAB0103PlayerController.h" },
		{ "ToolTip", "PlayerController class used to enable cursor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASIS457LAB0103PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASIS457LAB0103PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASIS457LAB0103PlayerController_Statics::ClassParams = {
		&ASIS457LAB0103PlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASIS457LAB0103PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASIS457LAB0103PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASIS457LAB0103PlayerController, 459397341);
	template<> SIS457LAB0103_API UClass* StaticClass<ASIS457LAB0103PlayerController>()
	{
		return ASIS457LAB0103PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASIS457LAB0103PlayerController(Z_Construct_UClass_ASIS457LAB0103PlayerController, &ASIS457LAB0103PlayerController::StaticClass, TEXT("/Script/SIS457LAB0103"), TEXT("ASIS457LAB0103PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASIS457LAB0103PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
