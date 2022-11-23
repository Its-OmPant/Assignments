// 4. Write a function to print first N natural numbers (TSRN) 

#include<stdio.h>
void naturalNum(int n){
    for(int i=1;i<=n;i++){
        printf("%d\t",i);
    }
}
int main(){
    int num;
    printf("Enter the value of n\n");
    scanf("%d",&num);

    naturalNum(num);
    return 0;
}
