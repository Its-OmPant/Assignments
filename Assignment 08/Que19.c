//   *****    *****  
//  *******  ******* 
// ******************
// ***************** 
//  ***************  
//   *************   
//    ***********
//     *********
//      *******
//       *****
//        ***
//         *
#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<18;j++){
            if((j>=2-i && j<=6+i) || (j>=11-i && j<=15+i)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(i=0;i<11;i++){
        for(j=0;j<17;j++){
            if(j>=i && j<17-i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}