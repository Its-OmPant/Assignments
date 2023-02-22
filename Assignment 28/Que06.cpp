// 6. Create a complex class and overload assignment operator for that class. 
#include<iostream>
using namespace std;

class Complex{
    int real, img;
    public:
        void setData(int x, int y){
            real = x;
            img = y;
        }
        void printData(){
            if(img>0){
                cout<<real<<" + "<<img<<"i"<<endl;
            }
            else cout<<real<<" "<<img<<"i"<<endl;
        }
        Complex& operator=(Complex &x){
            if(this == &x){
                return x;
            }
            real = x.real;
            img  = x.img;
            return x;
        }
};

int main(){
    Complex c1,c2, c3;

    c1.setData(5,3);
    c1.printData();

    c3 = c2 = c1;

    c2.printData();
    c3.printData();
    return 0;
}