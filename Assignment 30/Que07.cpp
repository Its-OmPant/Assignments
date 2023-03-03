// 7. Write a C++ program to accept a username if the username has less than 6 characters  or does contain any digit or special symbol. 

#include<iostream>
using namespace std;
bool isValidUserName(string Uname){
    int len= 0;
    bool isDigit , isChar ;

    for(int i=0; Uname[i] != '\0';i++){
        len++;
        if((Uname[i] >=32 && Uname[i] <=47) ||(Uname[i] >=58 && Uname[i] <=64) || (Uname[i] >=91 && Uname[i] <=96) || Uname[i] >=123 && Uname[i] <=126 ){
            isChar = true;
        }

        if(Uname[i] >=48 && Uname[i] <=57)
            isDigit = true;
    }

    if(len == 6 && isDigit && isChar){
        return true;
    }
    else{
        return false;
    }
    
}
int main(){
    string username;
    cout<<"Enter Username: ";
    cin>>username;

    try{
        if(isValidUserName(username))
            cout<<"username accepted"<<endl;
        else
            throw 0;
    }catch(int n){
        cout<<"Invalid Username..."<<endl;
    }
    return 0;
}