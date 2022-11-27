// 2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user. 

#include<stdio.h>
int main(){
    int arr[10],sum=0;
    float average;
    printf("\nEnter array Elements\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nArray Elements are --\n");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    
    for(int i=0;i<10;i++){
        sum += arr[i];
    }

    average = sum/10.0;
    printf("\n\nAverage of Array elements is: %.2f\n\n",average);
    return 0;
    

}