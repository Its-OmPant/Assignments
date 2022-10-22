// 2. Write a program to print a given number without its last digit. 
#include<stdio.h>
int main(){
    int num,x;
    printf("Enter a number\n");
    scanf("%d",&num);

    x = num/10;
    printf("Given Number- %d\nNumber Without last digit : %d\n",num,x);
    return 0;
}