// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed. 


#include<stdio.h>
int main(){
    float s1, s2, s3, s4, s5, total, percentage;
    printf("Enter marks of Subject : \n");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    
    total = s1 + s2 + s3 + s4 + s5;
    percentage = (total*100)/500;
  
    if(percentage>33){
        printf("Congratulations !! You Passed the exam...\n");
    }
    else{
        printf("Sorry !!. You Failed in exam.. \n ");
    }
    return 0;
}