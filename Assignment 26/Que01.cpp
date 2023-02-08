// 1. Define a class Complex to represent a complex number with instance variables a and b  to store real and imaginary parts. Also define following member functions 
// a. void setData(int,int) 
// b. void showData() 
// c. Complex add(Complex) 

#include<iostream>
using namespace std;

class Complex{
    int a,b;

    public:
        void setData(int x,int y){
            a = x;
            b = y;
        }
        void showData(){
            if(b>0)
                cout<<"Complex Number: "<<a<<" + "<<b<<"i";
            else    
                cout<<"Complex Number: "<<a<<" "<<b<<"i";
        }

        Complex add(Complex x){
            Complex temp;
            temp.a = a + x.a;
            temp.b = b + x.b;

            return temp;
        }

};

int main(){
    Complex c1,c2,c3;
    int a,b;
    
    cout<<"Enter real part of Complex 1: ";
    cin>>a;
    cout<<"Entre imaginary part of Complex 1: ";
    cin>>b;

    c1.setData(a,b);

    cout<<"Enter real part of Complex 2: ";
    cin>>a;
    cout<<"Entre imaginary part of Complex 2: ";
    cin>>b;


    c2.setData(a,b);

    c3 = c1.add(c2);

    cout<<"Addition of Complex Numbers: "<<endl;
    c3.showData();
    return 0;
}

