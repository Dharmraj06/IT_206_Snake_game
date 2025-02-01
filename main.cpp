
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "fruit.h"
#include "snake.h"
#include "logic.h"

using namespace std;

int main() {
    char mat[60][30];

    Fruit fruit;    
    Snake snake(60,30);    
    Logic game;  

    srand(time(0));

    game.gameOver = false;

    while (!game.gameOver) {
                
        game.movement();  
        //game.checkCollision();  

        // Spawn a new fruit
        //fruit.getFruit();

        //Print the current game state (matrix with snake and fruit)
        snake.draw();
        
        // Get the score
        cout << "Score: " <<  snake.getScore() << endl;// working 

        // game.gameOver = game.isGameOver();//working 
    }

    cout << "Game Over! Final Score: " << snake.getScore() << endl;

    return 0;
}