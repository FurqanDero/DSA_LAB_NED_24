#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    int sum=0;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    cout<<"Reversed Array: ";
    for (int i = n-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}