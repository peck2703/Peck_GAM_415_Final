// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Peck_PluginBPLibrary.h"
#include "Peck_Plugin.h"

UPeck_PluginBPLibrary::UPeck_PluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UPeck_PluginBPLibrary::Peck_PluginSampleFunction(float Parameter)
{
	return -1;
}

void UPeck_PluginBPLibrary::ApplyMaterial(UStaticMesh* Mesh, UMaterial * Material, FVector Color, float UV1, float UV2, float Roughness, float Metallic)
{
	
}

void UPeck_PluginBPLibrary::ApplyMaterialInstance(UStaticMesh* Mesh, UMaterialInstanceDynamic * DynamicMaterial, FVector Color, float UV1, float UV2, float Roughness, float Metallic)
{

}
