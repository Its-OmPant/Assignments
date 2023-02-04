// 9.	Define a class Circle and define an instance member function to find the area of the  circle. 
#include<iostream>
using namespace std;

class Circle{
    public:
        float areaOfCircle(float x){
            return (3.141 *x*x) ;
        }
};

int main(){
    float radius;
    Circle c;

    cout<<"Enter radius of circle: ";
    cin>>radius;

    cout<<"Area of Circle: "<<c.areaOfCircle(radius)<<endl;
}