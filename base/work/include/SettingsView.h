#ifndef SETTINGSVIEW_H
#define SETTINGSVIEW_H

#include "ConfigManager.h"
#include "IView.h"

class SettingsView : public IView {
public:
  explicit SettingsView(ConfigManager *configManager);
  void Render() override;

private:
  ConfigManager *configManager;
};

#endif // SETTINGSVIEW_H