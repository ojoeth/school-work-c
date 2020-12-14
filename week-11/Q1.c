#include <stdio.h>

int main(){
    int num_rings;
    int teeth[8];

    do {
        printf("How many rings? (0-8) : ");
        fflush(stdin); scanf("%d", &num_rings);
    }while (num_rings > 8 || num_rings <= 0);

    printf("Starting with the largest ring, how many teeth are on the ring?");
    
    // clear teeth array with 0's
    for(int i = 0; i < 8; i++){
        teeth[i] = 0;
    }

    for (int i = 0; i <= num_rings - 1; i++){
        printf("Enter number of teeth on ring %d", i+1);
        scanf("%d", &teeth[i]);

        if((i != 0 && teeth[i] > teeth[i-1]) || teeth[i] <=0 ){
            printf("There must be less teeth on this ring than the previous ring");
            i = i - 1;
        }
    }

    return 0;
}
