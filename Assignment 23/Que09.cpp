// 9. Write a C++ program to find the maximum of two numbers. 
#include<iostream>
using namespace std;

int main(){
    int num1,num2,max;
    cout<<"Enter 1st Number: ";
    cin>>num1;
    cout<<"Enter 2nd number: ";
    cin>>num2;
    max = (num1>num2)?num1:num2;

    cout<<"Maximum: "<<max<<endl;
    return 0;
}