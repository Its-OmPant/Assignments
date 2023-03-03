// 8. Write a C++ program to accept a password and throw an exception if the password has  less than 6 characters or does not contain a digit or does not contain any special  character or does not contain any capital letter. 

#include<iostream>
using namespace std;

bool isValidPassword(string password){
    int len= 0;
    bool isDigit , isChar , isCap;

    for(int i=0; password[i] != '\0';i++){
        len++;
        if((password[i] >=32 && password[i] <=47) ||(password[i] >=58 && password[i] <=64) || (password[i] >=91 && password[i] <=96) || password[i] >=123 && password[i] <=126 ){
            isChar = true;
        }

        if(password[i] >=48 && password[i] <=57)
            isDigit = true;

        if(password[i] >=65 && password[i] <=90)
            isCap = true;
    }

    if(len > 6 && isDigit && isChar && isCap){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string password;
    cout<<"Enter Password: "<<endl;
    cin>>password;

    try{
        if(isValidPassword(password))
            cout<<"Password Accepted"<<endl;
        else{
            throw 0;
        }
    }catch(int e)
    {
        cout<<"invalid Password"<<endl;
    }
    return 0;
}