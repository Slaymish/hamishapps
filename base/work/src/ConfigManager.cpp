#include "ConfigManager.h"

ConfigManager::ConfigManager(const std::string &filename)
    : filename(filename) {}

void ConfigManager::Load() { boost::property_tree::read_ini(filename, pt); }

void ConfigManager::Save() { boost::property_tree::write_ini(filename, pt); }

void ConfigManager::SetWindowColor(ImVec4 color) {
  pt.put("Appearance.WindowColor",
         std::to_string(color.x) + " " + std::to_string(color.y) + " " +
             std::to_string(color.z) + " " + std::to_string(color.w));
}

ImVec4 ConfigManager::GetWindowColor() {
  std::string colorStr = pt.get<std::string>(
      "Appearance.WindowColor", "1.0,1.0,1.0,1.0"); // Default to white
  // Split colorStr and convert to ImVec4
  // This is a simplified example; you'll need to parse and convert the string
  // to floats
  return ImVec4(1.0f, 1.0f, 1.0f, 1.0f); // Placeholder return
}

void ConfigManager::SetEnableSound(bool enableSound) {
  pt.put("Sound.EnableSound", enableSound);
}

bool ConfigManager::IsSoundEnabled() {
  return pt.get<bool>("Sound.EnableSound");
}

void ConfigManager::SetVolume(float volume) { pt.put("Sound.Volume", volume); }

float ConfigManager::GetVolume() { return pt.get<float>("Sound.Volume"); }
