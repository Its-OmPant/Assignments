// 2. Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;
int highestDigit(int number){
    int max =0;
    if(number<0)
        number *= (-1);

    while(number%10 != 0){
        if(number%10 > max)
            max = number%10;
        number = number/10;
    }
    return max;
}
int main(){
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    cout<<"Highest Digit in Number: "<<highestDigit(number)<<endl;
    return 0;    
}