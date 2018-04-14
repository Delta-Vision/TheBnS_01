// Copyright 2017, Sameek Kundu. All Rights Reserved. 

#include "MSSQLBPLibrary.h"
#include "IImageWrapper.h"
#include "XmlParser.h"
#include "IImageWrapperModule.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"

#include "AllowWindowsPlatformTypes.h"
#include <windows.h>
#include <cstring>
#include <array>
#include <string>
#include <vector>
#include "tchar.h"
#include <Lmcons.h>
#include <iostream>
#include "HideWindowsPlatformTypes.h"

#if PLATFORM_WINDOWS

         static FString PlatformString = PLATFORM_64BITS ? TEXT("x64") : TEXT("x86");

		/**
		* Gets the DllFilePath from the game plugin directory (Exists if the plugin is installed as project plugin , not as engine plugin)
		*/
        static FString GameDllFilePath =  FPaths::Combine(*FPaths::ProjectPluginsDir(), TEXT("MSSQL/SQLLib"), PlatformString, TEXT("MSSQLIntegration.dll"));
        
		/**
		* Gets the DllFilePath from the engine plugin directory under marketplace plugins (Exists if the plugin is downloaded from the marketplace and installed as engine plugin)
		*/
		static FString MarketplaceDllFilePath = FPaths::Combine(*FPaths::EnginePluginsDir(), TEXT("Marketplace/MSSQL/SQLLib"), PlatformString, TEXT("MSSQLIntegration.dll"));

		/**
		* Gets the DllFilePath from the engine plugin directory (Exists if the plugin is installed as engine plugin but not inside marketplace folder)
		*/
		static FString EngineDllFilePath = FPaths::Combine(*FPaths::EnginePluginsDir(), TEXT("Marketplace/MSSQL/SQLLib"), PlatformString, TEXT("MSSQLIntegration.dll"));


#endif

static FString GetFilePath()
{
	//Checks for the Plugin path from the current plugin directory. 
	FString Pluginpath = IPluginManager::Get().FindPlugin(TEXT("MSSQL"))->GetBaseDir();
	FString DllPath = FPaths::Combine(*Pluginpath, TEXT("SQLLib/MSSQLIntegration.dll"));

	if (FPaths::FileExists(DllPath))
	{
		return DllPath;
	}
	else if (FPaths::FileExists(MarketplaceDllFilePath))
	{
		return MarketplaceDllFilePath;
	}
	else if (FPaths::FileExists(GameDllFilePath))
	{
		
		return GameDllFilePath;
	}
	else
	{
		return EngineDllFilePath;
	}
}


static FString GetMSSQLDllPath()
{
	//Checks for the Plugin path from the current plugin directory. 
	FString Pluginpath = IPluginManager::Get().FindPlugin(TEXT("MSSQL"))->GetBaseDir();
	FString DllPath = FPaths::Combine(*Pluginpath, TEXT("SQLLib/MSSQL.Data.dll"));

	if (FPaths::FileExists(DllPath))
	{
		return DllPath;
	}
	else
	{
		return "";
	}

}

FString UMSSQLBPLibrary::GetCurrentDomain()
{
	typedef const char*(*_GetDomain)(bool res);
	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}
	if (DLLHandle != NULL)
	{
		_GetDomain DLLFuncPtr = NULL;
		FString procName = "GetDomain";
		DLLFuncPtr = (_GetDomain)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(false);
			FString output(result);
			FPlatformProcess::FreeDllHandle(DLLHandle);
			return output;
		}
	}
	return "";
}

FString UMSSQLBPLibrary::GetCurrentUser()
{
	typedef const char*(*_GetUserName)(bool res);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}
	if (DLLHandle != NULL)
	{
		_GetUserName DLLFuncPtr = NULL;
		FString procName = "GetUserName";
		DLLFuncPtr = (_GetUserName)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(false);
			FString output(result);
			FPlatformProcess::FreeDllHandle(DLLHandle);
			return output;
		}
	}
	return "";
}

