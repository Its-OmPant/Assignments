// 5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user. 

#include<stdio.h>
int main(){
    int arr[10],min;
    printf("\nEnter array Elements\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nArray Elements are --\n");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    min = arr[0];
    
    for(int i=0;i<10;i++){
        if(arr[i]<min)
            min = arr[i];
    }
    printf("\nSmallest array elements is: %d\n",min);
    return 0;
}