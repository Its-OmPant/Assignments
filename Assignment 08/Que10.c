// 1234321
// 123 321
// 12   21
// 1     1
#include<stdio.h>
int main(){

    int i,j,x;

    for(i=0;i<4;i++){
        for(j=0,x=1;j<7;j++){
            if(j<=3-i || j>=3+i){
                printf("%d",x);
                if(j>=3){
                    x--;
                }
                else{
                    x++;
                }
            }
            else{
                printf(" ");
                if(j>=3){
                    x--;
                }
                else{
                    x++;
                }
            }
        }
        printf("\n");
    }
    return 0;
}