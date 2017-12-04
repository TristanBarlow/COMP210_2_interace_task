// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef DONTDROPTHECARGO_MyPawnBase_generated_h
#error "MyPawnBase.generated.h already included, missing '#pragma once' in MyPawnBase.h"
#endif
#define DONTDROPTHECARGO_MyPawnBase_generated_h

#define DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetPawnTickMovement) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_newMovement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setPawnTickMovement(Z_Param_newMovement); \
		P_NATIVE_END; \
	}


#define DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetPawnTickMovement) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_newMovement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setPawnTickMovement(Z_Param_newMovement); \
		P_NATIVE_END; \
	}


#define DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawnBase(); \
	friend DONTDROPTHECARGO_API class UClass* Z_Construct_UClass_AMyPawnBase(); \
public: \
	DECLARE_CLASS(AMyPawnBase, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DontDropTheCargo"), NO_API) \
	DECLARE_SERIALIZER(AMyPawnBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyPawnBase(); \
	friend DONTDROPTHECARGO_API class UClass* Z_Construct_UClass_AMyPawnBase(); \
public: \
	DECLARE_CLASS(AMyPawnBase, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DontDropTheCargo"), NO_API) \
	DECLARE_SERIALIZER(AMyPawnBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPawnBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPawnBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawnBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawnBase(AMyPawnBase&&); \
	NO_API AMyPawnBase(const AMyPawnBase&); \
public:


#define DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawnBase(AMyPawnBase&&); \
	NO_API AMyPawnBase(const AMyPawnBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawnBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawnBase)


#define DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_PRIVATE_PROPERTY_OFFSET
#define DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_9_PROLOG
#define DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_PRIVATE_PROPERTY_OFFSET \
	DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_RPC_WRAPPERS \
	DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_INCLASS \
	DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_PRIVATE_PROPERTY_OFFSET \
	DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_INCLASS_NO_PURE_DECLS \
	DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DontDropTheCargo_Source_DontDropTheCargo_MyPawnBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
