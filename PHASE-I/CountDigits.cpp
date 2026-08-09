#include<iostream>

using namespace std;

void CountDigits(int n){

    if(n == 0){
        return;
    }
    int count = 0;
    int rem , ans = 0;
    while(n > 0){
        rem = n % 10;
        n = n / 10;
        count++;
    }
    cout << count;

}

int main(){

    int n; 
    cout << "Enter the No : ";
    cin >> n;

    CountDigits(n);


    return 0;
}