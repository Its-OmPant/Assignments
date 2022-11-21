// 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage. 
#include<stdio.h>
int main(){
    int cp, sp, profitP, lossP;
    printf("Enter Cost Price\n");
    scanf("%d",&cp);
    printf("Enter Selling Price\n");
    scanf("%d",&sp);

    if(sp>cp){
        profitP = ((sp - cp)/cp) * 100;
        printf("%d%% Profit\n",profitP);
    }
    else {
        lossP =  ((cp - sp)/cp) * 100;
        printf("%d%% Profit\n",profitP);
    }

    return 0;
}