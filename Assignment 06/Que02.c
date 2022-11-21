// 2. Write a program to calculate sum of first N even natural numbers 

#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter the value of N\n");
    scanf("%d",&n);

    for(i = 1;i<=n;i++){
        sum = sum + 2*i;
    }

    printf("Sum of first %d even natural numbers is: %d",n,sum);
    return 0;
}