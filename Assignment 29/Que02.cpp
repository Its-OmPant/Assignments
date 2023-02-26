// 2. Write a C++ program to convert Complex type to Primitive type. 
//  Example - 
//  int main() 
// { 
//  Complex c1; 
//  c1.setData(3,4); 
//  int x; 
//  x=c1; 
//  return 0; 
// } 

#include<iostream>
using namespace std;

class Complex{
    public:
        int real,img;

        void setData(int x, int y){
            real = x;
            img = y;
        }
        
        operator int(){
            return real+img;
        }
};

int main(){
        Complex c1; 
        c1.setData(3,4); 
        int x; 
        x=c1; 
        cout<<x<<endl;
        return 0;
}