#pragma once
#include "applcation.h"

extern penguin::AppConfig penguin::createApplication();

int main(int argc, char** argv) {
  auto config = penguin::createApplication();
  penguin::runApplication(config);
  return 0;
}