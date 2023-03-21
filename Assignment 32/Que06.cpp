// 6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your choice. 

#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout<<"Default Consturctor of Class-A is called"<<endl;
        }
};

class B:public A
{
    public:
        B():A(){
            cout<<"Default Consturctor of Class-B is called"<<endl;
        }
};

class C:public B{
    public:
    C():B(){
        cout<<"Default Consturctor of Class-C is called"<<endl;
    }
};

int main(){
    C c;
    return 0;
}