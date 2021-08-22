#include "events.h"

extern bool bIsLocked;
extern bool bAdvantage;
extern bool bEnemyData;
extern bool bPlayerData;
extern bool bMaximizeMenu;

extern unsigned int menu_x;
extern unsigned int menu_y;

void Events::HandleKeyboard(void)
{
	// Toggle menu options
	if (GetAsyncKeyState(VK_END) & 1)
		bMaximizeMenu = !bMaximizeMenu;

	if (GetAsyncKeyState(VK_F1) & 1)
		bIsLocked = !bIsLocked;

	if (GetAsyncKeyState(VK_F2) & 1)
		bPlayerData = !bPlayerData;

	if (GetAsyncKeyState(VK_F3) & 1)
		bEnemyData = !bEnemyData;

	if (GetAsyncKeyState(VK_F4) & 1)
		bAdvantage = !bAdvantage;

	// Position Data-Tool window
	if (GetAsyncKeyState(VK_LEFT) && !bIsLocked)
		if (menu_x > 5)
			menu_x -= 5;
	if (GetAsyncKeyState(VK_DOWN) && !bIsLocked)
		if (menu_y < 500) // TODO: Game window width - menu width
			menu_y += 5;
	if (GetAsyncKeyState(VK_RIGHT) && !bIsLocked)
		if (menu_x < 500) // TODO: Game window width - menu width
			menu_x += 5;
	if (GetAsyncKeyState(VK_UP) && !bIsLocked)
		if (menu_y > 5)
			menu_y -= 5;
}
