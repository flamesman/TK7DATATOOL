#include "render.h"

ImVec2 vecWindowSize{125, 80};
ImVec2 vecWindowPos{0,0};

bool bPosition = false;
bool bFrameData = false;

void Render::MainUI(void)
{
	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	//////////////////////////////////////
	//////////////// Begin ///////////////
	//////////////////////////////////////
	ImGui::Begin("Data-Tool");

	// Size & Position
	ImGui::SetWindowSize(vecWindowSize, 0);
	ImGui::SetWindowPos(vecWindowPos, 0);

	// Contents
	ImGui::Checkbox("Frame-data", &bFrameData);
	ImGui::Checkbox("Position", &bPosition);

	ImGui::End();
	//////////////////////////////////////
	////////////////  End  ///////////////
	//////////////////////////////////////

	ImGui::Render();
}
