#ifndef FRUIT_H
#define FRUIT_H

#include <cstdlib>  
#include <iostream> 

class Fruit {
protected:
    int FruitX, FruitY, fruitX, fruitY;  
    char matrix[60][30];  
    int width = 60;  
    int height = 30; 
    int score = 0;  

public:
    // Constructor to initialize the board
    //Fruit(char m[20][20]);

    // Allocating coordinates for Fruit(F)
    void getCoordinateF();

    // Allocating coordinates for fruit(f)
    void getCoordinatef();

    // Spawning Fruit(F)
    void spawnF();

    // Spawning Fruit(f)
    void spawnf();

    // Choosing fruit and spawning it (either F or f)
    void getFruit();

    // Getter for the score
    int getScore();

    // For debugging: Print the current state of the game matrix
    void printMatrix();
};

#endif 
