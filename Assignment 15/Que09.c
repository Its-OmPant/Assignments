// 9. Write a function in C to merge two arrays of the same size sorted in descending order. 

#include<stdio.h>
void mergeArray(int a[], int b[], int length){
    int res[2*length],i,j,k=0;

    //Copy a[] elements in res[]
    for(i=0;i<length;i++){
        res[k] = a[i];
        k++;
    }

    //Copy b[] elements in res[]
    for(i=0;i<length;i++){
        res[k] = b[i];
        k++;
    }

    //sorting in decreasing order
    int temp;
    for(i=0;i<2*length;i++){
        for(j=i;j<2*length;j++){
            if(res[i] < res[j]){
                temp = res[i];
                res[i] = res[j];
                res[j] = temp;
            }

        }
    }

    
    //printing Merged array
    for(int x=0;x <length*2;x++){
        printf("%d ",res[x]);
    }
}

int main(){
    int length;
    printf("Enter length of array's\n");
    scanf("%d",&length);

    //Array Definition
    int a[length], b[length];
    
    printf("Enter 1st array Elements\n");
    for(int i=0;i<length;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter 2nd array Elements\n");
    for(int i=0;i<length;i++){
        scanf("%d",&b[i]);
    }
    
    mergeArray(a , b, length);
    return 0;
}