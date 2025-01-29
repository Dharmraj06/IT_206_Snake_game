#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;

const int width = 20;
const int hieght = 20;
bool gameover;
int x,y;
int fx,fy;
int score;
int ntail;
enum eDirection {LEFT,RIGHT,UP,DOWN};
eDirection dir;


class setUp{

    gameover = false;
    x = width/2;
    y = hieght/2;
    fx = rand() % width;
    fy = rand() % hieght;
    score = 0;

};

int main(){

    /*
    
        HELLO WORLD!

     */

    return 0;
}