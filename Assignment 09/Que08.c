// 8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement. 

#include<stdio.h>
int main(){

    int num,choice;
    printf("Enter Your Choice :\n1: Convert Positive -> Negative\n2: Convert Negative -> Positive\n\n");
    scanf("%d",&choice);
    

    switch (choice)
    {
    case 1:
        printf("Enter a Positive number\n");
        scanf("%d",&num);
        num *= -1;
        printf("Converted Number: %d\n",num);
        break;
    case 2:
        printf("Enter a Negative number\n");
        scanf("%d",&num);
        num *= -1;
        printf("Converted Number: %d\n",num);
        break;
    
    default:
        printf("Please Enter a Valid number\n");
        break;
    }
    return 0;
}