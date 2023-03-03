// 3. Write a C++ program to perform arithmetic operations on two numbers and throw an exception if the dividend is zero or does not contain an operator. 
#include<iostream>
using namespace std;

int main(){
    int a,b,c,t=0;
    int ch;

    while(1){
        cout<<"Enter Your Choice "<<endl<<"1. Addition"<<endl<<"2. Substraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl<<"5. Exit"<<endl;
        cin>>ch;

        switch(ch){
            case 1:
                cout<<"Enter Two Numbers to add"<<endl;
                cin>>a>>b;

                c = a + b;
                cout<<"Addition: "<<c<<endl;
                break;
            case 2:
                cout<<"Enter Two Numbers to subtract"<<endl;
                cin>>a>>b;

                c = a - b;
                cout<<"Substraction: "<<c<<endl;
                break;
            case 3:
                cout<<"Enter Two Numbers to multiply"<<endl;
                cin>>a>>b;

                c = a * b;
                cout<<"Multiplication: "<<c<<endl;
                break;

            case 4:
                cout<<"Enter Two Numbers to Divide"<<endl;
                cin>>a>>b;

                try{
                    if(b == 0)
                        throw b;
                    c = a/b;
                }catch(int e){
                    cout<<"Can't Divide With "<<e<<endl;
                }
                if(b!= 0){
                c = a/b;
                cout<<"Divison: "<<c<<endl;
                }
                break;
            case 5:
                t = 1;
                break;
            default:
             t = 1;
                break;

        }

        if(t){
            break;
        }
        
    }
    return 0;
}