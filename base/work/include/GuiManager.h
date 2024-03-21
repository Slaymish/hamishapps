#ifndef GUIMANAGER_H
#define GUIMANAGER_H

#include "imgui.h"
#include <GLFW/glfw3.h>

class GUIManager {
public:
  GUIManager(GLFWwindow *window);
  ~GUIManager();

  void Init();
  void NewFrame();
  void Render();

private:
  GLFWwindow *window;
};

#endif // GUIMANAGER_H
