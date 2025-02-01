#include "logic.h"
#include "snake.h"

// Directions: (dx, dy) → (LEFT, RIGHT, UP, DOWN)
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

// Snake toy(40,20);

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
    // Do not call Input() here.
    pair<int, int> head = snake_body.back();

    extern int dx[];
    extern int dy[];

    // We assume that the current object (the Snake instance) has a 'dir' variable.
    head.first += dx[((class Snake *)this)->dir]; // Cast to Snake* if needed
    head.second += dy[((class Snake *)this)->dir];

    if (checkCollision(head))
    {
        gameOver = true;
        return;
    }

    snake_body.push(head);

    if (!increase_size)
        snake_body.pop(); // Remove tail if not increasing size
    else
        increase_size = false;

    // Update pos vector with current snake positions
    while (!temp.empty())
        temp.pop();
    vector<pair<int, int>> newPos;
    queue<pair<int, int>> copy = snake_body;
    while (!copy.empty())
    {
        newPos.push_back(copy.front());
        copy.pop();
    }
    pos = newPos;
}

// bool Logic::isGameOver() {
//     return gameOver;
// }

bool Logic::checkCollision(pair<int, int> &newHead)
{
    // Wrap-around logic for horizontal movement
    if (newHead.first >= height)
        newHead.first = 0;
    else if (newHead.first < 0)
        newHead.first = height - 1;

    // Wrap-around logic for vertical movement
    if (newHead.second >= width)
        newHead.second = 0;
    else if (newHead.second < 0)
        newHead.second = width - 1;

    // Check self-collision: if the new head position is already in the snake's body
    for (const pair<int, int> &segment : pos)
    {
        if (segment == newHead)
            return true;
    }

    return false;
}
