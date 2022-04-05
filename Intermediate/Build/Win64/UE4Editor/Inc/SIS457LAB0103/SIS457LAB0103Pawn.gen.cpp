// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457LAB0103/SIS457LAB0103Pawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIS457LAB0103Pawn() {}
// Cross Module References
	SIS457LAB0103_API UClass* Z_Construct_UClass_ASIS457LAB0103Pawn_NoRegister();
	SIS457LAB0103_API UClass* Z_Construct_UClass_ASIS457LAB0103Pawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SIS457LAB0103();
	SIS457LAB0103_API UClass* Z_Construct_UClass_ASIS457LAB0103Block_NoRegister();
// End Cross Module References
	void ASIS457LAB0103Pawn::StaticRegisterNativesASIS457LAB0103Pawn()
	{
	}
	UClass* Z_Construct_UClass_ASIS457LAB0103Pawn_NoRegister()
	{
		return ASIS457LAB0103Pawn::StaticClass();
	}
	struct Z_Construct_UClass_ASIS457LAB0103Pawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBlockFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBlockFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASIS457LAB0103Pawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457LAB0103,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103Pawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SIS457LAB0103Pawn.h" },
		{ "ModuleRelativePath", "SIS457LAB0103Pawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103Pawn_Statics::NewProp_CurrentBlockFocus_MetaData[] = {
		{ "Category", "SIS457LAB0103Pawn" },
		{ "ModuleRelativePath", "SIS457LAB0103Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASIS457LAB0103Pawn_Statics::NewProp_CurrentBlockFocus = { "CurrentBlockFocus", nullptr, (EPropertyFlags)0x0020080000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASIS457LAB0103Pawn, CurrentBlockFocus), Z_Construct_UClass_ASIS457LAB0103Block_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103Pawn_Statics::NewProp_CurrentBlockFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103Pawn_Statics::NewProp_CurrentBlockFocus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASIS457LAB0103Pawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASIS457LAB0103Pawn_Statics::NewProp_CurrentBlockFocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASIS457LAB0103Pawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASIS457LAB0103Pawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASIS457LAB0103Pawn_Statics::ClassParams = {
		&ASIS457LAB0103Pawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASIS457LAB0103Pawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103Pawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103Pawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103Pawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASIS457LAB0103Pawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASIS457LAB0103Pawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASIS457LAB0103Pawn, 3877680488);
	template<> SIS457LAB0103_API UClass* StaticClass<ASIS457LAB0103Pawn>()
	{
		return ASIS457LAB0103Pawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASIS457LAB0103Pawn(Z_Construct_UClass_ASIS457LAB0103Pawn, &ASIS457LAB0103Pawn::StaticClass, TEXT("/Script/SIS457LAB0103"), TEXT("ASIS457LAB0103Pawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASIS457LAB0103Pawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
