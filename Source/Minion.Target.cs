// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class MinionTarget : TargetRules
{
	public MinionTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		bLegacyPublicIncludePaths = true;
		ExtraModuleNames.Add("Minion");
	}
}
