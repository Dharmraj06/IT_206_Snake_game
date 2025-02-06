#include <iostream>
#include <cstdlib>
#include <ctime>
#include "fruit.h"
#include "snake.h"
// No need to include logic.h separately if Snake inherits from it.

using namespace std;

int HighScore = 0;  // Global variable to store the high score.
void hideCursor() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(consoleHandle, &cursorInfo);
    cursorInfo.bVisible = FALSE;  // Set to false to hide the cursor
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}

void enableANSI() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    SetConsoleMode(hOut, dwMode | 0x0004); // ENABLE_VIRTUAL_TERMINAL_PROCESSING = 0x0004
}

int main() {
    // Use one Snake object as the game instance.
    char choice;
    system("cls");
    enableANSI();
    hideCursor();
    Snake snake(40, 20);    
    srand(time(0));  

    snake.gameOver = false;
    SetConsoleOutputCP(CP_UTF8);
    // In main.cpp
while (!snake.gameOver) {
   
    snake.Input();  

    
    snake.movement();

   
    snake.draw();

    snake.checkCollision(snake.snake_body.back());
        
    cout << "Score: " << snake.getScore() << endl;
    
    Sleep(50);
}

    if (snake.getScore() > HighScore) {
            HighScore = snake.getScore();
        }

    cout <<"High Score: "<<HighScore<<endl;
    cout<<"Do you want to play again? (Y/N): ";
    cin>>choice;
    if (choice == 'Y' || choice == 'y') {
        main();
    }
    else {
        cout << "Game Over! Final Score: " << snake.getScore() << endl;
        cout << "High Score: " << HighScore << endl;
    }
    
    return 0;
}
