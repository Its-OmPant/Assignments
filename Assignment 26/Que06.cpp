// 6. Define a class student and write a program to enter student details using constructor and  define member function to display all the details. 

#include<iostream>
using namespace std;

class Student{
    string name;
    int rollNo;
    int age;

    public:
        Student(string s, int r, int a){
            name = s;
            rollNo = r;
            age = a;
        }
        void showDetails(){
            cout<<"Student Name: "<<name<<endl<<"Student Roll No. : "<<rollNo<<endl<<"Student Age: "<<age<<endl;
        }
};

int main(){
    string n;
    int rn,age;

    cout<<"Enter Student Name, Roll No. and Age ";
    getline(cin,n);
    cin>>rn>>age;

    Student s = Student(n,rn,age);

    s.showDetails();
    return 0;
}
