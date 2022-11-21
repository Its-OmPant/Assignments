// 9. Write a program to check whether a given number is an Armstrong number or not 

#include<stdio.h>
#include<math.h>

int main(){
    int num,numCopy,temp,digits,result=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    numCopy = num;
    digits = 0;

    while(numCopy != 0){
        numCopy /= 10;
        digits++;
    }

    numCopy = num;

    while(numCopy != 0){
        temp = numCopy%10;
        numCopy /= 10;
        result = result + pow(temp,digits);
    }

    if(result == num)
        printf("It's a Armstrong Number\n");
    else
        printf("It's not a Armstrong Number\n");

    return 0;   
}