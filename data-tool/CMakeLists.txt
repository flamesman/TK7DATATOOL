cmake_minimum_required(VERSION 3.7)

project("TK7-DataTool")
set(EXEC "tk7_datatool")

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)


## Combined Sources
file(GLOB SOURCE_FILES
	src/*.cpp                    # Main Sources
	imgui/*.cpp                  # Dear ImGUI sources
	kiero/*.cpp                  # Kiero Sources
	kiero/minhook/src/*.c     
	kiero/minhook/src/hde/*.c
)

## Includes
include_directories(include)
include_directories("C:\\Program Files (x86)\\Microsoft DirectX SDK (June 2010)\\Include")

## Library Directories
link_directories("C:\\Program Files (x86)\\Microsoft DirectX SDK (June 2010)\\Lib\\x64")

## Output DLL
add_library(${EXEC} SHARED ${SOURCE_FILES})

## Library Files
target_link_libraries(${EXEC} dxgi d3d11)
