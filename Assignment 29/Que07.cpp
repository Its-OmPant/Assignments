// 7. Create two class Time and Minute and add required getter and setter including constructors.  Now you need to type cast Time object into Minute to fetch the minute from Time and display it. 
// Example - 
// int main() 
// { 
//  Time t1(2,30); 
//  t1.display(); 
//  Minute m1; 
//  m1.display(); 
//  m1=t1 // Fetch minute from time 
//  t1.display(); 
//  m1.display(); 
//  return 0; 
// }

#include<iostream>
using namespace std;

class Time{
    int hr,mt;

    public:
        int getHour(){
            return hr;
        }

        int getMinute(){
            return mt;
        }
        Time(int h, int m){
            hr = h;
            mt = m;
        }
        void display(){
            cout<<"Time: "<<hr<<" hr "<<mt<<" mt"<<endl;
        }
};

class Minute{
    int mt = 0;
    public:
        Minute(){

        }
        Minute(Time t){
            mt = t.getMinute();
        }

        void display(){
            cout<<"Minute: "<<mt<<" minutes "<<endl;
        }
};

int main() 
{ 
    Time t1(2,30); 
    t1.display(); 
    Minute m1; 
    m1.display(); 
    m1 = t1 ;// Fetch minute from time 
    t1.display(); 
    m1.display(); 
    return 0; 
}
