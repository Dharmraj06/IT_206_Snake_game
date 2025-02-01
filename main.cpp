#include <iostream>
#include <cstdlib>
#include <ctime>
#include "fruit.h"
#include "snake.h"
// Remove logic.h if Snake already includes it

using namespace std;

int main() {
    // Use one Snake object as the game instance.
    Snake snake(20, 40);    
    srand(time(0));  

    snake.gameOver = false;

    while (!snake.gameOver) {
        snake.movement();  
        snake.draw();
        cout << "Score: " << snake.getScore() << endl;
        Sleep(5);
    }

    cout << "Game Over! Final Score: " << snake.getScore() << endl;
    return 0;
}
