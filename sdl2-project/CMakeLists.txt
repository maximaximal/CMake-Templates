#====================================================================================
# Most Important Variables
#====================================================================================

set(PROJECT_NAME "Simone-SDL2-Template")
set(PROJECT_VERSION 0.1.0)

#====================================================================================
# General Project Setup
#====================================================================================

# Required minimum version of CMake.
cmake_minimum_required(VERSION 3.0.2)

# Project and version
project(${PROJECT_NAME}
    VERSION ${PROJECT_VERSION})

# Build-Number (for later use)
set(BUILD_NUMBER "0" CACHE STRING "Build-Number")

# Version variable.
set(VERSION ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}+${BUILD_NUMBER})

#====================================================================================
# External Library Setup
#====================================================================================

# Call to find the main library.
find_package(SDL2 REQUIRED)

#====================================================================================
# Executable Setup
#====================================================================================

# Add sources subdirectory for header files and source files.
add_subdirectory(src)

# Add the executable itself.
add_executable(${PROJECT_NAME} ${SRCS})

target_link_libraries(${PROJECT_NAME} SDL2::SDL2 SDL2::SDL2main)
