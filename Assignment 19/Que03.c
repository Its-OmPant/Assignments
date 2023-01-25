// 3. Write a program to read and display a 2D array of strings in C language. 

#include<stdio.h>
#include<string.h>

int main(){
    int i,j;
    char strings[5][25];

    //reading strings
    printf("Enter 5 Strings\n");
    for(i=0; i<5;i++){
        gets(strings[i]);
    }


    //Display strings
    printf("Strings in 2D Arrays are:\n");
    for(i=0;i<5;i++){
        printf(" %s ",strings[i]);
    }
    return 0;
}