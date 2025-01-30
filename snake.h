#ifndef SNAKE_H
#define SNAKE_H

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };

class Snake {
    private:
        int x, y, fruitX, fruitY, score;
        int width, height;
        eDirection dir;
        bool gameOver;

    public:
        // Constructor
        Snake(int w, int h);

        // Method to draw the game board
        void draw();

        // Method to handle input from the user
        eDirection Input() { return dir; }

        // Method to handle game logic
        void Logic();

        // Getter to check if the game is over
        bool isGameOver() { return gameOver; }

        // Getter to get the score
        int getScore() { return score; }
};

#endif
