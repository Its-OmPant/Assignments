// 9. Write a program to print the elements of an array in reverse order. 

#include<stdio.h>
void printReverse(int *array, int size){
    printf("Array in reverse order\n");
    for(int i=size-1; i>=0;i--){
        printf("%d ",*(array+i));
    }
}
int main(){
    int size;
    printf("Enter length of array\n");
    scanf("%d",&size);

    int array[size];

    printf("Enter array elements\n");
    for(int c=0;c<size;c++){
        scanf("%d",&array[c]);
    }

    printReverse(array,size);
   return 0;    
}