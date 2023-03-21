// 1. Create a class FLOAT that contains one float data member. Overload all the four arithmetic operators so that they can operate on the objects of FLOAT. 

#include<iostream>
using namespace std;


class FLOAT{
    public:
        float value;

    FLOAT(){

    }

    FLOAT(float x){
        value = x;
    }

    //Overloading Extraction Operator
    friend ostream & operator<<(ostream &c, FLOAT f){
        cout<<f.value;
    }

    //Overloading + operator
    FLOAT operator+(FLOAT temp){
        return this->value + temp.value;
    }

    //Overloading - operator
    FLOAT operator-(FLOAT temp){
        return this->value - temp.value;
    }

    //Overloading * operator
    FLOAT operator*(FLOAT temp){
        return this->value * temp.value;
    }

    //Overloading / operator
    FLOAT operator/(FLOAT temp){
        return this->value / temp.value;
    }




};
int main(){
    FLOAT f1(5.5), f2(3.2),f3(1.1);

    FLOAT sum,diff,mul,div;

    sum = f1 + f2 + f3;
    cout<<"Sum is            : "<<sum<<endl;

    diff = f1 - f2 ;
    cout<<"Difference is     : "<<diff<<endl;

    mul = f1 * f3;
    cout<<"Multiplication is : "<<mul<<endl;

    div = f1 / f3;
    cout<<"Divison is        : "<<div<<endl;
    
    return 0;
}
