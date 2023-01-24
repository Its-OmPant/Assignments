// 5. Write a program to convert a given string into lowercase 

#include<stdio.h>

int main(){
    char string[100];

    printf("Enter a given string \n");
    gets(string);

    for(int i=0; string[i] != '\0';i++){
        if(string[i]>=65 && string[i]<=90)
            string[i] += 32;
    }
    printf("Converted Lowercase String is: %s",string);
    return 0;
}