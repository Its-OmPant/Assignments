// 1 Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance  member functions to set values of complex number and print values of complex number.

#include<iostream>
using namespace std;

class Complex
{
    int real;
    int imaginary;

    public:

        int getReal(){
            return real;
        }
        int getImg(){
            return imaginary;
        }
        void setReal(int n){
            real = n;
        }
        void setImg(int m){
            imaginary = m;
        }
};

int main(){
    Complex x;
    int a,b;

    cout<<"Enter Real and imaginary part of Complex number : ";
    cin>>a>>b;

    x.setReal(a);
    x.setImg(b);

    if(x.getImg()>0)
        cout<<"Complex number Entered: "<<x.getReal()<<"+"<<x.getImg()<<"i "<<endl;
    else
        cout<<"Complex number Entered: "<<x.getReal()<<""<<x.getImg()<<"i "<<endl;
    return 0;
}