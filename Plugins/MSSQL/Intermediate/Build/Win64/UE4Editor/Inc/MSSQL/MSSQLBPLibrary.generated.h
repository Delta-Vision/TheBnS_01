// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESQLQueryExecutionState : uint8;
class UTexture2D;
struct FMSSQLDataTable;
struct FMSSQLDataRow;
enum class ESQLConnectionState : uint8;
#ifdef MSSQL_MSSQLBPLibrary_generated_h
#error "MSSQLBPLibrary.generated.h already included, missing '#pragma once' in MSSQLBPLibrary.h"
#endif
#define MSSQL_MSSQLBPLibrary_generated_h

#define TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_27_GENERATED_BODY \
	friend MSSQL_API class UScriptStruct* Z_Construct_UScriptStruct_FMSSQLDataRow(); \
	MSSQL_API static class UScriptStruct* StaticStruct();


#define TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_15_GENERATED_BODY \
	friend MSSQL_API class UScriptStruct* Z_Construct_UScriptStruct_FMSSQLDataTable(); \
	MSSQL_API static class UScriptStruct* StaticStruct();


#define TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_52_DELEGATE \
static inline void FQueryExecuting_DelegateWrapper(const FMulticastScriptDelegate& QueryExecuting) \
{ \
	QueryExecuting.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBrowseFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DialogueTitle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileTypes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMSSQLBPLibrary::BrowseFile(Z_Param_DialogueTitle,Z_Param_FileTypes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateImageFromQueryAsync) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UpdateParameter); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::UpdateImageFromQueryAsync(Z_Param_Query,Z_Param_UpdateParameter,Z_Param_ImagePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateImageFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UpdateParameter); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::UpdateImageFromQuery(Z_Param_Query,Z_Param_UpdateParameter,Z_Param_ImagePath,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckQueryExecutionState) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESQLQueryExecutionState*)Z_Param__Result=UMSSQLBPLibrary::CheckQueryExecutionState(Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateDataFromQueryAsync) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::UpdateDataFromQueryAsync(Z_Param_Query); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateDataFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::UpdateDataFromQuery(Z_Param_Query,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedImage) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UMSSQLBPLibrary::GetSelectedImage(Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedTable) \
	{ \
		P_GET_TARRAY_REF(FMSSQLDataTable,Z_Param_Out_ResultByColumn); \
		P_GET_TARRAY_REF(FMSSQLDataRow,Z_Param_Out_ResultByRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::GetSelectedTable(Z_Param_Out_ResultByColumn,Z_Param_Out_ResultByRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectImageFromQueryAsync) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::SelectImageFromQueryAsync(Z_Param_Query); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectDataFromQueryAsync) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::SelectDataFromQueryAsync(Z_Param_Query); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectDataFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_GET_TARRAY_REF(FMSSQLDataTable,Z_Param_Out_ResultByColumn); \
		P_GET_TARRAY_REF(FMSSQLDataRow,Z_Param_Out_ResultByRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::SelectDataFromQuery(Z_Param_Query,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMessage,Z_Param_Out_ResultByColumn,Z_Param_Out_ResultByRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectImageFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UMSSQLBPLibrary::SelectImageFromQuery(Z_Param_Query,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckConnectionState) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESQLConnectionState*)Z_Param__Result=UMSSQLBPLibrary::CheckConnectionState(Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConnectionProperties) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Server); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DBName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExtraParam); \
		P_GET_UBOOL(Z_Param_IsTrusted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::SetConnectionProperties(Z_Param_Server,Z_Param_DBName,Z_Param_UserID,Z_Param_Password,Z_Param_ExtraParam,Z_Param_IsTrusted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAuthenticateUser) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Domain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMSSQLBPLibrary::AuthenticateUser(Z_Param_UserName,Z_Param_Password,Z_Param_Domain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentUser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMSSQLBPLibrary::GetCurrentUser(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDomain) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMSSQLBPLibrary::GetCurrentDomain(); \
		P_NATIVE_END; \
	}


#define TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBrowseFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DialogueTitle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileTypes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMSSQLBPLibrary::BrowseFile(Z_Param_DialogueTitle,Z_Param_FileTypes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateImageFromQueryAsync) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UpdateParameter); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::UpdateImageFromQueryAsync(Z_Param_Query,Z_Param_UpdateParameter,Z_Param_ImagePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateImageFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UpdateParameter); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::UpdateImageFromQuery(Z_Param_Query,Z_Param_UpdateParameter,Z_Param_ImagePath,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckQueryExecutionState) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESQLQueryExecutionState*)Z_Param__Result=UMSSQLBPLibrary::CheckQueryExecutionState(Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateDataFromQueryAsync) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::UpdateDataFromQueryAsync(Z_Param_Query); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateDataFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::UpdateDataFromQuery(Z_Param_Query,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedImage) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UMSSQLBPLibrary::GetSelectedImage(Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedTable) \
	{ \
		P_GET_TARRAY_REF(FMSSQLDataTable,Z_Param_Out_ResultByColumn); \
		P_GET_TARRAY_REF(FMSSQLDataRow,Z_Param_Out_ResultByRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::GetSelectedTable(Z_Param_Out_ResultByColumn,Z_Param_Out_ResultByRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectImageFromQueryAsync) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::SelectImageFromQueryAsync(Z_Param_Query); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectDataFromQueryAsync) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::SelectDataFromQueryAsync(Z_Param_Query); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectDataFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_GET_TARRAY_REF(FMSSQLDataTable,Z_Param_Out_ResultByColumn); \
		P_GET_TARRAY_REF(FMSSQLDataRow,Z_Param_Out_ResultByRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::SelectDataFromQuery(Z_Param_Query,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMessage,Z_Param_Out_ResultByColumn,Z_Param_Out_ResultByRow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectImageFromQuery) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UMSSQLBPLibrary::SelectImageFromQuery(Z_Param_Query,Z_Param_Out_IsSuccess,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckConnectionState) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESQLConnectionState*)Z_Param__Result=UMSSQLBPLibrary::CheckConnectionState(Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConnectionProperties) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Server); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DBName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExtraParam); \
		P_GET_UBOOL(Z_Param_IsTrusted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMSSQLBPLibrary::SetConnectionProperties(Z_Param_Server,Z_Param_DBName,Z_Param_UserID,Z_Param_Password,Z_Param_ExtraParam,Z_Param_IsTrusted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAuthenticateUser) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Domain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMSSQLBPLibrary::AuthenticateUser(Z_Param_UserName,Z_Param_Password,Z_Param_Domain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentUser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMSSQLBPLibrary::GetCurrentUser(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDomain) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMSSQLBPLibrary::GetCurrentDomain(); \
		P_NATIVE_END; \
	}


#define TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMSSQLBPLibrary(); \
	friend MSSQL_API class UClass* Z_Construct_UClass_UMSSQLBPLibrary(); \
public: \
	DECLARE_CLASS(UMSSQLBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MSSQL"), NO_API) \
	DECLARE_SERIALIZER(UMSSQLBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUMSSQLBPLibrary(); \
	friend MSSQL_API class UClass* Z_Construct_UClass_UMSSQLBPLibrary(); \
public: \
	DECLARE_CLASS(UMSSQLBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MSSQL"), NO_API) \
	DECLARE_SERIALIZER(UMSSQLBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMSSQLBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMSSQLBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMSSQLBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMSSQLBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMSSQLBPLibrary(UMSSQLBPLibrary&&); \
	NO_API UMSSQLBPLibrary(const UMSSQLBPLibrary&); \
public:


#define TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMSSQLBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMSSQLBPLibrary(UMSSQLBPLibrary&&); \
	NO_API UMSSQLBPLibrary(const UMSSQLBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMSSQLBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMSSQLBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMSSQLBPLibrary)


#define TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_PRIVATE_PROPERTY_OFFSET
#define TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_61_PROLOG
#define TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_PRIVATE_PROPERTY_OFFSET \
	TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_RPC_WRAPPERS \
	TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_INCLASS \
	TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_PRIVATE_PROPERTY_OFFSET \
	TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_INCLASS_NO_PURE_DECLS \
	TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheBnS_01_Plugins_MSSQL_Source_MSSQL_Public_MSSQLBPLibrary_h


#define FOREACH_ENUM_ESQLQUERYEXECUTIONSTATE(op) \
	op(ESQLQueryExecutionState::Executing) \
	op(ESQLQueryExecutionState::Success) \
	op(ESQLQueryExecutionState::Failed) 
#define FOREACH_ENUM_ESQLCONNECTIONSTATE(op) \
	op(ESQLConnectionState::Broken) \
	op(ESQLConnectionState::Closed) \
	op(ESQLConnectionState::Connecting) \
	op(ESQLConnectionState::Executing) \
	op(ESQLConnectionState::Fetching) \
	op(ESQLConnectionState::Open) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
