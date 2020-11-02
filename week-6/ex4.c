#include <stdio.h>
#include <stdlib.h>

// ASCII colours
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define COLOUR_RESET   "\x1b[0m"

void printScores(int *scores){
    for (int i=0;i<5;i++){
        printf("%d\n", scores[i]);
    }
}

void editScores(int *scores){
    for (int i=0;i<5;i++){
        if(scores[i] <= 20){
            scores[i] = 0;
        }
    }
}

int main(){
    int scores[6];

    for (int i=0;i<5;i++){
        printf("Input score %d: ",i+1);
        fflush(stdin); scanf("%d", &scores[i]);
    }
    printScores(scores);
    editScores(scores);
    printScores(scores);
    return 0;
}