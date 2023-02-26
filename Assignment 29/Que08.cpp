// 8. Create a Rupee class and convert it into int. And Display it. 
// Example 
// int main() 
// { 
//  Rupee r = 10; 
//  int x = r; 
// cout<<x; 
//  return 0; 
// } 

#include<iostream>
using namespace std;

class Rupee{
    int r;
        public:
        Rupee(int x){
            r = x;
        }

        operator int(){
            return r;
        }
        void display(){
            cout<<"Rupee: "<<r<<endl;
        }
};
int main() 
{ 
    Rupee r = 10; 
    int x = r; 
    r.display();
    cout<<"x: "<<x<<endl; 
    return 0; 
} 
