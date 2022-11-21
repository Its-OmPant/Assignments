// 18. Write a program which takes the month number as an input and display number of days in that month.

#include<stdio.h>
int main(){
    int monthNum;
    printf("Enter month Number Considering JAN as 1 and cont..\n");
    scanf("%d",&monthNum);

    if(monthNum == 1 || monthNum == 3|| monthNum == 5 || monthNum == 7||monthNum ==  8  || monthNum == 10 ||monthNum == 12 ){
        printf("31 Days\n");
    }
    else if (monthNum == 2)
    {
        printf("28 Days\n");
    }
    else{
        printf("30 Days\n");
    }
    
    return 0;
}