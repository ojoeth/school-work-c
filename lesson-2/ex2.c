#include <stdio.h>
#include <stdlib.h>

int main(){
    // Set variables
    int childTickets, adultTickets = 0;
    char dayOfWeek;
    double totalPrice, childPrice, adultPrice = 0.00;
    
    // Collect input
    printf("\nHow many child tickets? : ");
    fflush(stdin); scanf("%d", &childTickets);
    
    printf("\nHow many adult tickets? : ");
    fflush(stdin); scanf("%d", &adultTickets);
    
    printf("\nWhat day of the week is it? (enter W for week day, S for saturday/sunday or B for bank holiday) Use a CAPITAL letter : ");
    fflush(stdin); scanf("%c", &dayOfWeek);

    printf("\nday of week: %c", dayOfWeek);
    // Calculate price for adults and children separately from day of week
    if (dayOfWeek == "W"){
        childPrice = childTickets * 5.00;
        adultPrice = adultTickets * 8.00;
    }else if (dayOfWeek == "B" || dayOfWeek == "S"){
        childPrice = childTickets * 7.50;
        adultPrice = adultTickets * 12.00;
    }
    printf("\ntotal Child price: %f, total Adult price: %f", childPrice, adultPrice);

}