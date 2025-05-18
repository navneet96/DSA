/*
Problem: Product of Array Except Self
Input:  [1, 2, 3, 4]
Output: [24, 12, 8, 6]
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(const vector<int>& nums){

    int n = nums.size();
    vector<int> output(n, 1);

    //step 1 : Prefix Product
    int prefix = 1;
    for(int i = 0 ; i<n; ++i){
        output[i]  = prefix;
        prefix *= nums[i];
    }

     //step 2 : Suffix Product
    int suffix = 1;
    for(int i = n-1 ; i>=0; --i){
        output[i]  *= suffix;
        suffix *= nums[i];
    }
    return output;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    cout << "Product array except self:\n";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}