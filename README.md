# Tetris Clone Built with Raylib (C++) 

A simple implementation of the classic Tetris game, developed using [Raylib](https://www.raylib.com/) in C++.  
This project was created as part of my learning and portfolio building.

## What is Raylib?
Raylib is a C/C++ library designed to help developers easily create 2D and 3D games.  
It is lightweight, beginner-friendly, and ideal for learning game development basics.

## Features
- Block rotation and collision detection
- Line clearing with score tracking
- Keyboard controls using Raylib
- Grid system with modular design

## Tech Stack
- C++
- Raylib
- CMake (optional)
- Git/GitHub

## File Structure

src/
┣ main.cpp
┣ grid.cpp
┗ grid.h

## What I Learned
- Implementing a game loop and rendering in C++
- Structuring game logic in modular files
- Using Raylib for input and graphics

## Images


## How to Build and Run

### Option 1: Using g++
```bash
g++ src/*.cpp -o tetris -lraylib
./tetris
```

### Option 2: Using Cmake
```bash
cmake .
make
./tetris
```
