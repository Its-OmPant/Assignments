// 2. Write a program to count the occurrence of a given character in a given string. 
#include<stdio.h>
int main(){
    char string[500];
    char x;
    int temp=0;

    printf("Enter a string\n");
    gets(string);

    printf("Enter a character to find its occurance in string\n");
    scanf("%c", &x);

    for(int i=0;string[i] != '\0';i++){
        if(string[i] == x){
            temp++;
        }
    }

    printf("Occurance : %d Times \n",temp);
    return 0;
}