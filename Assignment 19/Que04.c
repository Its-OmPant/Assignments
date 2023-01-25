// 4. Write a program to search a string in the list of strings. 
#include<stdio.h>
#include<string.h>

int main(){
    int flag = 0;
    char strings[5][25] = {"akshay","Satyam","Vijayraj","robert","andrew"};
    char serachStr[25];

    printf("Enter string to search\n");
    gets(serachStr);

    for(int i=0; i<5;i++){
        if(strcmp(serachStr,strings[i]) == 0){
            flag = 1;
        }
    }
    if(flag){
        printf("String Found in List\n");
    }else{
        printf("String not Found\n");
    }
    
    return 0;
}