// 8 - Write a program to print squares of the first N natural numbers 

#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter the value of N\n");
    scanf("%d",&n);

    while(i<=n){
        printf("%d\n",i*i);
        i++;
    }
    return 0;
}