// 3. Write a C++ program to add two complex numbers using operator overloaded by a friend  function. 

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

        friend Complex operator+(Complex,Complex);      
};

Complex operator+(Complex a,Complex b){
    Complex temp;
    temp.real = a.real + b.real;
    temp.img = a.img +  b.img;
    return temp;
}


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
    return 0;
}   