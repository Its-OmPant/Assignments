// 6. Write a function to calculate the factorial of a number. (TSRS) 

#include<stdio.h>

int factorial(int n){
    int temp = 1;
    for(int i=n;i>=1;i--){
        temp = temp * i;
    }
    return temp;
}
int main(){
    int number,fact;
    printf("Enter a number\n");
    scanf("%d",&number);

    fact = factorial(number);
    printf("Factorial of %d is %d\n",number,fact);
    return 0;
}