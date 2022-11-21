// 11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include <stdio.h>
int main() {
    float inr,usd;
    printf("Enter INR\n");
    scanf("%f",&inr);
    usd = inr/76.23;
    
    printf("Amount in INR: %.2f\nAmount in USD: %.2f",inr,usd);
    return 0;
}