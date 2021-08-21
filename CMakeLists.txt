cmake_minimum_required(VERSION 3.7)

project("TK7 Data Tool")

set(EXEC "tk7_datatool")
set(CMAKE_CXX_STANDARD 17)

## Sources
file(GLOB SOURCES src/*.cpp)

## ImGui Dependencies
include_directories(imgui)

## TODO change to DirectX11/12
## Includes
include_directories(include)
include_directories("C:\\Program Files (x86)\\Microsoft DirectX SDK (June 2010)\\Include")

## TODO change to DirectX11/12
## Library
link_directories("C:\\Program Files (x86)\\Microsoft DirectX SDK (June 2010)\\Lib/x64")

## Output DLL
add_library(${EXEC} SHARED ${SOURCES})

## TODO change to DirectX11/12
target_link_libraries(${EXEC} d3d9 d3dx9)
