// 3. Write a function to check whether a given number is Prime or not. (TSRS) 

#include<stdio.h>
int checkPrime(int n){
    int i,x=1;
    for(i=2;i<n;i++){
        if(n%i == 0 && n!=2){
            x = 0;
        }
    }
    return x;
}
int main(){
    int num,result;
    printf("Enter a number\n");
    scanf("%d",&num);

    result = checkPrime(num);
    if(result)
        printf("It's a Prime Number\n");
    else
        printf("It's not a Prime number\n");
    return 0;
}