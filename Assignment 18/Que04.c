// 4. Write a function to transform string into uppercase 
#include<stdio.h>

void Uppercase(char string[]){
    for(int i=0; string[i] != 0; i++){
        if (string[i]>=97 && string[i]<=122){
            string[i] -= 32;
        }
    }

    printf("Converted Srting:  %s\n",string);
}
int main(){
    char string[50];

    printf("Enter a string\n");
    gets(string);

    Uppercase(string);
    return 0;
}
