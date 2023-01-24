// 6. Write a program to reverse a string. 
#include<stdio.h>
#include<string.h>

int main(){
    char string[100],revStr[100];

    printf("Enter a given string \n");
    fgets(string, 100, stdin);
    string[strlen(string) -1] = '\0';

    int j  = strlen(string)-1;
    int x = strlen(string);

    for(int i=0; i<=x; i++){
        revStr[i] = string[j];
        j--;
    }
    
    printf("Reverse String is: %s",revStr);
    return 0;
}