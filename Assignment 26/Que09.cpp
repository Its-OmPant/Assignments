// 9. Define a class Bill and define its member function get() to take detail of customer ,  calculateBill() function to calculate electricity bill using below tariff : 
// Upto 100 unit RS. 1.20 per unit 
// From 100 to 200 unit RS. 2 per unit 
// Above 200 units RS. 3 per unit. 

#include<iostream>
using namespace std;

class Bill{
    int customer_ID;
    string cus_name;
    int unit;

    public:
        void get(){
            cout<<"Enter Customer Details"<<endl;
            cout<<"ID: ";
            cin>>customer_ID;
            fflush(stdin);
            cout<<"Name: ";
            getline(cin,cus_name);
        }

        float calculateBill(){
            cout<<"Enter units Consumed: ";
            cin>>unit;

            if(unit>0 && unit<100){
                return unit*1.20;
            }
            else if(unit>=100 && unit<200){
                return unit*2.0;
            }
            else if (unit>200){
                return unit*3.0;
            }
            else{
                return -1;
            }
        }
};

int main(){
    Bill b1;

    b1.get();
    cout<<"Your Bill is: $"<<b1.calculateBill()<<endl;
    return 0;
}