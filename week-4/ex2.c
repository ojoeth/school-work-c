// siteswap numbers

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // init vars
    int total=0, x=0, input=0, sequence[3];
    bool is_siteswap = true;

    for (x=0;x<=2;x++){
        // Collect numbers
        printf("Type number %d: ", x+1);
        fflush(stdin); scanf("%d", &input);
        
        // Put input into the sequence array and add to total
        sequence[x] = input;
        total+=input;

        // Check if input is equal to previous number - 1
        if (x!=0 && input-1 == sequence[x-1]){
            is_siteswap = false;
        }
    }

    // If it's not divisible by 3, it's not siteswap.
    if(total%3 != 0){
            is_siteswap = false;
    }

    // Show results
    if (is_siteswap){
        printf("Your sequence is a siteswap sequence\n");
    }else{
        printf("Not a siteswap\n");
    }
    return 0;
}