// 6. Write a program to calculate the length of the string using a pointer 

#include<stdio.h>
#include<string.h>

int stringLength(char *str){
    int length=0;
    while( *str != '\0'){
        length++;
        str++;
    }

    return length;
}

int main(){
    char string[50];
    int length;

    printf("Enter a string\n");
    fgets(string,50,stdin);
    string[strlen(string)-1] = '\0';

    length = stringLength(string);
    printf("String Length: %d\n",length);
    return 0;    
}