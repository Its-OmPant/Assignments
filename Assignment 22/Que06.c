// 6. Write a program in C to find the largest element using Dynamic Memory Allocation. 

#include<stdio.h>
#include<stdlib.h>

int main(){
    int size,largest;
    int *p;
    printf("Enter Size of array\n");
    scanf("%d",&size);

    p = (int *)malloc(size*sizeof(int));

    printf("Enter array elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",p+i);
    }

    // finding largest element
    largest = -1;
    for(int j=0;j<size;j++){
        if(*(p+j)>largest)
            largest = *(p+j);
    }

    printf("Largest Element: %d\n",largest);

    

    free(p);
    return 0;
}