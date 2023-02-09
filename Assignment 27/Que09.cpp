// 9. Consider the following class mystring 
  
// Class mystring 
// { 
//  char str [100]; 
//  Public: 
//  // methods 
// }; 
// Overload operator “!” to reverse the case of each alphabet in the string (Uppercase to  Lowercase and vice versa). 

#include<iostream>
#include<cstring>
using namespace std;

class mystring 
{ 
    char str[100]; 
    public: 
        void input(){
            cout<<"Enter a string: ";
            cin.getline(str, 100);
        }

        void print(){
            cout<<"String: "<<str;
        }

        mystring operator!(){
            mystring temp;
            strcpy(temp.str,str);

            for(int i=0; temp.str[i]!= '\0';i++){
                if(temp.str[i]>=65 && temp.str[i]<=90){
                    temp.str[i] += 32;
                }
                else if(temp.str[i]>=97 && temp.str[i]<= 122){
                    temp.str[i] -= 32;
                }
            }

            return temp;
        }
 
};

int main(){
    mystring str1, str2;

    str1.input();

    cout<<"Entered String:  "<<endl;
    str1.print();

    str2 = !str1;
    cout<<"Transformed String: "<<endl;
    str2.print();
    return 0;
}