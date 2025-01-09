// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetManagerServiceHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseWidget;
#ifdef WIDGETMANAGERSERVICE_WidgetManagerServiceHUD_generated_h
#error "WidgetManagerServiceHUD.generated.h already included, missing '#pragma once' in WidgetManagerServiceHUD.h"
#endif
#define WIDGETMANAGERSERVICE_WidgetManagerServiceHUD_generated_h

#define FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerServiceHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetInitialWidget); \
	DECLARE_FUNCTION(execInitializeWidgets);


#define FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerServiceHUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWidgetManagerServiceHUD(); \
	friend struct Z_Construct_UClass_AWidgetManagerServiceHUD_Statics; \
public: \
	DECLARE_CLASS(AWidgetManagerServiceHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WidgetManagerService"), NO_API) \
	DECLARE_SERIALIZER(AWidgetManagerServiceHUD)


#define FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerServiceHUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWidgetManagerServiceHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWidgetManagerServiceHUD(AWidgetManagerServiceHUD&&); \
	AWidgetManagerServiceHUD(const AWidgetManagerServiceHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWidgetManagerServiceHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWidgetManagerServiceHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWidgetManagerServiceHUD) \
	NO_API virtual ~AWidgetManagerServiceHUD();


#define FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerServiceHUD_h_13_PROLOG
#define FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerServiceHUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerServiceHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerServiceHUD_h_16_INCLASS_NO_PURE_DECLS \
	FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerServiceHUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WIDGETMANAGERSERVICE_API UClass* StaticClass<class AWidgetManagerServiceHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Wyzards_Plugins_WidgetManagerService_Source_WidgetManagerService_Public_WidgetManagerServiceHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
