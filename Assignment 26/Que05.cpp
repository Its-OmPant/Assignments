// 5. Define a class Date and write a program to Display Date and initialise date object using  Constructors

#include<iostream>
using namespace std;

class Date{
    int day,month,year;
    public:
        Date(int d, int m, int y){
            day = d;
            month = m;
            year = y;
        }

        void showDate(){
            cout<<"Date (DD:MM:YY) : "<<day<<"\\"<<month<<"\\"<<year<<endl;
        }
};

int main(){
    Date d(12,5,2024);

    d.showDate();
    return 0;
}