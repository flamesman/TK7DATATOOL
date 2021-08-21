#include "render.h"

extern bool bPosition;
extern bool bFrameData;
extern bool bMaximizeMenu;

ImVec2 vecWindowSizeDefault{140, 80};
ImVec2 vecWindowSizeMinimized{140, 0};
ImVec2 vecWindowPosDefault{0,0};

void Render::MainUI(void)
{
	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	//////////////////////////////////////
	//////////////// Begin ///////////////
	//////////////////////////////////////
	ImGui::Begin("Data-Tool (END)");
	if (bMaximizeMenu)
	{
		// Size & Position
		ImGui::SetWindowSize(vecWindowSizeDefault, 0);
		ImGui::SetWindowPos(vecWindowPosDefault, 0);
		
		// Contents
		ImGui::Checkbox("F1: Frame-data", &bFrameData);
		ImGui::Checkbox("F2: Position", &bPosition);
	}
	else
	{
		// Size & Position
		ImGui::SetWindowSize(vecWindowSizeMinimized, 0);
		ImGui::SetWindowPos(vecWindowPosDefault, 0);
	}


	ImGui::End();
	//////////////////////////////////////
	////////////////  End  ///////////////
	//////////////////////////////////////

	ImGui::Render();
}
