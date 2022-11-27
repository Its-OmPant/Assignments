// 1. Write a recursive function to calculate sum of first N natural numbers 

#include<stdio.h>
int sumOfN(int n){
    if(n==1)
        return 1;
    return n + sumOfN(n-1);
}
int main(){

    int num,sum;
    printf("Enter a number\n");
    scanf("%d",&num);

    sum = sumOfN(num);
    printf("Sum of First %d natural numbers is: %d\n",num,sum);

}