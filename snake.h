#ifndef SNAKE_H
#define SNAKE_H

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <bits/stdc++.h>
#include "fruit.h"
#include "logic.h"

using namespace std;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };

class Snake : public Logic, public Fruit {
private:
    int score;
    int width, height;

public:
    eDirection dir;
    Snake() { }
    Snake(int w, int h);

    void draw();
    void Input();
    int getScore() { return score; }
};

#endif
