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
    Fruit();

    void getCoordinateF();

    void getCoordinatef();

    void getFruit();

    // Getter for the score
    //int getScore();

};

#endif 
