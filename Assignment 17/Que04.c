// 4. Write a program to convert a given string into uppercase 

#include<stdio.h>

int main(){
    char string[100];

    printf("Enter a given string \n");
    gets(string);

    for(int i=0; string[i] != '\0';i++){
        if(string[i]>=97 && string[i]<=122)
            string[i] -= 32;
    }
    printf("Converted Uppercase String is: %s",string);
    return 0;
}