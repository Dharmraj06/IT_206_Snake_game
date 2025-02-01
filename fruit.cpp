#include "Fruit.h"

// Constructor to initialize the game board (matrix)
Fruit::Fruit() {
    getFruit();
}

void Fruit::getCoordinateF() {
    
        FruitX = rand() % width;
        FruitY = rand() % height;
        std::cout<<"Fruit(x,y)"<<FruitX<<","<<FruitY;
}

void Fruit::getCoordinatef() {
        fruitX = rand() % width;
        fruitY = rand() % height;
        std::cout<<"fruit(x,y)"<<fruitX<<","<<fruitY;
        
}

void Fruit::getFruit() {
    int randNum = rand() % 2;
    if (randNum == 0) {
        getCoordinateF();
        // spawnF();
    } else if (randNum == 1) {
        getCoordinatef();
        // spawnf();
    }
}


