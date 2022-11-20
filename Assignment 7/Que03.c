// 3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include <stdio.h>
int main()
{
    int t1, t2, sum, n, flag = 1;
    printf("Enter the Number to check whether it is present in Fibonacci series\n");
    scanf("%d", &n);

    t1 = 0, t2 = 1, sum = 0;
    if (t1 == n || t2 == n)
    {
        printf("%d is Present in Fibonacci Series\n", n);
        return 0;
    }
    while (t2 <= n)
    {
        if (t2 == n)
        {
            printf("%d is Present\n", n);
            flag = 0;
            break;
        }
        else
        {
            sum = t1 + t2;
            t1 = t2;
            t2 = sum;
        }
    }

    if (flag)
    {
        printf("%d is Not present\n", n);
    }

    return 0;
}