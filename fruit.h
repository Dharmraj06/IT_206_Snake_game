#ifndef FRUIT_H
#define FRUIT_H

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

class Fruit {        

    public:
        int FruitX, FruitY, fruitX, fruitY, score=-10;
        //allocating coordinates for Fruit(F)//
    void getCoordinateF()
    {
        do(
            FruitX = rand() % width;
            FruitY = rand() % height;
            score+=50;
        )
        while (matrix[fruitX][fruitY] == 'O' || matrix[FruitX][FruitY] == 'O');
    }

    //allocating coordinates for fruit(f)//
    void getCoordinatef()
    {
        do( 
            fruitX = rand() % width;
            fruitY = rand() % height;
            score+=10;
        )
        while (matrix[fruitX][fruitY] == 'O' || matrix[FruitX][FruitY] == 'O');
    }

       //spawning Fruit(F)
    void spawnF()
    {   
        matrix[FruitX][FruitY] = '🫐';
    }

    //spawning Fruit(f)
    void spawnf()
    {
        matrix[FruitX][FruitY] = '🍎';
    }

        // Method to choose fruit and spawn it
        void getFruit()
    {
        int randNum = rand() % 2;
        if(randNum=0)
        {
            getCoordinateF();
            spawnF();
        }
        if(randNum=1)
        {
            getCoordinatef();
            spawnf();
        }

    }
};

#endif