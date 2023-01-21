// 1. Write a program to calculate the sum of two matrices each of order 3x3. 
#include<stdio.h>
int main(){
    int a[3][3], b[3][3], sum[3][3],i,j;

    printf("Enter 1st Matrix Element (Row Wise)\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter 2nd Matrix Element (Row Wise)\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //sum of matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }   

    printf("Sum of matrix Element\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }  

    return 0; 
}