// 4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user. 

#include<stdio.h>
int main(){
    int arr[10],max;
    printf("\nEnter array Elements\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nArray Elements are --\n");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    max = arr[0];
    
    for(int i=0;i<10;i++){
        if(arr[i]>max)
            max = arr[i];
    }
    printf("\nGreatest array elements is: %d\n",max);
    return 0;
}