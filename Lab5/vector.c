/*
*/

#include "vector.h"
#include <string.h>
#include <stdio.h>

// #define MAX_NUM_VECTORS 10

vector vectors[MAX_NUM_VECTORS];

vector add(vector a, vector b) {
    vector sum; // create a new vector of type struct to return 
    sum.x = a.x + b.x;
    sum.y = a.y + b.y;
    return sum;
}

vector subtract(vector a, vector b) {
    vector diff;
    diff.x = a.x - b.x;
    diff.y = a.y - b.y;
    return diff;
}

vector scalar(vector a, double scalarVal) {
    // vectorDimensions[]
    vector scalarQuantity;

    scalarQuantity.x = a.x * scalarVal;
    scalarQuantity.y = a.y * scalarVal;
    scalarQuantity.z = a.z * scalarVal;

    return scalarQuantity;
}

void list() {
    int size = sizeof(vectors) / sizeof(vectors[0]); // works?
    for (int i = 0; i < size; i++) { // use 10 for condition?
        for (int j = 0; j < strlen(vectors[i].name); j++) {
            printf("%c", vectors[i].name[j]);
        }
        printf("x: %.3f y: %.3f z: %.3f\n", vectors[i].x, vectors[i].y, vectors[i].z);
    }
}

void clear() {
    for (int i = 0; i < 10; i++) 
    {
    vectors[i].x = 0;
    vectors[i].y = 0;
    vectors[i].z = 0;
    }

    // or ? 
    // vector empty = {"", 0, 0, 0}
    // vectors[i] = empty;

}

void help() { // finish
    printf(" ");
}

void addVector(vector newVector) {
    int size = sizeof(vectors) / sizeof(vectors[0]);
    // for (int i = size; i < 10; i++) {
    vectors[size] = newVector;
    // }
}

vector findVector(char* name) {
    vector empty = {"empty", 0, 0, 0};
    
    int size = sizeof(vectors) / sizeof(vectors[0]);
    for (int i = 0; i < size; i++) {
        if (strcmp(vectors[i].name, name) == 0) {
            return vectors[i];
        }
    }
    printf("vector not found, an empty vector has been returned");
    return empty;
}

