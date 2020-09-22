#include <stdio.h>
#include <stdlib.h>
int main(){
    // init variables
    float num1 = 0;
    float num2 = 0;
    float result = 0;
    char action;

    // Collect input
    printf("\nFirst num: ");
    fflush(stdin); scanf("%f", &num1);

    printf("\nSecond num: ");
    fflush(stdin); scanf("%f", &num2);

    printf("\nAction (*, /, +, -): ");
    fflush(stdin); scanf(" %c", &action);

    // Check action and apply action to numbers    
    switch(action){
        case '*':
            result = (num1 * num2);
            break;
        case '/':
            result = (num1 / num2);
            break;
        case '+':
            result = (num1 + num2);
            break;
        case '-':
            result = (num1 - num2);
            break;
        default:
            // Give error if action typed incorrectly
            printf("incompatable action \"%c\"\n", action);
            return 1;
    }
    // Show user result
    printf("%f\n", result);
    
    // exit successfully
    return 0;
}