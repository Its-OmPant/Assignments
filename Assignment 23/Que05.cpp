// 5. Write a C++ program to calculate the volume of a cuboid. 

#include<iostream>
using namespace std;

int main(){
    float length,width,height,area;
    cout<<"Enter Length: ";
    cin>>length;
    cout<<"Enter Width: ";
    cin>>width;
    cout<<"Enter Height: ";
    cin>>height;

    area = length * width * height;

    cout<<"Area of cuboid: "<<area<<endl;
    return 0;
}