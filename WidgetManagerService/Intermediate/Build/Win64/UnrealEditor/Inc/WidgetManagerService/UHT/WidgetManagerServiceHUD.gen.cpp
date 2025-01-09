// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetManagerService/Public/WidgetManagerServiceHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetManagerServiceHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
UPackage* Z_Construct_UPackage__Script_WidgetManagerService();
WIDGETMANAGERSERVICE_API UClass* Z_Construct_UClass_AWidgetManagerServiceHUD();
WIDGETMANAGERSERVICE_API UClass* Z_Construct_UClass_AWidgetManagerServiceHUD_NoRegister();
WIDGETMANAGERSERVICE_API UClass* Z_Construct_UClass_UBaseWidget_NoRegister();
// End Cross Module References

// Begin Class AWidgetManagerServiceHUD Function InitializeWidgets
struct Z_Construct_UFunction_AWidgetManagerServiceHUD_InitializeWidgets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WidgetManagerService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Initializes the widgets for this level.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/WidgetManagerServiceHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes the widgets for this level." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWidgetManagerServiceHUD_InitializeWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWidgetManagerServiceHUD, nullptr, "InitializeWidgets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWidgetManagerServiceHUD_InitializeWidgets_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWidgetManagerServiceHUD_InitializeWidgets_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWidgetManagerServiceHUD_InitializeWidgets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWidgetManagerServiceHUD_InitializeWidgets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWidgetManagerServiceHUD::execInitializeWidgets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeWidgets();
	P_NATIVE_END;
}
// End Class AWidgetManagerServiceHUD Function InitializeWidgets

