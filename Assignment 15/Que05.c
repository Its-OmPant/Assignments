// 5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element. 


#include<stdio.h>
int adjacentDup(int a[],int length){
    for(int i=0;i<length-1;i++){
        if(a[i] == a[i+1])
            return a[i];
        
    }
    return 0;
}
int main(){
    int length,duplicate;
    printf("Enter length of array\n");
    scanf("%d",&length);

    int a[length];
    printf("Enter %d elements\n",length);
    for(int i=0;i<length;i++){
        scanf("%d",&a[i]);
    }
    duplicate = adjacentDup(a,length);

    if(duplicate != 0)
        printf("%d is adjacent Duplicate\n",duplicate);
    else
        printf("No Adjacent Duplicate Present\n");
    
    return 0;
}