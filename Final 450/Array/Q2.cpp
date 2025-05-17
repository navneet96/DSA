//Find the maximum and minimum element in an array
#include<bits/stdc++.h>
using namespace std;

int getMini(vector<int> &arr,int n){
    int mini = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < mini)
            mini = arr[i];
    }
    return mini;
}

int getMaxi(vector<int> &arr,int n){
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i]  >maxi)
            maxi = arr[i];
    }
    return maxi;
}
int main(){

    vector<int> arr = {4,9,6,5,2,3,8};
    int n = arr.size();
    cout<<"Minimum element is: "<<getMini(arr,n)<<endl;
    cout<<"Maximum element is: "<<getMaxi(arr,n)<<endl;
    return 0;
}