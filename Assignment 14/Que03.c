// 3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user. 

#include<stdio.h>
int main(){
    int arr[10],evenSum=0,oddSum=0;
    printf("\nEnter array Elements\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nArray Elements are --\n");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    
    for(int i=0;i<10;i++){
        if(arr[i]%2 ==0){
            evenSum += arr[i];
        }else{
            oddSum += arr[i];
        }
    }
    printf("\nSum of Even Array elements is: %d\n",evenSum);
    printf("\nSum of odd Array elements is: %d\n",oddSum);
    return 0;
    

}