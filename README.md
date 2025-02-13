g++ main.cpp fruit.cpp snake.cpp logic.cpp -o game
# Snake Game

## Overview

This is a simple Snake Game implemented in C++. The game follows the classic snake gameplay, where the player controls a growing snake that moves around the screen collecting fruit while avoiding collisions with itself and the boundaries.

## Features

*   **Classic Snake Gameplay:** Navigate the snake, collect fruits, and grow longer.

*   **Game Mechanics:**
    *   Collision detection with walls and itself.
    *   Classic Gameplay: Move the snake in four directions (Up, Down, Left, Right) and grow as you eat fruits.
    *   Random Fruit Spawning: Fruits appear at random locations for you to collect.
    *   Collision Detection: The game ends if you hit a wall or your own tail.
    *   Score Tracking: Keep track of how many fruits you've eaten.

*   **Well-Organized Code:** The project is structured into multiple files for easier understanding and maintenance.

## Modular Code Structure

*   `snake.cpp / snake.h`: Handles snake movement and growth.
*   `fruit.cpp / fruit.h`: Manages fruit spawning.
*   `logic.cpp / logic.h`: Implements game logic.
*   `main.cpp`: Runs the game loop.

## Precompiled Executables

Includes `snake_game.exe` to run the game directly.

## How to Run

### Compile from Source

1.  Ensure you have a C++ compiler installed (G++ recommended).
2.  Open a terminal and navigate to the project folder.
3.  Compile using:

    ```bash
    g++ main.cpp fruit.cpp snake.cpp logic.cpp -o game 
    ```

4.  Run the game:

    ```bash
    game.exe
    ```

### Run Precompiled Executable (Windows)

Simply double-click `snake_game.exe` to start playing.

## Requirements

*   C++ Compiler (for compiling from source)
*   Windows OS (for precompiled executables)
*   
