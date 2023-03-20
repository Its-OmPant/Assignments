// 9. Write a C++ program to implement the following class hierarchy: 
// Student: id, name 
// StudentExam (derived from Student): Marks of 6 subjects 
// StudentResult (derived from StudentExam) : percentage 
// Define appropriate functions to accept and display details. 
// Create 'n' objects of the StudentResult class and display the marklist. 
// Output -


#include<iostream>
using namespace std;

class Student{
    public:
        int id;
        string name;

        void setStdDetails(){
            cout<<"Enter Roll No.        : ";
            cin>>this->id;
            cout<<"Enter Student Name    : ";
            fflush(stdin);
            getline(cin,this->name);
        }

        void getStdDetails(){
            cout<<"Roll no               : "<<this->id<<endl;
            cout<<"Student Name          : "<<this->name<<endl;
        }

};

class StudentExam : public Student{
    public:
    //Marks of 6 subjects
    float m1,m2,m3,m4,m5,m6;

    void setMarsk(){
        cout<<"Enter Marks for Subject 1 : ";
        cin>>this->m1;
        cout<<"Enter Marks for Subject 2 : ";
        cin>>this->m2;
        cout<<"Enter Marks for Subject 3 : ";
        cin>>this->m3;
        cout<<"Enter Marks for Subject 4 : ";
        cin>>this->m4;
        cout<<"Enter Marks for Subject 5 : ";
        cin>>this->m5;
        cout<<"Enter Marks for Subject 6 : ";
        cin>>this->m6;
    }

    void getMarks(){
        cout<<endl<<"Marks Of Subject 1  : "<<m1;
        cout<<endl<<"Marks Of Subject 2  : "<<m2;
        cout<<endl<<"Marks Of Subject 3  : "<<m3;
        cout<<endl<<"Marks Of Subject 4  : "<<m4;
        cout<<endl<<"Marks Of Subject 5  : "<<m5;
        cout<<endl<<"Marks Of Subject 6  : "<<m6<<endl;
    }

};

class StudentResult:public StudentExam{
    public:
        float percentage;

        void calPercentage(){
            float total = m1 + m2 + m3 + m4 + m5 + m6;

            percentage = (total/600) * 100;
        }

        void getPercentage(){
            cout<<" Total Percentage     : "<<percentage<<" %"<<endl;
        }
};

int main(){

    int no_of_stds;
    bool flag = true;
    cout<<"Enter No. of Students You Want  : ";
    cin>>no_of_stds;

    int temp = no_of_stds;
    StudentResult *s;

    try{
         s = new StudentResult [no_of_stds];
    }catch(bad_alloc a){
        cout<<"Allocation Failed";
    }

    int i = 0;
    while(temp != 0){
        cout<<"---------------------"<<endl;
        (s+i)->setStdDetails();
        (s+i)->setMarsk();
        (s+i)->calPercentage();
        i++;
        temp--;        
    }

     i = 0;
     cout<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"     ********* Student MarkList ***********"<<endl;
    cout<<"------------------------------------------------"<<endl;

    while(no_of_stds != 0){

        (s+i)->getStdDetails();
        (s+i)->getMarks();
        (s+i)->getPercentage();
        no_of_stds--;
        i++;
        cout<<endl;
        cout<<"----------------------------"<<endl;
    }

    return 0;
}