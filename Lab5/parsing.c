/*
*/
#include <string.h>
#include "vector.h"
#include <stdlib.h>

#define MAX_NUM_VECTORS 10
vector vectors[MAX_NUM_VECTORS];

void assignment(char *line[]) { // invoked with varname? // provide char *argv[]
    // int lineSize = sizeof(line) / sizeof(line[0]); tricky to work with bc of pointer   
    char *token = strtok(line[2], " "); // index 0 will not be program name
    char *vectorName = line[0];

    vector vectorInit = findVector(vectorName); // vector to be initialized / reassigned

    // if (lineSize > 3) { // index 0 will not be program name
       // remove commas!!!
    //    line[]
    // } else {
        // char *tokens[3];
        // while (token != null) 

            // token 1 
            int integer = atof(token);
            vectorInit.x = integer;

            token = strtok(NULL, " "); 
            integer = atof(token);
            vectorInit.y = integer;

            token = strtok(NULL, " "); 
            integer = atof(token);
            vectorInit.z = integer;
    // }
       
    // return vectorInit;

    if (strcmp(findVector(vectorName).name, vectorName) == 0) {
        
    }
}

// getValues() {}




// void readCmdLn(char *line[])
// {
//     // char tokens[10][30]
//     char *token = strtok(, ",");
//     while (token != null) {
//         switch(token)
//         token = strtok(null, ",");
//     }

// } 
