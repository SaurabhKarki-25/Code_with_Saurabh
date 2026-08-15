#include<iostream>
#include<algorithm>

using namespace std;

void Decimal_to_Binary(int n){

    if(n == 0){
        cout << 0;
        return;
    }
    string rem = "";
    while(n > 0){
    rem = rem + to_string(n % 2);
    n = n / 2;

    }
    reverse(rem.begin(), rem.end());
    cout << rem;

}

int main(){
    

    int n ; 
    cout << "Enter the decimal No : ";
    cin >> n;

    Decimal_to_Binary(n);
    return 0;
};