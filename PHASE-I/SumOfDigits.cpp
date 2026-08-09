#include<iostream>

using namespace std;

int SumofDigits(int n){
    
    if( n <= 0 ){
         return -1;
    }
    int sum = 0 ;
    int rem , ans = 0;

    while(n > 0){
        rem = n % 10 ;
        n = n / 10 ;
        sum = sum + rem;
    }

    cout << "Sum of Digits : " << sum << endl ;


}

int main(){

    int n;
    cout << "Enter the Number :" << endl;
    cin >> n;

    SumofDigits(n);


    return 0;

}