// 9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user. 

#include<stdio.h>
int main(){
    int a[50],n;

    printf("Enter the No. of elements in array: ");
    scanf("%d",&n);

    printf("\nEnter %d Elements\n", n);
    for(int i = 0; i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}