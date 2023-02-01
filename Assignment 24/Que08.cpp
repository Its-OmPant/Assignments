// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of  triangle 
#include<iostream>
using namespace std;

int area(float rad){
    return 3.14*rad*rad;
}
int area(float len,float wid){
    return len*wid;
}
int area(int base,int heigth){
    return (base*heigth)/2;
}
int main(){
    int rad,len,wid,base,heigth,choice;

    cout<<"Enter your Choice:\n 1: For area of Circle\n 2: For Area of rectangle\n 3: Area of triangle"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter radius of circle: ";
        cin>>rad;
        cout<<"Area is: "<<area(rad)<<endl;;
        break;
    case 2:
        cout<<"Enter Length of Rectangle: ";
        cin>>len;
        cout<<endl<<"Enter Bredth of Rectangle: ";
        cin>>wid;
        cout<<"Area is: "<<area(len,wid)<<endl;
        break;

    case 3:
        cout<<"Enter base of Triangle: ";
        cin>>base;
        cout<<endl<<"Enter height of Triangle: ";
        cin>>heigth;
        cout<<"Area is: "<<area(base,heigth)<<endl;
        break;
    
    default:
        cout<<"Enter a valid choice!!"<<endl;
        break;
    }

    return 0;

}