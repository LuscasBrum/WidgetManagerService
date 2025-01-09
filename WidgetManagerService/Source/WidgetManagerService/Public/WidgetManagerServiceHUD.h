// WidgetManagerServiceHUD.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BaseWidget.h"
#include "WidgetManagerGameSubsystem.h"
#include "WidgetManagerServiceHUD.generated.h"

/**
 * HUD class for managing widgets in the level.
 */
UCLASS()
class WIDGETMANAGERSERVICE_API AWidgetManagerServiceHUD : public AHUD
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;
 
    /**
     * Initializes the widgets for this level.
     */
    UFUNCTION(BlueprintCallable, Category = "WidgetManagerService")
    void InitializeWidgets();

    /**
     * Sets the widget to activate at the beginning of the level.
     * @param WidgetClass - The widget class to activate.
     */
    UFUNCTION(BlueprintCallable, Category = "WidgetManagerService")
    void SetInitialWidget(TSubclassOf<UBaseWidget> WidgetClass);

protected:
    /** List of widgets to create and manage. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WidgetManagerService")
    TArray<TSubclassOf<UBaseWidget>> WidgetClasses;

    /** References to created widgets. */
    UPROPERTY()
    TArray<UBaseWidget*> CreatedWidgets;

    /** The widget class to activate at the beginning of the level. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WidgetManagerService")
    TSubclassOf<UBaseWidget> InitialWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WidgetManagerService")
	bool AutoInitializer = true;
	
    /**
     * Creates a widget of the specified class and adds it to the viewport.
     * @param WidgetClass - The widget class to create.
     * @return A reference to the created widget.
     */
    UBaseWidget* CreateWidgetInstance(TSubclassOf<UBaseWidget> WidgetClass);

    /**
     * Activates the initial widget if specified.
     */
    void ActivateInitialWidget();

    /**
     * Cleans up widgets when the level ends.
     */
    void CleanupWidgets();

    /**
     * Gets the WidgetManagerGameSubsystem for managing widget states.
     */
    UWidgetManagerGameSubsystem* GetWidgetSubsystem() const;

    /** Handles level end cleanup. */
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};