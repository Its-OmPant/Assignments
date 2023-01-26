// 5. Write a program to find the maximum number between two numbers using a pointer 

#include<stdio.h>

int findMax(int *n1, int *n2){
    if( *n1 > *n2){
        return *n1;
    }
    else{
        return *n2;
    }
}

int main(){
    int num1,num2,max;

    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);

    max = findMax(&num1,&num2);
    printf("Maximum: %d\n",max);
    return 0;
}