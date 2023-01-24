// 2.	Write a function to reverse a string. 
#include<stdio.h>
#include<string.h>

void reverse(char string[], int size){
    char revString[size];
    int i,j,length;
    j = strlen(string) - 1;
    length = strlen(string);

    for(i =0; i<length;i++){
        revString[i] = string[j];
        j--;
    }

    printf("Entered String: %s\nReversed String: %s\n",string,revString);
}

int main(){
    char string[50];

    printf("Enter a string\n");
    fgets(string,50,stdin);
    string[strlen(string)-1] = '\0';

    //Function that prints reverse of passed string
    reverse(string, 50);
    return 0;
}