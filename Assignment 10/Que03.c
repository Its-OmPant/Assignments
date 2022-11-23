// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS) 

#include<stdio.h>

int checkNo(int n);

int main(){
    int num,result;
    printf("Enter a number\n");
    scanf("%d",&num);

    result = checkNo(num);

    if(result)
        printf("Even number\n");
    else
        printf("Odd number\n");

    return 0;
}

int checkNo(int n){
    if(n%2 == 0)
        return 1;
    else
        return 0;
}