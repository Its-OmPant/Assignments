// 6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e int )  to Time class. 
// Example 
// int main() 
// { 
//  int duration; 
//  cout<<”Enter time duration in minutes”; 
//  cin>>duration; 
//  Time t1 = duration; 
//  t1.display(); 
//  return 0; 
// } 

#include<iostream>
using namespace std;

class Time{
    int hr = 00, mt = 00, sc = 00;

    public:
        Time(){

        }
        Time(int x){
            if(x>60){
                sc = x%60;
                mt = x/60;
                if(mt>60){
                    hr = mt/60;
                    mt = mt%60;
                }
            }
            else{
                sc = x;
            }
        }

        void showTime(){
            cout<<"Time is: "<<hr<<" hr:"<<mt<<" mt:"<<sc<<" sec "<<endl;
        }
};

int main() 
{ 
    int duration; 
    cout<<"Enter time duration in seconds: "; 
    cin>>duration; 
    Time t1 = duration; 
    t1.showTime(); 
    return 0; 
}