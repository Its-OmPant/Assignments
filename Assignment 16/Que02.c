// 2. Write a program to calculate the product of two matrices each of order 3x3. 

#include<stdio.h>
int main(){
    int a[3][3], b[3][3], product[3][3],i,j,k;

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

    //product of matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            product[i][j] = 0;
            for(k=0;k<3;k++){
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }   
    printf("Matrix Multiplication is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
  

    return 0; 
}