// 5. Create a student class and overload new and delete operators outside the class. 

#include<iostream>
using namespace std;

class Student{
    string name;
    int RollNo,age;

    public:
        Student(){}
        Student(string s,int r, int a){
            name = s;
            RollNo = r;
            age = a;
        }
        void display(){
            cout<<"Name: "<<name<<endl<<"Roll No: "<<RollNo<<endl<<"Age: "<<age<<endl;
        }      
};

void * operator new(size_t size){
    void *p = malloc(size);
    cout<<"Overloaded new operator with size: "<<size<<endl;
    return p;
}
void operator delete(void *p){
    free(p);
}

int main(){
    Student s("Om Pant", 521, 15);

    s.display();

    Student *s1 = new Student("Akash",152,16);

    int *p = new int;
   
    s1->display();
    delete s1;

    return 0;
}