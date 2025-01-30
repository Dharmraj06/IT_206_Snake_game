// #include<iostream>
// #include<windows.h>
// #include<conio.h>
// #include""

// using namespace std;

// extern const int width = 20;
// extern const int hieght = 20;
// extern bool gameover;
// extern int x,y;
// extern int FruitX,FruitY;
// extern int fruitX,fruitY;
// extern int score;
// extern int ntail;
// enum eDirection {LEFT,RIGHT,UP,DOWN};
// eDirection dir;


// class setUp{
// public:
//     gameover = false;
//     x = width/2;
//     y = hieght/2;
//     score = -10;

// };

// int main(){

    

//     return 0;
// }

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "fruit.h"
#include "snake.h"
#include "logic.h"

using namespace std;

int main() {
    // Initialize the game board (matrix)
    char matrix[20][20];

    // Initialize the fruit, snake, and game logic
    Fruit fruit(matrix);    // Fruit object to manage fruit placement and scoring
    Snake snake(20, 20);    // Snake object with the board size
    Logic game(snake, fruit, matrix);  // Logic object to manage the game behavior

    // Seed the random number generator
    srand(time(0));

    // Start the game loop
    bool gameOver = false;

    while (!gameOver) {
        // Get user input for snake movement and update the game state
        snake.Input();
        game.moveSnake();  // Update snake position
        game.checkCollision();  // Check for collisions

        // Spawn a new fruit
        fruit.getFruit();

        // Print the current game state (matrix with snake and fruit)
        game.printMatrix();
        
        // Get the score
        cout << "Score: " << game.getScore() << endl;

        // If the game is over, break the loop
        gameOver = game.isGameOver();
    }

    cout << "Game Over! Final Score: " << game.getScore() << endl;

    return 0;
}