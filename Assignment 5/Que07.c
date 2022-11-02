// 7. Write a program to print the first N even natural numbers in reverse order 

#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of N\n");
    scanf("%d",&x);

    while(x>0){
        printf("%d\n",2*x);
        x--;
    }
    return 0;
}