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
    char mat[30][30];

    Fruit fruit;    
    Snake snake(60,30);    
    Logic game;  

    srand(time(0));

    game.gameOver = false;

    while (!game.gameOver) {
                
        game.movement();  
        //game.checkCollision();  

        // Spawn a new fruit
        // fruit.getFruit();

        // // Print the current game state (matrix with snake and fruit)
        // //fruit.printMatrix();
        
        // // Get the score
        // cout << "Score: " << fruit.getScore() << endl;// working 

        // gameOver = game.isGameOver();//working 


    }

    cout << "Game Over! Final Score: " << fruit.getScore() << endl;

    return 0;
}