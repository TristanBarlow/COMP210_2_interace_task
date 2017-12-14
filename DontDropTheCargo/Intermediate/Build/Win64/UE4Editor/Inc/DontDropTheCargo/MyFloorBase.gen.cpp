// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyFloorBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFloorBase() {}
// Cross Module References
	DONTDROPTHECARGO_API UFunction* Z_Construct_UFunction_AMyFloorBase_setFloorTickMovement();
	DONTDROPTHECARGO_API UClass* Z_Construct_UClass_AMyFloorBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DONTDROPTHECARGO_API UClass* Z_Construct_UClass_AMyFloorBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DontDropTheCargo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void AMyFloorBase::StaticRegisterNativesAMyFloorBase()
	{
		UClass* Class = AMyFloorBase::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "setFloorTickMovement", (Native)&AMyFloorBase::execsetFloorTickMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AMyFloorBase_setFloorTickMovement()
	{
		struct MyFloorBase_eventsetFloorTickMovement_Parms
		{
			FVector newMovement;
		};
		UObject* Outer = Z_Construct_UClass_AMyFloorBase();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("setFloorTickMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(MyFloorBase_eventsetFloorTickMovement_Parms));
			UProperty* NewProp_newMovement = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("newMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(newMovement, MyFloorBase_eventsetFloorTickMovement_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("FLOOR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyFloorBase.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Used to set the offset the floor experiences every tick."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyFloorBase_NoRegister()
	{
		return AMyFloorBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyFloorBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_DontDropTheCargo();
			OuterClass = AMyFloorBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AMyFloorBase_setFloorTickMovement());

				UProperty* NewProp_nextTileSpawn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("nextTileSpawn"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(nextTileSpawn, AMyFloorBase), 0x0010000000020005, Z_Construct_UScriptStruct_FTransform());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyFloorBase_setFloorTickMovement(), "setFloorTickMovement"); // 483197623
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyFloorBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyFloorBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyFloorBase.h"));
				MetaData->SetValue(NewProp_nextTileSpawn, TEXT("Category"), TEXT("MapGeneration"));
				MetaData->SetValue(NewProp_nextTileSpawn, TEXT("ModuleRelativePath"), TEXT("MyFloorBase.h"));
				MetaData->SetValue(NewProp_nextTileSpawn, TEXT("ToolTip"), TEXT("The pos the next tile will be spawning from"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyFloorBase, 2468754578);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyFloorBase(Z_Construct_UClass_AMyFloorBase, &AMyFloorBase::StaticClass, TEXT("/Script/DontDropTheCargo"), TEXT("AMyFloorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyFloorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
