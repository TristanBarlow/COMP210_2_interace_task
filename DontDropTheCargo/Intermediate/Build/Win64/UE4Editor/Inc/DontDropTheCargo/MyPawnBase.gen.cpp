// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyPawnBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPawnBase() {}
// Cross Module References
	DONTDROPTHECARGO_API UFunction* Z_Construct_UFunction_AMyPawnBase_setPawnTickMovement();
	DONTDROPTHECARGO_API UClass* Z_Construct_UClass_AMyPawnBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DONTDROPTHECARGO_API UClass* Z_Construct_UClass_AMyPawnBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_DontDropTheCargo();
// End Cross Module References
	void AMyPawnBase::StaticRegisterNativesAMyPawnBase()
	{
		UClass* Class = AMyPawnBase::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "setPawnTickMovement", (Native)&AMyPawnBase::execsetPawnTickMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AMyPawnBase_setPawnTickMovement()
	{
		struct MyPawnBase_eventsetPawnTickMovement_Parms
		{
			FVector newMovement;
		};
		UObject* Outer = Z_Construct_UClass_AMyPawnBase();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("setPawnTickMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(MyPawnBase_eventsetPawnTickMovement_Parms));
			UProperty* NewProp_newMovement = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("newMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(newMovement, MyPawnBase_eventsetPawnTickMovement_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("PawnFunctions"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyPawnBase.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyPawnBase_NoRegister()
	{
		return AMyPawnBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyPawnBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_DontDropTheCargo();
			OuterClass = AMyPawnBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AMyPawnBase_setPawnTickMovement());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyPawnBase_setPawnTickMovement(), "setPawnTickMovement"); // 3716133856
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyPawnBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyPawnBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyPawnBase.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPawnBase, 613006570);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPawnBase(Z_Construct_UClass_AMyPawnBase, &AMyPawnBase::StaticClass, TEXT("/Script/DontDropTheCargo"), TEXT("AMyPawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
