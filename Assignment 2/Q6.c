// 6. Write a program which takes a character as an input and displays its ASCII code. 
#include<stdio.h>
int main(){
    char x;
    printf("Enter a Character\n");
    scanf("%c",&x);

    printf("ASCII Code of %c is: %d\n",x,x);
    return 0;
}