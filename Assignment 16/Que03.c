// 3. Write a program in C to find the transpose of a given matrix. 

#include<stdio.h>
int main(){
    int i,j,r,c;

    printf("Enter Matrix Dimensions R , C\n");
    scanf("%d %d", &r,&c);

    int matrix[r][c], transpose[r][c];

    printf("Enter 1st Matrix Element (Row Wise)\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    //Transpose of matrix
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            
                transpose[i][j] = matrix[j][i];
            
        }
    }   
    printf("Transpose Matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
  

    return 0; 
}