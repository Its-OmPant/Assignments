// 9. Write a program that asks the user to enter a username. If the username entered is one of the names in the list then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed 

#include<stdio.h>
#include<string.h>

void factorial(){
    int num,fact=1;
    printf("Enter a number to calculate factorial\n");
    scanf("%d",&num);

    if(num ==0 || num ==1){
        printf("Factorial : 1\n");
    }
    else{
        for(int i=1;i<=num;i++){
            fact = fact*i;
        }
        printf("Factorial : %d\n",fact);
    }
}

int main(){
    char users[10][20] = {"ajay","prateek","prashant","aakash","vijay","raj","mihir", "om", "emanual","harsh"};

    char user[20];
    int flag=0;
    printf("Enter Username\n");
    gets(user);

    for(int i=0;i<10;i++){
        if(strcmp(user,users[i]) ==0 ){
            flag = 1;
        }
    }
    if(flag){
        factorial();
    }else{
        printf("User Not Found !!\n");
    }
    return 0;
}