//  6. Write a program to print greater between two numbers. Print one number if both are the same. 


#include<stdio.h>
int main(){

    int num1,num2;
    printf("Enter Two numbers\n");
    scanf("%d%d",&num1,&num2);

    if(num1>num2){
        printf("Greater Number: %d\n",num1);
    }
    else if(num1 == num2){
        printf("Both are Equal: %d\n",num1);
    }
    else{
        printf("Greater Number: %d\n",num2);
    }

return 0;

}