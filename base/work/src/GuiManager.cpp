#include "GuiManager.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <iostream>

GUIManager::GUIManager(GLFWwindow *window) : window(window) {
  if (!window) {
    std::cerr << "GUIManager received a null window pointer." << std::endl;
  }
}

void GUIManager::Init() {
  // Check if the window is valid
  if (!window) {
    std::cerr << "GUIManager cannot initialize because window is null."
              << std::endl;
    return;
  }

  // Setup Dear ImGui context
  IMGUI_CHECKVERSION();
  ImGui::CreateContext();
  ImGuiIO &io = ImGui::GetIO();
  (void)io;

  // Setup Platform/Renderer bindings
  if (!ImGui_ImplGlfw_InitForOpenGL(window, true)) {
    std::cerr << "ImGui_ImplGlfw_InitForOpenGL failed." << std::endl;
    return;
  }
  if (!ImGui_ImplOpenGL3_Init("#version 150")) {
    std::cerr << "ImGui_ImplOpenGL3_Init failed." << std::endl;
    return;
  }

  // Style customization
  ImGuiStyle &style = ImGui::GetStyle();
  style.WindowRounding = 0.0f; // Square windows
  style.Colors[ImGuiCol_WindowBg] =
      ImVec4(0.1f, 0.1f, 0.1f, 1.0f); // Dark background for windows
}

void GUIManager::NewFrame() {
  // Check if the window is valid
  if (!window) {
    std::cerr << "GUIManager cannot start a new frame because window is null."
              << std::endl;
    return;
  }

  // Start the Dear ImGui frame
  ImGui_ImplOpenGL3_NewFrame();
  ImGui_ImplGlfw_NewFrame();
  ImGui::NewFrame();
}

void GUIManager::Render() {
  // Rendering
  ImGui::Render();
  ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}

GUIManager::~GUIManager() {
  // Cleanup
  ImGui_ImplOpenGL3_Shutdown();
  ImGui_ImplGlfw_Shutdown();
  ImGui::DestroyContext();
}
