#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>

using namespace std;
int width, height = 30;
enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirecton dir;
bool gameOver;
class Snake {
public:
    
    Snake(int w, int h) {
        width = w;
        height = h;
        int matrix[width][height];
    }

    void draw() {
        // Clear the screen (works on most systems)
        cout << "\033[2J\033[H";  // Clear screen and reset cursor position

        // Drawing the snake field
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                    cout << "#";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }

    void Input()
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
};

int main() {
    int width = 60, height = 30;
    Snake snake(width, height);

    snake.draw();

    return 0;
}
