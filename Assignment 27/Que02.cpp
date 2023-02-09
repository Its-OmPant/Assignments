// 2. Write a C++ program to overload unary operators that is increment and decrement. 
//ans- Here i'm overloading ++ and -- operator for complex numbers

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

        void operator++(int){
            real++;
            img++;
        }

        void operator--(int){
           real--;
           img--;
        }
};


int main(){
    Complex c1;
    int x;
    c1.setvalues();

    cout<<"Complex number entered: "<<endl;
    c1.printValues();

    cout<<"Incrementing Complex number  :";
    c1++;
    c1.printValues();

    cout<<"Decrementing Complex number  :";
    c1--;
    c1.printValues();
    return 0;
}