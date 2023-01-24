// 10. Write a function to find the repeated character in a given string.
#include<stdio.h>
#include<string.h>

void repeatedChar(char string[]){
    char temp[150] = {};

    for(int i=0;string[i]!='\0';i++){
        temp[string[i]]++;
    }

    for(int i=0;i<=150;i++){
        if(temp[i]>=2){
            printf("%c ",i);
        }
    }

}
int main(){
    char string[50];

    printf("Enter a string\n");
    fgets(string,50,stdin);
    string[strlen(string)-1] = '\0';
    
    repeatedChar(string);
    return 0;
}