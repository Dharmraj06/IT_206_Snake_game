#include "Fruit.h"

// Constructor to initialize the game board (matrix)
Fruit::Fruit() {
    getFruit();
}

void Fruit::getCoordinateF() {
    
        FruitX = (rand() % width)*2;
        FruitY = (rand() % height)*2;
        //std::cout<<"Fruit(x,y)"<<FruitX<<","<<FruitY<<std::endl;
}

void Fruit::getCoordinatef() {
        fruitX = (rand() % width)*2;
        fruitY = (rand() % height)*2;
        //std::cout<<"fruit(x,y)"<<fruitX<<","<<fruitY<<std::endl;
        
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


