//Check if Array is Sorted
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

    bool isSorted = true;

    for(int i = 1; i<n; i++){
        if(arr[i] < arr[i-1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted)
        cout<<"Array is sorted (ascending)"<<endl;
    else    
        cout<<"Array is not sorted"<<endl;
    
return 0;

}