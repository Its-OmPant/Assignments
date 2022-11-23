// 10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
# include <stdio.h>
# include <math.h>

void primeFactors(int n)
{
    while (n%2 == 0){
        printf("%d ", 2);
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i+2){
        while (n%i == 0){
            printf("%d ", i);
            n = n/i;
        }
    }
    if (n > 2)
        printf ("%d ", n);
}

int main()
{
    int n;
    printf("Enter a Number to find its prime Factors\n\n");
    scanf("%d",&n);

    primeFactors(n);

    return 0;
}