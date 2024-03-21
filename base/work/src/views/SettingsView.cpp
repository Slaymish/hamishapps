#include "SettingsView.h"
#include "imgui.h"

SettingsView::SettingsView(ConfigManager *configManager)
    : configManager(configManager) {}

void SettingsView::Render() {
  ImGuiWindowFlags window_flags = ImGuiWindowFlags_NoTitleBar |
                                  ImGuiWindowFlags_NoResize |
                                  ImGuiWindowFlags_NoMove;
  ImGui::Begin("Settings", nullptr, window_flags);
  {
    ImGui::Text("Welcome to the SettingsView!");
    ImVec4 red = ImVec4(1.0f, 0.0f, 0.0f, 1.0f);
    ImVec4 green = ImVec4(0.0f, 1.0f, 0.0f, 1.0f);

    if (ImGui::Button("Set Red", ImVec2(50, 20))) {
      configManager->SetWindowColor(red);
    }

    ImGui::SameLine();

    if (ImGui::Button("Set Green", ImVec2(50, 20))) {
      configManager->SetWindowColor(green);
    }

    ImGui::ColorEdit3("Window Color",
                      (float *)&configManager->GetWindowColor());

                      
  }
  ImGui::End();
}
