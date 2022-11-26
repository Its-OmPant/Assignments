// 8. Write a recursive function to print binary of a given decimal number 

#include<stdio.h>
void decToBin(int num){
    if (num==0 ||num == 1){
        printf("%d",num);
        return;
    }
    decToBin(num/2);
    printf("%d",num%2);
}
int main(){
    int num;
    printf("Enter a Decimal number\n");
    scanf("%d",&num);
    decToBin(num);
    return 0;
}