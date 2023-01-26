//  2. Write a function to swap strings of two char arrays of calling functions. 

#include<stdio.h>
#include<string.h>

void swapString(char *a, char *b){
    char temp[20];

    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
}

int main(){
    char str1[20],str2[20];

    char *p = str1;
    char *q = str2;

    printf("Enter First String\n");
    fgets(str1,20,stdin);
    str1[strlen(str1) -1] = '\0';

    printf("Enter Second String\n");
    fgets(str2,20,stdin);
    str2[strlen(str2) -1] = '\0';

    printf("Before Swap: String-1: %s\tString-2: %s\n",str1,str2);
    swapString(p,q);
    printf("After  Swap: String-1: %s\tString-2: %s\n",str1,str2);

    return 0;
}