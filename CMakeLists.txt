cmake_minimum_required(VERSION 3.0)

project(openleague)

# Find SDL2
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

# Find OpenGL
find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS})

# Get list of all .cpp files in src directory
file(GLOB SOURCES "src/*.cpp")

# Add C++ executable with all .cpp files in src directory
add_executable(openleague ${SOURCES})

# Link SDL2 and OpenGL libraries
target_link_libraries(openleague ${SDL2_LIBRARIES} ${OPENGL_LIBRARIES})