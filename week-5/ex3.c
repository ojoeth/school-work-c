#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // variables, 2d array `names` variable to store array of strings
    int  scores[60];
    char names[6 ][60];
    char    seek[60];

    for (int i=0; i < 5; i++){
        // get names, get scores and store in arrays

        printf("name: ");
        fflush(stdout); scanf("%s",names[i]);
        printf("score: ");
        fflush(stdout);scanf("%d",&scores[i]);
    }
    printf("Who's score will you view?: ");
    fflush(stdin);scanf("%s", seek);
    for (int i=0; i<5; i++){
        if (strcmp(names[i], seek) == 0){
            printf("%s got the score %d in the test\n", names[i], scores[i]);
        }
    }

    return 0;


    /* code */
}
