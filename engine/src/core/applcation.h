#include <string>

#pragma once
namespace penguin {
  struct AppConfig{
    int width = 0;
    int height = 0;
    std::string title;
    std::string version;
  };

  // will be defined in game.exe
  AppConfig createApplication();
  void runApplication(const AppConfig&);
}