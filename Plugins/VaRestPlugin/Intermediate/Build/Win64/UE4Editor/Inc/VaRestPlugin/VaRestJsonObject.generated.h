// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVaRestJsonObject;
class UVaRestJsonValue;
class UObject;
#ifdef VARESTPLUGIN_VaRestJsonObject_generated_h
#error "VaRestJsonObject.generated.h already included, missing '#pragma once' in VaRestJsonObject.h"
#endif
#define VARESTPLUGIN_VaRestJsonObject_generated_h

#define TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetObjectArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_TARRAY_REF(UVaRestJsonObject*,Z_Param_Out_ObjectArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetObjectArrayField(Z_Param_FieldName,Z_Param_Out_ObjectArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UVaRestJsonObject*>*)Z_Param__Result=P_THIS->GetObjectArrayField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_TARRAY_REF(bool,Z_Param_Out_BoolArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoolArrayField(Z_Param_FieldName,Z_Param_Out_BoolArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<bool>*)Z_Param__Result=P_THIS->GetBoolArrayField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStringArrayField(Z_Param_FieldName,Z_Param_Out_StringArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetStringArrayField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumberArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_TARRAY_REF(float,Z_Param_Out_NumberArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNumberArrayField(Z_Param_FieldName,Z_Param_Out_NumberArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=P_THIS->GetNumberArrayField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObjectField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetObjectField(Z_Param_FieldName,Z_Param_JsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonObject**)Z_Param__Result=P_THIS->GetObjectField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoolField(Z_Param_FieldName,Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBoolField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStringField(Z_Param_FieldName,Z_Param_StringValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetStringField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntegerField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Number); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIntegerField(Z_Param_FieldName,Z_Param_Number); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntegerField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetIntegerField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumberField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Number); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNumberField(Z_Param_FieldName,Z_Param_Number); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNumberField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeJsonObject) \
	{ \
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_InJsonObject); \
		P_GET_UBOOL(Z_Param_Overwrite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MergeJsonObject(Z_Param_InJsonObject,Z_Param_Overwrite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_TARRAY_REF(UVaRestJsonValue*,Z_Param_Out_InArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetArrayField(Z_Param_FieldName,Z_Param_Out_InArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UVaRestJsonValue*>*)Z_Param__Result=P_THIS->GetArrayField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_OBJECT(UVaRestJsonValue,Z_Param_JsonValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetField(Z_Param_FieldName,Z_Param_JsonValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonValue**)Z_Param__Result=P_THIS->GetField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFieldNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetFieldNames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecodeJson) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_JsonString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DecodeJson(Z_Param_JsonString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEncodeJsonToSingleString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->EncodeJsonToSingleString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEncodeJson) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->EncodeJson(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructJsonObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonObject**)Z_Param__Result=UVaRestJsonObject::ConstructJsonObject(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetObjectArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_TARRAY_REF(UVaRestJsonObject*,Z_Param_Out_ObjectArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetObjectArrayField(Z_Param_FieldName,Z_Param_Out_ObjectArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UVaRestJsonObject*>*)Z_Param__Result=P_THIS->GetObjectArrayField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_TARRAY_REF(bool,Z_Param_Out_BoolArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoolArrayField(Z_Param_FieldName,Z_Param_Out_BoolArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<bool>*)Z_Param__Result=P_THIS->GetBoolArrayField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStringArrayField(Z_Param_FieldName,Z_Param_Out_StringArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetStringArrayField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumberArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_TARRAY_REF(float,Z_Param_Out_NumberArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNumberArrayField(Z_Param_FieldName,Z_Param_Out_NumberArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=P_THIS->GetNumberArrayField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObjectField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetObjectField(Z_Param_FieldName,Z_Param_JsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonObject**)Z_Param__Result=P_THIS->GetObjectField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoolField(Z_Param_FieldName,Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBoolField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStringField(Z_Param_FieldName,Z_Param_StringValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetStringField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntegerField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Number); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIntegerField(Z_Param_FieldName,Z_Param_Number); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntegerField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetIntegerField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumberField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Number); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNumberField(Z_Param_FieldName,Z_Param_Number); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNumberField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeJsonObject) \
	{ \
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_InJsonObject); \
		P_GET_UBOOL(Z_Param_Overwrite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MergeJsonObject(Z_Param_InJsonObject,Z_Param_Overwrite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_TARRAY_REF(UVaRestJsonValue*,Z_Param_Out_InArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetArrayField(Z_Param_FieldName,Z_Param_Out_InArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArrayField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UVaRestJsonValue*>*)Z_Param__Result=P_THIS->GetArrayField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_GET_OBJECT(UVaRestJsonValue,Z_Param_JsonValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetField(Z_Param_FieldName,Z_Param_JsonValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonValue**)Z_Param__Result=P_THIS->GetField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasField) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasField(Z_Param_FieldName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFieldNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetFieldNames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecodeJson) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_JsonString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DecodeJson(Z_Param_JsonString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEncodeJsonToSingleString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->EncodeJsonToSingleString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEncodeJson) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->EncodeJson(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructJsonObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonObject**)Z_Param__Result=UVaRestJsonObject::ConstructJsonObject(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaRestJsonObject(); \
	friend VARESTPLUGIN_API class UClass* Z_Construct_UClass_UVaRestJsonObject(); \
public: \
	DECLARE_CLASS(UVaRestJsonObject, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VaRestPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVaRestJsonObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUVaRestJsonObject(); \
	friend VARESTPLUGIN_API class UClass* Z_Construct_UClass_UVaRestJsonObject(); \
public: \
	DECLARE_CLASS(UVaRestJsonObject, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VaRestPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVaRestJsonObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestJsonObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestJsonObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestJsonObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestJsonObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestJsonObject(UVaRestJsonObject&&); \
	NO_API UVaRestJsonObject(const UVaRestJsonObject&); \
public:


#define TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestJsonObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestJsonObject(UVaRestJsonObject&&); \
	NO_API UVaRestJsonObject(const UVaRestJsonObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestJsonObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestJsonObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestJsonObject)


#define TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_PRIVATE_PROPERTY_OFFSET
#define TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_14_PROLOG
#define TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_PRIVATE_PROPERTY_OFFSET \
	TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_RPC_WRAPPERS \
	TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_INCLASS \
	TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_PRIVATE_PROPERTY_OFFSET \
	TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_INCLASS_NO_PURE_DECLS \
	TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VaRestJsonObject."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheBnS_01_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
