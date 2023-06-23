#include <core/entry.h>

penguin::AppConfig penguin::createApplication() {
  penguin::AppConfig config;
  config.version = "0.0.1";
  config.title = "Penguin2D";
  config.height = 1080;
  config.width = 720;
  return config;
}