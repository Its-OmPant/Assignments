// 1.	Write a function to calculate length of the string 

#include<stdio.h>
#include<string.h>

int length(char string[]){
    int i,length=0;
    for(i=0; string[i] != '\0'; i++){
        length++;
    }

    return length;
}

int main(){
    char string[50];
    int strLength;

    printf("Enter a string\n");
    fgets(string,50,stdin);
    string[strlen(string)-1] = '\0';

    //length returns string length
    strLength = length(string);
    printf("Length of Entered string: %d",strLength);

    return 0;
}