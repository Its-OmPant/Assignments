// 4. Write a C++ program to accept an email address and throw an exception if it does not  contain @ symbol. 
#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter Email: ";
    cin>>s;

    int length = s.length();
    int flag = 0;

    for(int i = 0; i<length;i++){
        if(s[i] == '@')
            flag = 1;
    }

    try{
        if(flag!=1)
            throw "Not a valid Email..";
        else 
            cout<<"Email Accepted"<<endl;
    }catch(char const * s){
        cout<<s<<endl;
    }
    return 0;
}