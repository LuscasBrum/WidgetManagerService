#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BaseWidget.h"
#include "WidgetManagerGameSubsystem.generated.h"

/**
 * Subsystem for managing widgets and their states across levels.
 */
UCLASS()
class WIDGETMANAGERSERVICE_API UWidgetManagerGameSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    /** Registers a widget and its layer. */
    void RegisterWidget(UBaseWidget* Widget, int32 Layer);

    /** Activates a widget, deactivating others on the same layer. */
    void ActivateWidget(UBaseWidget* Widget);

    UFUNCTION(BlueprintCallable)
    /** Activates a widget by class, deactivating others on the same layer. */
    void ActivateWidgetByClass(TSubclassOf<UBaseWidget> WidgetClass);

    UFUNCTION(BlueprintCallable)
    /** Disable a widget by class */
    void DisableWidgetByClass(TSubclassOf<UBaseWidget> WidgetClass);

    UFUNCTION(BlueprintCallable)
    /** Get a widget by class. */
    UBaseWidget* GetWidgetByClass(TSubclassOf<UBaseWidget> WidgetClass);
    UBaseWidget* GetSubWidgetByClass(TSubclassOf<UBaseWidget> WidgetClass);

    /** Cleans up invalid references to widgets. */
    void CleanupInvalidWidgets();

private:
    /** Map of active widgets by layer. */
    TMap<int32, UBaseWidget*> ActiveWidgetsByLayer;

    /** List of registered widgets for reference. */
    TArray<UBaseWidget*> RegisteredWidgets;
};