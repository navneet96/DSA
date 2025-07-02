//Find second largest element
#include <iostream>
#include<climits>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Need at least two elements to find the second largest." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = INT_MIN;

    for(int i = 1; i<n; i ++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }

    }
     if (secondLargest == -1)
        cout << "No second largest element (all elements are equal or only one unique value)." << endl;
    else
        cout << "Second largest element: " << secondLargest << endl;


        return 0;
}