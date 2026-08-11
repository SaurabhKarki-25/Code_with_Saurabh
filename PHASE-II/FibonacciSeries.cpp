#include<iostream>

using namespace std;

void fabonacciSeries(int n){
    
    if (n <= 0) {
    cout << "Please enter a positive number.";
    return;
}

    int first = 0;
    int second = 1;

    for(int i = 1 ; i <= n ; i++){

        cout << first << " ";
        int next = first + second;


        first = second;
        second = next;

    }


}

int main(){

    int n ; 
    cout << "Enter the No of terms you want to print in Fibonacci Series : " ;
    cin >> n;

    fabonacciSeries(n);

}