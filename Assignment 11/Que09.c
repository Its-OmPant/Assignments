// 9. Write a program in C to find the square of any number using the function. 

#include<stdio.h>
void printSquare(int n){
    printf("Square of %d is: %d\n",n,n*n);
}
int main(){
    int n;
    printf("Enter a number to find it's Square\n");
    scanf("%d",&n);

    printSquare(n);
    return 0;
}