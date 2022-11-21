// 15. Write a program to check whether a given number is positive, negative or zero. 

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

  
    if(num>0){
        printf("Positive Number \n");
    }
    else if(num== 0){
        printf("Number is Zero. \n");
    }
    else{
        printf("Negative Number \n");
    }


    return 0;
}