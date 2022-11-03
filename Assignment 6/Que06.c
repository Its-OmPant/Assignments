// 6. Write a program to calculate factorial of a number 


#include<stdio.h>
int main(){
    int i,num;
    double factorial=1;
    printf("Enter the number:\n");
    scanf("%d",&num);

    for(i = 1;i<=num;i++){
        factorial *= i;
    }

    printf("Factorial of %d is: %lf",num,factorial);
    return 0;
}