//find Largest sum contiguous Subarray [V. IMP]
//Kadane's Algo [V.V.V.V.V IMP]
#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    int max_so_far = arr[0];
  int current_sum = arr[0];

  for (size_t i = 1; i < arr.size(); ++i) {
      current_sum = max(arr[i], current_sum + arr[i]); // Either start new or extend
      max_so_far = max(max_so_far, current_sum);        // Update global max
  }

  return max_so_far;
}

int main(){

    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};

    cout<<"Maximum Subarray Sum = "<<maxSubarraySum(arr)<<endl;
    return 0;
}
