// 5. Write a recursive function to calculate sum of digits of a given number 

#include<stdio.h>
int sumOfDigit(int n){
    if(n <10)
        return n;
    return n%10 + sumOfDigit(n/10);
}
int main(){
    int num,sum;
    printf("Enter a number\n");
    scanf("%d",&num);

    sum = sumOfDigit(num);
    printf("Sum of digits of %d is: %d\n",num,sum);
    return 0;
}