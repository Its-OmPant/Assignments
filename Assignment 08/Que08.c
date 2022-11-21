//    1   
//   121
//  12321
// 1234321

#include<stdio.h>
int main(){
    int i,j,x;

    for(i=0;i<4;i++){
        for(j=0,x=1;j<=3+i;j++){
            if(j>=3-i){
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