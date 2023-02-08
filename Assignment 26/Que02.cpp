// 2. Define a class Time to represent a time with instance variables h,m and s to store hour,  minute and second. Also define following member functions 
// a. void setTime(int,int,int) 
// b. void showTime() 
// c. void normalize() 
// d. Time add(Time) 

#include<iostream>
using namespace std;

class Time{
    private:
        int h,m,s;

    public:
        
        void setTime(int x,int y, int z){
    
            if(x>=0 && x<24){
                h = x;
            }else{
                h = -1;
            }
            if(y>=0 && y<60){
                m = y;
            }else{
                m = -1;
            }
            if(z>=0 && z<60){
                s = z;
            }else{
                s = -1;
            }
        }

        void showTime(){
            cout<<"Time: "<<h<<"hr "<<m<<"min "<<s<<"sec "<<endl;
        }

        void normalize(){
            m = m + s/60;
            s = s%60;
            h = h + m/60;
            m = m%60;           
        }
        Time add(Time t){
            Time temp;
            temp.h = h + t.h;
            temp.m = m + t.m;
            temp.s = s + t.s;
            temp.normalize();
            return temp;
        }
        
};

int main(){
    Time t1,t2,t3;
    int x,y,z;
    cout<<"Enter Time "<<endl;
    cout<<"Enter Hours: ";
    cin>>x;
    cout<<"Enter Minutes: ";
    cin>>y;
    cout<<"Enter Seconds: ";
    cin>>z;

    t1.setTime(x,y,z);
    
    cout<<"Enter Time "<<endl;
    cout<<"Enter Hours: ";
    cin>>x;
    cout<<"Enter Minutes: ";
    cin>>y;
    cout<<"Enter Seconds: ";
    cin>>z;
    t2.setTime(x,y,z);

    t1.showTime();
    t2.showTime();

    t3 = t1.add(t2);

    t3.showTime();
    return 0;
}

