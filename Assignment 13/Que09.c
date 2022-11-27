// 9. Write a program in C to count the digits of a given number using recursion. 

#include<stdio.h>
int count(int n){
    if(n<=10){
        return 1;
    }
    return 1 + count(n/10);
}
int main(){
    int num,result;
    printf("Enter a number\n");
    scanf("%d",&num);
    result = count(num);
    printf("Digits - %d\n",result);
    return 0;
}