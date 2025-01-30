#ifndef FRUIT_H
#define FRUIT_H

#include <cstdlib>  // For random number generation
#include <iostream> // For printing the matrix (optional)

class Fruit {
private:
    int FruitX, FruitY, fruitX, fruitY;  // Coordinates for two types of fruits
    char matrix[20][20];  // Game board (20x20 matrix)
    int width = 20;  // Width of the board
    int height = 20; // Height of the board
    int score = 0;   // Player's score

public:
    // Constructor to initialize the board
    Fruit(char m[20][20]);

    // Allocating coordinates for Fruit(F)
    void getCoordinateF();

    // Allocating coordinates for fruit(f)
    void getCoordinatef();

    // Spawning Fruit(F)
    void spawnF();

    // Spawning Fruit(f)
    void spawnf();

    // Choosing fruit and spawning it (either F or f)
    void getFruit();

    // Getter for the score
    int getScore();

    // For debugging: Print the current state of the game matrix
    void printMatrix();
};

#endif // FRUIT_H
