#include "logic.h"
#include "snake.h"

// Directions: (dx, dy) → (LEFT, RIGHT, UP, DOWN)
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};


Logic::Logic()
{
    // cout<<"snake initialised"<<endl;
    snake_body.push({20, 10});
    snake_body.push({20, 11});
    snake_body.push({20, 12});
    gameOver = false;
}

void Logic::movement()
{
    pair<int, int> head = snake_body.back();

    extern int dx[];
    extern int dy[];

    head.first += dx[((class Snake *)this)->dir]; 
    head.second += dy[((class Snake *)this)->dir];

    if (checkCollision(head))
    {
        gameOver = true;
        return;
    }

    snake_body.push(head);

    if (!increase_size)
        snake_body.pop(); 
    else
        increase_size = false;

    
    vector<pair<int, int>> newPos;
    queue<pair<int, int>> copy = snake_body;
    while (!copy.empty())
    {
        newPos.push_back(copy.front());
        copy.pop();
    }
    pos = newPos;
}


bool Logic::checkCollision(pair<int, int> &newHead)
{
    if (newHead.first >= height)
        gameOver = true;
    else if (newHead.first < 0)
        gameOver = true;

    if (newHead.second >= width)
        gameOver = true;
    else if (newHead.second < 0)
        gameOver = true;

    for (const pair<int, int> &segment : pos)
    {
        if (segment == newHead)
            return true;
    }

    return false;
}
