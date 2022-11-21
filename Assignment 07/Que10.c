// 10. Write a program to print all Armstrong numbers under 1000 


// WRONG

#include<stdio.h>
#include<math.h>

int main(){
    int temp,digits=0,result=0,i,number;
   

    for(i=1; i<=1000; i++){
        number = i;

        while(number!= 0){
            number /= 10;
            digits++;
        }

        number = i;

        while(number != 0){
        temp = number%10;
        number /= 10;
        result = result + pow(temp,digits);
        }

        if(result == i){
            printf("%d, ",i);
        }
        else{
            continue;
        }
    }

    return 0;   
}