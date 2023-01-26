// 1. Write a function to swap values of two in variables of calling function.

#include<stdio.h>
void swap(int *p, int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
int main(){
    int x,y;

    printf("Enter the value of x and y\n");
    scanf("%d%d",&x,&y);

    printf("Before Swapping : X = %d Y = %d\n",x,y);
    swap(&x,&y);
    printf("After  Swapping : X = %d Y = %d\n",x,y);

    return 0;    
}