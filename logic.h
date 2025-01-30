#ifndef LOGIC_H
#define LOGIC_H

#include <queue>
#include <vector>
#include "snake.h"  // Include the Snake class

using namespace std;

class Logic {
private:
    queue<pair<int, int>> snake_body;
    queue<pair<int, int>> temp;
    vector<pair<int, int>> pos;

public:
    Logic();  // Constructor to initialize the game
    vector<pair<int, int>> movement();  // Method to move the snake and update body positions
};

#endif
