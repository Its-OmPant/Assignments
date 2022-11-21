// 10. Write a program to print a table of N.

#include<stdio.h>

int main(){
    int num,i=1;
    printf("Enter The Number\n");
    scanf("%d",&num);

    while(i<=10){
        printf("%d * %d = %d\n",num,i,num*i);
        i++;
    }
    return 0;
}