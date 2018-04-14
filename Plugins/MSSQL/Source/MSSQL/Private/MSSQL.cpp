// Copyright 2017, Sameek Kundu. All Rights Reserved. 

#include "MSSQL.h"

#define LOCTEXT_NAMESPACE "FMSSQLModule"

void FMSSQLModule::StartupModule()
{

}

void FMSSQLModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMSSQLModule, MSSQL)