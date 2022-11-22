// 6. Program to check whether a year is a leap year or not. Using switch statement 

#include<stdio.h>
int main(){
    int year;

    printf("Enter a Year\n");
    scanf("%d",&year);

    switch(year%4==0){
        case 1:
            switch(year%100 == 0 ){
                case 1:
                switch(year%400 ==0){
                    case 1:
                        printf(" Leap Year\n");
                        break;
                    case 0:
                        printf("Not a leap Year");
                        break;
                }
                break;

                case 0:
                    printf("Leap Year\n");
            }
            break;

        case 0:
            printf("Not A Leap year\n");
            break;
    }
}