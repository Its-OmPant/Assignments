// 9. Write a C++ program to accept gmail id only and throw an exception if the id does not  contain @ and gmail.com. 

#include<iostream>
#include<cstring>
using namespace std;

bool isContaingmail(string gmail){
    int pos = gmail.length() - 9;

    string s = gmail.substr(pos,9);
    string r = "gmail.com";
    if(s == r)
        return true;
    else  
        return false;
}

bool isValidGmail(string gmail){
    bool isat, isgmail;

    for(int i=0; gmail[i] != '\0';i++){
        if(gmail[i] == '@')
            isat = true;
    }

    isgmail = isContaingmail(gmail);

    if(isat && isgmail){
        return true;
    }
    else
        return false;

}

int main(){
    string gmail;
    cout<<"Enter your Gmail ID: ";
    cin>>gmail;

    try{
        if(isValidGmail(gmail)){
            cout<<"Gmail Accepted "<<endl;
        }
        else
            throw "Invalid Gmail Enterd..";
    }
    catch(const char *p){
        cout<<p<<endl;
    }

    return 0;
}