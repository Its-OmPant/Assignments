// 2. Write a menu driven program with the following options: 
// a. Addition 
// b. Subtraction 
// c. Multiplication
// d. Division  
// e. Exit 

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1,n2;
    char choice;

    while(1){
        
        printf("Enter Your Choice\n");
        printf("a. Addition \nb. Subtraction \nc. Multiplication \nd. Division \ne. Exit \n");

        fflush(stdin);
        scanf("%c",&choice);
        fflush(stdin);


        switch (choice)
        {
            case 'a':
                printf("Enter Two Numbers\n");
                scanf("%d%d",&n1,&n2);
                printf("Addition: %d \n\n",n1+n2);
                break;

            case 'b':
                printf("Enter Two Numbers\n");
                scanf("%d%d",&n1,&n2);
                printf("Subtraction: %d \n\n",n1-n2);
                break;

            case 'c':
                printf("Enter Two Numbers\n");
                scanf("%d%d",&n1,&n2);
                printf("Multiplication: %d \n\n",n1*n2);
                break;

            case 'd':
                printf("Enter Two Numbers\n");
                scanf("%d%d",&n1,&n2);
                printf("Divison: %d \n\n",n1/n2);
                break;

            case 'e':
                printf("Exited ....\n");
                return 0;
            
            default:
                printf("Enter a valid Option\n\n");
                break;
        }


    }
    return 0;
}
