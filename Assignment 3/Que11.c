// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed. 


#include<stdio.h>
int main(){
    int s1, s2, s3, s4, s5;
    printf("Enter marks of Subject : \n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    

    if(s1>33 && s2>33 && s3>33 && s4>33 && s5>33){
        printf("Congratulations !! You Passed the exam...\n");
    }
    else{
        printf("Sorry !!. You Failed in exam.. \n ");
    }
    return 0;
}