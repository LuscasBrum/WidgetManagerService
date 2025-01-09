// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetManagerGameSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseWidget;
#ifdef WIDGETMANAGERSERVICE_WidgetManagerGameSubsystem_generated_h
#error "WidgetManagerGameSubsystem.generated.h already included, missing '#pragma once' in WidgetManagerGameSubsystem.h"
#endif
#define WIDGETMANAGERSERVICE_WidgetManagerGameSubsystem_generated_h

#define FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerGameSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisableWidgetByClass); \
	DECLARE_FUNCTION(execActivateWidgetByClass);


#define FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerGameSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetManagerGameSubsystem(); \
	friend struct Z_Construct_UClass_UWidgetManagerGameSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWidgetManagerGameSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WidgetManagerService"), NO_API) \
	DECLARE_SERIALIZER(UWidgetManagerGameSubsystem)


#define FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerGameSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetManagerGameSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetManagerGameSubsystem(UWidgetManagerGameSubsystem&&); \
	UWidgetManagerGameSubsystem(const UWidgetManagerGameSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetManagerGameSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetManagerGameSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetManagerGameSubsystem) \
	NO_API virtual ~UWidgetManagerGameSubsystem();


#define FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerGameSubsystem_h_12_PROLOG
#define FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerGameSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerGameSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerGameSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerGameSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WIDGETMANAGERSERVICE_API UClass* StaticClass<class UWidgetManagerGameSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerGameSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
