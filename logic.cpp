#include "logic.h"
#include "snake.h"

// Directions: (dx, dy) → (UP, DOWN, LEFT, RIGHT)
int dx[] = {-1, 1,0,0};
int dy[] = {0, 0, 1,-1 };

Snake toy(20,40); 

Logic::Logic(){
    //cout<<"snake initialised"<<endl;
    snake_body.push({10, 10});
    snake_body.push({10, 11});
    snake_body.push({10, 12});
    gameOver = false; 
}

void Logic::movement() {
    pair<int, int> head = snake_body.back(); 

    toy.Input();  

    head.first += dx[toy.dir];
    head.second += dy[toy.dir];

    if (checkCollision(head)) {
        gameOver = true;  // (no movement)
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
}

// bool Logic::isGameOver() {
//     return gameOver;
// }

bool Logic::checkCollision(pair<int, int>& newHead) {
    // Wrap-around logic for horizontal movement
    if (newHead.first >= width)
        newHead.first = 0;
    else if (newHead.first < 0)
        newHead.first = width - 1;
    
    // Wrap-around logic for vertical movement
    if (newHead.second >= height)
        newHead.second = 0;
    else if (newHead.second < 0)
        newHead.second = height - 1;
    
    // Check self-collision: if the new head position is already in the snake's body
    for (const pair<int, int>& segment : pos) {
        if (segment == newHead)
            return true;
    }
    
    return false;
}

