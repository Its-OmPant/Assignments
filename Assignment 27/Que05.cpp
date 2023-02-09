// 5. Consider following class Numbers 
// class Numbers 
// {
//  int x,y,z; 
//  public: 
//  // methods 
// }; 
// Overload the operator unary minus (-) to negate the numbers. 

#include<iostream>
using namespace std;

class Numbers{
    int x,y,z;
    public:
        void setValues(){
            int a,b,c;
            cout<<"Enter 1st Value: ";
            cin>>a;
            cout<<"Enter 2nd Value: ";
            cin>>b;
            cout<<"Enter 3rd Value: ";
            cin>>c;

            x = a;
            y = b;
            z = c;
        }
        void printValues(){
            cout<<x<<" "<<y<<" "<<z<<endl;
        }

        void operator-(){
            x = -x;
            y = -y;
            z = -z;
        }
};

int main(){
    Numbers n;
    n.setValues();
    cout<<"Values Before unary minus: ";
    n.printValues();

    -n;
    cout<<"Values after unary minus: ";
    n.printValues();
    return 0;
}