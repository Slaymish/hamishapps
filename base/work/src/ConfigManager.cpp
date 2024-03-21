#include "ConfigManager.h"

ConfigManager::ConfigManager(const std::string &filename) : filename(filename) {
  Load();

  if (pt.get_child_optional("Appearance") == boost::none) {
    pt.put("Appearance.WindowColor", "0.0,0.0,0.0,1.0");
  }

  if (pt.get_child_optional("Sound") == boost::none) {
    pt.put("Sound.EnableSound", true);
    pt.put("Sound.Volume", 0.5f);
  }

  Save();
}

void ConfigManager::Load() { boost::property_tree::read_ini(filename, pt); }

void ConfigManager::Save() { boost::property_tree::write_ini(filename, pt); }

void ConfigManager::SetWindowColor(ImVec4 color) {
  pt.put("Appearance.WindowColor",
         std::to_string(color.x) + "," + std::to_string(color.y) + "," +
             std::to_string(color.z) + "," + std::to_string(color.w));
}

ImVec4 ConfigManager::GetWindowColor() {
  std::string colorStr = pt.get<std::string>("Appearance.WindowColor");
  ImVec4 color;
  std::string::size_type sz;
  color.x = std::stof(colorStr, &sz);
  colorStr = colorStr.substr(sz + 1);
  color.y = std::stof(colorStr, &sz);
  colorStr = colorStr.substr(sz + 1);
  color.z = std::stof(colorStr, &sz);
  colorStr = colorStr.substr(sz + 1);
  color.w = std::stof(colorStr);
  return color;
}

void ConfigManager::SetEnableSound(bool enableSound) {
  pt.put("Sound.EnableSound", enableSound);
}

bool ConfigManager::IsSoundEnabled() {
  return pt.get<bool>("Sound.EnableSound");
}

void ConfigManager::SetVolume(float volume) { pt.put("Sound.Volume", volume); }

float ConfigManager::GetVolume() { return pt.get<float>("Sound.Volume"); }
