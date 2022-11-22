// 3. Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include<stdio.h>
int main(){
    int wNum;

    printf("Enter Week Number ( considering monday - 1.. )\n");
    scanf("%d",&wNum);

    switch(wNum){
        case 1:
            printf("Happy Monday !!\n");
            break;
        case 2:
            printf("Happy Tuesday !!\n");
            break;
        case 3:
            printf("Happy Wednesday !!\n");
            break;
        case 4:
            printf("Happy Thursday !!\n");
            break;
        case 5:
            printf("Happy Friday !!\n");
            break;
        case 6:
            printf("Happy Saturday !!\n");
            break;
        case 7:
            printf("Happy Sunday !!\n");
            break;
        default:
            printf("Enter a valid Day Number !! \n");
            break;
        
    }

    return 0;
}