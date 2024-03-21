#include "AboutView.h"
#include "imgui.h"

void AboutView::Render() {
  ImGuiWindowFlags window_flags = ImGuiWindowFlags_NoTitleBar |
                                  ImGuiWindowFlags_NoResize |
                                  ImGuiWindowFlags_NoMove;
  ImGui::Begin("Home", nullptr, window_flags);
  ImGui::Text("Welcome to the About view!");
  ImGui::End();
}
