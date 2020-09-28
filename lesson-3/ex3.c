// Calculates if a number is a "magic number"
#include <stdio.h>
#include <stdlib.h>

int main(){
    int userNum=0;
    do{
        printf("Input a number 0-100 (100 means exit): ");
        fflush(stdin); scanf("%d", &userNum);

        if (userNum < 100 && userNum > 1){
    
            if ((userNum / 7 * 5) < 100 && (userNum / 3 * 5) < 100){
                printf("%d is a magic number\n", userNum);
            }
            else{
                printf("%d is not a magic number\n", userNum);
            }
    
        }else if(userNum == 100){
            printf("Exiting...\n");
            return 0;
        }
        else{
            printf("Please enter a number between 1 and 100.\n");
        }
    
    }while(userNum != 100);
    return 0;
}