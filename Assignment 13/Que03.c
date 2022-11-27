// 3. Write a recursive function to calculate sum of first N even natural numbers 

#include<stdio.h>
int sumOfOddN(int n){
    if(n==0)
        return 0;
    return (2*(n-1)) + sumOfOddN(n-1);
}
int main(){

    int num,sum;
    printf("Enter a number\n");
    scanf("%d",&num);

    sum = sumOfOddN(num);
    printf("Sum of First %d Even natural numbers is: %d\n",num,sum);

}