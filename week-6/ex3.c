#include <stdio.h>

// ASCII colours
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define COLOUR_RESET   "\x1b[0m"

float add(float x, float y){
    return x + y;
}

float sub(float x, float y){
    return x - y;
}

float mult(float x, float y){
    return x * y;
}

float div(float x, float y){
    return x / y;
}

int main(){

    float num1 = 0, num2 = 0;
    printf("Enter first num: ");
    fflush(stdin); scanf("%f", &num1);

    printf("Enter second num: ");
    fflush(stdin); scanf("%f", &num2);

    printf("added: %f, subtracted: %f, multiplied: %f, divided: %f\n",add(num1,num2),sub(num1,num2),mult(num1,num2),div(num1,num2));

    return 0;

}