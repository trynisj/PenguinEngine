# engine project (shared lib)
project(engine VERSION 0.0.1)

# get all cpp files
file(GLOB_RECURSE SRC_FILES src/*.cpp CMAKE_CONFIGURE_DEPENDS)
add_library(${PROJECT_NAME} ${SRC_FILES})

# add definition
add_definitions(-DFUSE_EXPORT)
add_definitions(-D_DEBUG)

# define symbols
if (WIN32)
  target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/dependencies/includes)
  target_link_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/dependencies/libs)
endif (WIN32)

# unix platform
if (UNIX)
  find_package(SDL2 REQUIRED)
  target_include_directories(${PROJECT_NAME} PUBLIC ${SDL2_INCLUDE_DIRS})
  target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})
endif(UNIX)

# precompile headers
target_precompile_headers(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR/src/pch.h})

# add include directory
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)