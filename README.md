# Tekken 7 Data Analytics Tool
### Timeline
- Project started: 08/20/2021
- Auto-update script added: 08/21/2021

## Overview & Demonstration
[ TODO ]

[ Demonstration image ]

## Table of Contents
- [What I Learned](#what-i-learned)
- [How It Works](#how-it-works)
- [Build Instructions](#build-instructions)
- [Known Issues](#known-issues)
- [Goals](#Goals)

## What I Learned
[ TODO ]

## How It Works
Use any DLL injector that you are comfortable with to inject the file into  
the <code>TekkenGame-Win64-Shipping.exe</code> process. 

Once the DLL is injected, you will have access to the following Tools:

## Build Instructions
### Install Visual Studio 2019 with CMake Build tools first

- WSL
	1. Open the project root directory in WSL
	```
	make update # OPTIONAL, updates the include/offsets.h file
	make
	```
- Visual Studio 2019
	1. Open the project root directory in Visual Studio 2019
	2. Build -> Build All <i>(Ctrl + Shift + B)</i>
- PowerShell
	1. Open the project root directory in PowerShell
	```
	mkdir bin build
	cmake -G "Visual Studio 2019" -A Win32 -B "build"
	cmake --build "build" --config "Release"
	```

## Known Issues
- If you resize the game while the DLL is injected, the game WILL crash.

## Goals
- [x] Create Auto-updating script to pull addresses (August 21, 2021)
