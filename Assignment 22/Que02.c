// 2.	Write a program to ask the user to input a number of data values he would like to enter then create an array dynamically to accommodate the data values. Now take the input from the user and display the average of data values. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int length,*p,i;

    printf("Enter no. of data values\n");
    scanf("%d",&length);

    p = (int *)calloc(length,sizeof(int));

    printf("Enter %d values\n",length);
    for(i=0;i<length;i++){
        scanf("%d",p+i);
    }

    int sum=0,average = 0;
    for(i=0;i<length;i++){
        sum += *(p+i);
    }

    average = sum/length;

    printf("Average of Values: %d",average);
    free(p);
    return 0;

}