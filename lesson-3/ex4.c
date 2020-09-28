// Calculates if a number is an "armstrong number"
#include <stdio.h>
#include <stdlib.h>

int main(){

    int program_function = 0
    int user_num = 0;

    int check_num(number){
        int firstDigit = (int)(number - (number % 100) / 100);
        int secondDigit = (int)((number - firstDigit) - (number % 10) / 10);
        int thirdDigit = (int)(number - firstDigit - secondDigit);
        printf("");
    }

    printf("Choose a function of this program.\n1 - Check if your number is an armstrong number\n2 - Show all armstrong numbers in a given range\nChoice: ");
    fflush(stdin); scanf("%d", &program_function);
    
    if (program_function == 1){
        printf("Enter a 3 digit number: ");
        fflush(stdin); scanf("%d", &user_num);
        if (user_num < 1000 && user_num > 100){
            result = check_num(number);
            if (result == 1){
                printf("Your number is an armstrong number\n");
            }
            else{
                printf("Your number is not an armstrong number\n");
            }
        }
        else{
            printf("Three digits please. The number %d is not three digits.", user_num);
        }
    }
    else if (program_function == 2){
        printf("not implemented yet.");
    }
    else{
        printf("That is not an option. Exiting...");
    }

    return 0;
}