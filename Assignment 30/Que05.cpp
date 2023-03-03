// 5. Write a C++ program to accept a mobile number and throw an exception if it does not contain 10 digits. 

#include<iostream>
using namespace std;
bool isValidPhone(string phoneNo){
    int len= 0;
    for(int i=0;phoneNo[i] != '\0';i++){
        len++;
    }
    if(len == 10)
        return true;
    else
        return false;
}
int main(){
    string phoneNo;
    cout<<"Enter a Phone Number : ";
    cin>>phoneNo;

    try{
        if(isValidPhone(phoneNo))
            cout<<"Number Accepted"<<endl;
        else
            throw "Not a Valid Phone number..";
    }catch(const char *s){
        cout<<s<<endl;
    }
    return 0;
}