// Begin Class AWidgetManagerServiceHUD Function SetInitialWidget
struct Z_Construct_UFunction_AWidgetManagerServiceHUD_SetInitialWidget_Statics
{
	struct WidgetManagerServiceHUD_eventSetInitialWidget_Parms
	{
		TSubclassOf<UBaseWidget> WidgetClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WidgetManagerService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Sets the widget to activate at the beginning of the level.\n     * @param WidgetClass - The widget class to activate.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/WidgetManagerServiceHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the widget to activate at the beginning of the level.\n@param WidgetClass - The widget class to activate." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWidgetManagerServiceHUD_SetInitialWidget_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetManagerServiceHUD_eventSetInitialWidget_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWidgetManagerServiceHUD_SetInitialWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWidgetManagerServiceHUD_SetInitialWidget_Statics::NewProp_WidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWidgetManagerServiceHUD_SetInitialWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWidgetManagerServiceHUD_SetInitialWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWidgetManagerServiceHUD, nullptr, "SetInitialWidget", nullptr, nullptr, Z_Construct_UFunction_AWidgetManagerServiceHUD_SetInitialWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWidgetManagerServiceHUD_SetInitialWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWidgetManagerServiceHUD_SetInitialWidget_Statics::WidgetManagerServiceHUD_eventSetInitialWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWidgetManagerServiceHUD_SetInitialWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWidgetManagerServiceHUD_SetInitialWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWidgetManagerServiceHUD_SetInitialWidget_Statics::WidgetManagerServiceHUD_eventSetInitialWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWidgetManagerServiceHUD_SetInitialWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWidgetManagerServiceHUD_SetInitialWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWidgetManagerServiceHUD::execSetInitialWidget)
{
	P_GET_OBJECT(UClass,Z_Param_WidgetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInitialWidget(Z_Param_WidgetClass);
	P_NATIVE_END;
}
// End Class AWidgetManagerServiceHUD Function SetInitialWidget

// Begin Class AWidgetManagerServiceHUD
void AWidgetManagerServiceHUD::StaticRegisterNativesAWidgetManagerServiceHUD()
{
	UClass* Class = AWidgetManagerServiceHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeWidgets", &AWidgetManagerServiceHUD::execInitializeWidgets },
		{ "SetInitialWidget", &AWidgetManagerServiceHUD::execSetInitialWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWidgetManagerServiceHUD);
UClass* Z_Construct_UClass_AWidgetManagerServiceHUD_NoRegister()
{
	return AWidgetManagerServiceHUD::StaticClass();
}
struct Z_Construct_UClass_AWidgetManagerServiceHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * HUD class for managing widgets in the level.\n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "WidgetManagerServiceHUD.h" },
		{ "ModuleRelativePath", "Public/WidgetManagerServiceHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HUD class for managing widgets in the level." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClasses_MetaData[] = {
		{ "Category", "WidgetManagerService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of widgets to create and manage. */" },
#endif
		{ "ModuleRelativePath", "Public/WidgetManagerServiceHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of widgets to create and manage." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedWidgets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** References to created widgets. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WidgetManagerServiceHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "References to created widgets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialWidgetClass_MetaData[] = {
		{ "Category", "WidgetManagerService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The widget class to activate at the beginning of the level. */" },
#endif
		{ "ModuleRelativePath", "Public/WidgetManagerServiceHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The widget class to activate at the beginning of the level." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoInitializer_MetaData[] = {
		{ "Category", "WidgetManagerService" },
		{ "ModuleRelativePath", "Public/WidgetManagerServiceHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedWidgets;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InitialWidgetClass;
	static void NewProp_AutoInitializer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoInitializer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWidgetManagerServiceHUD_InitializeWidgets, "InitializeWidgets" }, // 1432240886
		{ &Z_Construct_UFunction_AWidgetManagerServiceHUD_SetInitialWidget, "SetInitialWidget" }, // 955935791
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWidgetManagerServiceHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::NewProp_WidgetClasses_Inner = { "WidgetClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::NewProp_WidgetClasses = { "WidgetClasses", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWidgetManagerServiceHUD, WidgetClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClasses_MetaData), NewProp_WidgetClasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::NewProp_CreatedWidgets_Inner = { "CreatedWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBaseWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::NewProp_CreatedWidgets = { "CreatedWidgets", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWidgetManagerServiceHUD, CreatedWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedWidgets_MetaData), NewProp_CreatedWidgets_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::NewProp_InitialWidgetClass = { "InitialWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWidgetManagerServiceHUD, InitialWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialWidgetClass_MetaData), NewProp_InitialWidgetClass_MetaData) };
void Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::NewProp_AutoInitializer_SetBit(void* Obj)
{
	((AWidgetManagerServiceHUD*)Obj)->AutoInitializer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::NewProp_AutoInitializer = { "AutoInitializer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWidgetManagerServiceHUD), &Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::NewProp_AutoInitializer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoInitializer_MetaData), NewProp_AutoInitializer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::NewProp_WidgetClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::NewProp_WidgetClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::NewProp_CreatedWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::NewProp_CreatedWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::NewProp_InitialWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::NewProp_AutoInitializer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetManagerService,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::ClassParams = {
	&AWidgetManagerServiceHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWidgetManagerServiceHUD()
{
	if (!Z_Registration_Info_UClass_AWidgetManagerServiceHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWidgetManagerServiceHUD.OuterSingleton, Z_Construct_UClass_AWidgetManagerServiceHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWidgetManagerServiceHUD.OuterSingleton;
}
template<> WIDGETMANAGERSERVICE_API UClass* StaticClass<AWidgetManagerServiceHUD>()
{
	return AWidgetManagerServiceHUD::StaticClass();
}
AWidgetManagerServiceHUD::AWidgetManagerServiceHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWidgetManagerServiceHUD);
AWidgetManagerServiceHUD::~AWidgetManagerServiceHUD() {}
// End Class AWidgetManagerServiceHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerServiceHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWidgetManagerServiceHUD, AWidgetManagerServiceHUD::StaticClass, TEXT("AWidgetManagerServiceHUD"), &Z_Registration_Info_UClass_AWidgetManagerServiceHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWidgetManagerServiceHUD), 974928182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerServiceHUD_h_1124793685(TEXT("/Script/WidgetManagerService"),
	Z_CompiledInDeferFile_FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerServiceHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerServiceHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
