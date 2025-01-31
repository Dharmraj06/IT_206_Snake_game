#include "Fruit.h"

// Constructor to initialize the game board (matrix)
//Fruit::Fruit(char m[30][30]) {
//    for (int i = 0; i < height; i++) {
//         for (int j = 0; j < width; j++) {
//             matrix[i][j] = ' ';  // Initialize the matrix with empty spaces
//         }
//     }
// }

void Fruit::getCoordinateF() {
    do {
        FruitX = rand() % width;
        FruitY = rand() % height;
        score += 50;
    } while (matrix[FruitX][FruitY] == 'O' || matrix[FruitX][FruitY] == '$' || matrix[FruitX][FruitY] == '&');
}

void Fruit::getCoordinatef() {
    do {
        fruitX = rand() % width;
        fruitY = rand() % height;
        score += 10;
    } while (matrix[fruitX][fruitY] == 'O' || matrix[fruitX][fruitY] == '$' || matrix[fruitX][fruitY] == '&');
}

void Fruit::spawnF() {
    matrix[FruitX][FruitY] = '$';  // Fruit(F) with a blueberry emoji
}

void Fruit::spawnf() {
    matrix[fruitX][fruitY] = '&';  // fruit(f) with an apple emoji
}

void Fruit::getFruit() {
    int randNum = rand() % 2;
    if (randNum == 0) {
        getCoordinateF();
        spawnF();
    } else if (randNum == 1) {
        getCoordinatef();
        spawnf();
    }
}

int Fruit::getScore() {
    return score;
}

void Fruit::printMatrix() {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << matrix[i][j] << " ";  // Print element
        }
        std::cout << std::endl;  // New line afterrow
    }
}
