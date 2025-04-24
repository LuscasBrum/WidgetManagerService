#include "WidgetManagerServiceHUD.h"
#include "BaseWidget.h"
#include "WidgetManagerGameSubsystem.h"
#include "Blueprint/UserWidget.h"

void AWidgetManagerServiceHUD::BeginPlay()
{
    Super::BeginPlay();

    UWidgetManagerGameSubsystem* WidgetSubsystem = GetWidgetSubsystem();
    if (WidgetSubsystem)
    {
        WidgetSubsystem->CleanupInvalidWidgets();
    }

    InitializeWidgets();
    
    if (AutoInitializer)
    {
        ActivateInitialWidget();
    }
}

void AWidgetManagerServiceHUD::InitializeWidgets()
{
    UWidgetManagerGameSubsystem* WidgetSubsystem = GetWidgetSubsystem();
    if (!WidgetSubsystem)
    {
        return;
    }
    
    for (TSubclassOf<UBaseWidget> WidgetClass : WidgetClasses)
    {
        if (WidgetClass)
        {
            UBaseWidget* NewWidget = CreateWidgetInstance(WidgetClass);
            if (NewWidget)
            {
                CreatedWidgets.Add(NewWidget);
                WidgetSubsystem->RegisterWidget(NewWidget, NewWidget->GetLayer());

                NewWidget->SetVisibility(ESlateVisibility::Hidden);
                NewWidget->SetActive(false);
            }
        }
    }
}

UBaseWidget* AWidgetManagerServiceHUD::CreateWidgetInstance(TSubclassOf<UBaseWidget> WidgetClass)
{
    if (!WidgetClass || !GetWorld())
    {
        return nullptr;
    }

    UBaseWidget* NewWidget = CreateWidget<UBaseWidget>(GetWorld(), WidgetClass);
    if (NewWidget)
    {
        NewWidget->SetVisibility(ESlateVisibility::HitTestInvisible); 
        NewWidget->AddToViewport(NewWidget->GetLayer());
        NewWidget->SetVisibility(ESlateVisibility::Hidden); 
    }

    return NewWidget;
}

void AWidgetManagerServiceHUD::SetInitialWidget(TSubclassOf<UBaseWidget> WidgetClass)
{
    InitialWidgetClass = WidgetClass;
}

void AWidgetManagerServiceHUD::ActivateInitialWidget()
{
    TSubclassOf<UBaseWidget> WidgetToActivate = InitialWidgetClass;

#if WITH_EDITOR
    if (bUseEditorInitialWidget && EditorInitialWidgetClass)
    {
        WidgetToActivate = EditorInitialWidgetClass;
    }
#endif

    if (WidgetToActivate)
    {
        UWidgetManagerGameSubsystem* WidgetSubsystem = GetWidgetSubsystem();
        if (WidgetSubsystem)
        {
            WidgetSubsystem->ActivateWidgetByClass(WidgetToActivate);
        }
    }
}

void AWidgetManagerServiceHUD::CleanupWidgets()
{
    for (UBaseWidget* Widget : CreatedWidgets)
    {
        if (Widget)
        {
            Widget->RemoveFromParent();
        }
    }
    CreatedWidgets.Empty();
}

void AWidgetManagerServiceHUD::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    CleanupWidgets();
    Super::EndPlay(EndPlayReason);
}

UWidgetManagerGameSubsystem* AWidgetManagerServiceHUD::GetWidgetSubsystem() const
{
    return GetWorld() ? GetWorld()->GetGameInstance()->GetSubsystem<UWidgetManagerGameSubsystem>() : nullptr;
}
