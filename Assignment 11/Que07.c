// 7. Write a function to print first N terms of Fibonacci series (TSRN) 

#include<stdio.h>

void nFibonacci(int n){
    int i=3,sum,t1,t2;
    sum = 0;
    t1=0;
    t2=1;

    if(n==1){
         printf("%d",t1);
    }   
    else if(n==2){
        printf("%d %d ",t1, t2);
    }
    else{
        printf("%d %d ",t1, t2);
        while(i<=n){
            sum = t1 + t2;
            t1 = t2;
            t2 = sum;
            printf("%d ",sum);
            i++;
            }
    }
}
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    nFibonacci(n);
    return 0;    
}
