// 7. Write a function using the default argument that is able to add 2 or 3 numbers. 
#include<iostream>
using namespace std;

int add(int x,int y,int z=0){
    return x+y+z;
}
int main(){

    cout<<"Addition: (Two Numbers) 2,3: "<<add(2,3)<<endl;
    cout<<"Addition: (Three Numbers) 2,5,7: "<<add(2,5,7)<<endl;
    return 0;
}