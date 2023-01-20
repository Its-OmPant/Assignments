//2.Write a function to find the smallest number from the array of any size(TSRS).
#include<stdio.h>

int smallest(int a[], int size){
    int min,i;
    min = a[0];
    for(i=1;i<size;i++){
        if(a[i]<min){
            min = a[i];
        }
    }

    return min;
}
int main(){
    int num,i,smallestElem;
    printf("Enter array size\n");
    scanf("%d",&num);

    int arr[num];
    printf("Enter array elements\n");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    smallestElem = smallest(arr,num);

    printf("smallest Element in array is: %d\n",smallestElem);

    return 0;
}