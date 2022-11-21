// 2. Write a program to print first N terms of Fibonacci series 

#include<stdio.h>
int main(){
    int n,i=3,sum,t1,t2;
    printf("Enter the value of N:\n");
    scanf("%d",&n);

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
            sum = t1 +t2;
            t1 = t2;
            t2 = sum;
            printf("%d ",sum);
            i++;
            }
    }
}