#include<iostream>

using namespace std;
int score;
class fruit
{
    public:
    int FruitX, FruitY, score=-10;

    void getCoordinate()
    {
        do(

            FruitX = rand() % width;
            FruitY = rand() % height;
            score+=10;
        )
        while (matrix[FruitX][FruitY] == 'O');
    }

    void spawn()
    {
        matrix[FruitX][FruitY] = 'F';
    }



};