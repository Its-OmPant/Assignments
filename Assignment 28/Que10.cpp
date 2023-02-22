// 10. Create a Distance class having 2 instance variable feet and inches. Also create default  constructor and parameterized constructor takes 2 variables . Now overload () function call  operator that takes 3 arguments a , b and c and set feet = a + c + 5 and inches = a+b + 15. 

#include<iostream>
using namespace std;

class Distance{
    int feet,inches;
    public:
        Distance(){}

        Distance(int ft, int inch){
            feet = ft;
            inches = inch;
        }

        void display(){
            cout<<"Distance: "<<feet<<" Feet "<<inches<<" Inches "<<endl;
        }

        void operator ()(int a,int b, int c ){
            feet = a + c +5;
            inches = a+b+15;
        }
};

int main(){
    Distance d1 = Distance(5,3);
    Distance d2;

    d1.display();

    d2(5,2,3);

    d2.display();

    return 0;
}