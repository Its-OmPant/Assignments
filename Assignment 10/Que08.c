// 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS) 

#include<stdio.h>
long long int factorial(long long int n){
    long long int temp = 1;
    for(long long int i=n;i>=1;i--){
        temp = temp * i;
    }
    return temp;
}
long long int permutations(long long int n, long long int r){
    long long int factN,factDiff,combi;

    factN = factorial(n);
    factDiff = factorial(n-r);

    combi = factN / factDiff;
    return combi;


}
int main(){
    long long int n,r,result;
    printf("Enter No.of items and no. of Selected items\n");
    scanf("%lld%lld",&n,&r);

    result = permutations(n ,r);

    printf("%lld Arrangments/Permutations Possible\n",result);
    
}