// 1. Define a class Complex with appropriate instance variables and member functions.  Define following operators in the class: 
// a. + 
// b. - 
// c. * 
// d. == 

#include<iostream>
using namespace std;

class Complex{
    int real,img;

    public:
        void setvalues(){
            cout<<"Enter Real Part: ";
            cin>>real;
            cout<<"Enter Imaginary Part: ";
            cin>>img;

        }
        void printValues(){
            if(img<0){
                cout<<real<<img<<'i'<<endl;
            }else{
                cout<<real<<" + "<<img<<'i'<<endl;
            }
        }

        Complex operator+(Complex c){
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }

        Complex operator-(Complex c){
            Complex temp;
            temp.real = real - c.real;
            temp.img = img - c.img;
            return temp;
        }

        Complex operator*(Complex c){
            Complex temp;
            temp.real =((real * c.real ) - (img * c.img));
            temp.img = ((real * c.img) + (img * c.real));
            return temp;
        }

        int operator==(Complex c){
            if(real == c.real && img == c.img){
                return 1;
            }
            else{
                return 0;
            }
        }
        
};


int main(){
    Complex c1,c2,c3;
    int x;
    c1.setvalues();
    c2.setvalues();

    cout<<"Two Complex numbers are: "<<endl;
    c1.printValues();
    c2.printValues();

    c3 = c1 + c2;

    cout<<"Addition:"<<endl;
    c3.printValues();

    cout<<"Substraction:"<<endl;
    c3 = c1 - c2;
    c3.printValues();

    cout<<"Multiplication:"<<endl;
    c3 = c1 * c2;
    c3.printValues();

    cout<<"Are Entered Complex Numbers Equal: ";
    x = c1==c2;
    if(x)
        cout<<" YES ";
    else
        cout<<" NO ";
    return 0;
}   