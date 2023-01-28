// 7.	Write a program to demonstrate memory leak in C

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p,x=5;

    p = (int *)malloc(4*sizeof(int));
    p = &x; // Memory leak(pointer is updated without free)

    return 0;
}