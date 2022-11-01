// 1.	Write a program to check whether a given number is positive or non positive.

#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number\n");
    scanf("%d",&num);

    if(num>0)
        printf("Positive Number\n");
    else
        printf("Negative Number\n");

    return 0;
}