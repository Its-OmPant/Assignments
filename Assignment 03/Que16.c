// 16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character. 

#include<stdio.h>
int main(){
    char ch;
    printf("Enter a alphabet\n");
    scanf("%c",&ch);
    
    if(ch >= 97 && ch <= 122){
        printf("Lowercase Character\n");
    }else if (ch>=65 && ch<=90)
    {
        printf("Uppercase Character\n");
    }
    else if (ch>=48 && ch<=57){
        printf("A Digit\n");
    }
    else{
        printf("A Special Character\n");
    }
    return 0;
    
}