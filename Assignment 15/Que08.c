// 8. Write a function in C to print all unique elements in an array. 

#include<stdio.h>
void PrintUnique(int a[], int length){
    int i,j,flag ;
    for(i = 0;i<length;i++){
        for(j=1,flag=0;j<length;j++){
            if(a[i] == a[j] && j != i){
                flag = 1;
                break;
            }
        }
        if(flag != 1){
            printf("%d ",a[i]);
        }
    }
}
int main(){
    int length;
    printf("Enter length of array\n");
    scanf("%d",&length);

    int a[length];
    printf("Enter %d elements\n",length);
    for(int i=0;i<length;i++){
        scanf("%d",&a[i]);
    }
    PrintUnique(a,length);
    return 0;
    
}