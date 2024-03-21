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

  int btnWidth = 100;
  int btnHeight = 30;

  // Place buttons at the center bottom of the window
  ImGui::SetCursorPosX((ImGui::GetWindowWidth() - btnWidth * 3) / 2);
  ImGui::SetCursorPosY(ImGui::GetWindowHeight() / 2);

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
