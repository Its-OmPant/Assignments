// 10. Consider two base classes 
// worker(int code, char name, float salary), 
// officer(float DA, HRA) 
// class manager(float TA(is 10% of salary), gross salary) is derived from both base classes. Write necessary member functions. 
// Output -


#include<iostream>
using namespace std;

class worker{
    public:
        int code;
        string name;
        float salary;
};

class officer{
    public:
        float DA, HRA;
};

class manager: public worker, public officer{
    public:
    float TA;
    
};