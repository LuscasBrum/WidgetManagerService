// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetManagerService/Public/BaseWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_WidgetManagerService();
WIDGETMANAGERSERVICE_API UClass* Z_Construct_UClass_UBaseWidget();
WIDGETMANAGERSERVICE_API UClass* Z_Construct_UClass_UBaseWidget_NoRegister();
// End Cross Module References

// Begin Class UBaseWidget Function GetLayer
struct Z_Construct_UFunction_UBaseWidget_GetLayer_Statics
{
	struct BaseWidget_eventGetLayer_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WidgetBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the layer of this widget.\n\x09 * @return The layer ID.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BaseWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the layer of this widget.\n@return The layer ID." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseWidget_GetLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseWidget_eventGetLayer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseWidget_GetLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseWidget_GetLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWidget_GetLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseWidget_GetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseWidget, nullptr, "GetLayer", nullptr, nullptr, Z_Construct_UFunction_UBaseWidget_GetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWidget_GetLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseWidget_GetLayer_Statics::BaseWidget_eventGetLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWidget_GetLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseWidget_GetLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseWidget_GetLayer_Statics::BaseWidget_eventGetLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseWidget_GetLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseWidget_GetLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseWidget::execGetLayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLayer();
	P_NATIVE_END;
}
// End Class UBaseWidget Function GetLayer

// Begin Class UBaseWidget Function IsActive
struct Z_Construct_UFunction_UBaseWidget_IsActive_Statics
{
	struct BaseWidget_eventIsActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WidgetBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if this widget is active.\n\x09 * @return True if the widget is active, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BaseWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if this widget is active.\n@return True if the widget is active, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseWidget_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseWidget_eventIsActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseWidget_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseWidget_eventIsActive_Parms), &Z_Construct_UFunction_UBaseWidget_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseWidget_IsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseWidget_IsActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWidget_IsActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseWidget_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseWidget, nullptr, "IsActive", nullptr, nullptr, Z_Construct_UFunction_UBaseWidget_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWidget_IsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseWidget_IsActive_Statics::BaseWidget_eventIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWidget_IsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseWidget_IsActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseWidget_IsActive_Statics::BaseWidget_eventIsActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseWidget_IsActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseWidget_IsActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseWidget::execIsActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActive();
	P_NATIVE_END;
}
// End Class UBaseWidget Function IsActive

// Begin Class UBaseWidget Function SetActive
struct Z_Construct_UFunction_UBaseWidget_SetActive_Statics
{
	struct BaseWidget_eventSetActive_Parms
	{
		bool bActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WidgetBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the active state of this widget.\n\x09 * @param bActive - True to activate, false to deactivate.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BaseWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the active state of this widget.\n@param bActive - True to activate, false to deactivate." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseWidget_SetActive_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((BaseWidget_eventSetActive_Parms*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseWidget_SetActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseWidget_eventSetActive_Parms), &Z_Construct_UFunction_UBaseWidget_SetActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseWidget_SetActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseWidget_SetActive_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWidget_SetActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseWidget_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseWidget, nullptr, "SetActive", nullptr, nullptr, Z_Construct_UFunction_UBaseWidget_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWidget_SetActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseWidget_SetActive_Statics::BaseWidget_eventSetActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWidget_SetActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseWidget_SetActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseWidget_SetActive_Statics::BaseWidget_eventSetActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseWidget_SetActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseWidget_SetActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseWidget::execSetActive)
{
	P_GET_UBOOL(Z_Param_bActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActive(Z_Param_bActive);
	P_NATIVE_END;
}
// End Class UBaseWidget Function SetActive

// Begin Class UBaseWidget Function SetLayer
struct Z_Construct_UFunction_UBaseWidget_SetLayer_Statics
{
	struct BaseWidget_eventSetLayer_Parms
	{
		int32 NewLayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WidgetBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the layer of this widget.\n\x09 * @param NewLayer - The new layer ID to assign.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BaseWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the layer of this widget.\n@param NewLayer - The new layer ID to assign." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseWidget_SetLayer_Statics::NewProp_NewLayer = { "NewLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseWidget_eventSetLayer_Parms, NewLayer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseWidget_SetLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseWidget_SetLayer_Statics::NewProp_NewLayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWidget_SetLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseWidget_SetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseWidget, nullptr, "SetLayer", nullptr, nullptr, Z_Construct_UFunction_UBaseWidget_SetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWidget_SetLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseWidget_SetLayer_Statics::BaseWidget_eventSetLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWidget_SetLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseWidget_SetLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseWidget_SetLayer_Statics::BaseWidget_eventSetLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseWidget_SetLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseWidget_SetLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseWidget::execSetLayer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLayer(Z_Param_NewLayer);
	P_NATIVE_END;
}
// End Class UBaseWidget Function SetLayer

// Begin Class UBaseWidget
void UBaseWidget::StaticRegisterNativesUBaseWidget()
{
	UClass* Class = UBaseWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLayer", &UBaseWidget::execGetLayer },
		{ "IsActive", &UBaseWidget::execIsActive },
		{ "SetActive", &UBaseWidget::execSetActive },
		{ "SetLayer", &UBaseWidget::execSetLayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseWidget);
UClass* Z_Construct_UClass_UBaseWidget_NoRegister()
{
	return UBaseWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for widgets managed by the WidgetManagerService.\n */" },
#endif
		{ "IncludePath", "BaseWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for widgets managed by the WidgetManagerService." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "Category", "WidgetBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The layer of this widget. */" },
#endif
		{ "ModuleRelativePath", "Public/BaseWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The layer of this widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "WidgetBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the widget is currently active. */" },
#endif
		{ "ModuleRelativePath", "Public/BaseWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the widget is currently active." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Layer;
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseWidget_GetLayer, "GetLayer" }, // 3368503544
		{ &Z_Construct_UFunction_UBaseWidget_IsActive, "IsActive" }, // 4232885098
		{ &Z_Construct_UFunction_UBaseWidget_SetActive, "SetActive" }, // 3814215427
		{ &Z_Construct_UFunction_UBaseWidget_SetLayer, "SetLayer" }, // 2129681007
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseWidget_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWidget, Layer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) };
void Z_Construct_UClass_UBaseWidget_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((UBaseWidget*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseWidget_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseWidget), &Z_Construct_UClass_UBaseWidget_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWidget_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWidget_Statics::NewProp_bIsActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetManagerService,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseWidget_Statics::ClassParams = {
	&UBaseWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseWidget()
{
	if (!Z_Registration_Info_UClass_UBaseWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseWidget.OuterSingleton, Z_Construct_UClass_UBaseWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseWidget.OuterSingleton;
}
template<> WIDGETMANAGERSERVICE_API UClass* StaticClass<UBaseWidget>()
{
	return UBaseWidget::StaticClass();
}
UBaseWidget::UBaseWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseWidget);
UBaseWidget::~UBaseWidget() {}
// End Class UBaseWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_BaseWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseWidget, UBaseWidget::StaticClass, TEXT("UBaseWidget"), &Z_Registration_Info_UClass_UBaseWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseWidget), 2415022575U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_BaseWidget_h_3382331194(TEXT("/Script/WidgetManagerService"),
	Z_CompiledInDeferFile_FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_BaseWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_BaseWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
