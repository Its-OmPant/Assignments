// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string. 
#include<stdio.h>
#include<string.h>

int main(){
    char string[200];
    int alphabet = 0, digit =0, spchar =0;

    printf("Enter a string\n");
    fgets(string,200,stdin);
    string[strlen(string)-1] = '\0';

    for(int i=0; string[i] != '\0'; i++){
        if((string[i]>=65 && string[i]<=90 ) || (string[i]>=97 && string[i]<=122)){
            alphabet++;
        }
        else if(string[i]>=48 && string[i]<=57){
            digit++;
        }
        else{
            spchar++;
        }
    }

    printf("\n Result:\n Alphabets - %d\n Digits - %d\n Special Characters - %d\n",alphabet,digit,spchar);

    return 0;
}