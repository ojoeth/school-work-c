#include <stdio.h>
#include <stdlib.h>

// ASCII colours
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define COLOUR_RESET   "\x1b[0m"

void printScores(int *scores){
    // loop through and show scores
    for (int i=0;i<5;i++){
        printf(GREEN"%d\n"COLOUR_RESET, scores[i]);
    }
}

void editScores(int *scores){
    // if a score is less than or equal to 20, set it to 0
    for (int i=0;i<5;i++){
        if(scores[i] <= 20){
            scores[i] = 0;
        }
    }
}

int main(){
    int scores[6];

    // ask for and put scores into an array
    for (int i=0;i<5;i++){
        printf(RED"Input score %d: "MAGENTA,i+1);
        fflush(stdin); scanf("%d", &scores [i]);
    }

    // Edit the scores and print the new values 
    editScores(scores);
    printScores(scores);
    return 0;
}