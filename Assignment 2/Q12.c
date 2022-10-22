//12. Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int main(){
    int num,temp;
    printf("Enter a number\n");
    scanf("%d", &num);

    temp = num%10;
    num = num/10;

    temp = temp*100;
    num = temp + num;

    printf("%d", num);
    
    return 0;
}
