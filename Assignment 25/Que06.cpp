// 6.	Define a class Square to find the square of a number and write a C++ program to Count  number of times a function is called. 

#include<iostream>
using namespace std;

class Square{
    public:
    int square(int n){
        return n*n;
    }
};

int main(){
    Square s;
    int x;
    cout<<"Enter a number to find square: ";
    cin>>x;

    cout<<"Square: "<<s.square(x)<<endl;
    return 0;
}