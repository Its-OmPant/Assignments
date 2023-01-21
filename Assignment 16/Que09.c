// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix. 

#include<stdio.h>
int main(){
    int i,j,r,c;
    printf("Enter Dimentions of Matrix (R, C)\n");
    scanf("%d%d",&r,&c);

    int matrix[r][c],upperTringular[r][c],temp=0;

    printf("Enter Matrix Element (Row Wise)\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(matrix[i][j] == 0){
                temp++;
            }
        }
    }   

    if(temp > ((r*c)/2)){
        printf("Sparse Matrix\n");
    }
    else{
        printf("Dense Matrix\n");
    }
   
    return 0; 
}