// 2. Write a C++ program to add two numbers using single inheritance. Accept these two  numbers from the user in base class and display the sum of these two numbers in  derived class. 

#include<iostream>
using namespace std;

class Base{
    public: 
    int num1,num2;
        void setNum(){
            cout<<"Enter Two Numbers To Add: "<<endl;
            cin>>num1>>num2;
        }
};
class Derived: public Base{
    int sum;
    public:
        void Sum(){
            cout<<"sum: "<<num1+num2;
        }
};

int main(){
    Derived a;
    a.setNum();
    a.Sum();
    return 0;
}