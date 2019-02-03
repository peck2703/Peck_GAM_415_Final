// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Peck_Plugin.h"

#define LOCTEXT_NAMESPACE "FPeck_PluginModule"

void FPeck_PluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FPeck_PluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPeck_PluginModule, Peck_Plugin)