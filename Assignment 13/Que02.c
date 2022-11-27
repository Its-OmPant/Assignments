// 2. Write a recursive function to calculate sum of first N odd natural numbers 

#include<stdio.h>
int sumOfOddN(int n){
    if(n==1)
        return 1;
    return (2*n-1) + sumOfOddN(n-1);
}
int main(){

    int num,sum;
    printf("Enter a number\n");
    scanf("%d",&num);

    sum = sumOfOddN(num);
    printf("Sum of First %d Odd natural numbers is: %d\n",num,sum);

}