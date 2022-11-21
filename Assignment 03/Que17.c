// 17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not. 

#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("Enter sides of the triangle\n");
    scanf("%d%d%d",&side1,&side2,&side3);

    if(side1 >= side2 + side3 || side2 >= side3 + side1 || side3 >= side1 +side2){
        printf("Triangle is valid\n");
    }
    else{
        printf("Invalid \n");
    }
    return 0;
}