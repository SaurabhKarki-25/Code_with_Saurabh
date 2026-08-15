#include<iostream>

using namespace std;


int PerfectNumber(int n){

    if( n < 0){
        return -1;
    }
    int sum = 0;
    for(int i = 1 ; i < n ; i++){
        if(n % i == 0){
             sum = sum + i;
        }


    }
    
    return sum == n;

}

void PerfectSeries(int n){
   

    for(int i = 1; i <= n; i++)
    {
        if(PerfectNumber(i))
        {
            cout << i << " " << endl;
        }
    }

}


int main(){

    int n;
    cout << "Enter the Number :";
    cin >> n;
    bool Perfect = false;
    Perfect = PerfectNumber(n);

    if(Perfect){
        cout << "It is a Perfect Number " << endl;
    }else{
        cout << "It is not a Perfect Number" << endl;
    }

    PerfectSeries(n);

    return 0;
}