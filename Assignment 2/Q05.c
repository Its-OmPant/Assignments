// 5. Write a program to input a three digit number and display the sum of the digits.
// 1st Method 
#include<stdio.h>
int main(){
    int num,sum=0,temp;
    printf("Enter a number\n");
    scanf("%d",&num);
    temp = num;

    sum += (temp%10);
    temp = temp/10;

    sum += (temp%10);
    temp = temp/10;

    sum += (temp%10);
    temp = temp/10;
    printf("Sum of the digits of Number: %d is: %d\n", num,sum);

    return 0;
}

// 2nd method============

// #include<stdio.h>
// int main(){
//     int num,n,s1,s2,s3, sum;
//     printf("Enter a number\n");
//     scanf("%d",&num);
//     n = num;
//     s1 = n%10;
//     n = n/10;
//     s2 = n%10;
//     n = n/10;
//     s3 = n%10;

//     sum = s1 + s2 + s3;
//     printf("Sum of the digits of Number: %d is: %d\n", num,sum);
    
//     return 0;
// }