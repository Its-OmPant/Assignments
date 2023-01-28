// 5.	Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory allocation. 

#include<stdio.h>
#include<stdlib.h>

int main(){
    int size,sum=0;
    int *p;
    printf("Enter Size of array\n");
    scanf("%d",&size);

    p = (int *)malloc(size*sizeof(int));

    printf("Enter array elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",p+i);
    }


    for(int i=0;i<size;i++){
        sum = sum + *(p+i);
    }

    printf("Sum of Elements: %d",sum); 
    free(p);
    return 0;
}