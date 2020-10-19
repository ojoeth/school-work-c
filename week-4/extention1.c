#include <stdio.h>
#include <stdlib.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define COLOUR_RESET   "\x1b[0m"


int checkVowel(char letter) {
    char vowels[] = {'a','e','i','o','u','y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    for (int i = 0; i < 12; i++) { // Loop over every vowel in list
        if ( vowels[i] == letter ){ // Check if current vowel == letter
            return 0;
        }
    }
    if (letter == ' '){
        return 2;
    }
    return 1;
}


int main()
{   
    int i = 0;
    int numVowels = 0;
    int numConsts = 0;
    int numSpaces = 0;
    char inputString[80];  

    char character;

    // Collect string
    printf(MAGENTA"Type a word: "RED);
    fflush(stdin); scanf("%s", &inputString);

    // for every char of the string
    for (i = 0; i < 80; i++){
        if (inputString[i] == '\0'){
            // Return number of vowels and constenents
            printf(GREEN"Vowels:" RED " %d, " GREEN "Constenants:" RED" %d " GREEN"spaces: " RED "%d" COLOUR_RESET "\n", numVowels, numConsts, numSpaces);
            printf(MAGENTA"note: characters outside of the alphabet are counted as constenants because regex is too confusing\n"COLOUR_RESET);
            return 0;
        }

        character = inputString[i]; // Set character to a character in our string

        // Run function to see whether or not our character is a vowel
        int result = checkVowel(character);
        // If it is, add to total vowels, if not add to total constenants
        if(result == 0){
            numVowels++;
        } else if(result == 1){
            numConsts++;
        } else if (result == 2){
            numSpaces++;
        }

    }
}