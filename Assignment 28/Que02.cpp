// 2. Define a class Complex with appropriate instance variables and member functions. One of the functions should be setData() to set the properties of the object. Make sure the names of formal arguments are the same as names of instance variables. 

#include<iostream>
using namespace std;

class Complex{
    int real, img;

    public:
    void setData(int real, int img){
        this->real = real;
        this->img = img;
    }
    void printData(){
        if(img>0){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
        else cout<<real<<" "<<img<<"i"<<endl;
    }
};

int main(){
    Complex c1,c2;
    c1.setData(5,3);
    c1.printData();

    c2.setData(8,-1);
    c2.printData();
    return 0;
}