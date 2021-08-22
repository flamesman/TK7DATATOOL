cmake_minimum_required(VERSION 3.7)

project("TK7-DataTool")
set(EXEC "tk7_datatool")

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)


## Combined Sources
file(GLOB SOURCES 
	src/*.cpp                         # Main Sources
	include/imgui/*.cpp               # Dear ImGUI sources
	include/kiero/*.cpp               # Kiero Sources
	include/kiero/minhook/src/*.c     
	include/kiero/minhook/src/hde/*.c
)

## ImGui Dependencies
include_directories(imgui)

## Includes
include_directories(include)
include_directories("C:\\Program Files (x86)\\Microsoft DirectX SDK (June 2010)\\Include")

## Library
link_directories("C:\\Program Files (x86)\\Microsoft DirectX SDK (June 2010)\\Lib\\x64")

## Output DLL
add_library(${EXEC} SHARED ${SOURCES})

target_link_libraries(${EXEC} dxgi d3d11)
