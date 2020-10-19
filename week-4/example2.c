#include <stdio.h>
#include <stdlib.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define COLOUR_RESET   "\x1b[0m"

int main()
{
    
    int Grid[10][2] = {1, 10, 2, 20, 3, 30, 4, 40, 5, 50};
    int x, y; //for the for loop counters
    for (y = 0; y < 10; y ++){ //controls the number of rows
        for(x = 0; x < 10; x ++){ //controls the columns

            printf("x%i y%i: %i  ", x, y, Grid[y][x]);
        }
        //At the end of a row, move down one space
        printf("\n");
    }
}