//Kadane's Algorithm (Max Subarray Sum)
/*
Kadane’s Algorithm Logic:
Keep track of the maximum sum ending at current index (current_sum)
Keep updating the overall maximum sum so far (max_sum)
Reset current_sum to 0 if it drops below zero
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_sum = INT_MIN;
    int current_sum = 0;

    for(int i = 0; i< n; i++){
        current_sum = current_sum + arr[i];
        if(current_sum > max_sum)
            max_sum = current_sum;
        
        if(current_sum < 0)
            current_sum = 0;
    }

    cout<<"Maximum Subarray sum: "<<max_sum<<endl;
    return 0;
}
