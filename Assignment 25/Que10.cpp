// 10. Define a class Area and define instance member functions to find the area of the  different shapes like square, rectangle , circle etc.
#include<iostream>
using namespace std;

class Area{
    public:
        float areaOfCircle(float x){
            return (3.141 *x*x) ;
        }

        int areaOfSquare(int a){
            return a*a;
        }
        int areaOfrectangle(int p,int q){
            return p*q;
        }
};

int main(){
    Area a;
    int i=1;
    int choice,radius,side,length,bredth;
    

    while(i){
        cout<<endl;
        cout<<"Enter Your Choice: "<<endl<<"1. Calculate area of circle"<<endl<<"2. Calculate area of Square"<<endl<<"3. Calculate area of rectangle"<<endl<<"4. Exit.."<<endl;
        cin>>choice;
        fflush(stdin);

        switch(choice){
        case 1:
                cout<<"Enter radius of circle: ";
                cin>>radius;
                cout<<"Area: "<<a.areaOfCircle(radius)<<endl;
                break;
        case 2:
                cout<<"Enter a side of square: ";
                cin>>side;
                cout<<"Area: "<<a.areaOfSquare(side)<<endl;
                break;
        case 3:
                cout<<"Enter Length and bredth of rectangle : ";
                cin>>length>>bredth;
                cout<<"Area: "<<a.areaOfrectangle(length,bredth)<<endl;
                break;
        case 4:
                i = 0;
                break;
        default:
                cout<<"Enter a valid Choice"<<endl;
                break;
        }
    }
    

}