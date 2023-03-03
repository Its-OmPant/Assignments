// 1.	Write a C++ program to demonstrate the use of try, catch block with the argument as an integer and string using multiple catch blocks. 

#include<iostream>
using namespace std;

void try_test(int num){
    string s = "String handling";

    try{
        if(num>0 && num<10)
            throw num;
        else{
            cout<<"It's Not a single digit number"<<endl;
        }
        throw s;
    }catch(int n){
        cout<<"You entered a single digit number "<<num;
    }
    catch(string s){
        cout<<s;
    }
}

int main(){
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;

    try_test(x);
    return 0;
}