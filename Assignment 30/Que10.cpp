// 10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8  characters or does contain a digit or special symbol or space.


#include<iostream>
using namespace std;
bool isValidNickName(string NickName){
    int len= 0;
    bool isDigit , isChar,isSpace;

    for(int i=0; NickName[i] != '\0';i++){
        len++;
        if((NickName[i] >=32 && NickName[i] <=47) ||(NickName[i] >=58 && NickName[i] <=64) || (NickName[i] >=91 && NickName[i] <=96) || NickName[i] >=123 && NickName[i] <=126){
            isChar = true;
        }

        if(NickName[i] >=48 && NickName[i] <=57)
            isDigit = true;

        if(NickName[i] == 32)
            isSpace = true;
    }

    if(len > 8 || isDigit || isChar || isSpace){
        return false;
    }
    else{
        return true;
    }
    
}
int main(){
    string nickname;
    cout<<"Enter Nickname: ";
    getline(cin , nickname);

    try{
        if(isValidNickName(nickname))
            cout<<"nickname accepted"<<endl;
        else
            throw 0;
    }catch(int n){
        cout<<"Invalid Username..."<<endl;
    }
    return 0;
}