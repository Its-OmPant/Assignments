// 1. Write a program to find the Nth term of the Fibonnaci series. 

#include<stdio.h>
int main(){
    int n,i=3,sum,t1,t2;
    t1 = 0;
    t2 = 1;
    printf("Enter the value of N:\n");
    scanf("%d",&n);

    if(n == 1){
        printf("%d term of Fibonacci Series is: %d",n,t1);
    }
    else if(n == 2){
        printf("%d term of Fibonacci Series is: %d",n,t2);
    }
    else{
        while(i<=n){
            sum = t1 + t2;
            t1 = t2;
            t2 = sum;
            i++;
        }
     printf("%d term in Fibonacci Series is : %d\n",n,sum);
    }
    return 0;
}