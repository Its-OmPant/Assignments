// 9. Write a C program to sort a string array in ascending order. 

#include<stdio.h>
#include<string.h>

int main(){
    int i,j;
    char string[][20] = {"prateek","prashant","vijay","aakash","suman"};
    char temp[20];

    for(i=0;i<4;i++){
        for(j=i;j<5;j++){
            if(strcmp(string[i],string[j])>0){
                strcpy(temp, string[i]);
                strcpy(string[i], string[j]);
                strcpy(string[j],temp);
            }
        }
    }

    printf("Sorted String array is\n");
    for(i=0;i<5;i++){
        printf("%s ",string[i]);
    }

    return 0;  
}