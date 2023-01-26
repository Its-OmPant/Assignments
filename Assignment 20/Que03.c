// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ] 

#include<stdio.h>
void sort(int *ptr ,int size){
    int i,j,temp;
    for(i =0;i<size;i++){
        for(j=i;j<size;j++){
            if(ptr[i] > ptr[j]){
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}
int main(){
    int arr[10] = {50,12,41,89,65,23,41,78,20,37};

    sort(arr, 10);

    printf("Sorted Array\n");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}