// 3.	Write a program to swap values of two int variables 
#include<stdio.h>
int main(){
    int num1,num2,x;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("Numbers Before Swapping\n");
    printf("Number-1: %d\nNumber-2: %d\n",num1,num2);

    x = num1;
    num1 = num2;
    num2 = x;
    printf("\nAfter Swaping\n");
    printf("Number-1: %d\nNumber-2: %d\n",num1,num2);
    return 0;
}
