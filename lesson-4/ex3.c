#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define COLOUR_RESET   "\x1b[0m"


int main(){
    char guess[6]={};
    char word[6] = {"Train"};
    int tries = 0, iterator = 0;

    for(tries = 0; tries < 3; tries++){
        printf(MAGENTA "Take a guess, what is the word?: " COLOUR_RESET);
        fflush(stdin); gets(guess);
        printf("your guess: " MAGENTA " %s\n" COLOUR_RESET, guess);

        if(strcmp(guess, word) == 0){
            printf("Correct.\n");
            return 0;
        }

        for( iterator = 0; iterator < 5; iterator++ ){
            if( word[iterator] == guess[iterator] ){
                printf(GREEN "%c" COLOUR_RESET,guess[iterator]);
            } else{
                printf(RED "?" COLOUR_RESET);
            }
        }
        printf("\n");
    }
}