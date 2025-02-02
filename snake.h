#ifndef SNAKE_H
#define SNAKE_H

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <bits/stdc++.h>
#include "fruit.h"
#include "logic.h"

using namespace std;

enum eDirection {LEFT, RIGHT, UP, DOWN };

class Snake : public Logic, public Fruit {
private:
    int score;
    int width, height;
    

public:
    bool reaching = false;
    int sx,sy;
    eDirection dir;
    Snake() { }
    Snake(int w, int h);

    void draw();
    void Input();
    int getScore() { return score; }
};

#endif
