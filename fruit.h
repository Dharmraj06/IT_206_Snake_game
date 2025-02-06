#ifndef FRUIT_H
#define FRUIT_H

#include <cstdlib>  
#include <iostream> 

class Fruit {
protected:
    int FruitX, FruitY, fruitX, fruitY;  
    int width = 20;  
    int height = 10; 

public:
    Fruit();

    void getCoordinateF();

    void getCoordinatef();

    void getFruit();

};

#endif 
