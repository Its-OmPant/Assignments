// 3. Define a function to calculate x raised to the power y. 

#include<iostream>
#include<cmath>
using namespace std;

void power(int x,int y){
    cout<<x<<" raised to the power "<<y<<" is: "<<pow(x,y);
}
int main(){
    int x,y;
    cout<<"Enter Base value: ";
    cin>>x;
    cout<<"Enter Exponent Value: ";
    cin>>y;
    power(x,y);
    return 0;
}