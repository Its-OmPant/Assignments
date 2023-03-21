// 2. Define a class Rectangle and overload area function for different types of data type. 

#include<iostream>
using namespace std;
 

class Rectangle{
    public:
    float len, bred;

    Rectangle(int l, int b){
        len = l;
        bred = b;
    }
};

    void area(int l, int b){
        cout<<"Area : "<<l*b<<endl;
    }

    void area(int l, float b){
        cout<<"Area : "<<l*b<<endl;
    }

    void area(float l, int b){
        cout<<"Area : "<<l*b<<endl;
    }

    void area(float l, float b){
        cout<<"Area : "<<l*b<<endl;
    }

int main(){
 
    Rectangle r1(5,6), r2(10.2, 5), r3(5,3.1), r4(1.2,3.2);

    cout<<"Area of R1: ";
    area(r1.len, r1.bred);

    cout<<"Area of R2: ";
    area(r2.len, r2.bred);

    cout<<"Area of R3: ";
    area(r3.len, r3.bred);

    cout<<"Area of R4: ";
    area(r4.len, r4.bred);
    

    return 0;
}