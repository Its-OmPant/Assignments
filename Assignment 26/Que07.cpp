// 7. Define a class Box and write a program to enter length, breadth and height and initialise  objects using constructor also define member functions to calculate volume of the box. 

#include<iostream>
using namespace std;

class Box{
    int length,breadth,height;

    public:
        Box(){}

        Box(int l, int b, int h){
            length = l;
            breadth = b;
            height = h;
        }

        int volume(){
            return length*breadth*height;
        }

};

int main(){
    int l,b,h;
    cout<<"Enter Length, Breadth and Height of box: ";
    cin>>l>>b>>h;

    Box box1 = Box(l,b,h);

    cout<<"Volume: "<<box1.volume()<<endl;
}