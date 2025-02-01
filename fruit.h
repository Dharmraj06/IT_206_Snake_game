#ifndef FRUIT_H
#define FRUIT_H

#include <cstdlib>  
#include <iostream> 

class Fruit {
protected:
    int FruitX, FruitY, fruitX, fruitY;  
    char matrix[20][40];  
    int width = 20;  
    int height = 40; 
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
