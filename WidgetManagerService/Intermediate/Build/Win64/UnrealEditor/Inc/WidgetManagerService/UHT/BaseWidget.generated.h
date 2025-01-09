// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WIDGETMANAGERSERVICE_BaseWidget_generated_h
#error "BaseWidget.generated.h already included, missing '#pragma once' in BaseWidget.h"
#endif
#define WIDGETMANAGERSERVICE_BaseWidget_generated_h

#define FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_BaseWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSetLayer); \
	DECLARE_FUNCTION(execGetLayer);


#define FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_BaseWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseWidget(); \
	friend struct Z_Construct_UClass_UBaseWidget_Statics; \
public: \
	DECLARE_CLASS(UBaseWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WidgetManagerService"), NO_API) \
	DECLARE_SERIALIZER(UBaseWidget)


#define FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_BaseWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseWidget(UBaseWidget&&); \
	UBaseWidget(const UBaseWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseWidget) \
	NO_API virtual ~UBaseWidget();


#define FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_BaseWidget_h_10_PROLOG
#define FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_BaseWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_BaseWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_BaseWidget_h_13_INCLASS_NO_PURE_DECLS \
	FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_BaseWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WIDGETMANAGERSERVICE_API UClass* StaticClass<class UBaseWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_BaseWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
