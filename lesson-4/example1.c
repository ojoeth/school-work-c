#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main() {
    char Name[10];
    
    printf("Enter Name: ");
    fflush(stdin);
    gets(Name);

    printf("Hello %s\n", Name);
    
    for(int i=0;i<10;i++){
        printf("%c",Name[i]);
    }
    printf("\n");
 
    for(int i=0;i<100;i++){
        printf("%c",Name[i]);
    }
    return 0;
}