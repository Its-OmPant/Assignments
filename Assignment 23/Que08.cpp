// 8. Write a C++ program to swap values of two int variables without using third variable 
#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter 1st Number: ";
    cin>>num1;
    cout<<"Enter 2nd number: ";
    cin>>num2;

    num1 = num1 + num2;
    num2 = num1-num2;
    num1 = num1-num2;

    cout<<"After swapping"<<endl;
    cout<<"Number 1: "<<num1<<endl<<"Number 2: "<<num2<<endl;
    return 0;
}