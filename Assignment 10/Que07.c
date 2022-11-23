// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS) 

#include<stdio.h>
long long int factorial(long long int n){
    long long int temp = 1;
    for(long long int i=n;i>=1;i--){
        temp = temp * i;
    }
    return temp;
}
long long int combinations(long long int n, long long int r){
    long long int factN,factR,factDiff,combi;

    factN = factorial(n);
    factR = factorial(r);
    factDiff = factorial(n-r);

    combi = factN / (factR * factDiff);
    return combi;


}
int main(){
    long long int n,r,result;
    printf("Enter No.of items and no. of Selected items\n");
    scanf("%lld%lld",&n,&r);

    result = combinations(n ,r);

    printf("%lld Combinations Possible\n",result);
    
}