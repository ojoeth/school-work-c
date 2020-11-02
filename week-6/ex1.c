#include <stdio.h>
#include <stdlib.h>

// ASCII colours
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define COLOUR_RESET   "\x1b[0m"

int divEleven(int num){
    int result = num / 11;
    return (result);
}

int main(){
    int input;
    printf("Enter an integer number: ");
    scanf("%d", &input);
    int result = divEleven(input);
    printf("The number %d can be divided by eleven %d times.\n",input,result);
    return 0;
}