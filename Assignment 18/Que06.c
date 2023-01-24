// 6. Write a function to check whether a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit) 

#include<stdio.h>
#include<string.h>

int AlphaNumeric(char string[]){
  int a = 0,d=0;
    for(int i=0;string[i] != '\0'; i++){
        if((string[i]>=65 && string[i]<=90) || (string[i]>=97 && string[i]<=122)){
            a++;
        }
        else if (string[i]>=48 && string[i]<=57){
            d++;
        }
    }
    if(a !=0 && d != 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char string[100];

    printf("Enter a string\n");
    fgets(string,100,stdin);
    string[strlen(string)-1] = '\0';

    if(AlphaNumeric(string)){
        printf("String is Alphanumeric\n");
    }
    else{
        printf("Not an Alhpanumeric string\n");
    }
    return 0;

}