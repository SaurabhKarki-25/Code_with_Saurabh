#include<iostream>
using namespace std;
void PrimeNumber(int n){
     int i = 2;
     int count = 0;
     while(i < n){

        if(n % i == 0){
           count++;
        }
        i++;
     }
     if(count == 0){
        cout << n << " " << "is Prime No" << endl;
     }else{
        cout << n << " " << "is Not a Prime No " << endl;
     }
}

void PrintPrimeNumber(int n){

    int i = 2;
   
    while(i <= n){
        int j = 2;
        int count = 0;
        while(j < i){
 
            if(i % j == 0){
                count++;
            }
            j++;

        }
        
        if(count == 0){
            cout << i << endl;
        }
        i++;
    }
}

void countPrimeNumber(int n){

    int i = 2;
    int counter = 0;
    while(i <= n){
        int j = 2;
        int count = 0;
        while(j < i){
            if(i % j == 0){
                count++;
                
            }
            j++;
        }
        if(count == 0){
               counter++;
            }
        i++;
    }
    cout << counter;
}

void sumofPrime(int n){
    int i = 2;
    int sum = 0;
    while(i <= n){
        int j = 2;
        int count = 0;
        while(j < i){
            
            if(i % j == 0){
                count++;
            }
            j++;
        }
       
        if(count == 0){
            sum = sum + i;
        }
        i++;
    }
    cout << "SUM OF PRIME :" << sum << endl;
}

void nthTerm(int n){
    int i = 2;
    int Term = 0;
    while(true){
        int j = 2;
        int count = 0;
        while(j < i ){
            if(i % j == 0){
                count++;
            }
            j++;
        }
        if(count == 0){
            Term++;
            if(Term == n){
                cout << i << endl;
                return;
            }
    
            
        }
        i++;
    }
    
    
}

int main(){

    int n;
    cout << "Enter the No : " << endl;
    cin >> n;

    //PrimeNumber(n);
    PrintPrimeNumber(n);
    countPrimeNumber(n);
    sumofPrime(n);
    nthTerm(n);
    
    return 0;
}