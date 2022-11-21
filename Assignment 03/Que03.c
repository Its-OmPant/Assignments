// 3. Write a program to check whether a given number is an even number or an odd number. 

#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number\n");
    scanf("%d",&num);

    if(num%2 == 0)
        printf("Number is EVEN\n");
    else
        printf("Number is ODD\n");
    return 0;
}