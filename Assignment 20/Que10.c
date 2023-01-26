// 10. Write a program to print a string in reverse using a pointer\0

#include<stdio.h>
#include<string.h>

void reverseString(char *string){ 
    printf("Reverse of String:\n");
    int i = strlen(string) -1;

    for(i;i>=0;i--){
        printf("%c",*(string+i));
    }
    
}

int main(){
    char string[50];

    printf("Enter a string\n");
    fgets(string,50,stdin);
    string[strlen(string) -1] = '\0';

    reverseString(string);
    
    return 0;    
}