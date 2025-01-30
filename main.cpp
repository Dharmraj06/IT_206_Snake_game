#include "Snake.h"

int main() {
    // Create a game object with dimensions 30x30
    Snake game(30, 30);

    // Main game loop
    while (!game.isGameOver()) {
        game.draw();
        game.Input();
        game.Logic();
        Sleep(100);  // Slow down the game loop to make it playable
    }

    cout << "Game Over! Final Score: " << game.getScore() << endl;
    return 0;
}