void UMSSQLBPLibrary::SetConnectionProperties(FString Server, FString DBName, FString UserID, FString Password, FString ExtraParam , bool IsTrusted)
{

	std::string server(TCHAR_TO_UTF8(*Server));
	char* sv = _strdup(server.c_str());
	std::string dbname(TCHAR_TO_UTF8(*DBName));
	char* db = _strdup(dbname.c_str());
	std::string userid(TCHAR_TO_UTF8(*UserID));
	char* uid = _strdup(userid.c_str());
	std::string password(TCHAR_TO_UTF8(*Password));
	char* pw = _strdup(password.c_str());
	std::string eparam(TCHAR_TO_UTF8(*ExtraParam));
	char* ep = _strdup(eparam.c_str());

	FString trustedString = (IsTrusted ? "true" : "false");
	std::string istrusted(TCHAR_TO_UTF8(*trustedString));
	char* t = _strdup(istrusted.c_str());

	typedef void(*_SetConnectionProperties)(char* server, char* dbname, char* userid, char* password, char* eparam, char* isTrusted);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	if (DLLHandle != NULL)
	{
		_SetConnectionProperties DLLFuncPtr = NULL;
		FString procName = "SetConnectionProperties";
		DLLFuncPtr = (_SetConnectionProperties)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			
			DLLFuncPtr(sv, db, uid, pw, ep , t);
			FPlatformProcess::FreeDllHandle(DLLHandle);
		}
	}
}


bool UMSSQLBPLibrary::AuthenticateUser(FString UserName, FString Password, FString Domain)
{
	std::string domain(TCHAR_TO_UTF8(*Domain));
	char* d = _strdup(domain.c_str());
	std::string username(TCHAR_TO_UTF8(*UserName));
	char* u = _strdup(username.c_str());
	std::string password(TCHAR_TO_UTF8(*Password));
	char* p = _strdup(password.c_str());
	typedef bool(*_Authenticate)(char* UserName, char* Password, char* Domain);

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}
	if (DLLHandle != NULL)
	{
		_Authenticate DLLFuncPtr = NULL;
		FString procName = "Authenticate";
		DLLFuncPtr = (_Authenticate)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{

			bool result = DLLFuncPtr(u, p, d);
			FPlatformProcess::FreeDllHandle(DLLHandle);
			return result;

		}
	}


	return false;


}


UTexture2D* UMSSQLBPLibrary::SelectImageFromQuery(FString SelectQuery, bool &IsSuccess, FString &ErrorMessage)
{

	typedef const char*(*_SelectImageFromQuery)(char* query);
	std::string query(TCHAR_TO_UTF8(*SelectQuery));
	char* q = _strdup(query.c_str());

	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}
	if (DLLHandle != NULL)
	{
		_SelectImageFromQuery DLLFuncPtr = NULL;
		FString procName = "SelectImageFromQuery";
		DLLFuncPtr = (_SelectImageFromQuery)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(q);
			FPlatformProcess::FreeDllHandle(DLLHandle);
			ErrorMessage = GetErrorMessage();
			
			if (ErrorMessage.IsEmpty())
			{
				IsSuccess = true;
				UTexture2D* ImageTexture = LoadTextureFromPath(FString(result));
				return ImageTexture;
			}
			else
				IsSuccess = false;
		}
	}

	return NULL;

}

FString UMSSQLBPLibrary::BrowseFile(FString DialogueTitle, FString FileTypes)
{

	std::string title(TCHAR_TO_UTF8(*DialogueTitle));
	char* t = _strdup(title.c_str());
	std::string types(TCHAR_TO_UTF8(*FileTypes));
	char* ty = _strdup(types.c_str());
	typedef const char*(*_FileBrowser)(char* title , char* types);
	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	if (DLLHandle != NULL)
	{
		_FileBrowser DLLFuncPtr = NULL;
		FString procName = "FileBrowser";
		DLLFuncPtr = (_FileBrowser)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(t , ty);
			FPlatformProcess::FreeDllHandle(DLLHandle);
			return result;
		}
	}

	return "";

}

FString UMSSQLBPLibrary::GetErrorMessage()
{

	typedef const char*(*_GetErrorMessage)(bool res);
	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}
	if (DLLHandle != NULL)
	{
		_GetErrorMessage DLLFuncPtr = NULL;
		FString procName = "GetErrorMessage";
		DLLFuncPtr = (_GetErrorMessage)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(false);
			FPlatformProcess::FreeDllHandle(DLLHandle);
			return FString(result);
		}
	}

	return "";
}


