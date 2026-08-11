#include<iostream>

using namespace std;

int gcd(int a, int b) {

    cout << "Inside gcd()" << endl;

    while (b != 0) {
        cout << "a = " << a << " b = " << b << endl;

        int rem = a % b;
        a = b;
        b = rem;
    }

    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << "GCD = " << gcd(a, b);
}