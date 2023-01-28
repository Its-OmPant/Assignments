// 10. Find out the maximum and minimum from an array using dynamic memory allocation in C.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int size,max,min;
    int *p;
    printf("Enter Size of array\n");
    scanf("%d",&size);

    p = (int *)malloc(size*sizeof(int));

    printf("Enter array elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",p+i);
    }

    // finding max element
    max = -1;
    for(int j=0;j<size;j++){
        if(*(p+j)>max)
            max = *(p+j);
    }

    // finding min element
    min = *p;
    for(int j=0;j<size;j++){
        if(*(p+j)<min)
            min = *(p+j);
    }

    printf("Maximum: %d\nMinimum: %d\n",max,min);

    

    free(p);
    return 0;
}