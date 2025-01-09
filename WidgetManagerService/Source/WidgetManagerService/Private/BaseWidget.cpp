// 


#include "BaseWidget.h"

void UBaseWidget::SetActive(bool bActive)
{
	if (bIsActive != bActive)
	{
		bIsActive = bActive;
		SetVisibility(bIsActive ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
	}
}








