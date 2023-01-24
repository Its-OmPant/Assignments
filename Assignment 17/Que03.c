// 3. Write a program to count vowels in a given string 

#include<stdio.h>
int main(){
    char string[500];
    int temp=0;

    printf("Enter a string\n");
    gets(string);

    for(int i=0;string[i] != '\0';i++){
        if(string[i] == 'A' ||string[i] == 'a'){
            temp++;
        }
        else if(string[i] == 'E' ||string[i] == 'e'){
            temp++;
        }
        else if(string[i] == 'I' ||string[i] == 'i'){
            temp++;
        }
        else if(string[i] == 'O' ||string[i] == 'o'){
            temp++;
        }
        else if(string[i] == 'U' ||string[i] == 'u'){
            temp++;
        }
        
    }

    printf("No of Vowels : %d \n",temp);
    return 0;
}