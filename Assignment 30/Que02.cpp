// 2. Write a C++ program to demonstrate try, throw and catch statements. 

#include<iostream>
using namespace std;

int main(){
    float x,y,z;
    z = 0;
    cout<<"Enter Two Values"<<endl;
    cin>>x>>y;

    try{
        if(y == 0)
            throw y;
        z = x/y;
    }catch(float e){
        cout<<"Can't Divide With "<<e<<endl;
    }
    catch(...){
        cout<<"Other Exceptions";
    }

    cout<<"Result of "<<x<<"/"<<y<<" is: "<<z<<endl;

    return 0;
}