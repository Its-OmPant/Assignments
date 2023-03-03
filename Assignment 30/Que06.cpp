// 6. Write a C++ program to accept area pincode and throw an exception if it does not  contain 6 digits. 

#include<iostream>
using namespace std;
bool isValidPin(string pin){
    int len= 0;
    for(int i=0; pin[i] != '\0';i++){
        len++;
    }
    if(len == 6)
        return true;
    else
        return false;
}
int main(){
    string pinCode;
    cout<<"Enter a Pin Code : ";
    cin>>pinCode;

    try{
        if(isValidPin(pinCode))
            cout<<"Pin Code Accepted"<<endl;
        else
            throw "Not a Valid PIN Code..";
    }catch(const char *s){
        cout<<s<<endl;
    }
    return 0;
}
