// 3. Create a Product class and convert Product type to Item type using constructor int main() 
// { 
//  Item i1; 
//  Product p1; 
//  p1.setData(3,4); 
//  i1=p1; 
//  return 0; 
// } 

#include<iostream>
using namespace std;

class Product{
    public:
    string p_Name;
    int pId; 
    void setData(string s, int id){
        p_Name = s;
        pId = id;
    } 
    void display(){
        cout<<"Product Name: "<<p_Name<<endl<<"Product ID: "<<pId<<endl;
    }
};

class Item{
    public:
    string i_Name;
    int iId;

        Item(){

        }
        Item(Product p){
            cout<<"Converting Product to Item"<<endl;
            i_Name = p.p_Name;
            iId = p.pId;
        }

        void display(){
        cout<<"Item Name: "<<i_Name<<endl<<"Item ID: "<<iId<<endl;
    }

};

int main() 
{ 
 Item i1; 
 Product p1; 
 p1.setData("Headphone",0125); 
 p1.display();
 i1 = p1; 
 i1.display();
 
 return 0; 
} 
