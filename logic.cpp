#include<bits/stdc++.h>

#include "snake.h"
using namespace std;

// Directions: (dx, dy) → (UP, DOWN, LEFT, RIGHT)
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

// Enum for directions
enum eDirection { UP = 0, DOWN = 1, LEFT = 2, RIGHT = 3 };

Snake toy;

class Logic{
private:
    queue<pair<int,int>>snake_body;
    int oldx,oldy;
    int newy,newx;
    queue<int>temp;
    int head;
    vector<pair<int,int>>pos;
    

public:

    Logic(){

        snake_body.push({30,15});
        snake_body.push({31,15});
        snake_body.push({32,15});

    }

   vector<pair<int,int>>movement(){

        pair<int,int>head = snake_body.back(); //taking the position of the head

        eDirection dir = toy.Input();
        
        head.first = head.first + dx[dir];
        head.second = head.second + dy[dir];

        snake_body.push(head);




    }    
    


};
