// 10. Write a program in C to find the row with maximum number of 1s.

#include<stdio.h>
int main(){
    int i,j,r,c;
    printf("Enter Dimentions of Matrix (R, C)\n");
    scanf("%d%d",&r,&c);

    int matrix[r][c],temp=0;
    int a[r];
    for(i=0;i<r;i++){
        a[i] = 0;
    }


    printf("Enter Matrix Element (Row Wise)\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(matrix[i][j] == 1){
                a[i]++;
            }
        }
    }
    int count = 0,index=0;
    for(i=0;i<r;i++){
       if(a[i]>count){
        count = a[i];
        index = i;
       }
    }

    printf("Row %d has Maximum no of 1 (%d)",index,count);
   
    return 0; 
}