void UMSSQLBPLibrary::SelectDataFromQuery(FString Query, bool &IsSuccess, FString &ErrorMessage , 
	TArray<FMSSQLDataTable> &ResultByColumn, TArray<FMSSQLDataRow> &ResultByRow)
{
	std::string query(TCHAR_TO_UTF8(*Query));
	char* q = _strdup(query.c_str());
    typedef const char*(*_SelectDataFromQuery)(char* query);
	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	TArray<FString> Results;
	if (DLLHandle != NULL)
	{
		_SelectDataFromQuery DLLFuncPtr = NULL;
		FString procName = "SelectDataFromQuery";
		DLLFuncPtr = (_SelectDataFromQuery)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q);
			FPlatformProcess::FreeDllHandle(DLLHandle);
			ErrorMessage = GetErrorMessage();
			if (ErrorMessage.IsEmpty())
				IsSuccess = true;
			else
				IsSuccess = false;
			
			GetSelectedTable(ResultByColumn, ResultByRow);
			
		}
	}


}

ESQLConnectionState UMSSQLBPLibrary::CheckConnectionState(FString &ErrorMessage)
{

	typedef int32(*_CheckConnectionState)(bool res);
	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}
	if (DLLHandle != NULL)
	{
		_CheckConnectionState DLLFuncPtr = NULL;
		FString procName = "CheckConnectionState";
		DLLFuncPtr = (_CheckConnectionState)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			int32 r = DLLFuncPtr(false);
			ErrorMessage = GetErrorMessage();
			switch (r)
			{
			case 0:
				return ESQLConnectionState::Broken;
			case 1:
				return ESQLConnectionState::Closed;
			case 2:
				return ESQLConnectionState::Connecting;
			case 3:
				return ESQLConnectionState::Executing;
			case 4:
				return ESQLConnectionState::Fetching;
			case 5:
				return ESQLConnectionState::Open;
			default:
				return ESQLConnectionState::Broken;
			}
			FPlatformProcess::FreeDllHandle(DLLHandle);
		}
	}

	return ESQLConnectionState::Broken;

}

void UMSSQLBPLibrary::UpdateDataFromQueryAsync(FString Query)
{
	std::string query(TCHAR_TO_UTF8(*Query));
	char* q = _strdup(query.c_str());
	typedef void(*_UpdateDataFromQueryAsync)(char* query);
	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	if (DLLHandle != NULL)
	{
		_UpdateDataFromQueryAsync DLLFuncPtr = NULL;
		FString procName = "UpdateDataFromQueryAsync";
		DLLFuncPtr = (_UpdateDataFromQueryAsync)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q);
			FPlatformProcess::FreeDllHandle(DLLHandle);
		}
	}


}

void UMSSQLBPLibrary::SelectDataFromQueryAsync(FString Query)
{
	std::string query(TCHAR_TO_UTF8(*Query));
	char* q = _strdup(query.c_str());
	typedef void(*_SelectDataFromQueryAsync)(char* query);
	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	if (DLLHandle != NULL)
	{
		_SelectDataFromQueryAsync DLLFuncPtr = NULL;
		FString procName = "SelectDataFromQueryAsync";
		DLLFuncPtr = (_SelectDataFromQueryAsync)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q);
			FPlatformProcess::FreeDllHandle(DLLHandle);
		}
	}


}


void UMSSQLBPLibrary::SelectImageFromQueryAsync(FString Query)
{
	std::string query(TCHAR_TO_UTF8(*Query));
	char* q = _strdup(query.c_str());
	typedef void(*_SelectImageFromQueryAsync)(char* query);
	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	if (DLLHandle != NULL)
	{
		_SelectImageFromQueryAsync DLLFuncPtr = NULL;
		FString procName = "SelectImageFromQueryAsync";
		DLLFuncPtr = (_SelectImageFromQueryAsync)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q);
			FPlatformProcess::FreeDllHandle(DLLHandle);
		}
	}

}

template <class DLLFunctionType>
DLLFunctionType GetDLLFunction(FString procname)
{
	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}
	if (DLLHandle != NULL)
	{
		DLLFunctionType DLLFuncPtr = NULL;
		DLLFuncPtr = (DLLFunctionType)FPlatformProcess::GetDllExport(DLLHandle, *procname);
		return DLLFuncPtr;
	}
	return NULL;
}


