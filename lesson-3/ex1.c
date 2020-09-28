#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t t;
    srand((unsigned) time(&t));
    int guessed, tries = 0;
    int user_guess, rand_num = 0;
    rand_num = ( rand() % 10 + 1);   
    
    while (guessed != 1 && tries <5){           
 
        printf("\nWhat is the random number? (1-10) : ");
        fflush(stdin); scanf("%d", &user_guess);

        // checker
        if ((user_guess < rand_num) || (user_guess + 1 == rand_num)){
            printf("Too low!\n");
        } else if (user_guess == rand_num){
            guessed = 1;
        } else {
            printf("Too high.\n");
        }
        tries++;
    }
    if (guessed == 1){
        printf("Well Done\n");
    }else{
        printf("Sorry, you lose\n");
    }
    return 0;

}