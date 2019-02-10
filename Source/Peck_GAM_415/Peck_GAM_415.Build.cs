// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Peck_GAM_415 : ModuleRules
{
	public Peck_GAM_415(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay","PixelShader", "ComputeShader", "RHI", "RenderCore", "ProceduralMeshComponent", "RuntimeMeshComponent" });
	}
}
