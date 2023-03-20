// 5. Write a C++ program to define a base class Item (item-no, name, price). Derive a class  Discounted-Item (discount-percent). A customer purchases 'n' items. Display the item-wise bill  and total amount using appropriate format. 
// Output -

#include<iostream>
using namespace std;

class Item{
    public:
    string name;
    int item_no;
    float price;
     
};

class Discounted_Item: public Item{
    public:
    int discount_percent;

    float discounted_Price(){
        float temp = (price * discount_percent) / 100;
        float ePrice = price - temp;
        return ePrice;
    }

};

int main(){
    int n;
    cout<<"How many Items u wanted to enter: ";
    cin>>n;

    Discounted_Item * items;

    try{
        items = new Discounted_Item[n];
    }catch(bad_alloc e){
        cout<<"Allocation Failed";
    }

    for(int i = 0; i<n; i++){
        cout<<"Enter Item Name : ";
        fflush(stdin);
        getline(cin,(items+i)->name);

        cout<<"Enter Item No. : ";
        cin>>(items+i)->item_no;

        cout<<"Enter Item Price : ";
        cin>>(items+i)->price;

        cout<<"Enter Discount Percent : ";
        cin>>(items+i)->discount_percent;
        cout<<endl<<"----------------"<<endl;
    }

    for(int i=0;i<n;i++){
        cout<<endl<<"Item Name: "<<(items+i)->name;
        cout<<endl<<"Item No: "<<(items+i)->item_no;
        cout<<endl<<"Item Price: "<<(items+i)->price;
        cout<<endl<<"Discount Percent: "<<(items+i)->discount_percent;
        cout<<endl<<"Discounted Price: "<<(items+i)->discounted_Price()<<endl;
    }

    cout<<endl<<"--------------------"<<endl;

    float total_Price  = 0;
    float total_Discount  = 0;

    for(int i=0; i<n; i++){
        total_Price += (items+i)->price;
        total_Discount += (items+i)->discounted_Price();
    }

    cout<<"Total Price : "<<total_Price<<endl;
    cout<<"Total Discount : "<<total_Discount<<endl;

    return 0;
}
