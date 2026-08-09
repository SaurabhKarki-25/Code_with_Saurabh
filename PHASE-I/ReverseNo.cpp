#include<iostream>

using namespace std;

int Reverse(int n){
    
    if(n == 0 ){
        cout << 0;
        return -1;
    }
    int rem , ans = 0;
    while(n > 0){
        rem = n % 10;
        n = n /10;
        ans = ans *10 + rem;
    }
    cout << ans ;

    return -1;
    
}

int main(){

    cout << "Enter the No : " << endl;
    int n ;
    cin >> n ;

    Reverse(n);

    return 0;
}