// #include<bits/stdc++.h>
// using namespace std;

// class Logic{

// };

#include <iostream>
#include <queue>
using namespace std;

// Directions: (dx, dy) → (UP, DOWN, LEFT, RIGHT)
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

// Enum for directions
enum Direction { UP = 0, DOWN = 1, LEFT = 2, RIGHT = 3 };

int main() {
    queue<pair<int, int>> snake;
    int gridSize = 10;
    int snakeLength = 3; // Initial length
    int dir = RIGHT;     // Initial direction

    // Initialize snake at (5,5), (5,4), (5,3)
    snake.push({5, 5});
    snake.push({5, 4});
    snake.push({5, 3});

    // Simulating movement
    for (int t = 0; t < 10; t++) { // Move 10 times
        pair<int, int> head = snake.back(); // Get current head
        int newX = head.first + dx[dir];
        int newY = head.second + dy[dir];

        // Add new head
        snake.push({newX, newY});

        // Remove tail (if not eating food)
        snake.pop();

        // Print snake positions
        cout << "Snake positions: ";
        queue<pair<int, int>> temp = snake;
        while (!temp.empty()) {
            cout << "(" << temp.front().first << "," << temp.front().second << ") ";
            temp.pop();
        }
        cout << endl;
    }

    return 0;
}
