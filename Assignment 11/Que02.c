// 2. Write a function to calculate HCF of two numbers. (TSRS) 

#include<stdio.h>
int hcf(int num1,int num2){
    int least;
    least = (num1<num2) ? num1 : num2 ;

    while(least>0){
        if(num1% least==0 && num2%least==0){
            return least;
        }
        least--;
    }
    

}

int main(){
    int num1,num2,result;
    printf("Enter two number\n");
    scanf("%d%d",&num1,&num2);

    result = hcf(num1,num2);
    printf("HCF of %d and %d is: %d\n",num1,num2,result);
    return 0;
}
