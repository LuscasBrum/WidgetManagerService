// 


#include "BaseWidget.h"

void UBaseWidget::SetActive(bool bActive)
{
	if (bIsActive != bActive)
	{
		bIsActive = bActive;
		SetVisibility(bIsActive ? ESlateVisibility::Visible : ESlateVisibility::Hidden);

		// Trigger the appropriate Blueprint event
		if (bIsActive)
		{
			OnShow();
		}
		else
		{
			OnHide();
		}
	}
}









