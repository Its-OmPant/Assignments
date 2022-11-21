// 8. Write a program to find next Prime number of a given number 
#include<stdio.h>
int main(){
    int i,j,flag=0,n1;

    printf("Enter the number\n");
    scanf("%d",&n1);

    for(i= n1+1; i>0 ; i++){
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
            break;
        }
    }
    return 0;
}