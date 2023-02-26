// 5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add  functions to support Invent1 to float and Invent1 to Invent2 type. 
// Example - 
// int main() 
// { 
//  Invent1 x(4,5); 
//  Invent2 y; 
//  float z; 
//  z = x; // Invent1 to float 
//  y = x; // Invent1 to Invent2 
//  return 0; 
// } 

#include<iostream>
using namespace std;

class Invent1{
    public:
    int x,y;
        Invent1(){}
        Invent1(int x, int y){
            this->x = x;
            this->y = y;
        }

        operator float(){
            return x + y;
        }

        void display(){
            cout<<"x: "<<x<<"y: "<<y<<endl;
        }
};

class Invent2{
    public:
        int p,q;

        Invent2(){}
        Invent2(Invent1 i){
          p = i.x;
          q = i.y;
        }

        void display(){
            cout<<"p: "<<p<<"p: "<<q<<endl;
        }

};

int main() 
{ 
    Invent1 x(4,5); 
    Invent2 y; 
    float z; 
    z = x; // Invent1 to float 
    y = x; // Invent1 to Invent2 

    x.display();
    y.display();
    cout<<"z: "<<z<<endl;
    return 0; 
} 