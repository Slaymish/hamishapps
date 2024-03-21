#include "Application.h"
#include "imgui.h"
#include <GLFW/glfw3.h>

int main() {
  Application app;
  app.init();
  while (!app.shouldClose()) {
    app.update();
    app.render();
  }
  app.shutdown();
  return 0;
}