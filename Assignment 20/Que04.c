// 4. Write a program in C to demonstrate how to handle the pointers in the program. 

//we can understand the use of pointers using the folllowing swapping program
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