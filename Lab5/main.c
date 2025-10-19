/*
*/

#include "vector.h"
#include <stdio.h>
#include <string.h>

// extern vector vectors[MAX_NUM_VECTORS];

int main(int argc, char *argv[]) {
    // if (argc < num) {}

    if (*argv[2] == '+') {
        add(findVector(argv[1]), findVector(argv[3]));
    } else if (*argv[2] == '-') {
        subtract(findVector(argv[1]), findVector(argv[3]));
    }
    return 0;
}