#ifndef SETTINGSWIDGET_H
#define SETTINGSWIDGET_H

#include "ConfigManager.h"
#include "Widget.h"

class SettingsWidget : public Widget {
  ConfigManager *configManager;

public:
  SettingsWidget(ConfigManager *configManager);
  ~SettingsWidget();

  void draw() override;
};

#endif // SETTINGSWIDGET_H