void UMSSQLBPLibrary::GetSelectedTable(TArray<FMSSQLDataTable>	&ResultByColumn, TArray<FMSSQLDataRow> &ResultByRow)
{
	int rowcount = -1;
	int columncount = -1;

	typedef int(*_GetSelectedTableRowCount)(bool result);
	_GetSelectedTableRowCount DLLFuncPtrRow = GetDLLFunction<_GetSelectedTableRowCount>("GetSelectedTableRowCount");
	if (DLLFuncPtrRow != NULL)
	{
		rowcount = DLLFuncPtrRow(false);
	}

	typedef int(*_GetSelectedTableColumnCount)(bool result);
	_GetSelectedTableColumnCount DLLFuncPtrCol = GetDLLFunction<_GetSelectedTableColumnCount>("GetSelectedTableColumnCount");
	if (DLLFuncPtrCol != NULL)
	{
		columncount = DLLFuncPtrCol(false);
	}

	typedef const char*(*_GetSelectedTableColumnByIndex)(int index);
	_GetSelectedTableColumnByIndex DLLFuncPtrColName = GetDLLFunction<_GetSelectedTableColumnByIndex>("GetSelectedTableColumnByIndex");
	if (DLLFuncPtrColName != NULL)
	{

		FMSSQLDataTable data;
		for (int i = 0; i < columncount; i++)
		{
			const char* cvalue = DLLFuncPtrColName(i);
			FString value = FString(cvalue);
			data.ColumnName = value;
			ResultByColumn.Add(data);

		}
	}

	//Row Iteration
	typedef const char*(*_GetSelectedTableValueByIndex)(int rowindex, int columnindex);
	_GetSelectedTableValueByIndex DLLFuncPtrRowValue = GetDLLFunction<_GetSelectedTableValueByIndex>("GetSelectedTableValueByIndex");
	if (DLLFuncPtrRowValue != NULL)
	{

		for (int i = 0; i < rowcount; i++)
		{
			TArray<FString> RowData;
			//Column Iteration
			for (int j = 0; j < columncount; j++)
			{
				const char* cvalue = DLLFuncPtrRowValue(i, j);
				FString value = FString(UTF8_TO_TCHAR(cvalue));
				ResultByColumn[j].ColumnData.Add(value);
				RowData.Add(value);

			}

			FMSSQLDataRow Row;
			Row.RowData = RowData;
			ResultByRow.Add(Row);
		}
	}
}


UTexture2D* UMSSQLBPLibrary::GetSelectedImage(bool &IsSuccess, FString &ErrorMessage)
{
	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	TArray<FString> Results;
	if (DLLHandle != NULL)
	{
		typedef const char*(*_GetSelectedImage)(bool result);
		_GetSelectedImage DLLFuncPtr = NULL;
		FString procName = "GetSelectedImage";
		DLLFuncPtr = (_GetSelectedImage)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(false);
			FPlatformProcess::FreeDllHandle(DLLHandle);
			ErrorMessage = GetErrorMessage();

			if (ErrorMessage.IsEmpty())
			{
				IsSuccess = true;
				UTexture2D* ImageTexture = LoadTextureFromPath(FString(result));
				return ImageTexture;
			}
			else
				IsSuccess = false;


		}

	}

	return NULL;
}


ESQLQueryExecutionState UMSSQLBPLibrary::CheckQueryExecutionState(FString &ErrorMessage)
{
	typedef int32(*_CheckQueryExecutionState)(bool res);
	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}
	if (DLLHandle != NULL)
	{
		_CheckQueryExecutionState DLLFuncPtr = NULL;
		FString procName = "CheckQueryExecutionState";
		DLLFuncPtr = (_CheckQueryExecutionState)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			int32 r = DLLFuncPtr(false);
			switch (r)
			{
			case 0:
				return ESQLQueryExecutionState::Executing;
			case 1:
				return ESQLQueryExecutionState::Success;
			case -1:
				ErrorMessage = GetErrorMessage();
				return ESQLQueryExecutionState::Failed;
			}
			FPlatformProcess::FreeDllHandle(DLLHandle);
		}
	}

	ErrorMessage = GetErrorMessage();
	return ESQLQueryExecutionState::Failed;

}


void UMSSQLBPLibrary::UpdateDataFromQuery(FString Query, bool &IsSuccess, FString &ErrorMessage)
{
	std::string query(TCHAR_TO_UTF8(*Query));
	char* q = _strdup(query.c_str());
	typedef void(*_UpdateDataFromQuery)(char* query);
	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	if (DLLHandle != NULL)
	{
		_UpdateDataFromQuery DLLFuncPtr = NULL;
		FString procName = "UpdateDataFromQuery";
		DLLFuncPtr = (_UpdateDataFromQuery)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q);
			ErrorMessage = GetErrorMessage();
			if (ErrorMessage.IsEmpty())
				IsSuccess = true;
			else
				IsSuccess = false;
			FPlatformProcess::FreeDllHandle(DLLHandle);

		}
	}


}

