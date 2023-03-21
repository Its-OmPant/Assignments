// 9. Write a C++ program to calculate the area of triangle, rectangle and circle using constructor overloading. The program should be menu driven. 

#include<iostream>
using namespace std;

class Shape{
    public:
    int cirArea,recArea,triArea;
        Shape(int r){
            cirArea = 3.14*r*r;
        }
        Shape(int l, int b){
            recArea = l*b;
            triArea = 0.5*l*b;
        }     
};

int main(){
    int ch;
    cout<<"1 - Area of Circle"<<endl;
    cout<<"2 - Area of Rectangle"<<endl;
    cout<<"3 - Area of Triangle"<<endl;
    cout<<"Enter Your Choice: ";
    cin>>ch;

    switch (ch)
    {
        case 1:
            {int rad;
            cout<<"Enter Radius of Circle: ";
            cin>>rad;
            Shape s(rad);
            cout<<"Area : "<<s.cirArea<<endl;
            break;}

        case 2:
            {int l,b;
            cout<<"Enter length and Bredth of Rectangle: ";
            cin>>l>>b;
            Shape s2(l,b);
            cout<<"Area : "<<s2.recArea<<endl;
            break;
}
        case 3:
            {int bh,h;
            cout<<"Enter Base and height of Triangle: ";
            cin>>bh>>h;
            Shape s3(bh,h);
            cout<<"Area : "<<s3.triArea<<endl;
            break;
        }
        default:
            cout<<"Invalid Choice"<<endl;
            break;
        }

    return 0;
}