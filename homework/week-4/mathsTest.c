#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define COLOUR_RESET   "\x1b[0m"

int main(){
    int num1 = 0;
    int num2 = 0;
    int answer = 0;
    int score = 0;
    char operators[4] = {'+','-','/','*'};
    char operator;

    srand (time(NULL));
    for (int questions = 10; questions > 0; questions--){
        num1 = rand() % 10 + 1;
        num2 = rand() % 10 + 1;
        operator = operators[(rand() % 4)];
        printf("%d %c %d\n", num1, operator, num2);

        
    }

    return 0;
}