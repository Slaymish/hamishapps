#include "SettingsView.h"
#include "imgui.h"

void SettingsView::Render() {
  ImGuiWindowFlags window_flags = ImGuiWindowFlags_NoTitleBar |
                                  ImGuiWindowFlags_NoResize |
                                  ImGuiWindowFlags_NoMove;
  ImGui::Begin("Settings", nullptr, window_flags);
  ImGui::Text("Adjust your settings here.");
  ImGui::End();
}
