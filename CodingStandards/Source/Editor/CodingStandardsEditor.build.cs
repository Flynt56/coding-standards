// Fill out your copyright notice in the Description page of Project Settings.

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
