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
        sum+= arr[i];
    }

    double average= sum/n;

    cout<<"Sum = " << sum << endl;
    cout<<" Average = " << average << endl;

    return 0;
} 