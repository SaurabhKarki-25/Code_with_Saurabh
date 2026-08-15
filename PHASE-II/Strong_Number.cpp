#include<iostream>

using namespace std;

bool StrongNumber(int fact , int n){

     return fact == n;    
}

int factorial(int n){
    
    if( n == 0 || n == 1){
        return -1;
    }

    int fact = 1 ;

    for(int i = 1 ; i <= n ; i++){

        fact = fact * i;

    }

   
    return StrongNumber(fact , n);
}


int main(){

    int n; 
    cout << "Enter the Number :" << endl;

    cin >> n;

    factorial(n);

    if(StrongNumber){
        cout << "It is a Strong Number";
    }else{
        cout << "It is not a Strong Number : ";
    }

    return 0;

}