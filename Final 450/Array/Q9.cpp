//Minimise the maximum difference between heights [V.IMP]
#include<bits/stdc++.h>
using namespace std;


int getMinDiff(vector<int> &arr, int k){

    int n = arr.size();
    if(n == 1) return 0;

    //sort the array

    sort(arr.begin(),arr.end());

    int ans = arr[n-1] - arr[0]; //initial difference

    int small = arr[0] + k;
    int big = arr[n-1] - k;


    if(small > big)
        swap(small, big);

    //Traverse the array and adjust each height

    for(int i = 1; i < n-1 ; i++){

        int subtract = arr[i] -k;
        int add = arr[i] + k;
        //skip if no change in max/min

        if(subtract >= small || add <= big)
        continue;

        if(big - subtract <= add-small)
            small = subtract;
        else
            big = add;
    }
    return min(ans, big-small);
}
int main(){

    vector<int> arr = {1,5,8,10};
    int k =  2;
    cout<<"Minimum difference is = "<<getMinDiff(arr,k)<<endl;
  

    return 0;
}