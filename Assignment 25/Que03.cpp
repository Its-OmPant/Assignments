// 3.	Define a class Factorial and define an instance member function to find the Factorial of a  number using class. 
#include<iostream>
using namespace std;

class Factorial{
    public:
        int factorial(int num){
            int i,fact=1;
            for(i =1;i<=num;i++)
                fact *= i;
            return fact;
        }
};

int main(){
    Factorial f;
    int x;
    cout<<"Enter a number to find factorial: ";
    cin>>x;
    cout<<"Factorial of "<<x<<" : "<<f.factorial(x)<<endl;
    return 0;    
}