// 10. Define a class StaticCount and create a static variable. Increment this variable in a  function and call this 3 times and display the result.

#include<iostream>
using namespace std;

class StaticCount{
    static int var;
    public:
        void increment(){
            var++;
        }
        void getValue(){
            cout<<var;
        }
};

int StaticCount::var;

int main(){
    StaticCount s;
    s.increment();
    s.increment();
    s.increment();
    s.getValue();

    return 0;
}