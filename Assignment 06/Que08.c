// 8. Write a program to check whether a given number is a Prime number or not 
#include<stdio.h>
int main(){
    int i= 2,count,number,flag=0;
    printf("Enter the number:\n");
    scanf("%d",&number);
    
    while(i<number){
        if(number%i == 0){
            flag=1;
        }
        i++;
    }
    if(flag){
        printf("NOT a PRIME NUMBER\n");
    }
    else
        printf("PRIME NUMBER\n");

return 0;
}