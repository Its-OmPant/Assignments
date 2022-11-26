// 4. Write a recursive function to print first N odd natural numbers in reverse order 

#include<stdio.h>
void printNum(int n){
    if(n == 0)
        return;
    printf("%d ",2*n-1);
    printNum(n-1);
}

int main(){

    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    printNum(num);
    return 0;
}
