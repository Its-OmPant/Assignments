// 9. Write functions using function overloading to find a maximum of two numbers and both  the numbers can be integer or real. 

#include<iostream>
using namespace std;

int max(int n1,int n2){
    return n1>n2?n1:n2;
}

float max(int n1,float n2){
    return n1>n2?n1:n2;
}

float max(float n1,int n2){
    return n1>n2?n1:n2;
}

float max(float n1,float n2){
    return n1>n2?n1:n2;
}

int main(){
    float n1,n2;

    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;

    cout<<"Maximum of two is: "<<max(n1,n2)<<endl;
    return 0;
}