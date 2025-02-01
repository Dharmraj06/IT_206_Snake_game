#ifndef LOGIC_H
#define LOGIC_H

#include <queue>
#include <vector>
  
using namespace std;

class Logic{
protected:
    queue<pair<int, int>> snake_body; 
    vector<pair<int, int>> pos;  
    queue<pair<int, int>>temp;
    int width = 40, height = 20; 
    bool increase_size = false; 

public:
    bool gameOver;
    Logic();  
    vector<pair<int, int>> movement(); 
    
    bool checkCollision(pair<int, int> newHead);  
    
    bool isGameOver() { return gameOver; }

};

#endif

