// 10. Create an authentication system. It should be menu driven.

#include<stdio.h>
#include<string.h>

 int main(){
    char users[6][20] = {"ajay","aditya","harsh","himanshu","naveen","shekhar"};
    char passwords[6][50] = {"pass@123","123456","abcdef","911","naveen@12","sh#12"};

    char username[20];
    char password[50];

    printf("Enter Username\n");
    fgets(username,20,stdin);
    username[strlen(username)-1] = '\0';

    //AUTHENTICATION SYSTEM
    /* if wrong username entered programm will exit. else checks password for corresponding user*/
    for(int i=0;i<6;i++){
        if(strcmp(username,users[i]) == 0){
            printf("Enter Your Password\n");
            fgets(password,50,stdin);
            password[strlen(password)-1] = '\0';

            if(strcmp(password,passwords[i]) ==0){
                printf("Login Successfully\n");
            }
            else{
                printf("Wrong Password Entered\n");
            }
        }  
    }

    return 0;
 }