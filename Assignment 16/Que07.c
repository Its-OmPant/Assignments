// 7. Write a program in C to print or display the lower triangular of a given matrix. 
#include<stdio.h>
int main(){
    int i,j,r,c;
    printf("Enter Dimentions of Matrix (R, C)\n");
    scanf("%d%d",&r,&c);

    int matrix[r][c],lowerTringular[r][c],sum=0;

    printf("Enter Matrix Element (Row Wise)\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(j< i){
                lowerTringular[i][j] = 0;
            }
            else{
                lowerTringular[i][j] = matrix[i][j];
            }
        }
    }   
   printf("The lowertriangular Matrix is: %d \n",sum);
   for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",lowerTringular[i][j]);
        }
        printf("\n");
    }
    return 0; 
}