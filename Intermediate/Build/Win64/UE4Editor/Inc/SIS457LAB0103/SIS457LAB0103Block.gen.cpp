// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457LAB0103/SIS457LAB0103Block.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIS457LAB0103Block() {}
// Cross Module References
	SIS457LAB0103_API UClass* Z_Construct_UClass_ASIS457LAB0103Block_NoRegister();
	SIS457LAB0103_API UClass* Z_Construct_UClass_ASIS457LAB0103Block();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SIS457LAB0103();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	SIS457LAB0103_API UClass* Z_Construct_UClass_ASIS457LAB0103BlockGrid_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASIS457LAB0103Block::execOnFingerPressedBlock)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASIS457LAB0103Block::execBlockClicked)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp);
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked);
		P_NATIVE_END;
	}
	void ASIS457LAB0103Block::StaticRegisterNativesASIS457LAB0103Block()
	{
		UClass* Class = ASIS457LAB0103Block::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlockClicked", &ASIS457LAB0103Block::execBlockClicked },
			{ "OnFingerPressedBlock", &ASIS457LAB0103Block::execOnFingerPressedBlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics
	{
		struct SIS457LAB0103Block_eventBlockClicked_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonClicked;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonClicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SIS457LAB0103Block_eventBlockClicked_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics::NewProp_ClickedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics::NewProp_ButtonClicked = { "ButtonClicked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SIS457LAB0103Block_eventBlockClicked_Parms, ButtonClicked), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics::NewProp_ClickedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics::NewProp_ButtonClicked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handle the block being clicked */" },
		{ "ModuleRelativePath", "SIS457LAB0103Block.h" },
		{ "ToolTip", "Handle the block being clicked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASIS457LAB0103Block, nullptr, "BlockClicked", nullptr, nullptr, sizeof(SIS457LAB0103Block_eventBlockClicked_Parms), Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics
	{
		struct SIS457LAB0103Block_eventOnFingerPressedBlock_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			UPrimitiveComponent* TouchedComponent;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SIS457LAB0103Block_eventOnFingerPressedBlock_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics::NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SIS457LAB0103Block_eventOnFingerPressedBlock_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics::NewProp_TouchedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics::NewProp_TouchedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics::NewProp_FingerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics::NewProp_TouchedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handle the block being touched  */" },
		{ "ModuleRelativePath", "SIS457LAB0103Block.h" },
		{ "ToolTip", "Handle the block being touched" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASIS457LAB0103Block, nullptr, "OnFingerPressedBlock", nullptr, nullptr, sizeof(SIS457LAB0103Block_eventOnFingerPressedBlock_Parms), Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASIS457LAB0103Block_NoRegister()
	{
		return ASIS457LAB0103Block::StaticClass();
	}
	struct Z_Construct_UClass_ASIS457LAB0103Block_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrangeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrangeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASIS457LAB0103Block_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457LAB0103,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASIS457LAB0103Block_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASIS457LAB0103Block_BlockClicked, "BlockClicked" }, // 730616798
		{ &Z_Construct_UFunction_ASIS457LAB0103Block_OnFingerPressedBlock, "OnFingerPressedBlock" }, // 80319643
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103Block_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A block that can be clicked */" },
		{ "IncludePath", "SIS457LAB0103Block.h" },
		{ "ModuleRelativePath", "SIS457LAB0103Block.h" },
		{ "ToolTip", "A block that can be clicked" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "Comment", "/** Dummy root component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SIS457LAB0103Block.h" },
		{ "ToolTip", "Dummy root component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASIS457LAB0103Block, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_BlockMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Block" },
		{ "Comment", "/** StaticMesh component for the clickable block */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SIS457LAB0103Block.h" },
		{ "ToolTip", "StaticMesh component for the clickable block" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_BlockMesh = { "BlockMesh", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASIS457LAB0103Block, BlockMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_BlockMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_BlockMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "Comment", "/** Pointer to white material used on the focused block */" },
		{ "ModuleRelativePath", "SIS457LAB0103Block.h" },
		{ "ToolTip", "Pointer to white material used on the focused block" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASIS457LAB0103Block, BaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_BaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_BaseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_BlueMaterial_MetaData[] = {
		{ "Comment", "/** Pointer to blue material used on inactive blocks */" },
		{ "ModuleRelativePath", "SIS457LAB0103Block.h" },
		{ "ToolTip", "Pointer to blue material used on inactive blocks" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_BlueMaterial = { "BlueMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASIS457LAB0103Block, BlueMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_BlueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_BlueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_OrangeMaterial_MetaData[] = {
		{ "Comment", "/** Pointer to orange material used on active blocks */" },
		{ "ModuleRelativePath", "SIS457LAB0103Block.h" },
		{ "ToolTip", "Pointer to orange material used on active blocks" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_OrangeMaterial = { "OrangeMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASIS457LAB0103Block, OrangeMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_OrangeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_OrangeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_OwningGrid_MetaData[] = {
		{ "Comment", "/** Grid that owns us */" },
		{ "ModuleRelativePath", "SIS457LAB0103Block.h" },
		{ "ToolTip", "Grid that owns us" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_OwningGrid = { "OwningGrid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASIS457LAB0103Block, OwningGrid), Z_Construct_UClass_ASIS457LAB0103BlockGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_OwningGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_OwningGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASIS457LAB0103Block_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_BlockMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_BaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_BlueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_OrangeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASIS457LAB0103Block_Statics::NewProp_OwningGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASIS457LAB0103Block_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASIS457LAB0103Block>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASIS457LAB0103Block_Statics::ClassParams = {
		&ASIS457LAB0103Block::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASIS457LAB0103Block_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103Block_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0103Block_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0103Block_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASIS457LAB0103Block()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASIS457LAB0103Block_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASIS457LAB0103Block, 228322158);
	template<> SIS457LAB0103_API UClass* StaticClass<ASIS457LAB0103Block>()
	{
		return ASIS457LAB0103Block::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASIS457LAB0103Block(Z_Construct_UClass_ASIS457LAB0103Block, &ASIS457LAB0103Block::StaticClass, TEXT("/Script/SIS457LAB0103"), TEXT("ASIS457LAB0103Block"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASIS457LAB0103Block);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
