// 9. Write a function to check whether a given number contains a given digit or not. (TSRS) 

#include<stdio.h>

int checkDig(int n,int d){
    int x;
    while(n!=0){
            x = n%10;
            n = n/10;
            if(x == d){
                return 1;
            }
    }
    return 0;
}

int main(){
    int num,dig,result;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("Enter a Digit\n");
    scanf("%d",&dig);

    result = checkDig(num , dig);

    if(result)
        printf("Number Contains the Given Digit\n");
    else
        printf("Number doesn't Contains the Given Digit\n");

    return 0;
}