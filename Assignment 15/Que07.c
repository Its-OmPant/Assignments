// 7. Write a function in C to count a total number of duplicate elements in an array.(Means elements that occurs 2 times in an array) 

#include<stdio.h>
int countDuplicates(int a[],int length){
    int count = 0;
    for(int i=0;i<length-1;i++){
        if(a[i] == a[i+1] && a[i] != a[i-1])
            count +=1;
        
    }
    return count;
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

    printf("Duplicates in Array are: %d\n",countDuplicates(a,length));
    return 0;
}