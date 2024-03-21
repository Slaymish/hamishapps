#include "HomeView.h"
#include "imgui.h"
#include <cstdlib>
#include <string>

// Correct function declaration
void OpenURL(const std::string &url) {
#if defined(_WIN32)
  ShellExecuteA(NULL, "open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
#elif defined(__APPLE__)
  std::string command = "open " + url;
  system(command.c_str());
#elif defined(__linux__) || defined(__unix__)
  std::string command = "xdg-open " + url;
  system(command.c_str());
#else
#error "Platform not supported!"
#endif
}

void HomeView::Render() {
  ImGui::Begin("HomeView", nullptr, ImGuiWindowFlags_NoTitleBar);

  ImGui::Text("Welcome to the HomeView!");

  int windowWidth = ImGui::GetMainViewport()->Size.x;
  int windowHeight = ImGui::GetMainViewport()->Size.y;

  float btnWidth = windowWidth / 6;
  float btnHeight = windowHeight / 20;
  float btnSpacing = 10;

  ImVec2 centerBottom = ImVec2(windowWidth / 2, windowHeight / 2);
  centerBottom.y = windowHeight - 50;
  centerBottom.x -= btnWidth * 1.5 + btnSpacing;
  ImGui::SetCursorPos(centerBottom);

  if (ImGui::Button("My GitHub Repos", ImVec2(btnWidth, btnHeight))) {
    OpenURL("https://github.com/Slaymish");
  }

  ImGui::SameLine();
  if (ImGui::Button("My Twitter", ImVec2(btnWidth, btnHeight))) {
    OpenURL("https://twitter.com/Slagmish");
  }

  ImGui::SameLine();
  if (ImGui::Button("My Website", ImVec2(btnWidth, btnHeight))) {
    OpenURL("https://hamishburke.dev");
  }

  ImGui::End();
}
