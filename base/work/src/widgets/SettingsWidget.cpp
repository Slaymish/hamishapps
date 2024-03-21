#include "widgets/SettingsWidget.h"
#include "ConfigManager.h"
#include "imgui.h"

SettingsWidget::SettingsWidget(ConfigManager *configManager) {
  this->configManager = configManager;
}

SettingsWidget::~SettingsWidget() { delete configManager; }

void SettingsWidget::draw() {
  ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(10, 10));
  ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(10, 10));
  ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(10, 10));

  ImGui::Columns(2, "SettingsColumns", true);
  ImGui::Separator();
  ImGui::Text("Settings");
  ImGui::Separator();
  ImGui::Text("Volume");
  float volume = configManager->GetVolume();
  ImGui::SetNextItemWidth(100);
  ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 10);
  ImGui::SliderFloat("##Volume", &volume, 0.0f, 1.0f);
  {
    configManager->SetVolume(volume);
    configManager->Save();
  }
  ImGui::Text("Window Color");
  ImVec4 windowColor = configManager->GetWindowColor();
  ImGui::ColorEdit3("##WindowColor", (float *)&windowColor);
  {
    configManager->SetWindowColor(windowColor);
    configManager->Save();
  }

  ImGui::PopStyleVar(3);
}