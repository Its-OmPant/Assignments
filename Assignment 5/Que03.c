// 3. Write a program to print the first N natural numbers in reverse order 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    while(n>0){
        printf("%d\n",n);
        n--;
    }
    return 0;
}