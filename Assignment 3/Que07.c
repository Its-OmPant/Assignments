// 7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots 


#include<stdio.h>
int main(){
    // considering quadratic eqn of form ax^2 + bx + c 
    int a,b,c,D;
    printf("considering quadratic eqn of form ax^2 + bx + c \n");
    printf("Enter values of a, b and c \n");
    scanf("%d%d%d",&a,&b,&c);

    D = b*b - (4*a*c);
    if(D>0){
        printf("Roots are : REAL and DISTINCT \n");
    }
    else if(D<0){
        printf("Roots are : IMAGINARY \n");
    }
    else{
        printf("Roots are : REAL AND EQUAL \n");
    }


    return 0;
}