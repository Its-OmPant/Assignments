// 6. Define a function to swap data of two int variables using call by reference.

#include<iostream>
using namespace std;
void swap(int &a, int &b){  //Reference variables
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int x,y;
    cout<<"Enter two values: ";
    cin>>x>>y;

    cout<<"Before Swap X: " <<x<<" Y: "<< y << endl;
    swap(x,y);
    cout<<"After Swap X: " <<x<<" Y: "<< y << endl;

    return 0;
}