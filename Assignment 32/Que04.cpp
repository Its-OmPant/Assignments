// 4. Define a class Addition that can add 2 or 3 numbers of different data types using  function overloading.

#include<iostream>
using namespace std;
    
class Addition{
    public:
    void add(int n1, int n2){
        cout<<n1+n2<<endl;
    }
    void add(int n1, float n2){
        cout<<n1+n2<<endl;
    }
    void add(float n1, int n2){
        cout<<n1+n2<<endl;
    }
    void add(float n1, float n2){
        cout<<n1+n2<<endl;
    }
    void add(int n1, int n2, int n3){
        cout<<n1+n2+n3<<endl;
    }
    void add(float n1, int n2, int n3){
        cout<<n1+n2+n3<<endl;
    }
    void add(int n1, float n2, int n3){
        cout<<n1+n2+n3<<endl;
    }
    void add(int n1, int n2, float n3){
        cout<<n1+n2+n3<<endl;
    }
    void add(float n1, int n2, float n3){
        cout<<n1+n2+n3<<endl;
    }
    void add(int n1, float n2, float n3){
        cout<<n1+n2+n3<<endl;
    }
    void add(float n1, float n2, int n3){
        cout<<n1+n2+n3<<endl;
    }
    void add(float n1, float n2, float n3){
        cout<<n1+n2+n3<<endl;
    }

};

int main(){
    Addition x;
    x.add(2,5);
    x.add(2,5,8);
    return 0;
}