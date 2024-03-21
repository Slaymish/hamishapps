#include "views/SettingsView.h"
#include "imgui.h"
#include "widgets/SettingsWidget.h"
#include <iostream>

SettingsView::SettingsView(ConfigManager *configManager)
    : configManager(configManager) {
  settingsWidget = new SettingsWidget(configManager);
}

void SettingsView::Render() {
  ImGuiWindowFlags window_flags = ImGuiWindowFlags_NoTitleBar |
                                  ImGuiWindowFlags_NoResize |
                                  ImGuiWindowFlags_NoMove;
  ImGui::Begin("Settings", nullptr, window_flags);
  {
    settingsWidget->draw();
    if (ImGui::Button("Save")) {
      configManager->Save();
    }
    if (ImGui::Button("Load")) {
      configManager->Load();
    }
    ImGui::End();
  }
}
