#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;

extern const int width = 20;
extern const int hieght = 20;
extern bool gameover;
extern int x,y;
extern int FruitX,FruitY;
extern int fruitX,fruitY;
extern int score;
extern int ntail;
enum eDirection {LEFT,RIGHT,UP,DOWN};
eDirection dir;


class setUp{
public:
    gameover = false;
    x = width/2;
    y = hieght/2;
    fx = rand() % width;
    fy = rand() % hieght;
    score = -10;

};

int main(){

    /*
    
        HELLO WORLD!

    */

    return 0;
}