// 1. Write a program to calculate sum of first N natural numbers 

#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter the value of N\n");
    scanf("%d",&n);

    for(i = 1;i<=n;i++){
        sum +=i;
    }

    printf("Sum of first %d natural numbers is: %d",n,sum);
    return 0;
}