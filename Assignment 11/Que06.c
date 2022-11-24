// 6. Write a function to print all Prime numbers between two given numbers. (TSRN) 

#include<stdio.h>
int primeBetween(int n1 ,int n2){
    int i,j;
    for(i=n1;i<=n2;i++){
        for(j=2;j<i;j++){
            if(i%j == 0 && i!=2){
                break;
            }
        }
        if(j == i ){
            printf("%d ",i);
        }
    }
}
int main(){
    int num1,num2,result;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);

    primeBetween(num1 ,num2);
    
    return 0;
}