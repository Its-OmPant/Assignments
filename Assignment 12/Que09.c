// 9. Write a recursive function to print octal of a given decimal number 

#include<stdio.h>
void decToOct(int num){
    if (num==0 ||num == 1){
        printf("%d",num);
        return;
    }
    decToOct(num/8);
    printf("%d",num%8);
}
int main(){
    int num;
    printf("Enter a Decimal number\n");
    scanf("%d",&num);
    decToOct(num);
    return 0;
}