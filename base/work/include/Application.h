#ifndef APPLICATION_H
#define APPLICATION_H

#include "GuiManager.h"
#include "IView.h" // Include the IView header
#include <GLFW/glfw3.h>
#include <memory>        // For std::unique_ptr
#include <unordered_map> // For std::unordered_map

class Application {
  GLFWwindow *window;
  GUIManager *guiManager;

  enum class ViewType { Home, Settings, About };

  std::unordered_map<ViewType, std::unique_ptr<IView>> views;
  ViewType currentView = ViewType::Home;

public:
  Application();
  ~Application();
  void init();
  void initViews();
  void initGUI();
  void update();
  void render();
  void renderGUI();
  void renderMenuBar();
  void shutdown();
  bool shouldClose() const;
};

#endif // APPLICATION_H
