

#include<iostream>

using namespace std;

int main()
{   
    int n;
    cout << "Enter the No to check: " << endl ;
    cin  >> n;

    int original = n;
    int rem , ans = 0;
    if(n >= 0 && n <= 1000000000){

        while(n > 0){
            rem = n % 10 ; 
            n = n / 10 ;
            ans = ans * 10 + rem;
        }

      
    }else{
        return -1;
    }

    

    if(original == ans){
          cout << original << " == " << ans << endl <<  "Number is Palindrome " << endl;
    }else{
        cout << original << " != " << ans << endl << "Number is not a Palindrome " << endl;
    }

    return 0;
}
