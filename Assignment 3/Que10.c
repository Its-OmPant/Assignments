// 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage. 
/// DOUBT  
// output wrongg
#include<stdio.h>
int main(){
    int cp, sp, temp, result;
    printf("Enter Cost Price\n");
    scanf("%d",&cp);
    printf("Enter Selling Price\n");
    scanf("%d",&sp);

    temp = sp - cp;

    if(temp>0){
        result = temp / cp * 100;
        printf("Profit Percentage : %d%%", result);

    }
    else{
        result = temp * 100 / cp;
        printf("Profit Percentage : %d%%", result);
    }
    return 0;
}