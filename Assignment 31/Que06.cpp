// 6. Write a C++ program to demonstrate how a common friend function can be used to exchange the private values of two classes. (Use call by reference method). 

#include<iostream>
using namespace std;
class B;

class A{
    private:
    int num1 = 10;

    public:
        friend void swap(A &x, B &y);

        void show(){
            cout<<"A : num1 = "<<num1<<endl;
        }

};

class B{
    private:    
    int num2 = 20;

    public:
        friend void swap(A &x, B &y);

        void show(){
            cout<<"B : num2 = "<<num2<<endl;
        }
};

void swap(A &x, B &y){
    int temp = x.num1;
    x.num1 = y.num2;
    y.num2 = temp;
}


int main(){
    A a;
    B b;
    a.show();
    b.show();

    cout<<endl;
    swap(a,b);

    a.show();
    b.show();
    return 0;

}