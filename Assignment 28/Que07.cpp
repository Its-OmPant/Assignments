// 7. Create an Integer class and overload not operator for that class. 
#include<iostream>
using namespace std;

class Integer{
    int x;
    public:
    void setVal(int a){
        x = a;
    }
    void getVal(){
        cout<<x<<endl;
    }
    void operator!(){
        x *= -1;
    }
};

int main(){
    Integer a,b;
    a.setVal(5);
    b.setVal(-10);

    cout<<"Values Are: "<<endl; 
    a.getVal();
    b.getVal();

    !a;
    !b;
    cout<<"After negation values Are: "<<endl;
    a.getVal();
    b.getVal();
    return 0;
}