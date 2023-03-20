// 4. Write a C++ program to design a base class Person (name, address, phone_no). Derive  a class Employee (eno, ename) from Person. Derive a class Manager (designation,  department name, basic-salary) from Employee. Write a menu driven program to: 
// a. Accept all details of 'n' managers. 
// b. Display manager having highest salary 
// image.png

#include<iostream>
using namespace std;

class Person{
    protected:
    string name;
    string address;
    long long int phone_no; 
    public:
        void setName(string s){
            name = s;
        }
        void setAddress(string t){
            address = t;
        }

        void setPhone(long long int x){
            phone_no = x;
        }
        
        string getName(){
            return this->name;
        }
        string getAddress(){
            return this->address;
        }
        long long int getPhone(){
            return phone_no;
        }

};

class Employee:public Person{
    protected:
     int empNo;
     string ename;
    public:

      void setEmpNo(int no){
        empNo = no;
      }
      void setEmpName(string name){
        ename = name;
      }
      int getEmpNo(){
        return empNo;
      }

      string getEmpName(){
        return ename;
      }
      
};

class Manager: public Employee{
    protected:
    string designation, deptName;
    int salary;

    public:
        void setDesignation(string s){
            designation = s;
        }
        void setDepartment(string a){
            deptName = a;
        }
        void setSalary(int s){
            salary = s;
        }

        int getSalary(){
            return this->salary;
        }
        string getDesignation(){
            return designation;
        }
        string getDepartment(){
            return deptName;
        }
};

int main(){
    int n;
    cout<<"How many managers you want to enter: ";
    cin>>n;
    string temp;
    int temp_var;
    long long int x;

    Manager *m;

    try{
        m = new Manager [n];
    }catch(bad_alloc a){
        cout<<"Allocation Failed"<<endl;
    }

    for(int i=0; i<n; i++){

        cout<<endl<<"Enter Details of Manager "<<i+1<<endl<<"-------------------------"<<endl;
        cout<<"Enter employee number : ";
        cin>>temp_var;
        (m+i)->setEmpNo(temp_var);

        cout<<"Enter Name : ";
        fflush(stdin);
        getline(cin,temp);
        (m+i)->setEmpName(temp);

        cout<<"Enter Address : ";
        fflush(stdin);
        getline(cin,temp);
        (m+i)->setAddress(temp);

        cout<<"Enter Phone no : ";
        cin>>x;
        (m+i)->setPhone(x);

        cout<<"Enter Designation : ";
        fflush(stdin);
        getline(cin,temp);
        (m+i)->setDesignation(temp);

        cout<<"Enter Department Name : ";
        fflush(stdin);
        getline(cin,temp);
        (m+i)->setDepartment(temp);

        cout<<"Enter Basic Salary : ";
        cin>>temp_var;
        (m+i)->setSalary(temp_var);
        cout<<endl;
    }

    for(int i=0; i<n; i++){

        cout<<"----------------------"<<endl;
        cout<<"Employee No.  : " <<(m+i)->getEmpNo()<<endl;
        cout<<"Name  : " <<(m+i)->getEmpName()<<endl;
        cout<<"Address  : " <<(m+i)->getAddress()<<endl;
        cout<<"Phone No.  : " <<(m+i)->getPhone()<<endl;
        cout<<"Designation  : " <<(m+i)->getDesignation()<<endl;
        cout<<"Department Name  : " <<(m+i)->getDepartment()<<endl;
        cout<<"Base Salary  : " <<(m+i)->getSalary()<<endl;
        cout<<endl;
    }
    int max_sal = 0;
    string max_sal_manager;
    for(int i=0; i<n; i++){

        if((m+i)->getSalary() > max_sal){
            max_sal = (m+i)->getSalary();
            max_sal_manager = (m+i)->getEmpName();
        }
    }
        cout<<"Maximum Salaried Manager is: " <<max_sal_manager<<" With Salary: "<<max_sal<<endl;
        cout<<endl;

    
    return 0;
}