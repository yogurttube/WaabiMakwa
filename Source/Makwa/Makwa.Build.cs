// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Makwa : ModuleRules
{
	public Makwa(ReadOnlyTargetRules Target) : base(Target)
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
			"Makwa",
			"Makwa/Variant_Platforming",
			"Makwa/Variant_Platforming/Animation",
			"Makwa/Variant_Combat",
			"Makwa/Variant_Combat/AI",
			"Makwa/Variant_Combat/Animation",
			"Makwa/Variant_Combat/Gameplay",
			"Makwa/Variant_Combat/Interfaces",
			"Makwa/Variant_Combat/UI",
			"Makwa/Variant_SideScrolling",
			"Makwa/Variant_SideScrolling/AI",
			"Makwa/Variant_SideScrolling/Gameplay",
			"Makwa/Variant_SideScrolling/Interfaces",
			"Makwa/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
