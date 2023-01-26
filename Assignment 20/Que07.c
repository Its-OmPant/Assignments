// 7. Write a program to count the number of vowels and consonants in a string using a pointer. 

#include<stdio.h>
#include<string.h>

void vowCon(char *string, int *vowel, int *con){
    int i;

    for(i=0; *(string+i) != '\0';i++){

        if( *(string+i) == 'a' || *(string+i) == 'A'){
            (*vowel)++;
        }
        else if( *(string+i) == 'e' || *(string+i) == 'E'){
            (*vowel)++;
        }
        else if( *(string+i) == 'i' || *(string+i) == 'I'){
            (*vowel)++;
        }
        else if( *(string+i) == 'o' || *(string+i) == 'O'){
            (*vowel)++;
        }
        else if( *(string+i) == 'u' || *(string+i) == 'U'){
            (*vowel)++;
        }
        else if( *(string+i) >=65 && *(string+i) <=90  || *(string+i) >=97 && *(string+i) <=122  ){
            (*con)++;
        }

    }
}

int main(){
    char string[50];
    int vowel=0,consonent=0;

    printf("Enter a string\n");
    fgets(string,50,stdin);
    string[strlen(string)-1] = '\0';

    //function to count the no.of vowel and consonents
    vowCon(string, &vowel, &consonent);


    printf("No.of Vowels %d\nNo.of Consonents %d\n",vowel,consonent);
    return 0;    
}