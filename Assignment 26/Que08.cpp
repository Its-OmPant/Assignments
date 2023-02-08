// 8. Define a class Bank and define member functions to read principal , rate of interest and  year. Another member functions to calculate simple interest and display it. Initialise all details  using constructor. 

#include<iostream>
using namespace std;

class Bank{
    int principal,rate,year;

    public:
        int getPrincipal(){
            return principal;
        }
        int getRate(){
            return rate;
        }
        int getYear(){
            return year;
        }
        Bank(int p, int r, int t){
            principal = p;
            rate = r;
            year = t;
        }

        float SimpleInterese(){
            return (principal * rate * year) / 100;
        }
};

int main(){
    int p,r,t;
    cout<<"Enter Principal, Rate and Year of Interest: ";
    cin>>p>>r>>t;

    Bank x = Bank(p,r,t);

    cout<<"Principal : "<<x.getPrincipal()<<endl;
    cout<<"Rate : "<<x.getRate()<<endl;
    cout<<"Year : "<<x.getYear()<<endl;

    cout<<"Simple Interest: "<<x.SimpleInterese()<<endl;
    return 0;
}