// 11. Write a program to find the position of first 1 in LSB.

#include<stdio.h>
int main(){
    int number,count=0;
    printf("Enter a number\n");
    scanf("%d",&number);

    while(number!=0){
        count++;
        if(number&1 == 1){
            break;
        }
        number = number>>1;
    }

    printf(" Position %d From right to left ",count);
    return 0;
}