// 1. Write a function to calculate the area of a circle. (TSRS) 

#include<stdio.h>

float areaOfcircle(float r){
    return 3.14*r*r;
}
int main(){
    float radius,area;
    printf("Enter radius of circle\n");
    scanf("%f",&radius);

    area = areaOfcircle(radius);
    printf("The Area of circle having radius %.2f is %.2f\n",radius,area);
    return 0;
}