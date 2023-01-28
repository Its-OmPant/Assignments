// 9. Write a program to allocate memory dynamically of the size in bytes entered by the user. Also handle the case when memory allocation is failed. 

#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    int *p;

    printf("Enter size in bytes to allocate\n");
    scanf("%d",&size);

    p = (int *)malloc(size*sizeof(int));

    if(p == NULL){
        printf("Memory allocation Failed\n");
        return -1;
    }

    printf("Memory Allocated Successfully\n");
    free(p);
    return 0;
}