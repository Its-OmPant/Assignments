// 7. C++ Program to illustrate the use of Constructors in single inheritance of your choice. 

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
int main(){
    B b;
    return 0;
}