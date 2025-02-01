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
    dir = STOP;
}

void Snake::draw()
{
    system("cls");  // Correct way to clear the screen in Windows

    if (pos.empty()) {
        cout << "Error: pos is empty!" << endl;
        return;  // Prevent further execution
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                cout << "#";
            else if (i == fruitY && j == fruitX) // Apple
                cout << "A";
            else if (i == FruitY && j == FruitX) // Blueberry
                cout << "B";
            else
            {
                bool print = false;
                for (size_t k = 0; k < pos.size(); k++)
                {
                    pair<int, int> body = {i, j};
                    if (body == pos[pos.size() - 1]) // Head of the snake
                    {
                        cout << "O";
                        print = true;

                        if (fruitX == pos[pos.size() - 1].first && fruitY == pos[pos.size() - 1].second)
                        {
                            score += 10;
                            Fruit::getFruit();
                            this->increase_size = true;  // Fix inheritance issue
                        }
                        else if (FruitX == pos[pos.size() - 1].first && FruitY == pos[pos.size() - 1].second)
                        {
                            score += 50;
                            Fruit::getFruit();
                            this->increase_size = true;
                        }
                    }
                    else if (find(pos.begin(), pos.end(), body) != pos.end())
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

void Snake::Input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}

