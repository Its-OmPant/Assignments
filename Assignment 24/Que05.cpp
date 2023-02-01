// 5. Define a function to check whether a given number is a term in a Fibonacci series or not. 

#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x)
{
	int s = sqrt(x);
	return (s * s == x);
}

bool isFibonacci(int n)
{
	return isPerfectSquare(5 * n * n + 4)
		|| isPerfectSquare(5 * n * n - 4);
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    isFibonacci(num)? cout << num << " is a Fibonacci Number \n"
			: cout << num << " is a not Fibonacci Number \n";
	
			
	return 0;
}

