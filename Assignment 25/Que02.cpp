// 2.	Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate  number of instance member variables and also define instance member functions to set  values for time and display values of time. 

#include<iostream>
using namespace std;

class Time{
    int hr,mt,sc;
    public:

    int getHour(){
        return hr;
    }
    int getMinute(){
        return mt;
    }
    int getSecond(){
        return sc;
    }

    void setHour(int a){
        if(a>=0 && a<=23){
            hr = a;
        }
        else
            cout<<"Enter valid Hour"<<endl;
    }
    void setMinute(int b){
        if(b>=0 && b <=59){
            mt = b;
        }
        else
            cout<<"Enter valid minutes"<<endl;
    }

    void setSecond(int c){
        if(c>=0 && c <=59){
            sc = c;
        }
        else
            cout<<"Enter valid seconds"<<endl;
    }
    int validTime(){
        if ((hr>=0 && hr<=23) && (mt>=0 && mt <=59) && (sc>=0 && sc <=59)){
            return 1;
        }
        return 0;
    }
};

int main(){
    Time t;
    int a,b,c;
    cout<<"Enter Time (hh mm ss) : ";
    cin>>a>>b>>c;

    t.setHour(a);
    t.setMinute(b);
    t.setSecond(c);

    if(t.validTime())
        cout<<"Time: "<<t.getHour()<<" hr "<<t.getMinute()<<" min "<<t.getSecond()<<" sec "<<endl;
    return 0;
}