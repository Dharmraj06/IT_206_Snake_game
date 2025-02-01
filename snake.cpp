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
    system("cls"); // Clear the screen

    // Update the snake's movement before drawing
    movement();

    if (pos.empty())
    {
        cout << "Error: pos is empty!" << endl;
        return;
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Draw borders
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
            {
                cout << "#";
            }
            // Draw fruits
            else if (i == fruitY && j == fruitX)
            {
                cout << "A";
            }
            else if (i == FruitY && j == FruitX)
            {
                cout << "B";
            }
            else
            {
                // Check if the current cell is part of the snake
                pair<int, int> cell = {i, j};
                auto it = find(pos.begin(), pos.end(), cell);
                if (it != pos.end())
                {
                    // Determine if it is the head (the last element in pos)
                    if (cell == pos.back())
                    {
                        cout << "O"; // Head
                        // (Perform fruit collision check if needed)
                        if (fruitX == cell.first && fruitY == cell.second)
                        {
                            score += 10;
                            Fruit::getFruit();
                            this->increase_size = true;
                        }
                        else if (FruitX == cell.first && FruitY == cell.second)
                        {
                            score += 50;
                            Fruit::getFruit();
                            this->increase_size = true;
                        }
                    }
                    else
                    {
                        cout << "o"; // Body part
                    }
                }
                else
                {
                    cout << " "; // Empty cell
                }
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
