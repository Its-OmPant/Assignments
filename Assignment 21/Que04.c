// 4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]

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
    printf("Employee Name: %s\n",e.name);
    printf("Employee ID: %d\n",e.id);
    printf("Employee Salary: %d\n",e.salary);
}

int maxSalary(struct Employee e[], int size){

    int i,max=0;

    for(i=0;i<size;i++){
        if(e[i].salary > max){
            max = e[i].salary;
        }
    }
    return max;
}
int main(){

    struct Employee Emp[10];


    int i,maxsalary;

    for(i=0;i<10;i++){
        printf("Enter %d Employee Details\n",i+1);
        readData(&Emp[i]);
    }  

    printf("\n\n");
      
    for(i=0;i<10;i++){
        printf("Employee %d Details\n",i+1);
        showData(Emp[i]);
    }

    maxsalary = maxSalary(Emp, 3);

    for(int j=0;j<10;j++){
        if(Emp[j].salary == maxsalary){
            printf("\n\tHighest Salaried Employee..\n");
            printf("Employee name: %s\n",Emp[j].name);
            printf("Employee ID: %d\n",Emp[j].id);
            printf("Employee Salary: %d\n",Emp[j].salary);
        }
    }

    return 0;
}