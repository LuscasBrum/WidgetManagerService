// WidgetManagerGameSubsystem.cpp
#include "WidgetManagerGameSubsystem.h"

void UWidgetManagerGameSubsystem::RegisterWidget(UBaseWidget* Widget, int32 Layer)
{
    if (Widget)
    {
        Widget->SetLayer(Layer);
        RegisteredWidgets.Add(Widget);

        if (!ActiveWidgetsByLayer.Contains(Layer))
        {
            ActiveWidgetsByLayer.Add(Layer, nullptr);
        }
    }
}

void UWidgetManagerGameSubsystem::ActivateWidget(UBaseWidget* Widget)
{
    if (!Widget || !IsValid(Widget))
    {
        return;
    }

    int32 Layer = Widget->GetLayer();
    if (ActiveWidgetsByLayer.Contains(Layer))
    {
        UBaseWidget* CurrentActiveWidget = ActiveWidgetsByLayer[Layer];
        if (CurrentActiveWidget && CurrentActiveWidget != Widget)
        {
            if (IsValid(CurrentActiveWidget))
            {
                CurrentActiveWidget->SetActive(false);
                CurrentActiveWidget->SetVisibility(ESlateVisibility::Hidden);
            }
        }
    }

    Widget->SetActive(true);
    Widget->SetVisibility(ESlateVisibility::Visible);
    ActiveWidgetsByLayer[Layer] = Widget;
}

void UWidgetManagerGameSubsystem::ActivateWidgetByClass(TSubclassOf<UBaseWidget> WidgetClass)
{
    for (UBaseWidget* Widget : RegisteredWidgets)
    {
        if (Widget && Widget->GetClass() == WidgetClass)
        {
            ActivateWidget(Widget);
            break;
        }
    }
}

void UWidgetManagerGameSubsystem::DisableWidgetByClass(TSubclassOf<UBaseWidget> WidgetClass)
{
    for (UBaseWidget* Widget : RegisteredWidgets)
    {
        if (Widget && Widget->GetClass() == WidgetClass)
        {
            Widget->SetActive(false);
            Widget->SetVisibility(ESlateVisibility::Hidden);
            break;
        }
    }
}

void UWidgetManagerGameSubsystem::CleanupInvalidWidgets()
{
    RegisteredWidgets.Empty();
    ActiveWidgetsByLayer.Empty();
}
