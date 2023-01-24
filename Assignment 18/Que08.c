// 8. Write a function to count words in a given string 
#include<stdio.h>
#include<string.h>
int COUNT(char string[]){
    int count=1;

    for(int i=0; string[i] !='\0';i++){
        if(string[i] == ' ' && string[i+1] != ' '){
            count++;
        }
    }
    return count;
}
int main(){
    char string[100];

    printf("Enter a string\n");
    fgets(string,100,stdin);
    string[strlen(string)-1] = '\0';

    printf("No.of Words : %d\n", COUNT(string));
    return 0;
}