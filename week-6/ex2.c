#include <stdio.h>
#include <stdlib.h>

// ASCII colours
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define COLOUR_RESET   "\x1b[0m"

void testCount(int upTo){
    for (int i = 1; i<=upTo; i++){
        printf(MAGENTA"%d\n", i);
    }
    printf(GREEN"VOID FUNCTION COMPLETE\n"COLOUR_RESET);
}

int main(){
    int input = 0;
    printf(MAGENTA"what should i count to?: "RED);
    fflush(stdin); scanf("%d", &input);
    testCount(input);
    return 0;
}                                                           