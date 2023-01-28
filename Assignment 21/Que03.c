// 3. Write a function to display employee data. [ Refer structure from question 1 ] 

#include<stdio.h>
#include<string.h>

struct  Employee
{
    char name[25];
    int id;
    int salary;
};


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

void showData(struct Employee e){
    printf("\nEmployee Details: \n");
    printf("Employee Name: %s\n",e.name);
    printf("Employee ID: %d\n",e.id);
    printf("Employee Salary: %d\n",e.salary);
}
int main(){

    struct Employee Emp;

    readData(&Emp);

    showData(Emp);
    

    return 0;
}