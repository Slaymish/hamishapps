#ifndef SETTINGSVIEW_H
#define SETTINGSVIEW_H

#include "IView.h"
#include "imgui.h"

class SettingsView : public IView {
public:
  void Render() override;
};

#endif // SETTINGSVIEW_H
