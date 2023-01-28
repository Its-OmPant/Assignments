// 4. Write a C++ program to calculate the area of a circle 

#include<iostream>
using namespace std;

int main(){
    float radius,area;
    cout<<"Enter Radius of circle"<<endl;
    cin>>radius;

    area = 3.14 * radius *radius;
    cout<<"Area of Circle having radius : "<<radius<<" is : "<<area<<endl;
    return 0;
}