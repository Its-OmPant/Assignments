// 7. Write a program to print all Prime numbers between two given numbers 

#include<stdio.h>
int main(){
    int i,j,flag=0,n1,n2;

    printf("Enter the two numbers\n");
    scanf("%d%d",&n1,&n2);

    for(i=n1;i<=n2;i++){
        for(j=2; j<i;j++){ 
            if( i%j == 0 && i!= 2){
                flag = 0;
                break;
            }
            else{
                flag = 1;
            }
        }
        if(flag || i==2 ){
            printf("%d \t",i);
        }
    }
    return 0;
}