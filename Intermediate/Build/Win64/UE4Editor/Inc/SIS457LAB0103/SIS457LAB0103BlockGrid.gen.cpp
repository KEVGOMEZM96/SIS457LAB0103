// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457LAB0103/SIS457LAB0103BlockGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIS457LAB0103BlockGrid() {}
// Cross Module References
	SIS457LAB0103_API UClass* Z_Construct_UClass_ASIS457LAB0103BlockGrid_NoRegister();
	SIS457LAB0103_API UClass* Z_Construct_UClass_ASIS457LAB0103BlockGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SIS457LAB0103();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void ASIS457LAB0103BlockGrid::StaticRegisterNativesASIS457LAB0103BlockGrid()
	{
	}
	UClass* Z_Construct_UClass_ASIS457LAB0103BlockGrid_NoRegister()
	{
		return ASIS457LAB0103BlockGrid::StaticClass();
	}
	struct Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScoreText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MibiografiaText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MibiografiaText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockSpacing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457LAB0103,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Class used to spawn blocks and manage score */" },
		{ "IncludePath", "SIS457LAB0103BlockGrid.h" },
		{ "ModuleRelativePath", "SIS457LAB0103BlockGrid.h" },
		{ "ToolTip", "Class used to spawn blocks and manage score" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "Comment", "/** Dummy root component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SIS457LAB0103BlockGrid.h" },
		{ "ToolTip", "Dummy root component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASIS457LAB0103BlockGrid, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_ScoreText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "Comment", "/** Text component for the score */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SIS457LAB0103BlockGrid.h" },
		{ "ToolTip", "Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_ScoreText = { "ScoreText", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASIS457LAB0103BlockGrid, ScoreText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_ScoreText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_ScoreText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_MibiografiaText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "Comment", "/** Text component for the score */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SIS457LAB0103BlockGrid.h" },
		{ "ToolTip", "Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_MibiografiaText = { "MibiografiaText", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASIS457LAB0103BlockGrid, MibiografiaText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_MibiografiaText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_MibiografiaText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Number of blocks along each side of grid */" },
		{ "ModuleRelativePath", "SIS457LAB0103BlockGrid.h" },
		{ "ToolTip", "Number of blocks along each side of grid" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASIS457LAB0103BlockGrid, Size), METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_BlockSpacing_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Spacing of blocks */" },
		{ "ModuleRelativePath", "SIS457LAB0103BlockGrid.h" },
		{ "ToolTip", "Spacing of blocks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_BlockSpacing = { "BlockSpacing", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASIS457LAB0103BlockGrid, BlockSpacing), METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_BlockSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_BlockSpacing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_ScoreText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_MibiografiaText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::NewProp_BlockSpacing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASIS457LAB0103BlockGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::ClassParams = {
		&ASIS457LAB0103BlockGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASIS457LAB0103BlockGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASIS457LAB0103BlockGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASIS457LAB0103BlockGrid, 865120030);
	template<> SIS457LAB0103_API UClass* StaticClass<ASIS457LAB0103BlockGrid>()
	{
		return ASIS457LAB0103BlockGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASIS457LAB0103BlockGrid(Z_Construct_UClass_ASIS457LAB0103BlockGrid, &ASIS457LAB0103BlockGrid::StaticClass, TEXT("/Script/SIS457LAB0103"), TEXT("ASIS457LAB0103BlockGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASIS457LAB0103BlockGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
