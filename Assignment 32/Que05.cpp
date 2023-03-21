// 5. Define a class A having multiple constructors. Define another class B derived from class  A. Create derived class constructors and show use of constructor in this single  inheritance. 
// 5. Define a class A having multiple constructors. Define another class B derived from class A. Create derived class constructors and show use of constructor in this single  inheritance. 

#include<iostream>
using namespace std;
 
class A{
    int x;
    public:
        A(){
            cout<<"Default Consturctor of Class-A is called"<<endl;
        }
        A(int a){
            x = a;
            cout<<"Parametarized constructor Of Class-A is called"<<endl;
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
    
    A a, a2(5);
    B b;

return 0;
}