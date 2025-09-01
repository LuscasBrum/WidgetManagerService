#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseWidget.generated.h"

/**
 * Base class for widgets managed by the WidgetManagerService.
 */
UCLASS(Abstract, Blueprintable)
class WIDGETMANAGERSERVICE_API UBaseWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	/**
	 * Gets the layer of this widget.
	 * @return The layer ID.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetBase")
	int32 GetLayer() const { return Layer; }

	/**
	 * Sets the layer of this widget.
	 * @param NewLayer - The new layer ID to assign.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetBase")
	void SetLayer(int32 NewLayer) { Layer = NewLayer; }

	/**
	 * Checks if this widget is active.
	 * @return True if the widget is active, false otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetBase")
	bool IsActive() const { return bIsActive; }

	/**
	 * Sets the active state of this widget.
	 * @param bActive - True to activate, false to deactivate.
	 */
	UFUNCTION(BlueprintCallable, Category = "WidgetBase")
	void SetActive(bool bActive);

protected:
	/**
	 * Called when the widget is shown. Designed to be overridden in Blueprints.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "WidgetBase")
	void OnShow();

	/**
	 * Called when the widget is hidden. Designed to be overridden in Blueprints.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "WidgetBase")
	void OnHide();

	/** The layer of this widget. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WidgetBase")
	int32 Layer = 0;

	/** Whether the widget is currently active. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WidgetBase")
	bool bIsActive = false;
};
