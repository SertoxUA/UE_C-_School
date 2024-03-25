// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyBiathlon : ModuleRules
{
	public MyBiathlon(ReadOnlyTargetRules Target) : base(Target)
	{
        PrivateDependencyModuleNames.AddRange(new string[] { "GameplayAbilities", "GameplayTags", "GameplayTasks" });

        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });

        PrivetDependencyModuleNames.AddRange(new string[] { });

    }
}
