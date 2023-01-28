// 8. Write a program to store information of 10 students and display them using structure.

#include<stdio.h>
#include<string.h>

struct Student{
    char name[25];
    int rollno;
    int age;
};

void readDetails(struct Student *std){
    printf("Enter Student Name: ");
    fflush(stdin);
    fgets(std->name,25,stdin);
    std->name[strlen(std->name) -1] = '\0';

    printf("Enter Roll No: ");
    scanf("%d",&std->rollno);
    printf("Enter Age: ");
    scanf("%d",&std->age);
}

void showDetails(struct Student std[], int size){
    for(int i=0;i<size;i++){
        printf("%d Student\n",i+1);
        printf("\tName: %s",std[i].name);
        printf("\n\tRoll No: %d",std[i].rollno);
        printf("\n\tAge: %d\n",std[i].age);
    }
}

int main(){
    struct Student std[10];
    int i;

    //taking student details from user
    for(i=0;i<10;i++){
        printf("\tEnter %d Student Details\n",i+1);
        readDetails(&std[i]);
        printf("\n");
    }

    //displaying detailsof students
    printf("\n\tStudents are:\n");
    showDetails(std,10);
    

    return 0;
}