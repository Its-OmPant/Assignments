// 5.	Define a class ReverseNumber and define an instance member function to find Reverse  of a Number using class.  

#include<iostream>
using namespace std;

class ReverseNumber{
    public:
        int revNumber(int num){
            int n=0,t;
            while(num  != 0){
                t = num%10;
                n  = n*10 + t;
                num = num/10;
            }

            return n;
        }
};

int main(){
    ReverseNumber number;
    int n;
    cout<<"Enter a number to find reverse: ";
    cin>>n;
    cout<<"Reverse of "<<n<<" is : "<<number.revNumber(n);
    return 0;
}