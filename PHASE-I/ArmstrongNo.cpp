#include <iostream>
#include<cmath>

using namespace std;

void Armstrong(int n)
{

    int original = n;
    int temp = original;
    int rem = 0;
    int Final = 0;
    int count = 0;

    if(n == 0 ){
        count = 1;
    }

    while(temp > 0 ){

        temp = temp / 10;
        count++;
    }
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;  
        Final = Final + (int)round(pow(rem , count));
    }

    if (original == Final)
    {
        cout << original << "==" << Final << endl << "is an Armstrong No " << endl;
    }
    else
    {
        cout << original << "!=" << Final << endl <<  "is not an Armstrong No " << endl;
    }
}

int main()
{

    int n;
    cout << "Enter the No :"<< endl;
    cin >> n;

    Armstrong(n);

    return 0;
}