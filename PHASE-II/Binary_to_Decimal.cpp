#include<iostream>

using namespace std;

void Binary_to_Decimal(int n){


    int power = 1;

    int decimal = 0;

    while(n > 0){
         
        int digit = n % 10;

        if (digit != 0 && digit != 1)
    {
        cout << "Invalid Binary Number";
        return;
    }
        decimal = decimal + digit * power;

        power = power * 2;
        n = n / 10;
        
    }

    cout << decimal;
}

int main(){
    int n;

    cout << "Enter the Binary Number :";

    cin >> n;

    Binary_to_Decimal(n);

    return 0;
}