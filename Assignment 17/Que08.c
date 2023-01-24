// 8. Write a program in C to copy one string to another string. 
#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char string[100], copystring[100];

    printf("Enter a string\n");
    fgets(string,100,stdin);
    string[strlen(string)-1] = '\0';

    for(i=0; string[i] != '\0'; i++){
        copystring[i] = string[i];
    }
    copystring[i] = '\0';

    printf("Entered String : %s\nCopied String : %s\nString Copied Successfully\n",string,copystring);

    return 0;

}