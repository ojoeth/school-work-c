// Implementing Ollie's psuedocode

#include <stdio.h>
#include <stdbool.h>

int validChoice = 0;


void chooseSpace(int columnChosen, int rowChosen, bool grid[3][3]){
    do{
        if(grid[columnChosen][rowChosen] == 1){
            printf("You can't place in that square, it is already full\n");

        } else if(grid[columnChosen][rowChosen] == 0){
            grid[columnChosen][rowChosen] = 1;
            validChoice = 1;
            printf("square chosen\n");
        } else{
            printf("ERROR, invalid selection\n");
        }
    }
    while(validChoice != 1);
}

int main() {
    bool grid[3][3];
    int columnChosen = 0;
    int rowChosen = 0;
    int turnNum = 0;

    printf("Welcome to naughts and crosses\n");
    printf("First player, choose where you place your cross");
    scanf("%d", &rowChosen);
    printf("");
    return 0;
}
