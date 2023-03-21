// 8. Write a C++ program to find the factorial of a number using copy constructor 

#include<iostream>
using namespace std;

class Factorial{
    public:
    int fact = 1;
    Factorial(int x){
        for(int i=1; i<=x;i++){
            fact *= i;
        }

    }
    void display(){
        cout<<"Factorial : "<<fact<<endl;
    }
};

int main(){
    Factorial f(5);
    f.display();
    return 0;
}