#pragma once

// std libs
#include <set>
#include <random>
#include <limits>
#include <vector>
#include <string>
#include <bitset>
#include <cassert>
#include <memory>
#include <sstream>
#include <fstream>
#include <assert.h>
#include <iostream>
#include <algorithm>
#include <functional>
#include <unordered_map>

// SDL2 libraries
#include <SDL2/SDL.h>

#ifdef FUSE_EXPORT
  #ifdef _MSC_VER
    #define PENGUIN_API __declspec(dllexport)
  #else
    #define PENGUIN_API __attribute__((visibility("default")))
  #endif
#else
  #ifdef __MSC_VER
    #define PENGUIN_API __declspec(dllimport)
  #else
    #define PENGUIN_API
  #endif
#endif