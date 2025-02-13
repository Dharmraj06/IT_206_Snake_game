#ifndef LOGIC_H
#define LOGIC_H

#include <queue>
#include <vector>
  
using namespace std;

class Logic{
protected:
     
    vector<pair<int, int>> pos;  
    int width = 40, height = 20; 
    bool increase_size = false; 

public:
    queue<pair<int, int>> snake_body;
    bool gameOver;
    Logic();  
    void movement(); 
    
    bool checkCollision(pair<int, int>& newHead);  
    
    bool isGameOver() { return gameOver; }

};

#endif

