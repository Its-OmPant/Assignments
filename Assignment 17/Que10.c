// 10. Write a program in C to Find the Frequency of Characters
#include<stdio.h>
#include<string.h>

int main(){
    char string[20] , temp[200]={0};

    printf("Enter a String\n");
    fgets(string,20,stdin);
    string[strlen(string)-1] = '\0';

    for(int i=0; string[i]!=0;i++){
        temp[string[i]]++;
    }

    for(int j=0;j<=122;j++){
        if(temp[j] != 0){
            printf("%c - %d Times\n",j,temp[j]);
        }
    }
    return 0;
}