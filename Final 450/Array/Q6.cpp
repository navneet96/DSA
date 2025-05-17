//Union of Arrays with Duplicates
#include<bits/stdc++.h>
using namespace std;

int doUnion(vector<int>arr1, int n, vector<int>arr2, int m){

    unordered_set<int> unSet;

    for(auto num :arr1)
        unSet.insert(num);
    for(auto num :arr2)
        unSet.insert(num);

    return unSet.size();
}
int main(){

    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {1,2,3,};

    int n = arr1.size();
    int m = arr2.size();

    cout<<"Union Count: "<<doUnion(arr1,n,arr2,m);
}