// 1.	Write a function to calculate LCM of two numbers. (TSRS)


#include<stdio.h>
int lcm(int n1,int n2){
    int max;
        max = (n1 > n2) ? n1 : n2;

    while(1){
        if((max % n1 == 0) && ( max % n2 == 0)){
            return max;
            break;
        }
        ++max;
    }


}
int main(){
    int num1,num2,result;
    printf("Enter two number to find LCM\n");
    scanf("%d%d",&num1,&num2);

    result = lcm(num1,num2);
    printf("LCM of %d and %d is: %d\n",num1,num2,result);
    return 0;
}

