//    A   
//   ABA  
//  ABCBA
// ABCDCBA

#include<stdio.h>
int main(){
    int i,j;
    char x;
    for(i=0;i<4;i++){
        for(j=0,x='A';j<=3+i;j++){
            if(j>=3-i){
                printf("%c",x);
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