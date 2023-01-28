// 1.	Define a function to input variable length string and store it in an array without memory wastage. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int length,i;
    char *p;
    printf("Enter length of string\n");
    scanf("%d",&length);

    p = (char *)calloc(length,sizeof(char));

    printf("Enter the string\n");
    for(i=0;i<length;i++){
        scanf("%c",p+i);
    }

    printf("String Entered...\n");
    for(i=0;i<length;i++){
        printf("%c", *(p+i));
    }

    free(p);
    return 0;

}