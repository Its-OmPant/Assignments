// 6. Write a function in C to read n number of values in an array and display it in reverse order. 

#include<stdio.h>
void readAnDisplay(int a[], int length){
    printf("Enter %d elements\n",length);
    for(int i=0;i<length;i++){
        scanf("%d",&a[i]);
    }

    printf("Array Element In Reverse Order are\n");
    for(int i=length-1;i>=0;i--){
        printf("%d ",a[i]);
    }


}
int main(){
    int length;
    printf("Enter length of array\n");
    scanf("%d",&length);

    int a[length];

    readAnDisplay(a,length);
   
   return 0;
}