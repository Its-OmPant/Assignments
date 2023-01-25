// 6. Write a program to print the strings which are palindrome in the list of strings. 

#include<stdio.h>
#include<string.h>

int Palindrom(char string[]){
    int i,j,flag=1;

    j = strlen(string) -1;
    for(i=0; i<=j; i++){
        if(string[i] == string[j]){
            j--;
        }
        else{
            flag = 0;
            break;
        }
    }
    if(j<i && flag != 0){
        return 1;
    }
    else{
        return 0;
    }

}


int main(){
    char strings[10][50] = {"hello","naman","yash","ajay","pradhan","radar", "level","madam","abccba","xyzyx"};
    int i,j;

    //to check palindroms in list
    printf("Palindrom strings in list are:\n");
    for(i=0;i<10;i++){
        if(Palindrom(strings[i])){
            printf("%s \n",strings[i]);
        }
    }

   return 0;

}