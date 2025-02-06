#include "Fruit.h"

// Constructor to initialize the game board (matrix)
Fruit::Fruit() {
    getFruit();
}

void Fruit::getCoordinateF() {
    
        FruitX = (rand() % width)*2;
        
        FruitY = (rand() % height)*2;
       
}

void Fruit::getCoordinatef() {
        fruitX = (rand() % width)*2;
        fruitY = (rand() % height)*2;
        
        
}

void Fruit::getFruit() {
    int randNum = rand() % 2;
    if (randNum == 0) {
        getCoordinateF();
        fruitX = -1;
        fruitY = -1;

    } else if (randNum == 1) {
        getCoordinatef();
        FruitX = -1;
        FruitY = -1;
    }
}


