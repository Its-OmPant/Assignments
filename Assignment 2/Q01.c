
// 1. Write a program to print unit digit of a given number 
#include<stdio.h>
int main(){
    int num,ud;
    printf("Enter a number\n");
    scanf("%d",&num);

    ud = num%10;
    printf("Unit digit of %d is %d",num,ud);
    return 0;
}