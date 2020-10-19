#include<stdio.h>
#include<stdlib.h>

int main(){
    int num, count = 0;
    bool isPrime = true;
    // ask for a number
    fflush(stdin); scanf("%d", num);
    for(count = num - 1; count > 1; count--){
        if (num % count == 1){
            isPrime = false;
        }
    } 
    if (isPrime){
        printf("%d is a prime number", num);
    }
}