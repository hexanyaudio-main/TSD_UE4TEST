// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class TSD18_UE4_TESTEditorTarget : TargetRules
{
	public TSD18_UE4_TESTEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("TSD18_UE4_TEST");
	}
}
