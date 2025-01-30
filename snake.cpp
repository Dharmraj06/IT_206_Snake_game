#include "Snake.h"

// Constructor to initialize the game
Snake::Snake(int w, int h) {
    width = w;
    height = h;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
    dir = STOP;
    gameOver = false;
}

// Method to draw the game board
void Snake::draw() {
    // Clear the screen (works on most systems)
    cout << "\033[2J\033[H";  // Clear screen and reset cursor position

    // Drawing the snake field
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                cout << "#";  // Draw the border
            else if (i == y && j == x)
                cout << "O";  // Snake's head
            else if (i == fruitY && j == fruitX)
                cout << "F";  // Fruit
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << "Score: " << score << endl;
}

// Method to take input from the user
eDirecton Snake::Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a': dir = LEFT; break;
            case 'd': dir = RIGHT; break;
            case 'w': dir = UP; break;
            case 's': dir = DOWN; break;
            case 'x': gameOver = true; break;  // Exit game if 'x' is pressed
        }
    }
    return dir;
}

// Method to handle game logic
void Snake::Logic() {
    // Move the snake in the current direction
    switch (dir) {
        case LEFT: x--; break;
        case RIGHT: x++; break;
        case UP: y--; break;
        case DOWN: y++; break;
        default: break;
    }

    // Check for wall collisions
    if (x <= 0 || x >= width - 1 || y <= 0 || y >= height - 1)
        gameOver = true;

    // Check for fruit collision
    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
    }
}
