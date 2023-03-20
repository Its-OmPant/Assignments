// 8 - In a bank, different customers have savings account. Some customers may have taken a  loan from the bank. So bank always maintain information about bank depositors and borrowers. 
// Design a Base class Customer (name, phone-number). Derive a class  
// Depositor (accno	, balance) from Customer. 
// Again, derive a class Borrower (loan-no, loan-amt) from Depositor. 
// Write necessary member functions to read and display the details of ‘n’ customers.
// Output -

#include<iostream>
using namespace std;

class Customer{
    public:
        string name;
        long long int phone_no;
};

class Depositor:public Customer{
    public:
        long long int accNo;
        double balance;
};

class Borrower : public Depositor{
    public:
        int loan_no;
        double loan_amount;

        void setBorrowerDetails(){
                cout<<"Enter Custome Name       : ";
                fflush(stdin);
                getline(cin, this->name);

                cout<<"Enter Customer Phone no  : ";
                cin>>this->phone_no;

                cout<<"Enter Customer A/C No    : ";
                cin>>this->accNo;

                cout<<"Enter Loan No            : ";
                cin>>this->loan_no;

                cout<<"Enter Loan Ammount       : ";
                cin>>this->loan_amount;
        }

        void showDetails(){
            cout<<"\tCUSTOMER DETAILS"<<endl;

            cout<<"----------------------------------------------"<<endl;
            cout<<"Customer Name          : "<<this->name<<endl;
            cout<<"Customer Phone No      : "<<this->phone_no<<endl;
            cout<<"Customer A/C No        : "<<this->accNo<<endl;
            cout<<"Balance                : "<<this->accNo<<endl;
            cout<<"----------------------------------------------"<<endl;
            cout<<"Loan No                : "<<this->loan_no<<endl;
            cout<<"Loan Amount            : "<<this->loan_no<<endl;
            cout<<"----------------------------------------------"<<endl;   
        }
};

int main(){
    Borrower b[20];
    int borrower_Index = 0;
    int no_of_entries;
    bool flag = true;

    while(flag){
        int choice;
        cout<<"\n1) Enter Details\n2) Display Details\n3) Exit. "<<endl;
        cout<<"\tChoose an Option : ";
        cin>>choice;
        cout<<endl;

        switch (choice)
        {
        case 1: 
            int no_of_cus;
            cout<<"Enter No. of customer details you want to enter: ";
            cin>>no_of_cus;

            try{
                while(no_of_cus != 0){
                    cout<<"-----------------------------"<<endl;
                    b[borrower_Index].setBorrowerDetails();
                    borrower_Index++;
                    no_of_cus--;
                }
            }catch(...){
                cout<<"Some Exception Occured"<<endl;
                break;
            }
            break;
        case 2:
            for(int i=0; i<borrower_Index;i++){
                cout<<endl;
                b[i].showDetails();
            }
            break;

        case 3:
            flag = false;
            break;
        
        default:
            cout<<"\tPlease Enter Valid Option"<<endl;
            break;
        }
    }
}