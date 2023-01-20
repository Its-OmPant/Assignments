// 3. Write a function to sort an array of any size(TSRN).

#include<stdio.h>

void sortArray(int a[], int size){
    int temp,i,j;

    for(i=size-1;i>=0;i--){
        for(j=0;j<i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
}
int main(){
    int num,i;
    printf("Enter array size\n");
    scanf("%d",&num);

    int arr[num];
    printf("Enter array elements\n");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    sortArray(arr , num);
    return 0;
}