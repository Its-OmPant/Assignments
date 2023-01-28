// 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and 
// Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
    int rollno;
    char name[25];
    int chem_marks;
    int phy_marks;
    int maths_marks;
};

void readDetails(struct student *s){
   printf("Enter Student Name: ");
   fflush(stdin);
   fgets(s->name,25,stdin);
   s->name[strlen(s->name)-1] = '\0';

   printf("Enter Roll No: ");
   scanf("%d",&s->rollno);

   printf("Enter Chemistry Marks: ");
   scanf("%d",&s->chem_marks);

   printf("Enter Physics Marks: ");
   scanf("%d",&s->phy_marks);

   printf("Enter Maths Marks: ");
   scanf("%d",&s->maths_marks);
}

int main(){
    struct student std[5];
    int i,sum=0;
    float percentage;

    //taking student details from user
    for(i=0;i<5;i++){
        printf("\tEnter %d Student Details\n",i+1);
        readDetails(&std[i]);
        printf("\n");
    }

    for(i=0;i<5;i++){
        sum = std[i].chem_marks + std[i].maths_marks + std[i].phy_marks;
        percentage = (sum * 100) / 300;

        printf("Name: %s   Percentage: %.2f%%\n",std[i].name,percentage);

        sum = 0;
    }

 return 0;

}