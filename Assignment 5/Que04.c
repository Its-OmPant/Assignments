// 4. Write a program to print the first N odd natural numbers 

#include<stdio.h>
int main(){
    int x,i=1;
    printf("Enter the value of N\n");
    scanf("%d",&x);

    while(i<=x){
        printf("%d\n",2*i-1);
        i++;
    }
    return 0;
}