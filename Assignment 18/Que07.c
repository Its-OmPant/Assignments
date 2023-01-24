// 7. Write a function to check whether a given string is palindrome or not. 

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
    char string[100];
    int x;

    printf("Enter a string\n");
    fgets(string,100,stdin);
    string[strlen(string)-1] = '\0';

    x = Palindrom(string);

    if(x != 0 )
        printf("Palindrom\n");
    else   
        printf("Not Palindrom\n");
    
    return 0;
}