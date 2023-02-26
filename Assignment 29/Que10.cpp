// 10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to  Dollar and Dollar to Rupee conversion. 
// Example 
// int main() 
// { 
//  Rupee r = 23; 
// Dollar d = r; // Rupee to Dollar conversion 
// d.display(); 
// r.display(); 
// r = d; // Dollar to Rupee Conversion 
// d.display(); 
// r.display(); 
//  return 0; 
// }

#include<iostream>
using namespace std;

class Dollar{
    int d;
    public:
        Dollar(){}

        Dollar(int x){
            d =x;
        }

        int getDollar(){
            return d;
        }

        void display(){
            cout<<"Dollar: "<<d<<endl;
        }

};

class Rupee{
    int ru;
    public:
        int getRupee(){
            return ru;
        }
        Rupee(){

        }
        Rupee(int x){
            ru = x;
        }
        Rupee(Dollar x){ //Dollar to rupee conversion
            ru = x.getDollar();
        }

        //For Rupee to dollar conversion

        operator Dollar(){
            Dollar a =  ru;
            return a;
        }

        void display(){
            cout<<"Rupee: "<<ru<<endl;
        }
};

int main() 
{ 
    Rupee r = 23; 
    Dollar d = r; // Rupee to Dollar conversion 
    d.display(); 
    r.display(); 
    r = d; // Dollar to Rupee Conversion 
    d.display(); 
    r.display(); 
    return 0; 
}


