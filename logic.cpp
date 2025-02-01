#include "logic.h"
#include "snake.h"

// Directions: (dx, dy) → (UP, DOWN, LEFT, RIGHT)
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

Snake toy(60,30); 

Logic::Logic(){
    cout<<"snake initialised"<<endl;
    snake_body.push({30, 15});
    snake_body.push({31, 15});
    snake_body.push({32, 15});
    gameOver = false; 
}

vector<pair<int, int>> Logic::movement() {
    pair<int, int> head = snake_body.back(); 

    toy.Input();  

    head.first += dx[toy.dir];
    head.second += dy[toy.dir];

    if (checkCollision(head)) {
        gameOver = true; 
        return {};  // (no movement)
    }

    snake_body.push(head);
    
    if(!increase_size)  
    snake_body.pop();  // Remove the tail 
    else
    increase_size = false;

    // Update the pos vector to store current body positions
    pos.clear();
    temp = snake_body;
    while (!temp.empty()) {
        pos.push_back(temp.front());
        temp.pop();
    }

    return pos;  
}

// bool Logic::isGameOver() {
//     return gameOver;
// }

bool Logic::checkCollision(pair<int, int> newHead) {

    if (newHead.first < 0 || newHead.first >= width ||
        newHead.second < 0 || newHead.second >= height) {
        return true;
    }

    for (pair<int, int> segment : pos) {
        if (segment == newHead) return true;
    }

    return false;
}
