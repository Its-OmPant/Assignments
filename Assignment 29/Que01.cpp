// 1.Write a C++ program to convert Primitive type to Complex type.  Example - 
//  int main() 
// { 
//  Complex c1; 
//  Int x=5; 
//  c1=x; 
//  return 0; 
// } 

#include<iostream>
using namespace std;

class Complex{
    public:
        int x;

        Complex(){
            
        }

        Complex(int x){
            this->x = x;
        }
        void display(){
            cout<<x;
        }
};

int main(){
    Complex c1; 
    int x=5; 
    c1=x; 
    c1.display();
    return 0;
}
