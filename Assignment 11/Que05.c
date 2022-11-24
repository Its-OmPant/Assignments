// 5. Write a function to print first N prime numbers (TSRN) 

#include<stdio.h>

int printPrime(int n){
    int i = 3, count, c;

    if(n >= 1)
    {
        printf("\n\nFirst %d prime numbers are :  ", n);
        printf("2 ");
    }
    for(count = 2; count <= n; i++)  
    {
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }

        if(c == i)
        {
            printf("%d ", i);
            count++;
        }

    }

}


int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    printPrime(num);
    
    return 0;
}