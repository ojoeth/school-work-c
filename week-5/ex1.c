#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define COLOUR_RESET   "\x1b[0m"

int main(){
    char words[100][100];
    char first[100];

    for (int i = 0; i < 100; i++){
        printf("Input ZZZ to quit: "MAGENTA);
        scanf("%s", &words[i]);
        printf(COLOUR_RESET);
        
        if (i == 0){
            strcpy(first, words[i]);
        }
        
        if (strcmp("ZZZ", words[i]) == 0){
            break;
        }
        
        for (int j = 0; j < strlen(words[i]); j++){
            if (i != 0 && words[i][j] < words[i-1][j]){
                strcpy(first, words[i]);
                break;
            }else if (i != 0 && words[i][j] == words[i-1][j]){
                // loop again
            }else if (i != 0 && words[i][j] > words[i-1][j]){
                break;
            }
        }
    }
    printf(GREEN " %s is first alphabetically\n" COLOUR_RESET, first);

    return 0;
}