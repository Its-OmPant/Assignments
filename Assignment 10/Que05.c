// 5. Write a function to print first N odd natural numbers. (TSRN) 

#include<stdio.h>
void oddNaturalNum(int n){
    for(int i=1;i<=n;i++){
        printf("%d\t",2*i-1);
    }
}
int main(){
    int num;
    printf("Enter the value of n\n");
    scanf("%d",&num);

    oddNaturalNum(num);
    return 0;
}