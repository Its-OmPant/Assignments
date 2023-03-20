// 3. Write a C++ program to calculate the percentage of a student using multi-level  inheritance. Accept the marks of three subjects in base class. A class will be derived  from the above mentioned class which includes a function to find the total marks  obtained and another class derived from this class which calculates and displays the  percentage of students. 

#include<iostream>
using namespace std;

class Marks{
    public:
        float m1,m2,m3;

        void setMarks(float x=0,float y=0, float z=0){
            m1 = x;
            m2 = y;
            m3 = z;
        } 
};
class Total: public Marks{
    public:
        float Total = 0;

        void calculateTotal(){
            Total = m1 + m2 + m3;
        }
};
class Percentage: public Total{
    public:
        float percentage = 0;

        void display(){
            percentage = (Total/300) * 100;
            cout<<percentage<<"% "<<endl;
        }

};

int main(){
    int m1,m2,m3;
    cout<<"Enter marks of three subjects: "<<endl;
    cin>>m1>>m2>>m3;

    Percentage p;

    //To Set the marks of student
    p.setMarks(m1,m2,m3);

    //Calculates total marks
    p.calculateTotal();

    //Displays the percentage
    p.display();

    return 0;
}
            
            
            
            