// 1. Define a class Person with instance members name and age. Also define member  functions setName(), setAge(), getName(), getAge(). Now define class Employee by  inheriting Person class. In the Employee class define empid and salary as instance  members. Also define setEmpid, setSalary, getEmpid, getSalary. 

#include<iostream>
using namespace std;

class Person{
    string name;
    int age;

    public:
        void setName(string n){
            name = n;
        }
        void setAge(int a){
            age = a;
        }
        string getName(){
            return this->name;
        }
        int getAge(){
            return this->age;
        }
};

class Employee:public Person{
    int empId,salary;

    public:
        void setEmpId(int id){
            this->empId = id;
        }
        void setSalary(int salary){
            this->salary = salary;
        }

        int getEmpId(){
            return empId;
        }
        int getSalary(){
            return salary;
        }
};

int main(){
    Employee e1;

    e1.setName("Ajay Singh");
    e1.setAge(25);
    e1.setEmpId(1);
    e1.setSalary(5000);

    cout<<"Employee Name: "<<e1.getName()<<endl;
    cout<<"Employee ID: "<<e1.getEmpId()<<endl;
    cout<<"Employee Age: "<<e1.getAge()<<endl;
    cout<<"Employee Salary: "<<e1.getSalary()<<"/- Rupees only "<<endl;

    return 0;
}