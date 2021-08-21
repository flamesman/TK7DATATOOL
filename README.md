# Tekken 7 Data Analytics Tool
### Timeline
- Project started: 08/20/2021

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
- WSL
    1. install CMake for windows
	2. install MinGW for windows and add MinGW/bin/ to PATH
	3. cd into project root
    ```
	mkdir bin
    make
    ```
- CMake
    1. install cmake for windows
    - Visual Studio 2019
        1. open the project folder in Visual Studio 2019
        2. ctrl + shift + b
    - Powershell
        1. open Powershell in project directory
        ```
        $ cmake -G "Visual Studio 2019" -A Win32 -B "build"
        $ cmake --build "build" --config "Release"
        ```

## Known Issues
None

## Goals
- [ ] Create Auto-updating script to pull addresses
