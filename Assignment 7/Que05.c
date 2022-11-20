// 5. Write a program to check whether two given numbers are co-prime numbers or not 

#include<stdio.h>
int main(){
    int num1,num2,hcf,result;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);

    //finding min element
    result = (num1<num2) ? num1 : num2 ;

    while(result>0){
        if(num1% result==0 && num2%result==0){
            break;
        }
        result--;
    }

    if(result == 1){
        printf("Co-prime Numbers\n");
    }
    else{
        printf("Not Co-prime Numbers\n");
    }

    return 0;
}