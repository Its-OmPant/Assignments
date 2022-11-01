// 8. Write a program to check whether a given year is a leap year or not. 

#include<stdio.h>
int main(){
    int year;
    printf("Enter year\n");
    scanf("%d",&year);

    if(year%4 == 0){
        if(year%100 == 0){
            if(year%400 == 0){
                printf("Leap year\n");
            }
            else{
                printf("Not a Leap year");
            }
        }
        else{
            printf("Leap year\n");
        }
    }
    else{
        printf("Not a leap year\n");
    }
    return 0;
}