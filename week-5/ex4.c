#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()                                                                  {
    char ticket[3][21];
    char input[21];

    strcpy(ticket[0], "FILM: ");
    strcpy(ticket[1], "TIME: ");
    strcpy(ticket[2], "TYPE: ");

    for (int i=0;i<3;i++)                                                   {
        switch(i)                                                           {
            case 0:
                printf("Film: ");
                break;
            case 1:
                printf("Time: ");
                break;
            case 2:
                printf("Type: ");
                break;                                                      }
        
        fflush(stdin); scanf("%s", &input);
        strcat(ticket[i], input);
                                                                            }
                
    for (int i=0; i<3; i++){
        printf("%s\n", ticket[i]);
    }
    return 0;                                                 
                                                                            }