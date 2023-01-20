// 10. Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void count(int a[], int length){
    int i,greatest=-1;

    for(i=0;i<length;i++){
        if(a[i]>greatest){
            greatest = a[i];
        }
    }

    int arr[greatest+1];
   
    for(i=0;i<greatest+1;i++){
            arr[i] = 0;
        }
    for(i=0;i<length;i++){
        arr[a[i]] += 1;
    }

    for(i=0;i<greatest+1;i++){
        if(arr[i] != 0){
            printf("%d - %d Times\n",i,arr[i]);
        }
    }

}
int main(){
    int length;
    printf("Enter the size of array\n");
    scanf("%d",&length);

    int array[length];
    printf("Enter %d elements of array\n",length);
    for(int i=0;i<length;i++){
        scanf("%d",&array[i]);
    }

    // counting Frequnecy
    count(array , length);
    return 0;
}