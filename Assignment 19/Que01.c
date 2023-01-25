// 1. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user. 

#include<stdio.h>
#include<string.h>

int main(){
    int i,j,vowels=0;
    char names[5][25];

    printf("Enter 5 names\n");
    for(i=0; i<5;i++){
        gets(names[i]);
    }

    for(i=0;i<5;i++){
        for(j=0; names[i][j] != '\0';j++){
            if(names[i][j] == 'A' || names[i][j] == 'a'){
                vowels++;
            }
            else if(names[i][j] == 'E' || names[i][j] == 'e'){
                vowels++;
            }
            else if(names[i][j] == 'I' || names[i][j] == 'i'){
                vowels++;
            }
            else if(names[i][j] == 'O' || names[i][j] == 'o'){
                vowels++;
            }
            else if(names[i][j] == 'U' || names[i][j] == 'u'){
                vowels++;
            }
        }
    }

    printf("Number of Vowels: %d\n",vowels);
    return 0;
}