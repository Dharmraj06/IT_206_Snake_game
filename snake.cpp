#include "Snake.h"
#include "logic.h"
#include "fruit.h"

Snake::Snake(int w, int h)
{
    width = w;
    height = h;
    // x = width / 2;
    // y = height / 2;
    // fruitX = rand() % width;
    // fruitY = rand() % height;
    score = 0;
    dir = UP;
}

void Snake::draw()
{
    //system("cls"); // Clear the screen
    gotoXY(0,0);
    // Update movement before drawing.
    movement();

    if (pos.empty())
    {
        cout << "Error: pos is empty!" << endl;
        return;
    }
    //cout << fruitY << " " << fruitX << endl; // i,j

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            pair<int, int> cell = {i, j};
            auto it = find(pos.begin(), pos.end(), cell);
            // Draw borders.
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
            {
                cout << "#";
            }
            else if (it != pos.end())
            {
                // Check if the current cell is part of the snake.
                // pair<int, int> cell = {i, j};
                // auto it = find(pos.begin(), pos.end(), cell);

                // Determine if it is the head (the last element in pos).
                if (cell == pos.back())
                {
                    sx = cell.first;
                    sy = cell.second;

                    cout << "O"; // Head.
                    // Check for fruit collision.
                    if (cell.first == fruitY && cell.second == fruitX) // first=i second = j
                    {                                                 
                        score += 10;
                        this->getFruit(); // Regenerate fruit coordinates.
                        this->increase_size = true;
                        //fruitX = 0;
                        //fruitY = 0;
                    }
                    else if (cell.first == FruitY && cell.second == FruitX)
                    {

                        // cout<<"yes"<<endl;
                        // exit(0);
                        score += 50;
                        this->getFruit();
                        this->increase_size = true;
                        //FruitX = 0;
                        //FruitY = 0;
                    }
                }
                else
                {
                    cout << "o"; // Body part.
                }
            }
            // Draw fruits.
            else if (i == fruitY && j == fruitX) // Small fruit type.
            {
                cout << "\U0001F34E";
            }
            else if (i == FruitY && j == FruitX) // Big fruit type.
            {
                cout << "\U0001F347";
            }
            else
            {
                cout << " "; // Empty cell.
            }
        }
        cout << endl;
    }
    cout << "Score: " << score << endl;
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
