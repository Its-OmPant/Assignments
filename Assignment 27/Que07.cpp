// 7. Define a C++ class fraction 
// class fraction 
// { 
//  long numerator; 
//  long denominator; 
//  Public: 
//  fraction (long n=0, long d=0); 
// } 
// Overload the following operators as member or friend: 
// a) Unary ++ (pre and post both) 
// b) Overload as friend functions: operators << and >>. Output-
// image.png

#include<iostream>
using namespace std;

class fraction 
{ 
    long numerator; 
    long denominator; 

        public: 
           fraction (long n=0, long d=0){
           }

            void operator++(void){
                ++numerator;
                ++denominator;
            }

            void operator++(int){
                numerator++;
                denominator++;
            }


           friend ostream& operator<<(ostream &o, fraction f){
            cout<<f.numerator<<"/"<<f.denominator;
            }

            friend istream& operator>>(istream &i, fraction &f){
                cout<<"Enter numerator: ";
                cin>>f.numerator;
                cout<<"Enter Denominator: ";
                cin>>f.denominator;
            }



};

int main(){
    fraction f1,f2;

    cout<<"Enter 1st Fraction: "<<endl;
    cin>>f1;
    cout<<"Enter 2nd Fraction: "<<endl;
    cin>>f2;

    cout<<"First Fraction: "<<endl<<f1<<endl<<"Second Fraction: "<<endl<<f2<<endl;

    cout<<"F1++ : " ;
    f1++;
    cout<<f1<<endl;
    cout<<"++F2 : ";
    ++f2;
    cout<<f2<<endl;
    return 0;
}