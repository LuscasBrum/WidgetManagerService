// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetManagerService/Public/WidgetManagerGameSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetManagerGameSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_WidgetManagerService();
WIDGETMANAGERSERVICE_API UClass* Z_Construct_UClass_UBaseWidget_NoRegister();
WIDGETMANAGERSERVICE_API UClass* Z_Construct_UClass_UWidgetManagerGameSubsystem();
WIDGETMANAGERSERVICE_API UClass* Z_Construct_UClass_UWidgetManagerGameSubsystem_NoRegister();
// End Cross Module References

// Begin Class UWidgetManagerGameSubsystem Function ActivateWidgetByClass
struct Z_Construct_UFunction_UWidgetManagerGameSubsystem_ActivateWidgetByClass_Statics
{
	struct WidgetManagerGameSubsystem_eventActivateWidgetByClass_Parms
	{
		TSubclassOf<UBaseWidget> WidgetClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Activates a widget by class, deactivating others on the same layer. */" },
#endif
		{ "ModuleRelativePath", "Public/WidgetManagerGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activates a widget by class, deactivating others on the same layer." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWidgetManagerGameSubsystem_ActivateWidgetByClass_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetManagerGameSubsystem_eventActivateWidgetByClass_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetManagerGameSubsystem_ActivateWidgetByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetManagerGameSubsystem_ActivateWidgetByClass_Statics::NewProp_WidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetManagerGameSubsystem_ActivateWidgetByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetManagerGameSubsystem_ActivateWidgetByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetManagerGameSubsystem, nullptr, "ActivateWidgetByClass", nullptr, nullptr, Z_Construct_UFunction_UWidgetManagerGameSubsystem_ActivateWidgetByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetManagerGameSubsystem_ActivateWidgetByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetManagerGameSubsystem_ActivateWidgetByClass_Statics::WidgetManagerGameSubsystem_eventActivateWidgetByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetManagerGameSubsystem_ActivateWidgetByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetManagerGameSubsystem_ActivateWidgetByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetManagerGameSubsystem_ActivateWidgetByClass_Statics::WidgetManagerGameSubsystem_eventActivateWidgetByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetManagerGameSubsystem_ActivateWidgetByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetManagerGameSubsystem_ActivateWidgetByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetManagerGameSubsystem::execActivateWidgetByClass)
{
	P_GET_OBJECT(UClass,Z_Param_WidgetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateWidgetByClass(Z_Param_WidgetClass);
	P_NATIVE_END;
}
// End Class UWidgetManagerGameSubsystem Function ActivateWidgetByClass

// Begin Class UWidgetManagerGameSubsystem Function DisableWidgetByClass
struct Z_Construct_UFunction_UWidgetManagerGameSubsystem_DisableWidgetByClass_Statics
{
	struct WidgetManagerGameSubsystem_eventDisableWidgetByClass_Parms
	{
		TSubclassOf<UBaseWidget> WidgetClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Disable a widget by class */" },
#endif
		{ "ModuleRelativePath", "Public/WidgetManagerGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disable a widget by class" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWidgetManagerGameSubsystem_DisableWidgetByClass_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetManagerGameSubsystem_eventDisableWidgetByClass_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetManagerGameSubsystem_DisableWidgetByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetManagerGameSubsystem_DisableWidgetByClass_Statics::NewProp_WidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetManagerGameSubsystem_DisableWidgetByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetManagerGameSubsystem_DisableWidgetByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetManagerGameSubsystem, nullptr, "DisableWidgetByClass", nullptr, nullptr, Z_Construct_UFunction_UWidgetManagerGameSubsystem_DisableWidgetByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetManagerGameSubsystem_DisableWidgetByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetManagerGameSubsystem_DisableWidgetByClass_Statics::WidgetManagerGameSubsystem_eventDisableWidgetByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetManagerGameSubsystem_DisableWidgetByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetManagerGameSubsystem_DisableWidgetByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetManagerGameSubsystem_DisableWidgetByClass_Statics::WidgetManagerGameSubsystem_eventDisableWidgetByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetManagerGameSubsystem_DisableWidgetByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetManagerGameSubsystem_DisableWidgetByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetManagerGameSubsystem::execDisableWidgetByClass)
{
	P_GET_OBJECT(UClass,Z_Param_WidgetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableWidgetByClass(Z_Param_WidgetClass);
	P_NATIVE_END;
}
// End Class UWidgetManagerGameSubsystem Function DisableWidgetByClass

// Begin Class UWidgetManagerGameSubsystem
void UWidgetManagerGameSubsystem::StaticRegisterNativesUWidgetManagerGameSubsystem()
{
	UClass* Class = UWidgetManagerGameSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateWidgetByClass", &UWidgetManagerGameSubsystem::execActivateWidgetByClass },
		{ "DisableWidgetByClass", &UWidgetManagerGameSubsystem::execDisableWidgetByClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetManagerGameSubsystem);
UClass* Z_Construct_UClass_UWidgetManagerGameSubsystem_NoRegister()
{
	return UWidgetManagerGameSubsystem::StaticClass();
}
struct Z_Construct_UClass_UWidgetManagerGameSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Subsystem for managing widgets and their states across levels.\n */" },
#endif
		{ "IncludePath", "WidgetManagerGameSubsystem.h" },
		{ "ModuleRelativePath", "Public/WidgetManagerGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subsystem for managing widgets and their states across levels." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetManagerGameSubsystem_ActivateWidgetByClass, "ActivateWidgetByClass" }, // 1426057968
		{ &Z_Construct_UFunction_UWidgetManagerGameSubsystem_DisableWidgetByClass, "DisableWidgetByClass" }, // 1532567810
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetManagerGameSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetManagerGameSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetManagerService,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetManagerGameSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetManagerGameSubsystem_Statics::ClassParams = {
	&UWidgetManagerGameSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetManagerGameSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetManagerGameSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetManagerGameSubsystem()
{
	if (!Z_Registration_Info_UClass_UWidgetManagerGameSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetManagerGameSubsystem.OuterSingleton, Z_Construct_UClass_UWidgetManagerGameSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetManagerGameSubsystem.OuterSingleton;
}
template<> WIDGETMANAGERSERVICE_API UClass* StaticClass<UWidgetManagerGameSubsystem>()
{
	return UWidgetManagerGameSubsystem::StaticClass();
}
UWidgetManagerGameSubsystem::UWidgetManagerGameSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetManagerGameSubsystem);
UWidgetManagerGameSubsystem::~UWidgetManagerGameSubsystem() {}
// End Class UWidgetManagerGameSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerGameSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetManagerGameSubsystem, UWidgetManagerGameSubsystem::StaticClass, TEXT("UWidgetManagerGameSubsystem"), &Z_Registration_Info_UClass_UWidgetManagerGameSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetManagerGameSubsystem), 3036191872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerGameSubsystem_h_3622932884(TEXT("/Script/WidgetManagerService"),
	Z_CompiledInDeferFile_FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerGameSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerGameSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
