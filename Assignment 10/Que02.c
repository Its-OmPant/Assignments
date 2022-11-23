// 2. Write a function to calculate simple interest. (TSRS) 

#include<stdio.h>

int simpleInt(int p, int r, int t){
    int intrest;
    intrest = (p*r*t)/100;
    return intrest;
}

int main(){
    int p,r,t,si;
    printf("Enter Principle, rate and time \n");
    scanf("%d%d%d",&p,&r,&t);

    si = simpleInt(p,r,t);

    printf("Simple Interest is :%d\n",si);
    return 0;

}