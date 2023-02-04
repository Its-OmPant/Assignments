// 8.	Define a class Rectangle and define an instance member function to find the area of the  rectangle. 
#include<iostream>
using namespace std;

class Rectangle{
    int length,bredth;
    public:
        int area(){
            return length*bredth;
        }
        void setLength(int x){
            length = x;
        }
        void setBredth(int y){
            bredth = y;
        }
};

int main(){
    Rectangle r;
    int len,bred;
    cout<<"Enter Length and Bredth of rectangle:  ";
    cin>>len>>bred;

    r.setLength(len);
    r.setBredth(bred);

    cout<<"Area of rectangle: "<<r.area()<<endl;
    return 0;    
}