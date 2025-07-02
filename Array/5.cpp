//Left rotate array by One
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first = arr[0];

    for(int i = 0;i<n-1;i++){
        arr[i] = arr[i+1];
    }

    arr[n-1] = first;

    cout<<"Array after left rotate by 1: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}