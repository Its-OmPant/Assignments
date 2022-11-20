// 6. Write a program to print all Prime numbers under 100 


#include<stdio.h>
int main(){
    int i,j,flag=0;

    for(i=1;i<100;i++){
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