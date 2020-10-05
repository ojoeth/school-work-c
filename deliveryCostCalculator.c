#include <stdio.h>

int main(){
    float weight = 0.00;
    float volume = 0.00;
    float price = 3.00;

    printf("Input volume of parcel in centimeters cubed (don't add units): ");
    fflush(stdin); scanf("%f", &volume);

    printf("Input weight of parcel in kg (don't add units): ");
    fflush(stdin); scanf("%f", &weight);

    if (volume > 10000 || weight > 50 || weight < 0 || volume < 0){
        printf("Invalid mass or volume\n");
        return 1;
    } else if (weight > 1){
        price = price + ((weight - 1)/0.1*0.5);
    }
    if (volume > 1000){
        price = price + ((volume - 1000)/200*0.5);
    }

    printf("£%f\n",price);

    return 0;
}