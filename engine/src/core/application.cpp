#include "pch.h"
#include "applcation.h"

namespace penguin {
  void runApplication(const AppConfig& config) {
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0) {
      std::cout << "sdl initialized" << std::endl;
    }
    SDL_Quit();
  }
}