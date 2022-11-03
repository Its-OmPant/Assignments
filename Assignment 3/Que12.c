// 12. Write a program to check whether a given alphabet is in uppercase or lowercase. 

#include<stdio.h>
int main(){
    char ch;
    printf("Enter a alphabet\n");
    scanf("%c",&ch);

    //Logic 1
    if(ch >= 'a' && ch<='z')
        printf("Lowercase Character\n");
    
    else if (ch>='A' && ch<='Z')
        printf("Uppercase Character\n");
    else
        printf("Enter a valid alphabet");
    
    //Logic 2
    // if(ch >= 97 && ch <= 122){
    //     printf("Lowercase Character\n");
    // }else if (ch>=65 && ch<=90)
    // {
    //     printf("Uppercase Character\n");
    // }
    // else{
    //     printf("Enter a valid alphabet");
    // }
    return 0;
    
}