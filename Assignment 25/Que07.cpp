// 7.	Define a class Greatest and define instance member function to find Largest among 3  numbers using classes. 
#include<iostream>
using namespace std;

class Greatest
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
    Greatest num;
    int x,y,z;
    cout<<"Enter three numbers to find largest among them: "<<endl;
    cin>>x>>y>>z;

    cout<<"Largest is: "<<num.largest(x,y,z)<<endl;
    return 0;
}