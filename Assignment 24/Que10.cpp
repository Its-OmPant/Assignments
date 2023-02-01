// 10. Write functions using function overloading to add two numbers having different data types.

#include<iostream>
using namespace std;

int add(int n1,int n2){
    return n1+n2;
}
float add(float n1,int n2){
    return n1+n2;
}
float add(int n1,float n2){
    return n1+n2;
}
float add(float n1,float n2){
    return n1+n2;
}


int main(){
    float n1,n2;

    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;

    cout<<"Addition of two is: "<<add(n1,n2)<<endl;
    return 0;
}