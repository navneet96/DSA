/*
Find Missing Number from 1 to N
Use the sum formula of first N natural numbers:
Expected Sum = 𝑛(𝑛+1)/2
Subtract the actual sum of the array from the expected sum to get the missing number.
*/
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of N (range is 1 to N): ";
    cin >> n;

    int arr[n - 1];
    cout << "Enter " << n - 1 << " elements (from 1 to " << n << ", one missing):\n";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int total = n*(n+1)/2;

    int sum = 0;
    for(int i = 0;i<n-1;i++){
        sum += arr[i];
    }

    int missing = total - sum ;

    cout<<"Missing number is: "<<missing<<endl;
    return 0;
}