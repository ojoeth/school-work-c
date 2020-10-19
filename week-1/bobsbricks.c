// Bob's Bricks

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int wallNum, wallHeight, wallLength, num = 0;
    
    // Gather input for calculations
    printf("\nHow long are the walls? : ");
    fflush(stdin); scanf("%d", &wallLength);
    
    printf("\nHow many bricks tall are the walls? : ");
    fflush(stdin); scanf("%d", &wallHeight);

    printf("\nHow many walls? : ");
    fflush(stdin); scanf("%d", &wallNum);

    // Calculate number of bricks
    float brickNum_unrounded = wallLength * 1.5 * wallHeight * wallNum;
    // Round up number of bricks
    int brickNum = (int)(brickNum_unrounded < 0 ? (brickNum_unrounded) : (brickNum_unrounded + 0.5));
    // Calculate number of pallets
    int palletNum = (float)brickNum / 100 + 1;

    if(brickNum == 0){
        palletNum = 0;
        printf("\nWhy do you need pallets if there are no bricks?\n");
    }

    printf("\n bricks needed: %d\n", brickNum);

    printf("\n pallets needed: %d\n",palletNum);

    printf("%d", num);
    return 0;
}