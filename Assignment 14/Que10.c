// 10. Write a program in C to copy the elements of one array into another array.Take array values from the user.

#include<stdio.h>
int main(){
    int a[50],b[50],n;

    printf("Enter the No. of elements in array: ");
    scanf("%d",&n);

    printf("\nEnter %d Elements\n", n);
    for(int i = 0; i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Array A Elements are:\n");
    for(int i = 0; i<n;i++){
        printf("%d ",a[i]);
    }

    printf("\n Copying values of array A in array B \n");

    for(int i = 0; i<n;i++){
        b[i] = a[i];
    }

    printf("Array B Elements are:\n");
    for(int i = 0; i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}