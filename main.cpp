#include <iostream>
#include <cstdlib>
#include <ctime>
#include "fruit.h"
#include "snake.h"
// No need to include logic.h separately if Snake inherits from it.

using namespace std;

int main() {
    // Use one Snake object as the game instance.
    Snake snake(40, 20);    
    srand(time(0));  

    snake.gameOver = false;

    // In main.cpp
while (!snake.gameOver) {
   
    snake.Input();  

    
    snake.movement();

   
    snake.draw();

    cout << "Score: " << snake.getScore() << endl;
    Sleep(50);
}


    cout << "Game Over! Final Score: " << snake.getScore() << endl;
    return 0;
}
