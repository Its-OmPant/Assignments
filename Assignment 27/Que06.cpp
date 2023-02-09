// 6. Create a class CString to represent a string.  
//  a) Overload the + operator to concatenate two strings.  b) == to compare 2 strings. 

#include<iostream>
#include<cstring>
using namespace std;

class CString{
    char str[50] = "";

    public:
        void input(){
            cout<<"Enter a string"<<endl;
            cin.getline(str,50);
        }
        void print(){
            cout<<str<<endl;
        }
        CString operator+(CString s){
            CString x;
            strcpy(x.str,str);
            strcat(x.str,s.str);
            return x;
           
        }
        bool operator==(CString s){
            if((strcmp(str, s.str)) == 0){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    CString str1,str2,str3;

    str1.input();
    str2.input();
    cout<<"Strings are.."<<endl;
    str1.print();
    str2.print();

    str3 = str1 + str2;
    str3.print();

    if(str1 == str2){
        cout<<"Strings are Same"<<endl;
    }
    else{
        cout<<"Strings are Different"<<endl;
    }
    return 0;
}