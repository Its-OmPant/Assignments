// 9. Write a program to calculate LCM of two numbers 
#include<stdio.h>
int main(){
    int num1,num2,lcm,max;
    printf("Enter two Numbers to find LCM\n");
    scanf("%d%d",&num1,&num2);
    max = (num1 > num2) ? num1 : num2;

    while(1){
        if((max % num1 == 0) && ( max % num2 == 0)){
            printf("LCM is %d",max);
            break;
        }
        ++max;
    }
    return 0;
}