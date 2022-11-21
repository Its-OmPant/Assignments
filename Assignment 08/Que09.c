// 1234321
//  12321
//   121
//    1

#include<stdio.h>
int main(){
    int i,j,x;
    for(i=0;i<4;i++){
        for(j=0,x=1;j<7;j++){
            if(j>=i && j<=6-i){
                printf("%d",x);
                if(j>=3){
                    x--;
                }else{
                    x++;
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}