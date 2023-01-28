// 4. Write a program to input and print text using dynamic memory allocation.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int size;
    printf("Enter no of characters\n");
    scanf("%d",&size);

    char *p = (char *)malloc(size*sizeof(char));

    printf("Enter Text...\n");
    fflush(stdin);
    fgets(p,size,stdin);
    p[strlen(p)-1] = '\0';

    printf("Entered Text...\n");
    printf("%s\n",p);

    free(p);
    return 0;
}