#include<iostream>

using namespace std;


void LeapYear(int n){

    if(n > 0){

        if((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)){
            cout << n << "  is a Leap Year " ;
        }else{
            cout << n << " is a not a Leap Year ";
        }
    }

        }
int main(){


    int n;
    cout << "Enter the Year No : " << endl;
    cin >> n;

    LeapYear(n);
}