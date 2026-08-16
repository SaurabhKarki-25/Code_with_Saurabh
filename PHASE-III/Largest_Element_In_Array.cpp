#include<iostream>

using namespace std;

int largest(int arr[] , int n){
     
    int max = arr[0];

    for(int i = 1 ; i < n ; i++){

        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}


int main(){
    
    int n;
    cout << "Enter the size of the array :";
    cin >> n;
    int arr[n];

    for(int i = 0 ; i < n ; i++){

        cout << "Enter the Element " << i + 1 << endl;
        cin >> arr[i];
    }

    int result = largest(arr,n);
    cout << "The largest element in the array is: " << result << endl;

    return 0;



}