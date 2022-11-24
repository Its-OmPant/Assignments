// 4. Write a function to find the next prime number of a given number. (TSRS) 

#include<stdio.h>
int nextPrime(int n){
    int x=0;
    for(int i=n+1;i>0;i++){
        for(int j=2;j<i;j++){
            if(i%j == 0 && i!=2){
                x = 0;
                break;
            }
            else{
                x = 1;
            }
        }
        if(x || i==2 ){
            return i;
        }
    }
}
int main(){
    int num,result;
    printf("Enter a Prime number\n");
    scanf("%d",&num);

    result = nextPrime(num);
    printf("Next Prime no. of %d is %d\n",num,result);
    
    return 0;
}