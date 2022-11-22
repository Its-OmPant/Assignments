// 7. Program to take the value from the user as input electricity unit charges and calculate total electricity bill according to the given condition . Using the switch statement. 
// For the first 50 units Rs. 0.50/unit 
// For the next 100 units Rs. 0.75/unit 
// For the next 100 units Rs. 1.20/unit 
// For units above 250 Rs. 1.50/unit 
// An additional surcharge of 20% is added to the bill. 

#include<stdio.h>
int main(){
    int units;
    float total,tax,grandTotal;

    printf("Enter Units\n");
    scanf("%d",&units);

    switch (units)
    {
    case 1 ... 50:
        total = units * 0.50;
        tax = (units * 20)/100.0;
        grandTotal = total + tax;
        break;
    case 51 ... 150:
        total = units * 0.75;
        tax = (units * 20)/100;
        grandTotal = total + tax;
        break;
    case 151 ... 250:
        total = units * 1.20;
        tax = (units * 20)/100;
        grandTotal = total + tax;
        break;
    default:
        total = units * 1.50;
        tax = (units * 20)/100;
        grandTotal = total + tax;
        break;
    }

    
    printf("Your Electricity Bill for %d Units is:\n\tBase Pay:  %.2f Rupees \n\t20%% Additional Tax :%.2f Rupees\n\tTotal Bill: %.2f Rupees",units,total,tax,grandTotal);

}