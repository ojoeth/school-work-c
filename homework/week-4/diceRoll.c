#include <stdio.h>
#include <stdlib.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define COLOUR_RESET   "\x1b[0m"

int main(){
    int counter = 0;
    int die1size = 0;
    int die2size = 0;

    printf("Die number 1 size: ");
    fflush(stdout); scanf("%d", &die1size);

    printf("Die number 2 size: ");
    fflush(stdout); scanf("%d", &die2size);

    if(die1size < 1 || die1size > 1000 || die2size < 1 || die2size > 1000){
        printf("One of your numbers is too high or low.\n");
        return 1;
    }

    for (int die1 = 1; die1 <= die1size; die1++){
        for (int die2 = 1; die2 <= die2size; die2++){
            if(die1 + die2 == 10){
                printf("%d + %d = 10\n", die1, die2);
                counter++;
            }    
        }
    }
    printf("There are %d ways to make 10\n", counter);
    return 0;
}