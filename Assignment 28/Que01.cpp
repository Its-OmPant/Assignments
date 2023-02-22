// 1. Define a class Complex with appropriate instance variables and member functions.  Overload following operators 
// a. << insertion operator 
// b. >> extraction operator 

#include<iostream>
using namespace std;

class Complex{
    int real,img;

    public:

        friend ostream & operator<<(ostream &o, Complex c){
            if(c.img>0){
                cout<<"C.N - "<<c.real<<"+"<<c.img<<"i"<<endl;
            }else{
                cout<<"C.N - "<<c.real<<c.img<<"i"<<endl;
            }
            return o;
        }

        friend istream& operator>>(istream& i, Complex &x){
            cout<<"Enter Real Part: ";
            cin>>x.real;
            cout<<"Enter Imaginary Part: ";
            cin>>x.img;
            return i;
        }
};

int main(){
    Complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
}