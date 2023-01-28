// 6. Write a function to sort employees according to their names [refer structure from question 1]

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
    printf("\tEmployee Name: %s\n",e.name);
    printf("\tEmployee ID: %d\n",e.id);
    printf("\tEmployee Salary: %d\n",e.salary);
}

void sortEmployeeByName(struct Employee e[],int size){
    int i,j;
    struct Employee temp;

    for(i = 0;i<size;i++){
        for(j=i;j<size;j++){
            if(strcmp(e[i].name,e[j].name) >0){
                //swapping code
                temp.id = e[i].id;
                strcpy(temp.name,e[i].name);
                temp.salary = e[i].salary;

                e[i].id = e[j].id;
                strcpy(e[i].name,e[j].name);
                e[i].salary = e[j].salary;

                e[j].id = temp.id;
                strcpy(e[j].name,temp.name);
                e[j].salary = temp.salary;

            }
        }
    }
}
int main(){

    struct Employee Emp[5];
    int i;

    for(i=0;i<5;i++){
        printf("Enter %d Employee Details\n",i+1);
        readData(&Emp[i]);
    }  

    printf("\n\n");
      
    for(i=0;i<5;i++){
        printf("\nEmployee %d Details\n",i+1);
        showData(Emp[i]);
    }

    //function to sort employees according to names
    sortEmployeeByName(Emp,5);

    // printing employees after sorting 

    printf("\tSorted By Names:\n");
    for(int j=0;j<5;j++){
        printf("\nEmployee name: %s\n",Emp[j].name);
        printf("Employee ID: %d\n",Emp[j].id);
        printf("Employee Salary: %d\n",Emp[j].salary);
        
    }

    return 0;
}