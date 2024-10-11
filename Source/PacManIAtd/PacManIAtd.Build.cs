// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PacManIAtd : ModuleRules
{
	public PacManIAtd(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "Paper2D" });
	}
}
