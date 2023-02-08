// 4. Define a class Counter and Write a program to Show Counter using Constructor. 

#include<iostream>
using namespace std;

class Count{
    static int count;

    public:
        Count(){
            count++;
        }
        void getCount(){
            cout<<count<<endl;
        }
};

int Count:: count;
int main(){
    Count c1,c2,c3;
    c1.getCount();
}