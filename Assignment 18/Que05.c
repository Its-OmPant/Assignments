// 5. Write a function to transform a string into lowercase 
#include<stdio.h>

void Lowercase(char string[]){
    for(int i=0; string[i] != 0; i++){
        if (string[i]>=65 && string[i]<=90){
            string[i] += 32;
        }
    }

    printf("Converted Srting:  %s\n",string);
}
int main(){
    char string[50];

    printf("Enter a string\n");
    gets(string);

    Lowercase(string);
    return 0;
}