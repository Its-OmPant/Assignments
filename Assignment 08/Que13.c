// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA 
// A           A

#include<stdio.h>
int main(){
    int i,j;
    char c;
    for(i=0;i<7;i++){
        for(j=0,c='A';j<13;j++){
            if(j<=6-i || j>=6+i){
                printf("%c",c);
                if(j>=6){
                    c--;
                }
                else{
                    c++;
                }
            }
            else{
                printf(" ");
                if(j>=6){
                    c--;
                }
                else{
                    c++;
                }
            }
        }
        printf("\n");
    }
    return 0;
}