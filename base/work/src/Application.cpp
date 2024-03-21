#include "Application.h"
#include "GuiManager.h"
#include "IView.h"
#include <GLFW/glfw3.h>
#include <glad/glad.h>
#include <iostream>
#include <unordered_map>

#include "AboutView.h"
#include "HomeView.h"
#include "SettingsView.h"

using namespace std;

Application::Application()
    : window(nullptr), guiManager(nullptr), configManager(nullptr) {}

Application::~Application() { shutdown(); }

void Application::init() {
  cout << "Application::init()" << endl;
  if (!glfwInit()) {
    cout << "Failed to initialize GLFW" << endl;
    return;
  }
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  window = glfwCreateWindow(800, 600, "Hamish's App", nullptr, nullptr);
  if (!window) {
    cout << "Failed to create window" << endl;
    return;
  }

  glfwMakeContextCurrent(window);

  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    cout << "Failed to initialize GLAD" << endl;
    return;
  }

  cout << "OpenGL: " << glGetString(GL_VERSION) << endl;
  cout << "GLSL: " << glGetString(GL_SHADING_LANGUAGE_VERSION) << endl;
  cout << "Vendor: " << glGetString(GL_VENDOR) << endl;
  cout << "Renderer: " << glGetString(GL_RENDERER) << endl;
  cout << "GLFW: " << glfwGetVersionString() << endl;

  // Initialize the GUI
  initViews();
  initGUI();
}

ConfigManager *Application::getConfigManager() {
  if (configManager == nullptr) {
    configManager = new ConfigManager("config.ini");
  }
  return configManager;
}

void Application::initGUI() {
  guiManager = new GUIManager(window);
  guiManager->Init();
}

void Application::update() {
  if (window != nullptr) {
    glfwPollEvents();
  }
}

void Application::render() {
  if (window != nullptr) {
    glClear(GL_COLOR_BUFFER_BIT);
    renderGUI(); // Render ImGui GUI
    glfwSwapBuffers(window);
  }
}

void Application::initViews() {
  views[ViewType::Home] = std::make_unique<HomeView>();
  views[ViewType::Settings] =
      std::make_unique<SettingsView>(getConfigManager());
  views[ViewType::About] = std::make_unique<AboutView>();
}

void Application::renderMenuBar() {
  if (ImGui::BeginMainMenuBar()) {
    if (ImGui::MenuItem("Home", nullptr, currentView == ViewType::Home)) {
      currentView = ViewType::Home;
    }
    ImGui::SameLine(); // Keep the next item on the same line
    if (ImGui::MenuItem("Settings", nullptr,
                        currentView == ViewType::Settings)) {
      currentView = ViewType::Settings;
    }
    ImGui::SameLine(); // Keep the next item on the same line
    if (ImGui::MenuItem("About", nullptr, currentView == ViewType::About)) {
      currentView = ViewType::About;
    }
    ImGui::EndMainMenuBar();
  }
}

void Application::renderGUI() {
  if (guiManager != nullptr) {
    guiManager->NewFrame();

    renderMenuBar(); // Render the menu bar

    int width, height;
    glfwGetFramebufferSize(window, &width, &height);

    // Get the height of the main menu bar
    float menuBarHeight = ImGui::GetFrameHeight();

    // Adjust the view rendering area to start below the menu bar
    // and use the remaining height
    if (auto it = views.find(currentView); it != views.end()) {
      ImGui::SetNextWindowPos(
          ImVec2(0, menuBarHeight)); // Set position below the menu bar
      ImGui::SetNextWindowSize(
          ImVec2(width, height - menuBarHeight)); // Adjust the height
      it->second
          ->Render(); // Now Render doesn't need width and height parameters
    }

    guiManager->Render();
  }
}

void Application::shutdown() {
  if (guiManager != nullptr) {
    delete guiManager;
    guiManager = nullptr;
  }

  if (window != nullptr) {
    glfwDestroyWindow(window);
    window = nullptr;
  }

  cout << "Application::shutdown()" << endl;
  glfwTerminate();
}

bool Application::shouldClose() const {
  return window == nullptr || glfwWindowShouldClose(window);
}
