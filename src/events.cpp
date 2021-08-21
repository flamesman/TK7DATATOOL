#include "events.h"

extern bool bPosition;
extern bool bFrameData;
extern bool bMaximizeMenu;

void Events::HandleKeyboard(void)
{
	if (GetAsyncKeyState(VK_END) & 1)
		bMaximizeMenu = !bMaximizeMenu;

	if (GetAsyncKeyState(VK_F1) & 1)
		bFrameData = !bFrameData;

	if (GetAsyncKeyState(VK_F2) & 1)
		bPosition = !bPosition;
}
