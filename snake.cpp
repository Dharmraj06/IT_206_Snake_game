#include "Snake.h"
#include "logic.h"
#include "fruit.h"
#define RESET   "\033[0m"
#define BG_RED  "\033[41m"  
#define BLUE    "\033[34m"  
#define PINK    "\033[35m"  
#define GREEN   "\033[32m"

Snake::Snake(int w, int h)
{
    width = w;
    height = h;
    
    score = 0;
    dir = UP;
}

void Snake::draw()
{
    gotoXY(0,0);

    for(int i = 0; i < fastness;i+=5)
    movement();

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            pair<int, int> cell = {i, j};
            auto it = find(pos.begin(), pos.end(), cell);
            
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
               
                cout << BG_RED << " " << RESET;
            } 
            else if (it != pos.end())
            {
                
                if (cell == pos.back())
                {
                    // sx = cell.first;
                    // sy = cell.second;

                    cout << GREEN << "O" << RESET;
                    if (cell.first == fruitY && cell.second == fruitX) 
                    {                                                 
                        score += 10;
                        this->getFruit(); 
                        this->increase_size = true;
                        fastness++;
                        
                    }
                    else if (cell.first == FruitY && cell.second == FruitX)
                    {

                        
                        score += 50;
                        this->getFruit();
                        this->increase_size = true;
                        fastness++;

                    }
                }
                else
                {
                    cout << BLUE << "o" << RESET; 
                }
            }
            
            else if (i == fruitY && j == fruitX) 
            {
                std::cout << PINK << "A" << RESET;
            }
            else if (i == FruitY && j == FruitX) 
            {
                std::cout << PINK << "B" << RESET;
            }
            else
            {
                cout << " "; 
            }
        }
        cout << endl;
    }
}
void Snake::Input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            dir = LEFT;
            // cout<<"L";
            break;
        case 'd':
            dir = RIGHT;
            // cout<<"R";
            break;
        case 'w':
            dir = UP;
            // cout<<"U";
            break;
        case 's':
            dir = DOWN;
            // cout<<"D";
            break;
        case 'x':
            gameOver = true;
            // cout<<"GAME OVER";
            break;
        }
    }
}

void Snake::gotoXY(int x, int y) {
    COORD coord = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
