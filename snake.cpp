#include "Snake.h"
#include "logic.h"
#include "fruit.h"

Snake::Snake(int w, int h) {
    width = w;
    height = h;
    // x = width / 2;
    // y = height / 2;
    // fruitX = rand() % width;
    // fruitY = rand() % height;
    score = 0;
    dir = STOP;
   
}

void Snake::draw() {
    // Clear 
    cout << system("cls");  

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                cout << "#";  
            // else if (i == y && j == x)
            //     cout << "O";  
            else if (i == fruitY && j == fruitX)//this is the code for apple
                cout << "A"; 
            else if (i == FruitY && j == FruitX)//this is the code for blueberry
                cout<< "B";
            else
            {
                bool print = false;
                for (int k = 0; k < pos.size(); k++)
                {
                    pair<int,int>body = {i,j};
                    if(body == pos[pos.size()-1]) // if the pos is equal to the position of the head
                    {
                        cout << "O";
                        print = true;
                    }
                    else if(find(pos.begin(),pos.end(),body) != pos.end())
                    {
                        cout << "o";
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
        }
        cout << endl;
    }
    cout << "Score: " << score << endl;
}

void Snake::Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a': dir = LEFT; break;
            case 'd': dir = RIGHT; break;
            case 'w': dir = UP; break;
            case 's': dir = DOWN; break;
            case 'x': gameOver = true; break;  
        }
    }
    
}

