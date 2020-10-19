#include<stdio.h>
#include<stdlib.h>

int main(){
    int user_guess, rand_num = 0;
    rand_num = ( rand() % 10 + 1);    
    printf("\nWhat is the random number? (1-10) : ");
    fflush(stdin); scanf("%d", &user_guess);

    // checker
    if ((user_guess - 1 == rand_num) || (user_guess + 1 == rand_num)){
        printf("So close! it was %d\n", rand_num);
    } else if (user_guess == rand_num){
        printf("Congratulations, you guessed it! How??\n");
    } else {
        printf("Sorry wrong answer. The number was %d\n", rand_num);
    }
    return 0;
}