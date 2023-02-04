// 4.	Define a class LargestNumber and define an instance member function to find the  Largest of three Numbers using the class. 

#include<iostream>
using namespace std;

class LargestNumber
{
    public:
        int largest(int a,int b,int c){
            if(a>b){
                if(a>c)
                    return a;
                else
                    return c;
            }
            else{
                if(b>c)
                    return b;
                else
                    return c;
            }
        }
};

int main(){
    LargestNumber num;
    int x,y,z;
    cout<<"Enter three numbers to find largest among them: "<<endl;
    cin>>x>>y>>z;

    cout<<"Largest is: "<<num.largest(x,y,z)<<endl;
    return 0;
}