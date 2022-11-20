// 4. Write a program to calculate HCF of two numbers 
#include<stdio.h>
int main(){
    int num1,num2,result;

    printf("Enter two numbers to find HCF..\n");
    scanf("%d%d",&num1,&num2);

    result = (num1<num2) ? num1 : num2 ;

    while(result>0){
        if(num1% result==0 && num2%result==0){
            break;
        }
        result--;
    }
    printf("%d is HCF of %d & %d\n",result,num1,num2);

}