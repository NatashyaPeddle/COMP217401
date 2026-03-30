// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class COMP217401_Lab8 : ModuleRules
{
	public COMP217401_Lab8(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"COMP217401_Lab8",
			"COMP217401_Lab8/Variant_Platforming",
			"COMP217401_Lab8/Variant_Platforming/Animation",
			"COMP217401_Lab8/Variant_Combat",
			"COMP217401_Lab8/Variant_Combat/AI",
			"COMP217401_Lab8/Variant_Combat/Animation",
			"COMP217401_Lab8/Variant_Combat/Gameplay",
			"COMP217401_Lab8/Variant_Combat/Interfaces",
			"COMP217401_Lab8/Variant_Combat/UI",
			"COMP217401_Lab8/Variant_SideScrolling",
			"COMP217401_Lab8/Variant_SideScrolling/AI",
			"COMP217401_Lab8/Variant_SideScrolling/Gameplay",
			"COMP217401_Lab8/Variant_SideScrolling/Interfaces",
			"COMP217401_Lab8/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
