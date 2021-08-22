#include "render.h"

bool bMaximizeMenu =  true;
bool bPlayerData   = false;
bool bEnemyData    = false;
bool bAdvantage    = false;
bool bIsLocked     = false;

unsigned int menu_x = 0;
unsigned int menu_y = 0;

#define SIZE_CONSTANT  25
#define MENU_HEIGHT    50
#define MENU_WIDTH    200
#define N_ITEMS         4

ImVec2 vecWindowSizeDefault{MENU_WIDTH, MENU_HEIGHT + N_ITEMS * SIZE_CONSTANT};
ImVec2 vecWindowSizeMinimized{MENU_WIDTH, MENU_HEIGHT};

ImVec4 color_Hint{0x5F, 0xFF, 0xFF, 0xFF};

void Render::MainUI(void)
{
	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	//////////////////////////////////////
	//////////////// Begin ///////////////
	//////////////////////////////////////
	if (bIsLocked)
		ImGui::Begin("TK7 Data-Tool (locked)");
	else
		ImGui::Begin("TK7 Data-Tool (unlocked)");
	
	// Set Attributes
	// Disable drag
	// Disable Click
	if (bMaximizeMenu)
	{
		// Size & Position
		ImGui::SetWindowPos(ImVec2(menu_x, menu_y), 0);
		ImGui::SetWindowSize(vecWindowSizeDefault, 0);

		// Contents
		ImGui::TextColored(color_Hint, "Press END to minimize menu");
		ImGui::Checkbox("F1: Lock Menu", &bIsLocked);
		ImGui::Checkbox("F2: Player Data", &bPlayerData);
		ImGui::Checkbox("F3: Enemy Data", &bEnemyData);
		ImGui::Checkbox("F4: Advantage", &bAdvantage);
	}
	else
	{
		// Size & Position
		ImGui::SetWindowSize(vecWindowSizeMinimized, 0);
		ImGui::SetWindowPos(ImVec2(menu_x, menu_y), 0);
		
		// Contents
		ImGui::TextColored(color_Hint, "Press END to maximize menu");
	}


	ImGui::End();
	//////////////////////////////////////
	////////////////  End  ///////////////
	//////////////////////////////////////

	ImGui::Render();
}
