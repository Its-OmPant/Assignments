//1.Write a function to find the greatest number from the array of any size(TSRS).
#include<stdio.h>

int Greatest(int a[], int size){
    int max,i;
    max = a[0];
    for(i=1;i<size;i++){
        if(a[i]>max){
            max = a[i];
        }
    }

    return max;
}
int main(){
    int num,i,greatest;
    printf("Enter array size\n");
    scanf("%d",&num);

    int arr[num];
    printf("Enter array elements\n");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    greatest = Greatest(arr,num);

    printf("Greatest Element in array is: %d\n",greatest);

    return 0;
}