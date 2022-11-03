// 7. Write a program to count digits in a given number 

#include<stdio.h>
int main(){
    int count=0,number;
    printf("Enter the number:\n");
    scanf("%d",&number);

    while(number!=0){
        number = number/10;
        count++;
    }
    printf("Number has %d digits\n",count);
    return 0;
}