//Remove Duplicates from a Sorted Array
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int j = 0;
    for(int i = 0; i < n; i++){
        if(arr[j] != arr[i]){
            j++;
            arr[j] = arr[i];
        }
    }
    cout<<"Array after removing duplicate: ";
    for(int i = 0; i<= j; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
