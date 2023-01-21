// 6. Write a program in C to find the sum of rows and columns of a Matrix. 

#include<stdio.h>
int main(){
    int i,j,r,c;
    printf("Enter Dimentions of Matrix (R, C)\n");
    scanf("%d%d",&r,&c);

    int matrix[r][c],sum=0;

    printf("Enter Matrix Element (Row Wise)\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum+= matrix[i][j];
        }
    }   
   printf("The Sum is: %d \n",sum);
  

    return 0; 
}