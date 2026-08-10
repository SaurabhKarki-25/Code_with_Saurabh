#include<iostream>

using namespace std;

int factorial( int n ) {

    if(n < 0)
{
    cout << "Factorial is not defined for negative numbers.";
    return 0;
}

    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial( n - 1 );
}

int main(){

    int n ; 
    cout << "Enter the No of Factorial you want to calculate : " ;
    cin >> n;

    int fact = 0;
    fact  = factorial(n);
    cout << n << " factorial = " << fact;

    return 0;
}