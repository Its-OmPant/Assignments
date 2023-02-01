// 1. Define a function to check whether a given number is a Prime number or not. 

#include<iostream>
using namespace std;
int checkPrime(int num){
    int i,flag=1;
    for(i=2;i<=num/2;i++){
            if(num%i == 0){
                flag = 0;
                return 0;
            }
    }
    if(flag==1){
        return 1;
    }
}
int main(){
    int num,i,result;
    cout<<"Enter a number"<<endl;
    cin>>num;

    result = checkPrime(num);
    

    if(result){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a Prime Number"<<endl;
    }
    return 0;
}