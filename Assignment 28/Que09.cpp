// 9. Create an Integer class that contains int x as an instance variable and overload casting int() operator that will type cast your Integer class object to int data type. 


#include<iostream>
using namespace std;

class Integer
{
    int x;
    public:
        Integer(int i){
            this->x = i;
        }

        operator int(){ 
            return x;
        }

};

int main(){

    Integer a = 5;

    int b = a;
    cout<<b;

    return 0;
}