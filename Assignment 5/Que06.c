// 6. Write a program to print the first N even natural numbers 

#include<stdio.h>
int main(){
    int x,i=1;
    printf("Enter the value of N\n");
    scanf("%d",&x);

    while(i<=x){
        printf("%d\n",2*i);
        i++;
    }
    return 0;
}