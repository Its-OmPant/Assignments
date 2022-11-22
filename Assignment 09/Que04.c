// 4. Write a menu driven program with the following options: 
// a. Check whether a given set of three numbers are lengths of an isosceles triangle or not 
// b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not 
// c. Check whether a given set of three numbers are equilateral triangle or not 
// d. Exit 


#include<stdio.h>
int main(){
    int a,b,c;
    char choice;

    while(1){
        
        printf("Enter Your Choice\n");
        printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not \n");
        printf("b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not \n");
        printf("c. Check whether a given set of three numbers are equilateral triangle or not \n");
        printf("d. Exit \n");

        fflush(stdin);
        scanf("%c",&choice);
        fflush(stdin);


        switch (choice)
        {
            case 'a':
                printf("Enter the sides of triangle\n");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b || b==c || c==a){
                    printf("It's a Isosceles Triangle\n\n");
                }
                else{
                    printf("It's not a Isosceles Triangle\n\n");
                }
                break;

            case 'b':
                printf("Enter the sides of triangle\n");
                scanf("%d%d%d",&a,&b,&c);
                if (((a*a) + (b*b) == (c*c)) || (a*a) + (c*c) == (b*b)  || (b*b) + (c*c) == (a*a)  ){
                    printf("It's a Right Triangle\n\n");
                }
                else{
                    printf("It's not a right Triangle\n\n");
                }
                break;

            case 'c':
                printf("Enter the sides of triangle\n");
                scanf("%d%d%d",&a,&b,&c);
                if (a == b && b==c ){
                    printf("It's a Equilateral Triangle\n\n");
                }
                else{
                    printf("It's not a Equilateral Triangle\n\n");
                }
                break;

            
            case 'd':
                printf("Program Terminated ....\n");
                return 0;
            
            default:
                printf("Enter a valid Option\n\n");
                break;
        }


    }
    return 0;
}
