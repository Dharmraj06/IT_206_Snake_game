#include "Fruit.h"

// Constructor to initialize the game board (matrix)
Fruit::Fruit(char m[20][20]) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            matrix[i][j] = ' ';  // Initialize the matrix with empty spaces
        }
    }
}

// Allocating coordinates for Fruit(F)
void Fruit::getCoordinateF() {
    do {
        FruitX = rand() % width;
        FruitY = rand() % height;
        score += 50;
    } while (matrix[FruitX][FruitY] == 'O' || matrix[FruitX][FruitY] == '🫐' || matrix[FruitX][FruitY] == '🍎');
}

// Allocating coordinates for fruit(f)
void Fruit::getCoordinatef() {
    do {
        fruitX = rand() % width;
        fruitY = rand() % height;
        score += 10;
    } while (matrix[fruitX][fruitY] == 'O' || matrix[fruitX][fruitY] == '🫐' || matrix[fruitX][fruitY] == '🍎');
}

// Spawning Fruit(F) on the board
void Fruit::spawnF() {
    matrix[FruitX][FruitY] = '🫐';  // Represent Fruit(F) with a blueberry emoji
}

// Spawning Fruit(f) on the board
void Fruit::spawnf() {
    matrix[fruitX][fruitY] = '🍎';  // Represent fruit(f) with an apple emoji
}

// Choosing fruit (either F or f) and spawning it
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

// Getter for the score
int Fruit::getScore() {
    return score;
}

// For debugging: Print the current state of the game matrix
void Fruit::printMatrix() {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << matrix[i][j] << " ";  // Print each element
        }
        std::cout << std::endl;  // New line after each row
    }
}
