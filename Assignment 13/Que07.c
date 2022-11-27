// 7. Write a recursive function to calculate HCF of two numbers 
#include<stdio.h>
int hcf(int n, int m){
    if(m!=0)
        return hcf(m, n%m);
    else  
        return n;
}
int main(){
    int num1,num2,result;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);

    result = hcf(num1,num2);
    printf("HCF of %d and %d is: %d\n",num1,num2,result);
    return 0;
}