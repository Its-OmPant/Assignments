// 4. Write a program to check whether a given number is an even number or an odd number without using % operator. 


#include<stdio.h>

int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    
    if(num&1){
        printf("Odd Number\n");
    }
    else{
        printf("Even Number\n");
    }
    return 0;
}