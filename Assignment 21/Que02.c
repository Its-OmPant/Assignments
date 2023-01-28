// 2. Write a function to take input employee data from the user. [ Refer structure from question 1 ] 

#include<stdio.h>
#include<string.h>

struct  Employee
{
    char name[25];
    int id;
    int salary;
};

// Function to read employee data from user
void readData(struct Employee *Emp){
    printf("Enter Employee name: ");
    fflush(stdin);
    fgets(Emp->name,25,stdin);
    Emp->name[strlen(Emp->name)-1] = '\0';

    printf("Enter Employee ID: ");
    scanf("%d",&Emp->id);

    printf("Enter Salary: ");
    scanf("%d",&Emp->salary);
}

int main(){

    struct Employee Emp;

    readData(&Emp);
    

    return 0;
}