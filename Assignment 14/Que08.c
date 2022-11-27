// 8. Write a program to find the second smallest number in an array.Take array values from the user. 

#include<stdio.h>
int main(){
    int arr[10],min1,min2,temp;
    printf("\nEnter array Elements\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    min1 = arr[0];
    min2 = arr[1];

    if(min2 < min1){
        temp = min1;
        min1 = min2;
        min2 = temp;
    }
    
    for(int i=2;i<10;i++){
        if(arr[i]<min1){
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i]<min2){
            min2 = arr[i];
        }
        
    }
    printf("\n2nd Smallest array elements is: %d\n",min2);
    return 0;
}