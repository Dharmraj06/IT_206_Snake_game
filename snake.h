#ifndef SNAKE_H
#define SNAKE_H

#include <iostream>
#include <conio.h>
#include <windows.h>
#include<bits/stdc++.h>
using namespace std;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };

class Snake : public Logic , public Fruit {
    private:
        //int x, y, fruitX, fruitY;
        int score;
        int width, height;
       

    public:


        eDirection dir;
        Snake() { 
        // Default constructor
        }

        Snake(int w, int h);

        void draw();

        void Input();

        // Method to handle game logic
        //void Logic();        

        // Getter to get the score
        int getScore() { return score; }
};

#endif
