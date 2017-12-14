// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameModeBase() {}
// Cross Module References
	DONTDROPTHECARGO_API UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister();
	DONTDROPTHECARGO_API UClass* Z_Construct_UClass_AMyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DontDropTheCargo();
	DONTDROPTHECARGO_API UClass* Z_Construct_UClass_AMyFloorBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void AMyGameModeBase::StaticRegisterNativesAMyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister()
	{
		return AMyGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_DontDropTheCargo();
			OuterClass = AMyGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				UProperty* NewProp_myFloorArray = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("myFloorArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(myFloorArray, AMyGameModeBase), 0x0010000000020005);
				UProperty* NewProp_myFloorArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_myFloorArray, TEXT("myFloorArray"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UClass_AMyFloorBase_NoRegister());
				UProperty* NewProp_currentTileNum = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("currentTileNum"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(currentTileNum, AMyGameModeBase), 0x0010000000020005);
				UProperty* NewProp_maxTileNum = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("maxTileNum"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(maxTileNum, AMyGameModeBase), 0x0010000000020005);
				UProperty* NewProp_NextSpawnLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NextSpawnLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NextSpawnLocation, AMyGameModeBase), 0x0010000000020005, Z_Construct_UScriptStruct_FTransform());
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_myFloorArray, TEXT("Category"), TEXT("MapGeneration"));
				MetaData->SetValue(NewProp_myFloorArray, TEXT("ModuleRelativePath"), TEXT("MyGameModeBase.h"));
				MetaData->SetValue(NewProp_currentTileNum, TEXT("Category"), TEXT("MapGeneration"));
				MetaData->SetValue(NewProp_currentTileNum, TEXT("ModuleRelativePath"), TEXT("MyGameModeBase.h"));
				MetaData->SetValue(NewProp_currentTileNum, TEXT("ToolTip"), TEXT("number to be itterated in the BPS"));
				MetaData->SetValue(NewProp_maxTileNum, TEXT("Category"), TEXT("MapGeneration"));
				MetaData->SetValue(NewProp_maxTileNum, TEXT("ModuleRelativePath"), TEXT("MyGameModeBase.h"));
				MetaData->SetValue(NewProp_maxTileNum, TEXT("ToolTip"), TEXT("Max number of tiles to be one the map at one time"));
				MetaData->SetValue(NewProp_NextSpawnLocation, TEXT("Category"), TEXT("MapGeneration"));
				MetaData->SetValue(NewProp_NextSpawnLocation, TEXT("ModuleRelativePath"), TEXT("MyGameModeBase.h"));
				MetaData->SetValue(NewProp_NextSpawnLocation, TEXT("ToolTip"), TEXT("Used to spawn in the next floor piece of the map"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGameModeBase, 1746519352);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameModeBase(Z_Construct_UClass_AMyGameModeBase, &AMyGameModeBase::StaticClass, TEXT("/Script/DontDropTheCargo"), TEXT("AMyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
