// 1. Write a program which takes the month number as an input and display number of days in that month. 

#include<stdio.h>
int main(){
    int mNum,days;

    printf("Enter Month Number ( considering Jan as 1 )\n");
    scanf("%d",&mNum);

    switch(mNum){
        case 1:
            days = 31; 
            printf("January : %d Days",days);
            break;
        
        case 2:
            days = 28; 
            printf("February : %d Days (29 in Leap Year)",days);
            break;
        
        case 3:
            days = 31; 
            printf("March : %d Days",days);
            break;
        
        case 4:
            days = 30; 
            printf("April : %d Days",days);
            break;
        
        case 5:
            days = 31; 
            printf("May : %d Days",days);
            break;
        
        case 6:
            days = 30; 
            printf("June : %d Days",days);
            break;
        
        case 7:
            days = 31; 
            printf("July : %d Days",days);
            break;
        
        case 8:
            days = 31; 
            printf("August : %d Days",days);
            break;
        
        case 9:
            days = 30; 
            printf("September : %d Days",days);
            break;
        
        case 10:
            days = 31; 
            printf("October : %d Days",days);
            break;
        
        case 11:
            days = 30; 
            printf("November : %d Days",days);
            break;
        
        case 12:
            days = 31; 
            printf("December : %d Days",days);
            break;
        default:
            printf("Enter a valid Month Number !! \n");
        
    }

    return 0;
}