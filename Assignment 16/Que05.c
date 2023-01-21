// 5. Write a program in C to find the sum of left diagonals of a matrix.

#include<stdio.h>
int main(){
    int i,j;
    int matrix[3][3],sum=0;

    printf("Enter 1st Matrix Element (Row Wise)\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        if( i == j){
            sum+= matrix[i][j];
        } 
        }
    }   
   printf("The Sum is: %d \n",sum);
  

    return 0; 
}