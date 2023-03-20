// 7. Write class declarations and member function definitions for a C++ base class to  represent an Employee (emp-code, name).
// Derive two classes as Fulltime (daily rate, number of days, salary) and Parttime (number  of working hours, hourly rate, salary).
// Write a menu driven program to:
// 1. Accept the details of ‘n’ employees.
// 2. Display the details of ‘n’ employees.
// 3. Search a given Employee by emp-code.
// Output -

#include <iostream>
using namespace std;

class Employee
{
protected:
    int emp_code;
    string name;

public:
    void setEmpDetails()
    {
        cout << "Enter Employee Number: ";
        cin >> this->emp_code;
        cout << "Enter Employee name: ";
        fflush(stdin);
        getline(cin, this->name);
    }
};

class Fulltime : public Employee
{
    int daily_rate, no_of_days, salary;

public:
    void setFullDetails()
    {
        cout << "Enter Daily Rate: ";
        cin >> this->daily_rate;
        cout << "Enter No. of days: ";
        cin >> this->no_of_days;
    }

    int getSalary()
    {
        this->salary = daily_rate * no_of_days;
        return this->salary;
    }

    void showDetails()
    {
        cout << "\n------------------------\n";
        cout << "Employee No.  : " << emp_code << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Salary        : " << this->getSalary() << endl;
        cout << "Status        : Full-Time" << endl;
    }
    int getID(){
        return emp_code;
    }
};
class Parttime : public Employee
{
    int no_of_working_Hours, hourly_rate, salary;

public:
    void setPartDetails()
    {
        cout << "Enter Working Hours: ";
        cin >> this->no_of_working_Hours;
        cout << "Enter Hourly Rate: ";
        cin >> this->hourly_rate;
    }

    int getSalary()
    {
        this->salary = no_of_working_Hours * hourly_rate;
        return this->salary;
    }

    void showDetails()
    {
        cout << "\n------------------------\n";
        cout << "Employee No.  : " << emp_code << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Salary        : " << this->getSalary() << endl;
        cout << "Status        : Part-Time" << endl;
    }
    int getID(){
        return emp_code;
    }
};

int main()
{

    int ch;

    int fval = 0; // to access employee from fulltime array
    int pval = 0; // to access employee from parttimr array

    Fulltime f[10];
    Parttime p[10];

    bool flag = true;
    while (flag)
    {

        cout << "1. Enter Record" << endl;
        cout << "2. Display Record" << endl;
        cout << "3. Search Record" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter Your Choice " << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            int empNo;
            cout << "How many employees you want to enter: ";
            cin >> empNo;

            while (empNo > 0)
            {
                int choice;

                cout<<endl;
                cout << "\t1. Full-Time Employee" << endl;
                cout << "\t2. Part-Time Employee " << endl;

                cout << "Choose an Option : ";

                cin >> choice;
                if (choice == 1)
                {
                    f[fval].setEmpDetails();
                    f[fval].setFullDetails();
                    f[fval].getSalary();
                    fval++;
                }
                else if (choice == 2)
                {
                    p[pval].setEmpDetails();
                    p[pval].setPartDetails();
                    p[pval].getSalary();
                    pval++;
                }
                else
                {
                    cout << "\tPlease enter Valid Option" << endl;
                }
                empNo--;
            }
            break;
        case 2: // Display Record

            cout<<endl;
            cout << "\t\tFull-Time Employees: " << endl;
            for (int i = 0; i < fval; i++)
            {
                f[i].showDetails();
            }
            cout << endl;
            cout << "\t\tPart-Time Employees: " << endl;
            for (int i = 0; i < pval; i++)
            {
                p[i].showDetails();
            }

            break;

        case 3: // Search Record

                int id;
                int choice2;

                cout<<"Whom do u wanna Search? "<<endl;

                cout << "\t1. Full-Time Employee" << endl;
                cout << "\t2. Part-Time Employee " << endl;

                cout << "Choose an Option : ";
                cin >> choice2;

                switch (choice2)
                {
                case 1:
                    cout<<"Enter Employee ID : ";
                    cin>>id;

                    for(int j=0; j<fval;j++){
                        if(f[j].getID() == id){
                            f[j].showDetails();
                            break;
                        }
                        else{
                            continue;
                        }
                    }
                    cout<<"FullTime Employee Not Found"<<endl;
                    break;

                case 2:
                    cout<<"Enter Employee ID : ";
                    cin>>id;

                    for(int j=0;j<pval;j++){
                        if(p[j].getID() == id){
                            p[j].showDetails();
                            break;
                        }
                        else{
                            continue;
                        }
                    }
                    cout<<"PartTime Employee Not Found"<<endl;
                    break;
                
                default:
                    cout<<"Invalid Choice.."<<endl;
                    break;
                }
                

        case 4:
            flag = false;
            break;

        default:
            flag = false;
            break;
        }
    }

    return 0;
}
