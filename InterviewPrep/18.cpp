/*
Longest consicutive sequence
Input:  {100, 4, 200, 1, 3, 2}
Output: 4  // Because the longest consecutive sequence is {1, 2, 3, 4}
*/
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int longestConsecutiveSequence(const vector<int> & nums){

    unordered_set<int> numSet(nums.begin(),nums.end());
    int longest = 0;

    for(int num : nums){

        if(numSet.find(num-1) == numSet.end()){
            int currentNum = num;
            int count = 1;
            while (numSet.find(currentNum + 1 ) != numSet.end())
            {
                currentNum++;
                count++;
            }
            longest = max(longest,count);
            
        }
    }
    return longest;
}
int main()
{
    vector<int> nums = {100, 4, 200, 5,1, 3, 2};
    cout << "Length of longest consecutive sequence: " << longestConsecutiveSequence(nums) << endl;

    // unordered_set<int> numSet(nums.begin(), nums.end());
    // for(int num : nums)
    // if (numSet.find(num - 1) == numSet.end()) {
    //         cout << num << " is a starting point.\n";
    //     } 
    return 0;

}