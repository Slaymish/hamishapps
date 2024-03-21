#ifndef CONFIGMANAGER_H
#define CONFIGMANAGER_H

#include <boost/property_tree/ini_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <imgui.h>
#include <string>

class ConfigManager {
public:
  ConfigManager(const std::string &filename);
  void Load();
  void Save();

  void SetWindowColor(ImVec4 color);
  ImVec4 GetWindowColor();

  void SetEnableSound(bool enableSound);
  bool GetEnableSound();

  void SetVolume(float volume);
  float GetVolume();

private:
  std::string filename;
  boost::property_tree::ptree pt;
};

#endif // CONFIGMANAGER_H
