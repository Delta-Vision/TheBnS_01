using UnrealBuildTool;
using System.IO;
 
public class MSSQL: ModuleRules
{
    public MSSQL(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivateIncludePaths.AddRange(new string[]
        {
            "MSSQL/Private"
               
        });

        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;


        PublicDependencyModuleNames.AddRange(new [] { "Core", "CoreUObject", "Engine", "InputCore" , "Projects"  });

        PrivateDependencyModuleNames.AddRange(new[] {"XmlParser" , "Core" , "ImageWrapper", "Engine"});

        string BaseDirectory = Path.GetFullPath(Path.Combine(ModuleDirectory, "..", ".."));
        string SQLDirectory = Path.Combine(BaseDirectory, "SQLLib");
        string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "x64" : "x86";

        PublicIncludePaths.Add(Path.Combine(SQLDirectory, "MSSQLIntegration.dll"));
        PublicIncludePaths.Add(Path.Combine(SQLDirectory, "System.Data.SqlClient.dll"));


        RuntimeDependencies.Add(Path.Combine(SQLDirectory, PlatformString, "MSSQLIntegration.dll"));
        RuntimeDependencies.Add(Path.Combine(SQLDirectory, PlatformString, "System.Data.SqlClient.dll"));

        PublicDelayLoadDLLs.Add(Path.Combine(SQLDirectory, "System.Data.SqlClient.dll"));

    }
}