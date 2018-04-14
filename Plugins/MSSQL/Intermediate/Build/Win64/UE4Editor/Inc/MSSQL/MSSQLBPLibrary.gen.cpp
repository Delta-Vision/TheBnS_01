// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MSSQLBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSSQLBPLibrary() {}
// Cross Module References
	MSSQL_API UFunction* Z_Construct_UDelegateFunction_MSSQL_QueryExecuting__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MSSQL();
	MSSQL_API UEnum* Z_Construct_UEnum_MSSQL_ESQLQueryExecutionState();
	MSSQL_API UEnum* Z_Construct_UEnum_MSSQL_ESQLConnectionState();
	MSSQL_API UScriptStruct* Z_Construct_UScriptStruct_FMSSQLDataRow();
	MSSQL_API UScriptStruct* Z_Construct_UScriptStruct_FMSSQLDataTable();
	MSSQL_API UClass* Z_Construct_UClass_UMSSQLBPLibrary_NoRegister();
	MSSQL_API UClass* Z_Construct_UClass_UMSSQLBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_AuthenticateUser();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_BrowseFile();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_CheckConnectionState();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_CheckQueryExecutionState();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_GetCurrentDomain();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_GetCurrentUser();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_GetSelectedImage();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_GetSelectedTable();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_SelectDataFromQuery();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_SelectDataFromQueryAsync();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_SelectImageFromQuery();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_SelectImageFromQueryAsync();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_SetConnectionProperties();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_UpdateDataFromQuery();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_UpdateDataFromQueryAsync();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_UpdateImageFromQuery();
	MSSQL_API UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_UpdateImageFromQueryAsync();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_MSSQL_QueryExecuting__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MSSQL, "QueryExecuting__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ESQLQueryExecutionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MSSQL_ESQLQueryExecutionState, Z_Construct_UPackage__Script_MSSQL(), TEXT("ESQLQueryExecutionState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQLQueryExecutionState(ESQLQueryExecutionState_StaticEnum, TEXT("/Script/MSSQL"), TEXT("ESQLQueryExecutionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MSSQL_ESQLQueryExecutionState_CRC() { return 923124604U; }
	UEnum* Z_Construct_UEnum_MSSQL_ESQLQueryExecutionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MSSQL();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQLQueryExecutionState"), 0, Get_Z_Construct_UEnum_MSSQL_ESQLQueryExecutionState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESQLQueryExecutionState::Executing", (int64)ESQLQueryExecutionState::Executing },
				{ "ESQLQueryExecutionState::Success", (int64)ESQLQueryExecutionState::Success },
				{ "ESQLQueryExecutionState::Failed", (int64)ESQLQueryExecutionState::Failed },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Executing.DisplayName", "Executing" },
				{ "Failed.DisplayName", "Failed" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "Success.DisplayName", "Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MSSQL,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESQLQueryExecutionState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESQLQueryExecutionState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESQLConnectionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MSSQL_ESQLConnectionState, Z_Construct_UPackage__Script_MSSQL(), TEXT("ESQLConnectionState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQLConnectionState(ESQLConnectionState_StaticEnum, TEXT("/Script/MSSQL"), TEXT("ESQLConnectionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MSSQL_ESQLConnectionState_CRC() { return 548516778U; }
	UEnum* Z_Construct_UEnum_MSSQL_ESQLConnectionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MSSQL();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQLConnectionState"), 0, Get_Z_Construct_UEnum_MSSQL_ESQLConnectionState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESQLConnectionState::Broken", (int64)ESQLConnectionState::Broken },
				{ "ESQLConnectionState::Closed", (int64)ESQLConnectionState::Closed },
				{ "ESQLConnectionState::Connecting", (int64)ESQLConnectionState::Connecting },
				{ "ESQLConnectionState::Executing", (int64)ESQLConnectionState::Executing },
				{ "ESQLConnectionState::Fetching", (int64)ESQLConnectionState::Fetching },
				{ "ESQLConnectionState::Open", (int64)ESQLConnectionState::Open },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Broken.DisplayName", "Broken" },
				{ "Closed.DisplayName", "Closed" },
				{ "Connecting.DisplayName", "Connecting" },
				{ "Executing.DisplayName", "Executing" },
				{ "Fetching.DisplayName", "Fetching" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "Open.DisplayName", "Open" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MSSQL,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESQLConnectionState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESQLConnectionState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMSSQLDataRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MSSQL_API uint32 Get_Z_Construct_UScriptStruct_FMSSQLDataRow_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSSQLDataRow, Z_Construct_UPackage__Script_MSSQL(), TEXT("MSSQLDataRow"), sizeof(FMSSQLDataRow), Get_Z_Construct_UScriptStruct_FMSSQLDataRow_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMSSQLDataRow(FMSSQLDataRow::StaticStruct, TEXT("/Script/MSSQL"), TEXT("MSSQLDataRow"), false, nullptr, nullptr);
static struct FScriptStruct_MSSQL_StaticRegisterNativesFMSSQLDataRow
{
	FScriptStruct_MSSQL_StaticRegisterNativesFMSSQLDataRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MSSQLDataRow")),new UScriptStruct::TCppStructOps<FMSSQLDataRow>);
	}
} ScriptStruct_MSSQL_StaticRegisterNativesFMSSQLDataRow;
	UScriptStruct* Z_Construct_UScriptStruct_FMSSQLDataRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMSSQLDataRow_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MSSQL();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MSSQLDataRow"), sizeof(FMSSQLDataRow), Get_Z_Construct_UScriptStruct_FMSSQLDataRow_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "MSSQL|Tables" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSSQLDataRow>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowData_MetaData[] = {
				{ "Category", "SQLDataRow" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RowData = { UE4CodeGen_Private::EPropertyClass::Array, "RowData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMSSQLDataRow, RowData), METADATA_PARAMS(NewProp_RowData_MetaData, ARRAY_COUNT(NewProp_RowData_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RowData_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "RowData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowData_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MSSQL,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MSSQLDataRow",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMSSQLDataRow),
				alignof(FMSSQLDataRow),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMSSQLDataRow_CRC() { return 2098870358U; }
class UScriptStruct* FMSSQLDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MSSQL_API uint32 Get_Z_Construct_UScriptStruct_FMSSQLDataTable_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSSQLDataTable, Z_Construct_UPackage__Script_MSSQL(), TEXT("MSSQLDataTable"), sizeof(FMSSQLDataTable), Get_Z_Construct_UScriptStruct_FMSSQLDataTable_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMSSQLDataTable(FMSSQLDataTable::StaticStruct, TEXT("/Script/MSSQL"), TEXT("MSSQLDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_MSSQL_StaticRegisterNativesFMSSQLDataTable
{
	FScriptStruct_MSSQL_StaticRegisterNativesFMSSQLDataTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MSSQLDataTable")),new UScriptStruct::TCppStructOps<FMSSQLDataTable>);
	}
} ScriptStruct_MSSQL_StaticRegisterNativesFMSSQLDataTable;
	UScriptStruct* Z_Construct_UScriptStruct_FMSSQLDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMSSQLDataTable_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MSSQL();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MSSQLDataTable"), sizeof(FMSSQLDataTable), Get_Z_Construct_UScriptStruct_FMSSQLDataTable_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "MSSQL|Tables" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSSQLDataTable>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnData_MetaData[] = {
				{ "Category", "SQLDataTable" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColumnData = { UE4CodeGen_Private::EPropertyClass::Array, "ColumnData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMSSQLDataTable, ColumnData), METADATA_PARAMS(NewProp_ColumnData_MetaData, ARRAY_COUNT(NewProp_ColumnData_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ColumnData_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ColumnData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[] = {
				{ "Category", "SQLDataTable" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ColumnName = { UE4CodeGen_Private::EPropertyClass::Str, "ColumnName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMSSQLDataTable, ColumnName), METADATA_PARAMS(NewProp_ColumnName_MetaData, ARRAY_COUNT(NewProp_ColumnName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColumnData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColumnData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColumnName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MSSQL,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MSSQLDataTable",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMSSQLDataTable),
				alignof(FMSSQLDataTable),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMSSQLDataTable_CRC() { return 3964830720U; }
	void UMSSQLBPLibrary::StaticRegisterNativesUMSSQLBPLibrary()
	{
		UClass* Class = UMSSQLBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthenticateUser", &UMSSQLBPLibrary::execAuthenticateUser },
			{ "BrowseFile", &UMSSQLBPLibrary::execBrowseFile },
			{ "CheckConnectionState", &UMSSQLBPLibrary::execCheckConnectionState },
			{ "CheckQueryExecutionState", &UMSSQLBPLibrary::execCheckQueryExecutionState },
			{ "GetCurrentDomain", &UMSSQLBPLibrary::execGetCurrentDomain },
			{ "GetCurrentUser", &UMSSQLBPLibrary::execGetCurrentUser },
			{ "GetSelectedImage", &UMSSQLBPLibrary::execGetSelectedImage },
			{ "GetSelectedTable", &UMSSQLBPLibrary::execGetSelectedTable },
			{ "SelectDataFromQuery", &UMSSQLBPLibrary::execSelectDataFromQuery },
			{ "SelectDataFromQueryAsync", &UMSSQLBPLibrary::execSelectDataFromQueryAsync },
			{ "SelectImageFromQuery", &UMSSQLBPLibrary::execSelectImageFromQuery },
			{ "SelectImageFromQueryAsync", &UMSSQLBPLibrary::execSelectImageFromQueryAsync },
			{ "SetConnectionProperties", &UMSSQLBPLibrary::execSetConnectionProperties },
			{ "UpdateDataFromQuery", &UMSSQLBPLibrary::execUpdateDataFromQuery },
			{ "UpdateDataFromQueryAsync", &UMSSQLBPLibrary::execUpdateDataFromQueryAsync },
			{ "UpdateImageFromQuery", &UMSSQLBPLibrary::execUpdateImageFromQuery },
			{ "UpdateImageFromQueryAsync", &UMSSQLBPLibrary::execUpdateImageFromQueryAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_AuthenticateUser()
	{
		struct MSSQLBPLibrary_eventAuthenticateUser_Parms
		{
			FString UserName;
			FString Password;
			FString Domain;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MSSQLBPLibrary_eventAuthenticateUser_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MSSQLBPLibrary_eventAuthenticateUser_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Domain = { UE4CodeGen_Private::EPropertyClass::Str, "Domain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventAuthenticateUser_Parms, Domain), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password = { UE4CodeGen_Private::EPropertyClass::Str, "Password", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventAuthenticateUser_Parms, Password), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName = { UE4CodeGen_Private::EPropertyClass::Str, "UserName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventAuthenticateUser_Parms, UserName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Domain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Password,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "LDAP" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Authenticates the User against the Windows Credentials. This only works if the current Windows user requires a password to login\n\n@param        UserName        Windows UserName. Can be obtained from the GetCurrentUser() function\n@param        Password        Windows Password\n@param        Domain      PC Domain. Can be obtained from the GetCurrentDomain() function" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "AuthenticateUser", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MSSQLBPLibrary_eventAuthenticateUser_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_BrowseFile()
	{
		struct MSSQLBPLibrary_eventBrowseFile_Parms
		{
			FString DialogueTitle;
			FString FileTypes;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventBrowseFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileTypes = { UE4CodeGen_Private::EPropertyClass::Str, "FileTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventBrowseFile_Parms, FileTypes), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogueTitle = { UE4CodeGen_Private::EPropertyClass::Str, "DialogueTitle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventBrowseFile_Parms, DialogueTitle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueTitle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Browse File from Hard drive\n\n@param        DialogueTitle    Title that will show up in the Browse Dialogue\n@param        FileTypes            Filtered File Types that will be displayed in the Browse Dialogue" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "BrowseFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MSSQLBPLibrary_eventBrowseFile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_CheckConnectionState()
	{
		struct MSSQLBPLibrary_eventCheckConnectionState_Parms
		{
			FString ErrorMessage;
			ESQLConnectionState ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventCheckConnectionState_Parms, ReturnValue), Z_Construct_UEnum_MSSQL_ESQLConnectionState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventCheckConnectionState_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MSSQL Server" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Checks the current connection state" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "CheckConnectionState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MSSQLBPLibrary_eventCheckConnectionState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_CheckQueryExecutionState()
	{
		struct MSSQLBPLibrary_eventCheckQueryExecutionState_Parms
		{
			FString ErrorMessage;
			ESQLQueryExecutionState ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventCheckQueryExecutionState_Parms, ReturnValue), Z_Construct_UEnum_MSSQL_ESQLQueryExecutionState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventCheckQueryExecutionState_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MSSQL Server|Update" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Checks for the completion of Asynchronous exceution of Update or Select query\n\n@param        Query           Query which is to be executed to the database\n@param        IsSuccess           Returns true if the Query execution is successful\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "CheckQueryExecutionState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MSSQLBPLibrary_eventCheckQueryExecutionState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_GetCurrentDomain()
	{
		struct MSSQLBPLibrary_eventGetCurrentDomain_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventGetCurrentDomain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "LDAP" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Gets the Current Domain of the PC" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "GetCurrentDomain", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MSSQLBPLibrary_eventGetCurrentDomain_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_GetCurrentUser()
	{
		struct MSSQLBPLibrary_eventGetCurrentUser_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventGetCurrentUser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "LDAP" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Gets the Current Windows Login User Name" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "GetCurrentUser", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MSSQLBPLibrary_eventGetCurrentUser_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_GetSelectedImage()
	{
		struct MSSQLBPLibrary_eventGetSelectedImage_Parms
		{
			bool IsSuccess;
			FString ErrorMessage;
			UTexture2D* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventGetSelectedImage_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventGetSelectedImage_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_IsSuccess_SetBit = [](void* Obj){ ((MSSQLBPLibrary_eventGetSelectedImage_Parms*)Obj)->IsSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MSSQLBPLibrary_eventGetSelectedImage_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsSuccess,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MSSQL Server|Select" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Gets the Selected Image from the database after the asynchronous select query has been successfully executed\n\n@param        ResultByColumn  Returns the result of the Selected Query as an array of SQLDataTable structure\n@param        ResultByRow     Returns the result of the Selected Query as an array of SQLDataRow structure" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "GetSelectedImage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MSSQLBPLibrary_eventGetSelectedImage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_GetSelectedTable()
	{
		struct MSSQLBPLibrary_eventGetSelectedTable_Parms
		{
			TArray<FMSSQLDataTable> ResultByColumn;
			TArray<FMSSQLDataRow> ResultByRow;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultByRow = { UE4CodeGen_Private::EPropertyClass::Array, "ResultByRow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventGetSelectedTable_Parms, ResultByRow), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultByRow_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ResultByRow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMSSQLDataRow, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultByColumn = { UE4CodeGen_Private::EPropertyClass::Array, "ResultByColumn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventGetSelectedTable_Parms, ResultByColumn), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultByColumn_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ResultByColumn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMSSQLDataTable, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByRow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByRow_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByColumn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByColumn_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MSSql Server|Select" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Gets the Selected data from the database after the asynchronous select query has been successfully executed\n\n@param        ResultByColumn  Returns the result of the Selected Query as an array of SQLDataTable structure\n@param        ResultByRow     Returns the result of the Selected Query as an array of SQLDataRow structure" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "GetSelectedTable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MSSQLBPLibrary_eventGetSelectedTable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_SelectDataFromQuery()
	{
		struct MSSQLBPLibrary_eventSelectDataFromQuery_Parms
		{
			FString Query;
			bool IsSuccess;
			FString ErrorMessage;
			TArray<FMSSQLDataTable> ResultByColumn;
			TArray<FMSSQLDataRow> ResultByRow;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultByRow = { UE4CodeGen_Private::EPropertyClass::Array, "ResultByRow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventSelectDataFromQuery_Parms, ResultByRow), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultByRow_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ResultByRow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMSSQLDataRow, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultByColumn = { UE4CodeGen_Private::EPropertyClass::Array, "ResultByColumn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventSelectDataFromQuery_Parms, ResultByColumn), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultByColumn_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ResultByColumn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMSSQLDataTable, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventSelectDataFromQuery_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_IsSuccess_SetBit = [](void* Obj){ ((MSSQLBPLibrary_eventSelectDataFromQuery_Parms*)Obj)->IsSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MSSQLBPLibrary_eventSelectDataFromQuery_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query = { UE4CodeGen_Private::EPropertyClass::Str, "Query", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventSelectDataFromQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByRow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByRow_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByColumn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByColumn_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsSuccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Query,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MSSQL Server|Select" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Selects data from the database\n\n@param        Query           Select Query which selects data from the database\n@param        IsSuccess           Returns true if the Query execution is successful\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails\n@param        ResultByColumn  Returns the result of the Selected Query as an array of SQLDataTable structure\n@param        ResultByRow     Returns the result of the Selected Query as an array of SQLDataRow structure" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "SelectDataFromQuery", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MSSQLBPLibrary_eventSelectDataFromQuery_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_SelectDataFromQueryAsync()
	{
		struct MSSQLBPLibrary_eventSelectDataFromQueryAsync_Parms
		{
			FString Query;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query = { UE4CodeGen_Private::EPropertyClass::Str, "Query", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventSelectDataFromQueryAsync_Parms, Query), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Query,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MSSQL Server|Select" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Asynchronously executes select query to the database\n\n@param        Query           Select Query which selects data from the database" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "SelectDataFromQueryAsync", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MSSQLBPLibrary_eventSelectDataFromQueryAsync_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_SelectImageFromQuery()
	{
		struct MSSQLBPLibrary_eventSelectImageFromQuery_Parms
		{
			FString Query;
			bool IsSuccess;
			FString ErrorMessage;
			UTexture2D* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventSelectImageFromQuery_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventSelectImageFromQuery_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_IsSuccess_SetBit = [](void* Obj){ ((MSSQLBPLibrary_eventSelectImageFromQuery_Parms*)Obj)->IsSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MSSQLBPLibrary_eventSelectImageFromQuery_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query = { UE4CodeGen_Private::EPropertyClass::Str, "Query", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventSelectImageFromQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsSuccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Query,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MSSQL Server|Select" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Selects image from the database and returns Texture2D format of the selected image\n\n@param        Query           Select Query which fetches a single image from the database\n@param        IsSuccess           Returns true if the Query execution is successful\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "SelectImageFromQuery", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MSSQLBPLibrary_eventSelectImageFromQuery_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_SelectImageFromQueryAsync()
	{
		struct MSSQLBPLibrary_eventSelectImageFromQueryAsync_Parms
		{
			FString Query;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query = { UE4CodeGen_Private::EPropertyClass::Str, "Query", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventSelectImageFromQueryAsync_Parms, Query), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Query,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MSSQL Server|Select" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Asynchronously executes select query to the database to select an Image\n\n@param        Query           Select Query which selects Image from the database" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "SelectImageFromQueryAsync", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MSSQLBPLibrary_eventSelectImageFromQueryAsync_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_SetConnectionProperties()
	{
		struct MSSQLBPLibrary_eventSetConnectionProperties_Parms
		{
			FString Server;
			FString DBName;
			FString UserID;
			FString Password;
			FString ExtraParam;
			bool IsTrusted;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_IsTrusted_SetBit = [](void* Obj){ ((MSSQLBPLibrary_eventSetConnectionProperties_Parms*)Obj)->IsTrusted = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTrusted = { UE4CodeGen_Private::EPropertyClass::Bool, "IsTrusted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MSSQLBPLibrary_eventSetConnectionProperties_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsTrusted_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraParam = { UE4CodeGen_Private::EPropertyClass::Str, "ExtraParam", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventSetConnectionProperties_Parms, ExtraParam), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password = { UE4CodeGen_Private::EPropertyClass::Str, "Password", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventSetConnectionProperties_Parms, Password), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserID = { UE4CodeGen_Private::EPropertyClass::Str, "UserID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventSetConnectionProperties_Parms, UserID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DBName = { UE4CodeGen_Private::EPropertyClass::Str, "DBName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventSetConnectionProperties_Parms, DBName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Server = { UE4CodeGen_Private::EPropertyClass::Str, "Server", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventSetConnectionProperties_Parms, Server), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsTrusted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtraParam,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Password,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DBName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Server,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MSSQL Server" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Sets the Connection Properties in order to be able to connect to the Database. This function must be called before performing any\n         Database Operations\n\n@param        Server          SQL Server Name\n@param        DBName          Initial Database Name to be connected to\n@param        UserID          SQL Server UserID. Not relevant while using Windows Authentication\n@param        Password        SQL Server Password. Not relevant while using Windows Authentication\n@param        IsSuccess           Returns true if the connection to the database is successful\n@param        ErrorMessage    Returns the exception message thrown if the connection to the database fails\n@param        IsTrusted       Should be checked if user is using Windows Authentication Mode, unchecked for MSSQL Server Authentication." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "SetConnectionProperties", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MSSQLBPLibrary_eventSetConnectionProperties_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_UpdateDataFromQuery()
	{
		struct MSSQLBPLibrary_eventUpdateDataFromQuery_Parms
		{
			FString Query;
			bool IsSuccess;
			FString ErrorMessage;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventUpdateDataFromQuery_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_IsSuccess_SetBit = [](void* Obj){ ((MSSQLBPLibrary_eventUpdateDataFromQuery_Parms*)Obj)->IsSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MSSQLBPLibrary_eventUpdateDataFromQuery_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query = { UE4CodeGen_Private::EPropertyClass::Str, "Query", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventUpdateDataFromQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsSuccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Query,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MSSQL Server|Update" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Executes a Query to the database\n\n@param        Query           Query which is to be executed to the database\n@param        IsSuccess           Returns true if the Query execution is successful\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "UpdateDataFromQuery", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MSSQLBPLibrary_eventUpdateDataFromQuery_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_UpdateDataFromQueryAsync()
	{
		struct MSSQLBPLibrary_eventUpdateDataFromQueryAsync_Parms
		{
			FString Query;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query = { UE4CodeGen_Private::EPropertyClass::Str, "Query", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventUpdateDataFromQueryAsync_Parms, Query), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Query,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MSSQL Server|Update" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Asynchronously Executes a Query to the database\n\n@param        Query           Query which is to be executed to the database\n@param        IsSuccess           Returns true if the Query execution is successful\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "UpdateDataFromQueryAsync", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MSSQLBPLibrary_eventUpdateDataFromQueryAsync_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_UpdateImageFromQuery()
	{
		struct MSSQLBPLibrary_eventUpdateImageFromQuery_Parms
		{
			FString Query;
			FString UpdateParameter;
			FString ImagePath;
			bool IsSuccess;
			FString ErrorMessage;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventUpdateImageFromQuery_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_IsSuccess_SetBit = [](void* Obj){ ((MSSQLBPLibrary_eventUpdateImageFromQuery_Parms*)Obj)->IsSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MSSQLBPLibrary_eventUpdateImageFromQuery_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath = { UE4CodeGen_Private::EPropertyClass::Str, "ImagePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventUpdateImageFromQuery_Parms, ImagePath), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UpdateParameter = { UE4CodeGen_Private::EPropertyClass::Str, "UpdateParameter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventUpdateImageFromQuery_Parms, UpdateParameter), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query = { UE4CodeGen_Private::EPropertyClass::Str, "Query", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventUpdateImageFromQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsSuccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImagePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdateParameter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Query,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MSSQL Server|Update" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Updates image to the database from the hard drive\n\n@param        Query           Update Query which inserts or updates image to the database\n@param        UpdateParameter Value which has been passed as a parameter for updating the image in the previous input,\n                                   without the @ symbol\n@param        ImagePath       Path of the Image that needs to be updated in the SQL Server\n@param        IsSuccess           Returns true if the Query execution is successful\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "UpdateImageFromQuery", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MSSQLBPLibrary_eventUpdateImageFromQuery_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMSSQLBPLibrary_UpdateImageFromQueryAsync()
	{
		struct MSSQLBPLibrary_eventUpdateImageFromQueryAsync_Parms
		{
			FString Query;
			FString UpdateParameter;
			FString ImagePath;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath = { UE4CodeGen_Private::EPropertyClass::Str, "ImagePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventUpdateImageFromQueryAsync_Parms, ImagePath), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UpdateParameter = { UE4CodeGen_Private::EPropertyClass::Str, "UpdateParameter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventUpdateImageFromQueryAsync_Parms, UpdateParameter), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query = { UE4CodeGen_Private::EPropertyClass::Str, "Query", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MSSQLBPLibrary_eventUpdateImageFromQueryAsync_Parms, Query), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImagePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdateParameter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Query,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MSSQL Server|Update" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Asynchronously Updates image to the database from the hard drive\n\n@param        Query           Update Query which inserts or updates image to the database\n@param        UpdateParameter Value which has been passed as a parameter for updating the image in the previous input,\n                               without the @ symbol\n@param        ImagePath       Path of the Image that needs to be updated in the SQL Server" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSSQLBPLibrary, "UpdateImageFromQueryAsync", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MSSQLBPLibrary_eventUpdateImageFromQueryAsync_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMSSQLBPLibrary_NoRegister()
	{
		return UMSSQLBPLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UMSSQLBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_MSSQL,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_AuthenticateUser, "AuthenticateUser" }, // 3716329005
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_BrowseFile, "BrowseFile" }, // 2943440122
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_CheckConnectionState, "CheckConnectionState" }, // 77711888
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_CheckQueryExecutionState, "CheckQueryExecutionState" }, // 1646619223
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_GetCurrentDomain, "GetCurrentDomain" }, // 3188918685
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_GetCurrentUser, "GetCurrentUser" }, // 3990153020
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_GetSelectedImage, "GetSelectedImage" }, // 3424330933
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_GetSelectedTable, "GetSelectedTable" }, // 374151087
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_SelectDataFromQuery, "SelectDataFromQuery" }, // 2924967640
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_SelectDataFromQueryAsync, "SelectDataFromQueryAsync" }, // 4123196315
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_SelectImageFromQuery, "SelectImageFromQuery" }, // 1514746
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_SelectImageFromQueryAsync, "SelectImageFromQueryAsync" }, // 3794479033
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_SetConnectionProperties, "SetConnectionProperties" }, // 1574800036
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_UpdateDataFromQuery, "UpdateDataFromQuery" }, // 2610497165
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_UpdateDataFromQueryAsync, "UpdateDataFromQueryAsync" }, // 2022640178
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_UpdateImageFromQuery, "UpdateImageFromQuery" }, // 644974498
				{ &Z_Construct_UFunction_UMSSQLBPLibrary_UpdateImageFromQueryAsync, "UpdateImageFromQueryAsync" }, // 760728642
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MSSQLBPLibrary.h" },
				{ "ModuleRelativePath", "Public/MSSQLBPLibrary.h" },
				{ "ToolTip", "Contains all the methods that are used to connect to the C# dll\nwhich takes care of connecting to the MSSQL server and executing\nthe given queries. These methods can be directly called from\nthe Blueprints." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMSSQLBPLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMSSQLBPLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMSSQLBPLibrary, 3242660999);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMSSQLBPLibrary(Z_Construct_UClass_UMSSQLBPLibrary, &UMSSQLBPLibrary::StaticClass, TEXT("/Script/MSSQL"), TEXT("UMSSQLBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSSQLBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
