// 3.	Write a program to calculate the sum of n numbers entered by the user using malloc and free. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int length,*p,i;

    printf("Enter no. of values\n");
    scanf("%d",&length);

    p = (int *)calloc(length,sizeof(int));

    printf("Enter %d numbers\n",length);
    for(i=0;i<length;i++){
        scanf("%d",p+i);
    }

    int sum=0;
    for(i=0;i<length;i++){
        sum += *(p+i);
    }

    printf("Sum of Values: %d",sum);
    free(p);
    return 0;

}