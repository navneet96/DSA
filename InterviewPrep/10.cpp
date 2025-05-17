//The maximum sum of a subarray problem is a classic in algorithms — it's often solved by Kadane’s Algorithm.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxSubArray(vector<int>&nums){

    int max_so_far = nums[0];
    int current_max = nums[0];

    for(int i = 1 ; i<nums.size(); ++i){
        current_max = max(nums[i], current_max + nums[i]);
        max_so_far = max(max_so_far,current_max);
    }
    return max_so_far;
}
int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<"Maximum Subarray sum = "<<maxSubArray(arr)<<endl;
    return 0;

}