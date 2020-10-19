// Calculates average of input numbers
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numOfNumbers = 0;
    int iterations = 0;
    int currentNum = 0;
    int total = 0;

    printf("How many numbers would you like to enter?: ");
    fflush(stdin); scanf("%d", &numOfNumbers);

    do{
        printf("\nEnter your numbers: ");
        fflush(stdin); scanf("%d",&currentNum);
        total += currentNum;
        iterations++;
    }while(iterations < numOfNumbers);
    printf("Mean number: %f\n", (float)total / numOfNumbers);
    return 0;
}