#include <stdio.h>
#include <stdlib.h>

int main(){
    int nums[10], guess=0, x=0, num=0, total=0, aboveAverage=0, input=0;
    int lowest = 10, highest = 0;
    float average = 0;
    for (x=0; x<10; x++)
    {
        printf("Please enter number %d: ", x+1);
        
        scanf("%d", &input);
        if (input > highest){
            highest = input;
        }
        if (input < lowest){
            lowest = input;
        }
        total = total + input;
        nums[x] = input;
    }

    average = total / 10;

    for (num=0;num<=10;num++){
        if (nums[num] > average){
            aboveAverage += 1;
        }
    }
    printf("average: %f\n", average);
    printf("higher than average: %d\n", aboveAverage);
    printf("Lowest: %d, Highest: %d\n", lowest, highest);

    printf("Which index would you like to check: ");
    fflush(stdin); scanf("%d", &guess);
    printf("Index %d is: %d \n", guess, nums[guess-1] );
}