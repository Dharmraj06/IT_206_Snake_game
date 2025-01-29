#include<iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>

using namespace std;
int score;
class fruit
{
    
    public:
    void getCoordinateF()
    {
        do(

            FruitX = rand() % width;
            FruitY = rand() % height;
            score+=10;
        )
        while (matrix[fruitX][fruitY] == 'O' || matrix[FruitX][FruitY] == 'O');
    }
    void getCoordinatef()
    {
        do(

            fruitX = rand() % width;
            fruitY = rand() % height;
            score+=10;
        )
        while (matrix[fruitX][fruitY] == 'O' || matrix[FruitX][FruitY] == 'O');
    }
    void spawnF()
    {
        matrix[FruitX][FruitY] = 'F';
    }
    void spawnf()
    {
        matrix[FruitX][FruitY] = 'f';
    }

    void getFruit()
    {
        int randNum = rand() % 3;
        if(randNum=0)
        {
            getCoordinateF();
            spawnF()
        }
        if(randNum=1)
        {
            getCoordinatef();
            spawnf();
        }

    }

};