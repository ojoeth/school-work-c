#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // init vars
    char answer;
    char animal[7];

    bool eatsMeat = true;
    bool fourLegs = false;
    bool catFamily = false;
    bool stripy = false;


    // Ask first question
    printf("\nDoes the animal eat meat?(Y/N, uppercase): ");
    fflush(stdin); scanf("%c ", &answer);
    if (answer == "Y"){
        eatsMeat = true;

        printf("\nIs your animal in the cat family?(Y/N, uppercase): ");
        fflush(stdin); scanf("%c ", &answer);

        if (answer == "Y"){
            catFamily = true;
            printf("\nDoes your animal have stripes?(Y/N, uppercase): ");
            fflush(stdin); scanf("%c ", &answer);
                if (answer == "Y"){
                    animal[7] = "tiger";
                    printf("%c", animal);
                }  

        }


    }else if (answer == "N"){
        printf("\n");
    }

    return 0;
}