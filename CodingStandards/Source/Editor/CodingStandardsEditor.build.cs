// License info here...

using UnrealBuildTool;

public class CodingStandardsEditor : ModuleRules
{
    public CodingStandardsEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "UnrealEd",
            "Projects"
        });
    }
}
