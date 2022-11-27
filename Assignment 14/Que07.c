// 7. Write a program to find second largest in an array.Take array values from the user. 

#include<stdio.h>
int main(){
    int arr[10],max1,max2,temp;
    printf("\nEnter array Elements\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    max1 = arr[0];
    max2 = arr[1];

    if(max2>max1){
        temp = max1;
        max1 = max2;
        max2 = temp;
    }
    
    for(int i=2;i<10;i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2){
            max2 = arr[i];
        }
        
    }
    printf("\n2nd Largest array elements is: %d\n",max2);
    return 0;
}