void UMSSQLBPLibrary::UpdateImageFromQuery(FString Query, FString UpdateParameter, FString ImagePath, bool &IsSuccess, FString &ErrorMessage)
{
	std::string query(TCHAR_TO_UTF8(*Query));
	char* q = _strdup(query.c_str());

	std::string param(TCHAR_TO_UTF8(*UpdateParameter));
	char* pm = _strdup(param.c_str());

	std::string path(TCHAR_TO_UTF8(*ImagePath));
	char* pt = _strdup(path.c_str());


	typedef bool(*_UpdateImageFromQuery)(char* query, char* param, char* path);
	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	TArray<FString> Results;
	TArray<FMSSQLDataTable> SQLDataTable;
	if (DLLHandle != NULL)
	{
		_UpdateImageFromQuery DLLFuncPtr = NULL;
		FString procName = "UpdateImageFromQuery";
		DLLFuncPtr = (_UpdateImageFromQuery)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL) 
		{
			DLLFuncPtr(q, pm, pt);
			ErrorMessage = GetErrorMessage();
			if (ErrorMessage.IsEmpty())
				IsSuccess = true;
			else
				IsSuccess = false;
			FPlatformProcess::FreeDllHandle(DLLHandle);

		}
	}

	

}


void UMSSQLBPLibrary::UpdateImageFromQueryAsync(FString Query, FString UpdateParameter, FString ImagePath)
{
	std::string query(TCHAR_TO_UTF8(*Query));
	char* q = _strdup(query.c_str());

	std::string param(TCHAR_TO_UTF8(*UpdateParameter));
	char* pm = _strdup(param.c_str());

	std::string path(TCHAR_TO_UTF8(*ImagePath));
	char* pt = _strdup(path.c_str());


	typedef bool(*_UpdateImageFromQuery)(char* query, char* param, char* path);
	void *DLLHandle = NULL;
	if (FPaths::FileExists(GetFilePath()))
	{
		DLLHandle = FPlatformProcess::GetDllHandle(*GetFilePath());
	}

	TArray<FString> Results;
	TArray<FMSSQLDataTable> SQLDataTable;
	if (DLLHandle != NULL)
	{
		_UpdateImageFromQuery DLLFuncPtr = NULL;
		FString procName = "UpdateImageFromQueryAsync";
		DLLFuncPtr = (_UpdateImageFromQuery)FPlatformProcess::GetDllExport(DLLHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q, pm, pt);
			FPlatformProcess::FreeDllHandle(DLLHandle);

		}
	}


}

UTexture2D* UMSSQLBPLibrary::LoadTextureFromPath(const FString& Path)
{
	if (Path.IsEmpty()) return NULL;
	EImageFormat imagetype = EImageFormat::Invalid;

	if (Path.ToUpper().EndsWith(".PNG"))
	{
		imagetype = EImageFormat::PNG;
	}
	else if (Path.ToUpper().EndsWith(".JPEG") || Path.ToUpper().EndsWith(".JPG"))
	{
		imagetype = EImageFormat::JPEG;
	}
	else if (Path.ToUpper().EndsWith(".BMP"))
	{
		imagetype = EImageFormat::BMP;
	}

	IImageWrapperModule* ImageWrapperModule =
		FModuleManager::LoadModulePtr<IImageWrapperModule>(FName("ImageWrapper"));


	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule->CreateImageWrapper(imagetype);
	TArray<uint8> RawFileData;
	if (FFileHelper::LoadFileToArray(RawFileData, *Path))
	{
		if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
		{
			const TArray<uint8>* UncompressedBGRA = NULL;
			if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
			{
				UTexture2D* Image = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);

				void* TextureData = Image->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
				FMemory::Memcpy(TextureData, UncompressedBGRA->GetData(), UncompressedBGRA->Num());
				Image->PlatformData->Mips[0].BulkData.Unlock();

				// Update the rendering resource from data.
				Image->UpdateResource();
				return Image;
			}

		}
	}
	return Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *(Path)));
}



