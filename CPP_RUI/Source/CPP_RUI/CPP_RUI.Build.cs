// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPP_RUI : ModuleRules
{
	public CPP_RUI(ReadOnlyTargetRules Target) : base(Target)
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
			"CPP_RUI",
			"CPP_RUI/Variant_Platforming",
			"CPP_RUI/Variant_Platforming/Animation",
			"CPP_RUI/Variant_Combat",
			"CPP_RUI/Variant_Combat/AI",
			"CPP_RUI/Variant_Combat/Animation",
			"CPP_RUI/Variant_Combat/Gameplay",
			"CPP_RUI/Variant_Combat/Interfaces",
			"CPP_RUI/Variant_Combat/UI",
			"CPP_RUI/Variant_SideScrolling",
			"CPP_RUI/Variant_SideScrolling/AI",
			"CPP_RUI/Variant_SideScrolling/Gameplay",
			"CPP_RUI/Variant_SideScrolling/Interfaces",
			"CPP_RUI/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
