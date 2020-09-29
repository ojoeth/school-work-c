// Calculates if a number is an "armstrong number"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // Init variables
    int program_function = 0;
    int user_num = 0;
    int rangeNum1 = 0;
    int rangeNum2 = 0;

    // Function to check whether or not a number is an armstrong number
    int check_num(int number){

        // Split the number into its three digits
        int firstDigit = (int)((number - (number % 100)) / 100);
        int secondDigit = (int)(((number - (firstDigit * 100)) - (number % 10)) / 10);
        int thirdDigit = (int)(number - firstDigit * 100 - secondDigit * 10);
        
        // Calculate the sum of the cubes
        int result = (pow(firstDigit, 3) + pow(secondDigit, 3) + pow(thirdDigit, 3));
        
        // Return 1 if it's not an armstrong number, return 0 if it is an armstrong number
        if (result == number){
            return 0;
        }else{
            return 1;
        }
    }

    // Ask user for their choice of function.
    printf("Choose a function of this program.\n1 - Check if your number is an armstrong number\n2 - Show all armstrong numbers in a given range\nChoice: ");
    fflush(stdin); scanf("%d", &program_function);

    // --------------- Single number checker function ---------------
    if (program_function == 1){

        printf("Enter a 3 digit number: ");
        fflush(stdin); scanf("%d", &user_num);
        
        // Validation. Check if the number is a three digit number.
        if (user_num < 1000 && user_num > 100){

            // Check the number using the check_num function
            int result = check_num(user_num);

            // Show the user whether or not their number is armstrong.
            if (result == 0){
                printf("Your number is an armstrong number\n");
            }
            else{
                printf("Your number is not an armstrong number.\n");
            }

        }
        else{

            // Return an error if the inpt number is not 3 digits long.
            printf("Three digits please. The number %d is not three digits.\n", user_num);
            return 1;

        }
    } 

    // --------------- Range function ---------------
    else if (program_function == 2){
        // Ask for range boundaries
        printf("First number in your range: ");
        fflush(stdin); scanf("%d", &rangeNum1);
        printf("Second number in your range: ");
        fflush(stdin); scanf("%d", &rangeNum2);

        // Validate the boundaries
        if (rangeNum1 > rangeNum2){
            printf("That won't work! The lower boundary is larger than the upper boundary!\n");
            return 1;
        } else if(rangenum1 > 1000 || rangeNum2 > 1000 || rangenum1 < 0 || rangenum2 < 0){
            printf("That won't work! Your lower or upper boundary is either above 1000 or below 0!\n");
        }

    }
    else{
        printf("That is not an option. Exiting...");
        return 1;
    }

    return 0;
}