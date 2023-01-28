// 8.	Write a program to demonstrate dangling pointers in C. 

#include<stdio.h>

int * fun(){
    int x;
    return &x;
}

int main(){
    int *p;
    p = fun(); //Dangling pointer
    return 0;
}