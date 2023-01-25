// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user. 

#include<stdio.h>
#include<string.h>

int main(){
    int i,j,vowels=0;
    char cities[10][25];
    char temp[25];

    printf("Enter 10 city names\n");
    for(i=0; i<10;i++){
        gets(cities[i]);
    }

    //sorting the array

    for(i=0;i<9;i++){
        for(j=i;j<10;j++){
            if(strcmp(cities[i], cities[j]) >0){
                strcpy(temp,cities[i]);
                strcpy(cities[i],cities[j]);
                strcpy(cities[j],temp);
            }
        }
    }

    //printing sorted array

    printf("In Sorted Order:\n");
    for(i=0;i<9;i++){
        printf(" %s ",cities[i]);
    }
    
    return 0;
}