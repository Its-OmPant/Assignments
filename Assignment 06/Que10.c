// 10. Write a program to reverse a given number
#include<stdio.h>
int main(){
    int num,rev = 0,x;
    printf("Enter a number\n");
    scanf("%d",&num);
    x = num;

    while(num!=0){
        rev = (rev * 10) + num%10;
        num =  num/10;
    }
    printf("Entered Number: %d\nReversed Number:%d\n",x,rev);
    return 0;
}