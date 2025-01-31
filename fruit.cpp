#include "Fruit.h"

// Constructor to initialize the game board (matrix)
Fruit::Fruit() {
    getFruit();
}

void Fruit::getCoordinateF() {
    
        FruitX = rand() % width;
        FruitY = rand() % height;
  
}

void Fruit::getCoordinatef() {
        fruitX = rand() % width;
        fruitY = rand() % height;
        
}

// void Fruit::spawnF() {
//     matrix[FruitX][FruitY] = '$';  // Fruit(F) with a blueberry emoji
// }

// void Fruit::spawnf() {
//     matrix[fruitX][fruitY] = '&';  // fruit(f) with an apple emoji
// }

void Fruit::getFruit() {
    int randNum = rand() % 2;
    if (randNum == 0) {
        getCoordinateF();
        // spawnF();
    } else if (randNum == 1) {
        getCoordinatef();
        // spawnf();
    }
}

int Fruit::getScore() {
    return score;
}

// void Fruit::printMatrix() {
//     for (int i = 0; i < height; i++) {
//         for (int j = 0; j < width; j++) {
//             std::cout << matrix[i][j] << " ";  // Print element
//         }
//         std::cout << std::endl;  // New line afterrow
//     }
// }
