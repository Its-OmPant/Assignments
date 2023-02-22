// 3. Overload subscript operator [] that will be useful when we want to check for an index out  of bound. 

#include<iostream>
using namespace std;

class Array{
    int a[100];
    const int size = 100;
    public:
        void setData(int n, int index){
            if(index>=size){
                cout<<"Array Out of Bound Exception"<<endl;
                exit(0);
            }    
            a[index] = n;
        } 

        void display(int index){
            cout<<a[index]<<endl;
        }

        int operator[](int index){
            if(index>=size){
                cout<<"Array Out of Bound Exception"<<endl;
                exit(0);
            }
            return a[index];
        }
};

int main(){
    Array arr;

    arr.setData(5,0);
    arr.display(0);
    arr[100];
    return 0;
}