// 9. Program to Convert even number into its upper nearest odd number Switch Statement. 

#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number:\t");
    scanf("%d",&num);

    switch(num%2 == 0){
        case 1:
            num+=1;
            printf("upper nearest odd number is %d\n ",num);
            break;
        case 0:
            printf("Please Enter Even Number\n\n");
            break;
        default:
            printf("Please Enter valid Number\n\n");
            break;
    }
    return 0;
}