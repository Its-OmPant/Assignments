// 7. Write a recursive function to print squares of first N natural numbers 

#include<stdio.h>
void printNum(int n){
    if(n == 0)
        return;
    printNum(n-1);
    printf("%d ",n*n);
}

int main(){

    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    printNum(num);
    return 0;
}