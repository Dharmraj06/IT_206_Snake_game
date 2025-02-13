#include "Fruit.h"

Fruit::Fruit()
{
    getFruit();
}

void Fruit::getCoordinateF()
{

    FruitX = std::min(((rand() % (width / 2)) + 1)* 2, width * 2 - 2);   
    FruitY = std::min(((rand() % (height / 2)) + 1) * 2, height * 2 - 2); 

    
}

void Fruit::getCoordinatef()
{
    fruitX = std::min(((rand() % (width / 2)) + 1)* 2, width * 2 - 2);   
    fruitY = std::min(((rand() % (height / 2)) + 1) * 2, height * 2 - 2); 
    if (fruitX > width * 2 || fruitY > height * 2 || fruitX <= 1 || fruitY <= 1)
    {
        getCoordinatef();
    }
}

void Fruit::getFruit()
{
    int randNum = rand() % 2;

    if (randNum == 0)
    {
        getCoordinateF();
        fruitX = -1;
        fruitY = -1;
    }
    else if (randNum == 1)
    {
        getCoordinatef();
        FruitX = -1;
        FruitY = -1;
    }
}
