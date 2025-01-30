#include "logic.h"
#include"snake.h"
// Directions: (dx, dy) → (UP, DOWN, LEFT, RIGHT)
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

Snake toy;

Logic::Logic() {
    // Initializing the snake's body with three positions
    snake_body.push({30, 15});
    snake_body.push({31, 15});
    snake_body.push({32, 15});
}

vector<pair<int, int>> Logic::movement() {
    pair<int, int> head = snake_body.back(); // Getting the position of the head

    eDirection dir = toy.Input();  // Get the direction from Snake class

    // Updating the head's position based on direction
    head.first = head.first + dx[dir];
    head.second = head.second + dy[dir];

    snake_body.push(head);  // Add the new head position

    snake_body.pop();  // Remove the tail (last part of the body)

    temp = snake_body;

    while (!temp.empty()) {
        pos.push_back(temp.front());  // Push body parts into pos vector
        temp.pop();
    }

    return pos;  // Return the positions of the snake's body
}
