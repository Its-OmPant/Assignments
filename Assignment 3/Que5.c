// 5. Write a program to check whether a given number is a three digit number or not.

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    if(num>99 && num<=999){
        printf("Three Digit Number\n");
    }
    else{
        printf("Not a Three digit Number\n");
    }
    return 0;
}