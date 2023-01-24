// 1. Write a program to calculate the length of the string. (without using builtin method) 
#include<stdio.h>

int main(){
    int i,length = 0;
    char string[50];

    printf("Enter any String\n");
    gets(string);

    for(i=0; string[i] != '\0';i++){
        length++;
    }

    printf("Length of String: %d",length);
    return 0;
}