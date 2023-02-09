// 4. Create a class Time which contains: 
// - Hours 
// - Minutes 
// - Seconds 
// Write a C++ program using operator overloading for the following: 
// 1. == : To check whether two Times are the same or not.  
// 2. >> : To accept the time. 
// 3. << : To display the time. 
// Output - 
// image.png

#include<iostream>
using namespace std;

class Time{
    int hour,minute,second;
    public:
        friend ostream& operator<<(ostream &s, Time t){
            cout<<"Hours   : "<<t.hour<<endl;
            cout<<"Minutes : "<<t.minute<<endl;
            cout<<"Seconds : "<<t.second<<endl;
            return s;
        }

        friend istream& operator>>(istream &i, Time &t){
            cout<<"Enter Hours: ";
            cin>>t.hour;
            cout<<"Enter Minutes: ";
            cin>>t.minute;
            cout<<"Enter Seconds: ";
            cin>>t.second;
            return i;
        }

         bool operator==(Time x){
            if(hour == x.hour && minute == x.minute && second == x.second){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    Time a,b;
    cout<<"Enter First Time: "<<endl;
    cout<<"-----------------"<<endl;
    cin>>a;
    cout<<"First Time:"<<endl;
    cout<<a;

    cout<<"Enter Second Time: "<<endl;
    cout<<"-----------------"<<endl;
    cin>>b;
    cout<<"Second Time:"<<endl;
    cout<<b;

    if(a == b){
        cout<<"Times are same"<<endl;
    }
    else{
        cout<<"Times are Different"<<endl;
    }

    return 0;
}