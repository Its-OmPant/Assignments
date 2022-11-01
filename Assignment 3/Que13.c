// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2. 

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    if(num%3==0 && num%2==0){
        printf("Number is divisible by 2 and 3\n");
    }
    else{
        printf("Not divisible by 2 and 3\n");
    }
    return 0;
}