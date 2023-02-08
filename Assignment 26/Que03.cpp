// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>
using namespace std;

class Cube{
    int side;
    public:
        Cube(int n){
            side = n;
        }
        int volume(){
            return side*side*side;
        }
};

int main(){
    Cube c(5);
    cout<<"Volume: "<<c.volume()<<endl;

    return 0;
}