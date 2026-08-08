

#include<iostream>

using namespace std;

void palindrome(int n){
    int original = n;
    int rem , ans = 0 ;

    while(n > 0){
        rem = n % 10;
        n = n / 10;
        ans = ans * 10 + rem ;
    }
    
    if(original == ans){
          cout << original << " == " << ans << endl <<  "Number is Palindrome " << endl;
    }else{
        cout << original << " != " << ans << endl << "Number is not a Palindrome " << endl;
        
    }

}

int main()
{   
    int n;
    cout << "Enter the No to check: " << endl ;
    cin  >> n;
    
    palindrome(n);

    return 0;
}
