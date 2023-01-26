// 8. Write a program to compute the sum of all elements in an array using pointers. 

#include<stdio.h>
void sumofArray(int *array, int size, int *sum){
    for(int i=0;i<size;i++){
        *sum = *sum + *(array+i);
    }
}
int main(){
    int size,sum=0;
    printf("Enter length of array\n");
    scanf("%d",&size);

    int array[size];

    printf("Enter array elements\n");
    for(int c=0;c<size;c++){
        scanf("%d",&array[c]);
    }

   sumofArray(array,size,&sum);
   printf("Sum of Elements: %d\n",sum);
   return 0;    
}