// 6. Write a recursive function to calculate factorial of a given number 
#include<stdio.h>
int fact(int n){
    if(n==1)
        return 1;
    return n * fact(n-1);
}
int main(){
    int num,factorial;
    printf("Enter a number\n");
    scanf("%d",&num);

    factorial = fact(num);
    printf("Sum of digits of %d is: %d\n",num,factorial);
    return 0;
}