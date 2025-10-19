/*
*/

#ifndef VECTOR_H
#define VECTOR_H

#define MAX_NUM_VECTORS 10

extern vector vectors[MAX_NUM_VECTORS];

typedef struct 
{
    char name[10];
    float x;
    float y;
    float z;
} vector; //VECTOR_H

void list();

vector add(vector a, vector b);
vector subtract(vector a, vector b);
vector scalar(vector a, double scalarVal);

void addVector(vector newVector); // - add new vector to storage array. If same name exists, replace
                     // at that location, otherwise add to empty location. If array full, do nothing and
                     // return error code.

vector findVector(char *name); // search array for name vector and return (a copy) to caller

void clear(); // empty the storage array

void help();

void assignment(char *line[]);

// void readCmdLine(char *line);

#endif // VECTOR_H

