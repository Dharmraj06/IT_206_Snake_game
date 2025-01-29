#include<iostream>
#include <cstdlib>  
#include <ctime>

using namespace std;

class fruit()
{
    
    public:

    //allocating coordinates for Fruit(F)//
    void getCoordinateF()
    {
        do(
            FruitX = rand() % width;
            FruitY = rand() % height;
            score+=10;
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
        matrix[FruitX][FruitY] = 'F';
    }

    //spawning Fruit(f)
    void spawnf()
    {
        matrix[FruitX][FruitY] = 'f';
    }

    //choosing fruit and spawning it
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

}